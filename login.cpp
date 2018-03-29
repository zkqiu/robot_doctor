#include "login.h"
#include "ui_Login.h"
#include <QDateTime>
#include <QTime>
#include <QDate>


Login::Login(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);
    ui->label_3->setText("机器人装配智能诊断系统");
    timer=new QTimer();
    connect(timer,SIGNAL(timeout()),this,SLOT(updateTime()));
    timer->start(1000);

    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("127.0.0.1");
    db.setUserName("zlxiong");
    db.setPassword("123456");
    db.setDatabaseName("sjtu");

    if(db.open())
    {
        qDebug()<<"Connect to database successfully.";
    }
    else
    {
        qDebug()<<"Failed to connect to database.";
    }
}

Login::~Login()
{
    delete ui;
    db.close();
}

void Login::on_loginButon_clicked()
{

    this->hide();
    DiagWindow=new VibrationDialog(this);
    DiagWindow->setWindowTitle("机器人装配智能诊断系统");
    DiagWindow->show();
}

void Login::on_shutdownButton_clicked()
{
    this->close();
}

void Login::updateTime()
{
    QDateTime dt;
    QTime currTime;
//    QTime currTime=QTime::currentTime();
    QDate currDate;
    dt.setTime(currTime.currentTime());
    dt.setDate(currDate.currentDate());
    QString current=dt.toString("yyyy/MM/dd,hh:mm:ss");
//    QString current=currTime.toString("hh:mm:ss");
    ui->currentDateTime->setText(current);
}
