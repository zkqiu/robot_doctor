#include "vibrationdialog.h"
#include "ui_Vibrationdialog.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "savefile.h"

VibrationDialog::VibrationDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::VibrationDialog)
{
    ui->setupUi(this);
    setWindowTitle("机器人装配智能诊断系统");
    //设置按钮圆角
    //ui->btnRun->setStyleSheet("border-radius:10px;padding:2px 4px;");
    //ui->btnStop->setStyleSheet("border-radius:10px;padding:2px 4px;");
    //ui->btnHistory->setStyleSheet("border-radius:10px;padding:2px 4px;");
   // ui->btnEval->setStyleSheet("border-radius:10px;padding:2px 4px;");
    // 关闭子窗口，返回主窗口
    connect(this,SIGNAL(rejected()),(MainWindow*)parentWidget(),SLOT(show()));

    // 初始化传感器控制checkbox
    ui->VibrationSensor1->setFigureList(ui->figureListWidget);
    ui->VibrationSensor1->setFigureName("振动通道1");
    ui->VibrationSensor1->setFigureLabel("V1(V)");
    ui->VibrationSensor1->setCombox(ui->comboBox_1);

    ui->VibrationSensor2->setFigureList(ui->figureListWidget);
    ui->VibrationSensor2->setFigureName("振动通道2");
    ui->VibrationSensor2->setFigureLabel("V2(V)");
    ui->VibrationSensor2->setCombox(ui->comboBox_2);

    ui->VibrationSensor3->setFigureList(ui->figureListWidget);
    ui->VibrationSensor3->setFigureName("振动通道3");
    ui->VibrationSensor3->setFigureLabel("V3(V)");
    ui->VibrationSensor3->setCombox(ui->comboBox_3);


    ui->NoiseSensor->setFigureList(ui->figureListWidget);
    ui->NoiseSensor->setFigureName("噪声通道");
    ui->NoiseSensor->setFigureLabel("N(V)");
    ui->NoiseSensor->setCombox(ui->comboBox_4);


    // 绘图区横轴滚轮条取消
    ui->figureListWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    // TCP数据采集线程
    clientThread=new ClientThread();
    // 子线程和主线程数据传输
    connect(clientThread,SIGNAL(dataAcquired(QString)),this,SLOT(getRealtimeData(QString)));
    clientThread->start(QThread::HighestPriority);//clientThread->start();
    // 数据采集启动与停止
    QButtonGroup *runStop=new QButtonGroup(this);
    runStop->setId(ui->btnRun,1);
    runStop->setId(ui->btnStop,0);
    connect(runStop,SIGNAL(buttonPressed(int)),this,SLOT(onRunStopChanged(int)));
    // Set timer用于控制曲线刷新
    dateTimer=new QTimer(this);
    dateTimer->start(0);// 周期为0时界面启动即运行
    connect(dateTimer,SIGNAL(timeout()),this,SLOT(updatePlot()));
    // Set update period combox，更新周期选择
    ui->updatePeriod->addItems(QStringList() << "0"<<"20" << "50" << "100" << "200");
    connect(ui->updatePeriod,SIGNAL(currentIndexChanged(QString)),this,SLOT(updatePeriod(QString)));
    // 文件日历选择
    calendar=new QCalendarWidget(this);
    calendar->setGridVisible(true);
    ui->dateEdit->setCalendarPopup(true);
    ui->dateEdit->setCalendarWidget(calendar);
    ui->dateEdit->setMinimumDate(QDate(2017, 1, 1));
    // 创建文件读、写线程
    fileThread=new QThread();
    connect(ui->btnRun,SIGNAL(clicked(bool)),this,SLOT(startSave()));
    // 历史数据
    connect(ui->btnHistory,SIGNAL(clicked(bool)),this,SLOT(openHistory()));
    // 评估
    connect(ui->btnEval,SIGNAL(clicked(bool)),this,SLOT(evalHealth()));
}

VibrationDialog::~VibrationDialog(){}


