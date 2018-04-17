/********************************************************************************
** Form generated from reading UI file 'vibrationdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIBRATIONDIALOG_H
#define UI_VIBRATIONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "figurecontrol.h"

QT_BEGIN_NAMESPACE

class Ui_VibrationDialog
{
public:
    QListWidget *figureListWidget;
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    FigureControl *VibrationSensor1;
    QComboBox *comboBox_1;
    QHBoxLayout *horizontalLayout_4;
    FigureControl *VibrationSensor2;
    QComboBox *comboBox_2;
    QHBoxLayout *horizontalLayout_5;
    FigureControl *VibrationSensor3;
    QComboBox *comboBox_3;
    QHBoxLayout *horizontalLayout_6;
    FigureControl *NoiseSensor;
    QComboBox *comboBox_4;
    QGroupBox *groupBox_2;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_5;
    QDateEdit *dateEdit;
    QHBoxLayout *horizontalLayout;
    QLabel *label_4;
    QComboBox *updatePeriod;
    QListWidget *listWidget;
    QGroupBox *groupBox_3;
    QTextEdit *textFault;
    QLabel *label_6;
    QGroupBox *groupBox_4;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *checkBox;
    QPushButton *btnRun;
    QPushButton *btnStop;
    QPushButton *btnHistory;
    QPushButton *btnEval;

    void setupUi(QWidget *VibrationDialog)
    {
        if (VibrationDialog->objectName().isEmpty())
            VibrationDialog->setObjectName(QStringLiteral("VibrationDialog"));
        VibrationDialog->resize(1041, 663);
        VibrationDialog->setStyleSheet(QStringLiteral("background-color: rgb(210, 226, 243);"));
        figureListWidget = new QListWidget(VibrationDialog);
        figureListWidget->setObjectName(QStringLiteral("figureListWidget"));
        figureListWidget->setGeometry(QRect(20, 10, 741, 291));
        figureListWidget->setAutoFillBackground(false);
        figureListWidget->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        figureListWidget->setResizeMode(QListView::Adjust);
        figureListWidget->setGridSize(QSize(1000, 300));
        groupBox = new QGroupBox(VibrationDialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(780, 50, 241, 211));
        QFont font;
        font.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        groupBox->setFont(font);
        groupBox->setStyleSheet(QLatin1String("#groupBox\n"
"{border:2px solid rgb(170,170,127);border-radius:10}"));
        groupBox->setAlignment(Qt::AlignCenter);
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 30, 221, 161));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        VibrationSensor1 = new FigureControl(layoutWidget);
        VibrationSensor1->setObjectName(QStringLiteral("VibrationSensor1"));

        horizontalLayout_2->addWidget(VibrationSensor1);

        comboBox_1 = new QComboBox(layoutWidget);
        comboBox_1->setObjectName(QStringLiteral("comboBox_1"));
        comboBox_1->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        horizontalLayout_2->addWidget(comboBox_1);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        VibrationSensor2 = new FigureControl(layoutWidget);
        VibrationSensor2->setObjectName(QStringLiteral("VibrationSensor2"));

        horizontalLayout_4->addWidget(VibrationSensor2);

        comboBox_2 = new QComboBox(layoutWidget);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));
        comboBox_2->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        horizontalLayout_4->addWidget(comboBox_2);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        VibrationSensor3 = new FigureControl(layoutWidget);
        VibrationSensor3->setObjectName(QStringLiteral("VibrationSensor3"));

        horizontalLayout_5->addWidget(VibrationSensor3);

        comboBox_3 = new QComboBox(layoutWidget);
        comboBox_3->setObjectName(QStringLiteral("comboBox_3"));
        comboBox_3->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        horizontalLayout_5->addWidget(comboBox_3);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        NoiseSensor = new FigureControl(layoutWidget);
        NoiseSensor->setObjectName(QStringLiteral("NoiseSensor"));

        horizontalLayout_6->addWidget(NoiseSensor);

        comboBox_4 = new QComboBox(layoutWidget);
        comboBox_4->setObjectName(QStringLiteral("comboBox_4"));
        comboBox_4->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        horizontalLayout_6->addWidget(comboBox_4);


        verticalLayout->addLayout(horizontalLayout_6);

        groupBox_2 = new QGroupBox(VibrationDialog);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(20, 320, 281, 301));
        groupBox_2->setFont(font);
        groupBox_2->setStyleSheet(QLatin1String("#groupBox_2{border:2px solid rgb(170,170,127);border-radius:10}\n"
"\n"
""));
        groupBox_2->setAlignment(Qt::AlignCenter);
        layoutWidget1 = new QWidget(groupBox_2);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 30, 258, 252));
        verticalLayout_3 = new QVBoxLayout(layoutWidget1);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_5 = new QLabel(layoutWidget1);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_3->addWidget(label_5);

        dateEdit = new QDateEdit(layoutWidget1);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(dateEdit->sizePolicy().hasHeightForWidth());
        dateEdit->setSizePolicy(sizePolicy);
        dateEdit->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        horizontalLayout_3->addWidget(dateEdit);


        verticalLayout_3->addLayout(horizontalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_4 = new QLabel(layoutWidget1);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout->addWidget(label_4);

        updatePeriod = new QComboBox(layoutWidget1);
        updatePeriod->setObjectName(QStringLiteral("updatePeriod"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(updatePeriod->sizePolicy().hasHeightForWidth());
        updatePeriod->setSizePolicy(sizePolicy1);
        updatePeriod->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(updatePeriod);


        verticalLayout_3->addLayout(horizontalLayout);

        listWidget = new QListWidget(layoutWidget1);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        verticalLayout_3->addWidget(listWidget);

        groupBox_3 = new QGroupBox(VibrationDialog);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(340, 320, 521, 301));
        groupBox_3->setFont(font);
        groupBox_3->setStyleSheet(QStringLiteral("#groupBox_3{border:2px solid rgb(170,170,127);border-radius:10}"));
        groupBox_3->setAlignment(Qt::AlignCenter);
        textFault = new QTextEdit(groupBox_3);
        textFault->setObjectName(QStringLiteral("textFault"));
        textFault->setGeometry(QRect(270, 40, 221, 241));
        textFault->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        label_6 = new QLabel(groupBox_3);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(10, 30, 251, 251));
        label_6->setPixmap(QPixmap(QString::fromUtf8(":/images/rsc/new_robot.png")));
        label_6->setScaledContents(true);
        label_6->raise();
        textFault->raise();
        groupBox_4 = new QGroupBox(VibrationDialog);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(900, 320, 121, 301));
        groupBox_4->setFont(font);
        groupBox_4->setStyleSheet(QStringLiteral("#groupBox_4{border:2px solid rgb(170,170,127);border-radius:10}"));
        groupBox_4->setAlignment(Qt::AlignCenter);
        layoutWidget2 = new QWidget(groupBox_4);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(10, 30, 101, 251));
        verticalLayout_2 = new QVBoxLayout(layoutWidget2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        checkBox = new QCheckBox(layoutWidget2);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font1.setBold(true);
        font1.setWeight(75);
        checkBox->setFont(font1);

        verticalLayout_2->addWidget(checkBox);

        btnRun = new QPushButton(layoutWidget2);
        btnRun->setObjectName(QStringLiteral("btnRun"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(btnRun->sizePolicy().hasHeightForWidth());
        btnRun->setSizePolicy(sizePolicy2);
        QFont font2;
        font2.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font2.setPointSize(11);
        font2.setBold(true);
        font2.setWeight(75);
        btnRun->setFont(font2);
        btnRun->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/rsc/\345\274\200\345\247\213.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnRun->setIcon(icon);

        verticalLayout_2->addWidget(btnRun);

        btnStop = new QPushButton(layoutWidget2);
        btnStop->setObjectName(QStringLiteral("btnStop"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(btnStop->sizePolicy().hasHeightForWidth());
        btnStop->setSizePolicy(sizePolicy3);
        btnStop->setFont(font2);
        btnStop->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
""));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/rsc/\345\201\234\346\255\242.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnStop->setIcon(icon1);

        verticalLayout_2->addWidget(btnStop);

        btnHistory = new QPushButton(layoutWidget2);
        btnHistory->setObjectName(QStringLiteral("btnHistory"));
        sizePolicy3.setHeightForWidth(btnHistory->sizePolicy().hasHeightForWidth());
        btnHistory->setSizePolicy(sizePolicy3);
        btnHistory->setFont(font2);
        btnHistory->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/rsc/\345\216\206\345\217\262.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnHistory->setIcon(icon2);

        verticalLayout_2->addWidget(btnHistory);

        btnEval = new QPushButton(layoutWidget2);
        btnEval->setObjectName(QStringLiteral("btnEval"));
        sizePolicy3.setHeightForWidth(btnEval->sizePolicy().hasHeightForWidth());
        btnEval->setSizePolicy(sizePolicy3);
        btnEval->setFont(font2);
        btnEval->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/rsc/\350\257\204\344\274\260.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnEval->setIcon(icon3);

        verticalLayout_2->addWidget(btnEval);

        figureListWidget->raise();
        groupBox->raise();
        groupBox_2->raise();
        groupBox_4->raise();
        groupBox_3->raise();

        retranslateUi(VibrationDialog);

        QMetaObject::connectSlotsByName(VibrationDialog);
    } // setupUi

    void retranslateUi(QWidget *VibrationDialog)
    {
        VibrationDialog->setWindowTitle(QApplication::translate("VibrationDialog", "Form", nullptr));
        groupBox->setTitle(QApplication::translate("VibrationDialog", "\344\274\240\346\204\237\345\231\250\351\200\211\346\213\251", nullptr));
        VibrationSensor1->setText(QApplication::translate("VibrationDialog", "\346\214\257\345\212\250\344\274\240\346\204\237\345\231\2501", nullptr));
        VibrationSensor2->setText(QApplication::translate("VibrationDialog", "\346\214\257\345\212\250\344\274\240\346\204\237\345\231\2502", nullptr));
        VibrationSensor3->setText(QApplication::translate("VibrationDialog", "\346\214\257\345\212\250\344\274\240\346\204\237\345\231\2503", nullptr));
        NoiseSensor->setText(QApplication::translate("VibrationDialog", "\345\231\252\345\243\260\344\274\240\346\204\237\345\231\250  ", nullptr));
        groupBox_2->setTitle(QApplication::translate("VibrationDialog", "\344\277\241\345\217\267\351\207\207\351\233\206\344\270\216\345\202\250\345\255\230", nullptr));
        label_5->setText(QApplication::translate("VibrationDialog", "\346\227\245\346\234\237\351\200\211\346\213\251", nullptr));
        label_4->setText(QApplication::translate("VibrationDialog", "\346\263\242\345\275\242\345\210\267\346\226\260\346\227\266\351\227\264", nullptr));
        groupBox_3->setTitle(QApplication::translate("VibrationDialog", "\345\201\245\345\272\267\350\257\212\346\226\255", nullptr));
        label_6->setText(QString());
        groupBox_4->setTitle(QApplication::translate("VibrationDialog", "\346\216\247\345\210\266", nullptr));
        checkBox->setText(QApplication::translate("VibrationDialog", " \344\277\235\345\255\230\346\225\260\346\215\256", nullptr));
        btnRun->setText(QApplication::translate("VibrationDialog", "\345\274\200\345\247\213", nullptr));
        btnStop->setText(QApplication::translate("VibrationDialog", "\345\201\234\346\255\242", nullptr));
        btnHistory->setText(QApplication::translate("VibrationDialog", "\345\233\236\346\224\276", nullptr));
        btnEval->setText(QApplication::translate("VibrationDialog", "\350\257\212\346\226\255", nullptr));
    } // retranslateUi

};

namespace Ui {
    class VibrationDialog: public Ui_VibrationDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIBRATIONDIALOG_H
