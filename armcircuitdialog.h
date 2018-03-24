#ifndef ARMCIRCUITDIALOG_H
#define ARMCIRCUITDIALOG_H

#include <QDialog>

#include <QDateTime>
#include <QTimer>
#include <QLabel>

#include "figurecontrol.h"
#include "clientthread.h"
#include "diagnosis.h"

namespace Ui {
class ArmCircuitDialog;
}

class ArmCircuitDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ArmCircuitDialog(QWidget *parent = 0);
    ~ArmCircuitDialog();

private:
    Ui::ArmCircuitDialog *ui;
    QMovie *movie;

    FigureControl *pressCtrl1;
    FigureControl *pressCtrl2;
    FigureControl *pressCtrl3;
    FigureControl *pressCtrl4;
    FigureControl *pressCtrl5;
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
    QVector<double> CylinderAx;
    QVector<double> CylinderAy;
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

#endif // ARMCIRCUITDIALOG_H
