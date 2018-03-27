#ifndef VIBRATIONDIAG_H
#define VIBRATIONDIAG_H


#include <QDialog>

#include <QDateTime>
#include <QTimer>
#include <QLabel>

#include "figurecontrol.h"
#include "clientthread.h"
#include "diagnosis.h"

namespace Ui {
class VibrationDialog;
}

class VibrationDialog : public QDialog
{
    Q_OBJECT

public:
    explicit VibrationDialog(QWidget *parent = 0);
    ~VibrationDialog();

private:
    Ui::VibrationDialog *ui;

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
    QVector<double> vibration1;
    QVector<double> vibration2;
    QVector<double> vibration3;
    QVector<double> noise;

private slots:
    //void switchPage(int index);
    void getRealtimeData(QString);
    void onRunStopChanged(int run);
    void updatePlot();
    void updatePeriod(QString);
    void startSave();
    void openHistory();
    void evalHealth();
};


#endif // VIBRATIONDIAG_H
