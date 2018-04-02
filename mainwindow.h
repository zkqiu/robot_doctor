#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QMessageBox>
#include <QDebug>
#include <QTimer>
#include "vibrationdialog.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_loginButon_clicked();

    void on_shutdownButton_clicked();

    void updateTime();

private:
    Ui::MainWindow *ui;
    VibrationDialog *DiagWindow;
    QSqlDatabase db;
    QTimer *timer;
};


#endif // MAINWINDOW_H
