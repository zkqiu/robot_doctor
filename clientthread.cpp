#include "clientthread.h"
#include <QDebug>
#include <QHostAddress>
#include <string>
#include <QTime>
#include <QDateTime>
using namespace std;


ClientThread::ClientThread()
{
    qDebug()<<"TCP client creating thread is : "<<currentThreadId();
}

void ClientThread::run()
{
    qDebug()<<"TCP client running thread id is "<<currentThreadId();
    // Set client
    tcpSocket=new QTcpSocket();
    tcpSocket->connectToHost("127.0.0.1",63401);
    connect(tcpSocket,SIGNAL(connected()),this,SLOT(displayConnection()),Qt::DirectConnection);
    connect(tcpSocket,SIGNAL(error(QAbstractSocket::SocketError)),
            this,SLOT(displayError(QAbstractSocket::SocketError)),Qt::DirectConnection);
    connect(tcpSocket,SIGNAL(readyRead()),this,SLOT(getTcpData()),Qt::DirectConnection);
    exec();
}

void ClientThread::displayConnection()
{
    //显示连接信息
    QHostAddress ipAddr=tcpSocket->localAddress();
    quint16 port=tcpSocket->localPort();
    qDebug()<<"Connect to address"<<ipAddr.toString()<<"and port"<<port;
//    qDebug()<<tcpSocket->bytesAvailable();
}

void ClientThread::displayError(QAbstractSocket::SocketError)
{
    //显示TCP连接错误信息
    qDebug()<<tcpSocket->errorString();
}

void ClientThread::getTcpData()
{
    // 获取TCP数据，每1s读取1次数据
    char edchar='0';
    string str="";


    while(edchar!='@')
    {
        tcpSocket->waitForReadyRead(100);
        int value=tcpSocket->bytesAvailable();

        char buf2[value];
        tcpSocket->read(buf2,value);
        string bufstr(buf2);
        int len = bufstr.size();
        if (value !=0)
        {
            bufstr.erase(value,len-value);

            for(auto c:bufstr)
            {

                edchar=c;
            }

            str=str+bufstr;
        }

    }
    int lenstr=str.size();
    char buf3[lenstr];
    int i=0;
    for(auto c:str)
    {
        buf3[i]=c;
        i++;
    }
    //将TCP缓存数据转换成字符串
    QString qstr(buf3);
//    qDebug()<<"send successfully";
    //发送数据给主线程

    emit dataAcquired(qstr);
}

void ClientThread::dataConvert(QString dataStr, QVector<double> &timeStramp, QVector<double> &value1, QVector<double> &value2,
                               QVector<double> value3,QVector<double> value4)
{
    qDebug()<<"Saving file thread is : "<<QThread::currentThreadId();
    //保存所有数据
    string str=dataStr.toStdString();

    QString tmpStr;
    QTime tmp;
    QDateTime dt;

    int startpoint=0;
    int endpoint=0;
    int strlgth;

    for(auto c:str)
    {

        if(c=='@'){
            strlgth = endpoint-startpoint;
            int chnlNumber=atoi(str.substr(startpoint,2).c_str())-10;
            string subs=str.substr(startpoint+3,strlgth-3);
            startpoint=endpoint+1;
            switch (chnlNumber) {
            case 1:
                tmpStr=QString::fromStdString(subs);
                tmp=QTime::fromString(tmpStr,"h:m:s.z");
                dt.setTimeSpec(Qt::LocalTime);
                dt.setTime(tmp);
                timeStramp.push_back(dt.toMSecsSinceEpoch()/1000.0);
                break;
             case 2:
                value1.push_back(atof(subs.c_str()));
                 break;
            case 3:
                value2.push_back(atof(subs.c_str()));
                break;
            case 4:
                  value3.push_back(atof(subs.c_str()));
                break;
            case 5:
                value4.push_back(atof(subs.c_str()));
               break;
            default:
                break;
            }

            }
            endpoint+=1;
    }
        int min_size;
        int size1=timeStramp.size();
        int size2=value1.size();
        int size3=value2.size();
        int size4=value3.size();
        int size5=value4.size();

        if(size1>size2)
            min_size=size2;
        else
            min_size=size1;
        if(size3<min_size)
            min_size=size3;
        if(size4<min_size)
            min_size=size4;
        if(size5<min_size)
            min_size=size5;
        while(size1>min_size)
        {
            timeStramp.pop_back();
            size1=timeStramp.size();
        }
        while(size2>min_size)
        {
            value1.pop_back();
            size2=value1.size();
        }
        while(size3>min_size)
        {
            value2.pop_back();
            size3=value2.size();
        }
        while(size4>min_size)
        {
            value3.pop_back();
            size4=value3.size();
        }
        while(size5>min_size)
        {
            value4.pop_back();
            size5=value4.size();
        }
}
