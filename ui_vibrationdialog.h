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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "figurecontrol.h"

QT_BEGIN_NAMESPACE

class Ui_VibrationDialog
{
public:
    QWidget *widget;
    QGroupBox *groupBox_2;
    QWidget *verticalLayoutWidget;
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
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnRun;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnStop;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *btnHistory;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *btnEval;
    QGroupBox *groupBox_3;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_3;
    QComboBox *updatePeriod;
    QDateEdit *dateEdit;
    QGroupBox *groupBox_4;
    QListWidget *listWidget;
    QListWidget *figureListWidget;
    QGroupBox *groupBox;
    QTextEdit *textFault;

    void setupUi(QWidget *VibrationDialog)
    {
        if (VibrationDialog->objectName().isEmpty())
            VibrationDialog->setObjectName(QStringLiteral("VibrationDialog"));
        VibrationDialog->resize(1040, 667);
        widget = new QWidget(VibrationDialog);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(30, 310, 351, 321));
        groupBox_2 = new QGroupBox(widget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(0, 0, 341, 321));
        groupBox_2->setAlignment(Qt::AlignCenter);
        groupBox_2->setFlat(true);
        groupBox_2->setCheckable(false);
        verticalLayoutWidget = new QWidget(groupBox_2);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(20, 30, 301, 231));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        VibrationSensor1 = new FigureControl(verticalLayoutWidget);
        VibrationSensor1->setObjectName(QStringLiteral("VibrationSensor1"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(VibrationSensor1->sizePolicy().hasHeightForWidth());
        VibrationSensor1->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(VibrationSensor1);

        comboBox_1 = new QComboBox(verticalLayoutWidget);
        comboBox_1->setObjectName(QStringLiteral("comboBox_1"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(comboBox_1->sizePolicy().hasHeightForWidth());
        comboBox_1->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(comboBox_1);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        VibrationSensor2 = new FigureControl(verticalLayoutWidget);
        VibrationSensor2->setObjectName(QStringLiteral("VibrationSensor2"));
        sizePolicy.setHeightForWidth(VibrationSensor2->sizePolicy().hasHeightForWidth());
        VibrationSensor2->setSizePolicy(sizePolicy);

        horizontalLayout_4->addWidget(VibrationSensor2);

        comboBox_2 = new QComboBox(verticalLayoutWidget);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));
        sizePolicy1.setHeightForWidth(comboBox_2->sizePolicy().hasHeightForWidth());
        comboBox_2->setSizePolicy(sizePolicy1);

        horizontalLayout_4->addWidget(comboBox_2);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        VibrationSensor3 = new FigureControl(verticalLayoutWidget);
        VibrationSensor3->setObjectName(QStringLiteral("VibrationSensor3"));
        sizePolicy.setHeightForWidth(VibrationSensor3->sizePolicy().hasHeightForWidth());
        VibrationSensor3->setSizePolicy(sizePolicy);

        horizontalLayout_5->addWidget(VibrationSensor3);

        comboBox_3 = new QComboBox(verticalLayoutWidget);
        comboBox_3->setObjectName(QStringLiteral("comboBox_3"));
        sizePolicy1.setHeightForWidth(comboBox_3->sizePolicy().hasHeightForWidth());
        comboBox_3->setSizePolicy(sizePolicy1);

        horizontalLayout_5->addWidget(comboBox_3);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        NoiseSensor = new FigureControl(verticalLayoutWidget);
        NoiseSensor->setObjectName(QStringLiteral("NoiseSensor"));
        sizePolicy.setHeightForWidth(NoiseSensor->sizePolicy().hasHeightForWidth());
        NoiseSensor->setSizePolicy(sizePolicy);

        horizontalLayout_6->addWidget(NoiseSensor);

        comboBox_4 = new QComboBox(verticalLayoutWidget);
        comboBox_4->setObjectName(QStringLiteral("comboBox_4"));
        sizePolicy1.setHeightForWidth(comboBox_4->sizePolicy().hasHeightForWidth());
        comboBox_4->setSizePolicy(sizePolicy1);

        horizontalLayout_6->addWidget(comboBox_4);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayoutWidget = new QWidget(VibrationDialog);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(50, 590, 931, 61));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        btnRun = new QPushButton(horizontalLayoutWidget);
        btnRun->setObjectName(QStringLiteral("btnRun"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(btnRun->sizePolicy().hasHeightForWidth());
        btnRun->setSizePolicy(sizePolicy2);

        horizontalLayout->addWidget(btnRun);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnStop = new QPushButton(horizontalLayoutWidget);
        btnStop->setObjectName(QStringLiteral("btnStop"));
        sizePolicy2.setHeightForWidth(btnStop->sizePolicy().hasHeightForWidth());
        btnStop->setSizePolicy(sizePolicy2);

        horizontalLayout->addWidget(btnStop);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        btnHistory = new QPushButton(horizontalLayoutWidget);
        btnHistory->setObjectName(QStringLiteral("btnHistory"));
        sizePolicy2.setHeightForWidth(btnHistory->sizePolicy().hasHeightForWidth());
        btnHistory->setSizePolicy(sizePolicy2);

        horizontalLayout->addWidget(btnHistory);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        btnEval = new QPushButton(horizontalLayoutWidget);
        btnEval->setObjectName(QStringLiteral("btnEval"));
        sizePolicy2.setHeightForWidth(btnEval->sizePolicy().hasHeightForWidth());
        btnEval->setSizePolicy(sizePolicy2);

        horizontalLayout->addWidget(btnEval);

        groupBox_3 = new QGroupBox(VibrationDialog);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(750, 310, 201, 101));
        groupBox_3->setAlignment(Qt::AlignCenter);
        groupBox_3->setFlat(true);
        verticalLayoutWidget_3 = new QWidget(groupBox_3);
        verticalLayoutWidget_3->setObjectName(QStringLiteral("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(0, 20, 201, 61));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        updatePeriod = new QComboBox(verticalLayoutWidget_3);
        updatePeriod->setObjectName(QStringLiteral("updatePeriod"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(updatePeriod->sizePolicy().hasHeightForWidth());
        updatePeriod->setSizePolicy(sizePolicy3);

        verticalLayout_3->addWidget(updatePeriod);

        dateEdit = new QDateEdit(verticalLayoutWidget_3);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));
        sizePolicy3.setHeightForWidth(dateEdit->sizePolicy().hasHeightForWidth());
        dateEdit->setSizePolicy(sizePolicy3);

        verticalLayout_3->addWidget(dateEdit);

        groupBox_4 = new QGroupBox(VibrationDialog);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(420, 310, 241, 261));
        groupBox_4->setAlignment(Qt::AlignCenter);
        groupBox_4->setFlat(true);
        listWidget = new QListWidget(groupBox_4);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(0, 20, 241, 231));
        sizePolicy3.setHeightForWidth(listWidget->sizePolicy().hasHeightForWidth());
        listWidget->setSizePolicy(sizePolicy3);
        figureListWidget = new QListWidget(VibrationDialog);
        figureListWidget->setObjectName(QStringLiteral("figureListWidget"));
        figureListWidget->setGeometry(QRect(0, 0, 1051, 291));
        groupBox = new QGroupBox(VibrationDialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(750, 410, 201, 151));
        groupBox->setAlignment(Qt::AlignCenter);
        groupBox->setFlat(true);
        textFault = new QTextEdit(groupBox);
        textFault->setObjectName(QStringLiteral("textFault"));
        textFault->setGeometry(QRect(0, 20, 201, 111));
        sizePolicy2.setHeightForWidth(textFault->sizePolicy().hasHeightForWidth());
        textFault->setSizePolicy(sizePolicy2);

        retranslateUi(VibrationDialog);

        QMetaObject::connectSlotsByName(VibrationDialog);
    } // setupUi

    void retranslateUi(QWidget *VibrationDialog)
    {
        VibrationDialog->setWindowTitle(QApplication::translate("VibrationDialog", "Form", nullptr));
        groupBox_2->setTitle(QApplication::translate("VibrationDialog", "\351\200\232\351\201\223\351\200\211\346\213\251", nullptr));
        VibrationSensor1->setText(QApplication::translate("VibrationDialog", "\346\214\257\345\212\250\344\274\240\346\204\237\345\231\2501", nullptr));
        VibrationSensor2->setText(QApplication::translate("VibrationDialog", "\346\214\257\345\212\250\344\274\240\346\204\237\345\231\2502", nullptr));
        VibrationSensor3->setText(QApplication::translate("VibrationDialog", "\346\214\257\345\212\250\344\274\240\346\204\237\345\231\2503", nullptr));
        NoiseSensor->setText(QApplication::translate("VibrationDialog", "\345\231\252\345\243\260\344\274\240\346\204\237\345\231\250", nullptr));
        btnRun->setText(QApplication::translate("VibrationDialog", "\345\274\200\345\247\213", nullptr));
        btnStop->setText(QApplication::translate("VibrationDialog", "\345\201\234\346\255\242", nullptr));
        btnHistory->setText(QApplication::translate("VibrationDialog", "\345\233\236\346\224\276", nullptr));
        btnEval->setText(QApplication::translate("VibrationDialog", "\350\257\212\346\226\255", nullptr));
        groupBox_3->setTitle(QApplication::translate("VibrationDialog", "\350\256\276\347\275\256", nullptr));
        groupBox_4->setTitle(QApplication::translate("VibrationDialog", "\345\255\230\345\202\250\346\226\207\344\273\266", nullptr));
        groupBox->setTitle(QApplication::translate("VibrationDialog", "\350\257\212\346\226\255\347\273\223\346\236\234", nullptr));
    } // retranslateUi

};

namespace Ui {
    class VibrationDialog: public Ui_VibrationDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIBRATIONDIALOG_H
