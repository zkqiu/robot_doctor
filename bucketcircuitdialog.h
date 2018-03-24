#ifndef BUCKETCIRCUITDIALOG_H
#define BUCKETCIRCUITDIALOG_H

#include <QDialog>

#include <QDateTime>
#include <QTimer>
#include <QLabel>

#include "figurecontrol.h"
#include "clientthread.h"
#include "diagnosis.h"

namespace Ui {
class BucketCircuitDialog;
}

class BucketCircuitDialog : public QDialog
{
    Q_OBJECT

public:
    explicit BucketCircuitDialog(QWidget *parent = 0);
    ~BucketCircuitDialog();

private:
    Ui::BucketCircuitDialog *ui;
    QMovie *movie;

    FigureControl *pressCtrl1;
    FigureControl *pressCtrl2;
    FigureControl *pressCtrl3;
    FigureControl *pressCtrl4;

    FigureControl *dispCtrl;

    ClientThread *clientThread;
    QThread *fileThread;
    QTimer *dateTimer;
    QCalendarWidget *calendar;

    Diagnosis faultDetector;
    QVector<double> time_stramp;
    QVector<double> PumpPressure;
    QVector<double> CylinderPressureA;
    QVector<double> CylinderPressureB;
    QVector<double> ControlVoltage;
    QVector<double> CylinderDisplacement;

private slots:
    void loopMovie();
    void switchPage(int index);
    void getRealtimeData(QString);
    void onRunStopChanged(int run);
    void updatePlot();
    void updatePeriod(QString);
    void startSave();
    void openHistory();
    void evalHealth();
};

#endif // BUCKETCIRCUITDIALOG_H
