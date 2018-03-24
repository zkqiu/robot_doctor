#ifndef DIAGNOSIS_H
#define DIAGNOSIS_H

#include <vector>
#include <string>
#include<QString>
#include <features.h>

using namespace std;
vector<double> calDiff(const vector<double> &x,const vector<double> &y);

class Diagnosis
{
public:
    Diagnosis();
    Diagnosis(const vector<double> &V1, const vector<double> &V2);
    Diagnosis(const vector<double> &V1,const vector<double> &V2,const vector<double> &V3,const vector<double> &N);
    bool getSensorData(const string &fileName);
    vector<double> getTime();
    vector<double> getVibration1();
    vector<double> getVibration2();
    vector<double> getVibration3();
    vector<double> getNoise();
    QString faultRule();
    virtual ~Diagnosis();


private:
    vector<double> time_;
    vector<double> V1_;//有杆腔压力
    vector<double> V2_;//无杆腔压力
    vector<double> V3_;//液压缸位移
    vector<double> N_;//倾角X


    Features V1_feature=Features();
    Features V2_feature=Features();
    Features V3_feature=Features();
    Features N_feature=Features();

};

#endif // DIAGNOSIS_H
