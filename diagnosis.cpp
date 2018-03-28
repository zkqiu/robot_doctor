#include "diagnosis.h"
#include <iostream>
#include <fstream>
#include "math.h"
#include <QTime>
#include <QDateTime>
#include <string>
#include <QDebug>
#include <QString>
#include<features.h>
using namespace std;


Diagnosis::Diagnosis()
{

}

Diagnosis::Diagnosis(const vector<double> &V1, const vector<double> &V2)
                              :V1_(V1),V2_(V2)
{

}

Diagnosis::Diagnosis(const vector<double> &V1,const vector<double> &V2,const vector<double> &V3,const vector<double> &N)
    :V1_(V1),V2_(V2),V3_(V3),N_(N)
{

}

Diagnosis::~Diagnosis()
{

}

bool Diagnosis::getSensorData(const string &fileName)
{
    ifstream infile(fileName.c_str());
    QString temp1;
    string tempStr;
    QTime tmp;
    QDateTime dt;
    double temp2,temp3,temp4,temp5;
    if(infile.is_open())
    {
        while(infile)
        {
            infile>>tempStr>>temp2>>temp3>>temp4>>temp5;
//            qDebug()<<"Time:"<<temp1<<"P1:"<<temp2<<"P2:"<<temp3<<endl;
            // string类型转QString类型
            temp1=QString::fromStdString(tempStr);
            // QString类型转QTime类型
            // QString类型转QTime类型
            tmp=QTime::fromString(temp1,"h:m:s.z");
            // 用QTime和QDate设置QDataTime
            dt.setTime(tmp);
            time_.push_back(dt.toMSecsSinceEpoch()/1000.0);
            V1_.push_back(temp2);
            V2_.push_back(temp3);
            V3_.push_back(temp4);
//            qDebug()<<temp5<<endl;
            N_.push_back(temp5);
        }
    }
    else
    {
        cerr<<"Could not open the file "<<fileName<<endl;
        return false;
    }
    infile.close();

    V1_feature.setSignal(V1_);
    V2_feature.setSignal(V2_);
    V3_feature.setSignal(V3_);
    N_feature.setSignal(N_);
    qDebug()<<"数据已存入";
    return true;
}

vector<double> Diagnosis::getTime()
{
    return time_;
}

vector<double> Diagnosis::getVibration1()
{
    return V1_;
}

vector<double> Diagnosis::getVibration2()
{
    return V2_;
}

vector<double> Diagnosis::getVibration3()
{
    return V3_;
}

vector<double> Diagnosis::getNoise()
{
    return N_;
}



QString Diagnosis::faultRule()
{   QString fault="";
  /*  V1_feature.FeatureExtract();
    V2_feature.FeatureExtract();
    V3_feature.FeatureExtract();
    N_feature.FeatureExtract();

    if(V1_feature.is_normal())
    {
        fault=fault+"通道1正常\n";
    }else{
        fault=fault+"通道1异常\n";
    }

    if(V2_feature.is_normal())
    {
        fault=fault+"通道2正常\n";
    }else{
        fault=fault+"通道2异常\n";
    }

    if(V3_feature.is_normal())
    {
        fault=fault+"通道3正常\n";
    }else{
        fault=fault+"通道3异常\n";
    }

    if(N_feature.is_normal())
    {
        fault=fault+"噪声正常\n";
    }else{
        fault=fault+"噪声异常\n";
    }
*/
    return fault;

}
