#include "savefile.h"
#include <iostream>
#include <QTextStream>
#include <QThread>
#include <QDebug>

using namespace std;

SaveFile::SaveFile(QObject *parent) : QObject(parent)
{

}

SaveFile::SaveFile(QString fileName)
{
    fileName_=fileName;
    file=new QFile(fileName,this);
    if(!file->open(QIODevice::WriteOnly))
    {
        cerr<<"Can not open file "<<fileName_.toStdString().c_str()<<" for writing"<<endl;
    }
}

SaveFile::~SaveFile()
{
    file->close();
}

void SaveFile::saveRealtimeData(QString dataStr)
{
    qDebug()<<"Saving file thread is : "<<QThread::currentThreadId();
    //保存所有数据
    string str=dataStr.toStdString();
    QTextStream out(file);

    int startpoint=0;
    int endpoint=0;
    int strlgth;
    string subs1,subs2,subs3,subs4,subs5;
    for(auto c:str)
    {

        if(c=='@'){
            strlgth = endpoint-startpoint;
            int chnlNumber=atoi(str.substr(startpoint,2).c_str())-10;
            string subs=str.substr(startpoint+3,strlgth-3);
            startpoint=endpoint+1;
            switch (chnlNumber) {
            case 1:
//                subs1.push_back(atof(subs.c_str()));
                subs1=subs;
                break;
             case 2:
//                subs2.push_back(atof(subs.c_str()));
                subs2=subs;
                 break;
            case 3:
                  subs3=subs;
//               subs3.push_back(atof(subs.c_str()));
                break;
            case 4:
                  subs4=subs;
//               subs4.push_back(atof(subs.c_str()));
                break;
            case 5:
                  subs5=subs;
//               subs5.push_back(atof(subs.c_str()));
               if(subs1.c_str()!="" && subs1.length()>5)
               out<<subs1.c_str()<<" "<<subs2.c_str()<<" "<<subs3.c_str()<<" "<<subs4.c_str()<<" "<<subs5.c_str()<<"\n";
               break;
            default:
                break;
            }

            }
            endpoint+=1;
    }
}
