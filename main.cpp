#include "vibrationdialog.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    VibrationDialog w;
    w.setWindowTitle("机械臂健康诊断");
    w.show();



    return a.exec();
}

//log