void VibrationDialog::getRealtimeData(QString qstr)
{
    // 时间+2通道压力数据
    QVector<double> timeStramp;
    QVector<double> value1;
    QVector<double> value2;
    QVector<double> value3;
    QVector<double> value4;

    clientThread->dataConvert(qstr,timeStramp,value1,value2,value3,value4);
    ui->VibrationSensor1->addPlotData(timeStramp,value1);
    ui->VibrationSensor2->addPlotData(timeStramp,value2);
    ui->VibrationSensor3->addPlotData(timeStramp,value3);
    ui->NoiseSensor->addPlotData(timeStramp,value4);
}

void VibrationDialog::onRunStopChanged(int run)
{
    // 停止保存文件线程
    fileThread->quit();
    // 关闭定时器，禁止刷新曲线
    if(run)
        dateTimer->start();
    else
        dateTimer->stop();
}

void VibrationDialog::updatePlot()
{
    // 2通道数据更新
    ui->VibrationSensor1->updatePlot();
    ui->VibrationSensor2->updatePlot();
    ui->VibrationSensor3->updatePlot();
    ui->NoiseSensor->updatePlot();
}

void VibrationDialog::updatePeriod(QString text)
{
    //调整定时器时间，改变图形刷新速率
    dateTimer->start(text.toInt());
}

void VibrationDialog::startSave()
{
    // 创建并运行保存文件子线程
        QDateTime dt;
        QTime currTime;
        QDate currDate;
        dt.setTime(currTime.currentTime());
        dt.setDate(currDate.currentDate());
        QString fileName=dt.toString("yyyy-MM-dd-hh-mm");
        SaveFile *saveFile=new SaveFile(fileName+"-vibration.txt");
        // 添加到ListWidget
        int row=ui->listWidget->count();
        QListWidgetItem *newFile = new QListWidgetItem;
        newFile->setText(fileName);
        ui->listWidget->insertItem(row+1, newFile);
        // 写采集到的数据到文件
        saveFile->moveToThread(fileThread);
        connect(clientThread,SIGNAL(dataAcquired(QString)),saveFile,SLOT(saveRealtimeData(QString)),Qt::QueuedConnection);
        fileThread->start();
        // 文件子线程ID，用于调试
        //qDebug()<<"fileThread id is "<<fileThread->currentThreadId();
}

void VibrationDialog::openHistory()
{
    // 重置绘图

    // 创建打开文件对话框，在windows系统下会出现log4cplus error,但不影响文件打开
    QString qfileName=QFileDialog::getOpenFileName(this,tr("Open"),"./",tr("*.txt;;*.dat;;*.bin;;*.csv"));
    faultDetector.getSensorData(qfileName.toStdString());//问题重新打开另一文件，即使清除了之前的图形，仍会出现问题
    vector<double> t=faultDetector.getTime();
    vector<double> V1=faultDetector.getVibration1();
    vector<double> V2=faultDetector.getVibration2();
    vector<double> V3=faultDetector.getVibration3();
    vector<double> N=faultDetector.getNoise();
    //    qDebug()<<t[1]<<P1[1]<<P2[1]<<endl;
    time_stramp=QVector<double>::fromStdVector(t);
    vibration1=QVector<double>::fromStdVector(V1);
    vibration2=QVector<double>::fromStdVector(V2);
    vibration3=QVector<double>::fromStdVector(V3);
    noise=QVector<double>::fromStdVector(N);

    qDebug()<<time_stramp<<vibration1<<vibration2<<vibration3<<noise<<endl;
    // 添加数据，重新绘图
    ui->VibrationSensor1->setPlotData(time_stramp,vibration1);
    ui->VibrationSensor2->setPlotData(time_stramp,vibration2);
    ui->VibrationSensor3->setPlotData(time_stramp,vibration3);
    ui->NoiseSensor->setPlotData(time_stramp,noise);
}

void VibrationDialog::evalHealth()
{/*
    QString faultstring=faultDetector.faultRule();
    ui->radar->hlthy[0]=0.87;
    ui->radar->hlthy[1]=0.55;
    ui->radar->hlthy[2]=0.35;
    ui->radar->hlthy[3]=0.76;
    ui->radar->repaint();
    ui->textFault->setDocumentTitle("元件健康");
    QFont font("楷体",12,QFont::Normal);
    ui->textFault->setFont(font);
    ui->textFault->setText(faultstring.toStdString().c_str());*/
    ui->textFault->setText("此处显示诊断结果......");
}
