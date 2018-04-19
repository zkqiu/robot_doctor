#include "features.h"
#include <iostream>
#include <fstream>
#include "math.h"
#include <QTime>
#include <QDateTime>
#include <string>
#include <QDebug>
#include <QString>

using namespace std;

const int N=100;
Features::Features()
{

}

Features::Features(const vector<double> &P)
          :testSignal(P)
{
}

void Features::setSignal(const vector<double> &P)
{
    testSignal.clear();
    for (unsigned int i = 0; i < P.size(); ++i)
    {
         testSignal.push_back(P[i]);
     }
}

void Features::FeatureExtract()
{
    Check_change();//unchanged,increase,decrease
    Check_nearzero();
    Check_abschange();
    Check_lessThanZero();

}
void Features::setChangeThreshold(double t)
{
    changeThreshold=t;
}

void Features::setZeroThrethold(double t)
{
    Zthreshold=t;
}


bool Features::getUnchanged()
{
    return unchanged;
}

bool Features::getIncrease()
{
    return increase;
}

bool Features::is_normal()
{
    vector<double>::size_type start=100;
    double mean1,stdev1;
    calStat(testSignal,start,mean1,stdev1);
    if (mean1>amplititude_threshold)
        return false;
    else
        return true;
}

bool Features::getDecrease()
{
    return decrease;
}

void Features::Check_change()//unchanged,increase,decrease
{
    vector<double>::size_type start=100;
    vector<double>::size_type end=testSignal.size()-N;

    double mean1,mean2,stdev1,stdev2;
    calStat(testSignal,start,mean1,stdev1);
    calStat(testSignal,end,mean2,stdev2);
    if(abs(mean1-mean2)>changeThreshold)
    {
        if(mean1>mean2)
        {
          decrease=true;
          qDebug()<<"变小："<<mean1<<mean2<<changeThreshold<<endl;

        }else{
            increase=true;
            qDebug()<<"变大："<<mean1<<mean2<<changeThreshold<<endl;
        }
    }else{
         unchanged=true;
         qDebug()<<"不变："<<mean1<<mean2<<changeThreshold<<endl;
    }
}
bool Features::getLessThanZero()
{
    return lessThanZero;
}
void Features::Check_lessThanZero()
{
    double mean2,stdev2;
        vector<double>::size_type end=testSignal.size()-N;
        calStat(testSignal,end,mean2,stdev2);
        if(mean2<Zthreshold)
        {
            lessThanZero=true;
            qDebug()<<"小于0："<<mean2<<changeThreshold<<endl;
        }
}

bool Features::getNearZero(){
    return nearZero;
}

void Features::Check_nearzero()
{   double mean2,stdev2;
    vector<double>::size_type end=testSignal.size()-N;
    calStat(testSignal,end,mean2,stdev2);
    if(abs(mean2)<Zthreshold)
    {
        nearZero=true;
        qDebug()<<"接近于0："<<mean2<<changeThreshold<<endl;
    }

}

bool Features::getAbsIncrs(){
    return absincrease;
}

bool Features::getAbsDecrs(){

    return absdecrease;
}

void Features::Check_abschange()
{   vector<double> absSignal=calabs(testSignal);

    vector<double>::size_type start=100;
    vector<double>::size_type end=testSignal.size()-N;

    double mean1,mean2,stdev1,stdev2;

    calStat(absSignal,start,mean1,stdev1);
    calStat(absSignal,end,mean2,stdev2);

    if(abs(mean1-mean2)>changeThreshold)
    {
        if(mean1>mean2)
        {
          absdecrease=true;
          qDebug()<<"绝对值变化小："<<mean1<<mean2<<changeThreshold<<endl;

        }else{
            absincrease=true;
            qDebug()<<"绝对值变化大："<<mean1<<mean2<<changeThreshold<<endl;
        }
    }else{
         unchanged=true;
         qDebug()<<"绝对值不变："<<mean1<<mean2<<changeThreshold<<endl;
    }
}

Features::~Features()
{

}

vector<double> calDiff(const vector<double> &x, const vector<double> &y)
{
    vector<double> delta;
    if(x.size()==y.size())
        for(vector<double>::size_type i=0;i!=x.size();++i)
            delta.push_back(x[i]-y[i]);
    else
        cerr<<"The size of the two array is not equal"<<endl;
    return delta;
}

vector<double> calabs(const vector<double> &x)
{
    vector<double> delta;
        for(vector<double>::size_type i=0;i!=x.size();++i)
            delta.push_back(abs(x[i]));
    return delta;
}
void calStat(const vector<double> &x,vector<double>::size_type start,double &mean, double &stdev)
{
    double sum=0.0;
    for(vector<double>::size_type i=start;i!=start+N;++i)
        sum+=x[i];
    mean=sum/N;
    double accum=0.0;
    for(vector<double>::size_type i=start;i!=start+N;++i)
        accum+=(x[i]-mean)*(x[i]-mean);
    stdev=sqrt(accum/(N-1));
//    qDebug()<<"mean:"<<mean<<"Standard deveration:"<<stdev<<endl;
}

//void Features::fft(const vector<double> &x,vector<double>::size_type start,int length,int sign)
//{
//    int i,j,k,step,length;
//    complex<double> wn,temp,deltawn;

//    for(vector<double>::size_type i=0;i<N;i+=2)
//    {
//       temp=x[i];
//       x[i]=x[i]+x[i+1];
//       Data[i+1]=temp-Data[i+1];
//    }
//    for(vector<double>::size_type i=2;i<nfft;i++)
//    {
//       wn=1;step=1<<int(i);
//       deltawnc=cos(2.0*pi/step),sin(sign*2.0*pi/step));
//       for(j=0;j<step/2;j++)
//       {
//         for(i=0;i<length/step;i++)
//         {
//            temp=Data[i*step+step/2+j]*wn;
//            Data[i*step+step/2+j]=Data[i*step+j]-temp;
//            Data[i*step+j]=Data[i*step+j]+temp;
//          }
//          wn=wn*deltawn;
//       }
//    }
//    if(sign==1)
//    for(i=0;i<length;i++)
//      Data[i]/=length;
//}
