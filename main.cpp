#include "login.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Login w;
    w.setWindowTitle("机器人装配智能诊断系统");
    w.show();



    return a.exec();
}

//log
