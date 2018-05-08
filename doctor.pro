#-------------------------------------------------
#
# Project created by QtCreator 2017-05-03T22:37:50
#
#-------------------------------------------------

QT       += core gui sql network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets printsupport

TARGET = robot_doctor
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS\
           CHARTDIR_HIDE_OBSOLETE _CRT_SECURE_NO_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += main.cpp\
    qcustomplot.cpp \
    qcustomlabel.cpp \
    clientthread.cpp \
    savefile.cpp \
    radarwidget.cpp \
    diagnosis.cpp \
    features.cpp \
    figurecontrol.cpp \
    vibrationdialog.cpp \
    mainwindow.cpp

HEADERS  += \
    swingcircuitdialog.h \
    travelcircuitdialog.h \
    qcustomplot.h \
    qcustomlabel.h \
    clientthread.h \
    savefile.h \
    radarwidget.h \
    diagnosis.h \
    features.h \
    figurecontrol.h \
    vibrationdialog.h \
    mainwindow.h \
    my_add/for_redistribution_files_only/my_add.h

FORMS    += \
    vibrationdialog.ui \
    mainwindow.ui

RESOURCES += \
    resources.qrc

#INCLUDEPATH += ../ChartDirector/include

#win32:LIBS += ../ChartDirector/lib/chartdir60.lib
#win32:QMAKE_POST_LINK = copy /Y ..\\ChartDirector\\lib\\chartdir60.dll $(DESTDIR)

#macx:LIBS += -L../lib -lchartdir
#macx:QMAKE_POST_LINK += mkdir -p \"`dirname $(TARGET)`/../Frameworks\";
#macx:QMAKE_POST_LINK += cp ../lib/libchartdir.6.dylib \"`dirname $(TARGET)`/../Frameworks\";
#macx:QMAKE_POST_LINK += install_name_tool -change libchartdir.6.dylib \
#     \@loader_path/../Frameworks/libchartdir.6.dylib \"$(TARGET)\";
