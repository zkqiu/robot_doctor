#ifndef PUMPCIRCUITDIALOG_H
#define PUMPCIRCUITDIALOG_H

#include <QDialog>

#include <QDateTime>
#include <QTimer>
#include <QLabel>

#include "figurecontrol.h"
#include "clientthread.h"
#include "diagnosis.h"

namespace Ui {
class PumpCircuitDialog;
}

class PumpCircuitDialog : public QDialog
{
    Q_OBJECT

public:
    explicit PumpCircuitDialog(QWidget *parent = 0);
    ~PumpCircuitDialog();

private:
    Ui::PumpCircuitDialog *ui;
    FigureControl *pressCtrl1;
    FigureControl *pressCtrl2;
    FigureControl *pressCtrl3;

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
    void switchPage(int index);
    void getRealtimeData(QString);
    void onRunStopChanged(int run);
    void updatePlot();
    void updatePeriod(QString text);
    void startSave();
    void openHistory();
    void evalHealth();
};

#endif // PUMPCIRCUITDIALOG_H
