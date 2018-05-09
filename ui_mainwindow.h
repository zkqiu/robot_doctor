/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *topPanel;
    QHBoxLayout *horizontalLayout;
    QLabel *currentDateTime;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *shutdownButton;
    QPushButton *restartButton;
    QLabel *label_4;
    QWidget *loginForm;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label;
    QLineEdit *username;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_2;
    QLineEdit *password;
    QSpacerItem *verticalSpacer_4;
    QPushButton *loginButon;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1000, 600);
        MainWindow->setStyleSheet(QLatin1String("#\n"
"background-color: rgb(170, 255, 255);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        topPanel = new QWidget(centralwidget);
        topPanel->setObjectName(QStringLiteral("topPanel"));
        topPanel->setGeometry(QRect(0, 0, 1001, 65));
        topPanel->setStyleSheet(QLatin1String("#topPanel { background-color:\n"
"rgb(0, 170, 127); }"));
        horizontalLayout = new QHBoxLayout(topPanel);
        horizontalLayout->setSpacing(10);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(10, 5, 5, 5);
        currentDateTime = new QLabel(topPanel);
        currentDateTime->setObjectName(QStringLiteral("currentDateTime"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(currentDateTime->sizePolicy().hasHeightForWidth());
        currentDateTime->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QStringLiteral("Times New Roman"));
        font.setPointSize(12);
        currentDateTime->setFont(font);

        horizontalLayout->addWidget(currentDateTime);

        horizontalSpacer_2 = new QSpacerItem(60, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        label_3 = new QLabel(topPanel);
        label_3->setObjectName(QStringLiteral("label_3"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font1.setPointSize(24);
        label_3->setFont(font1);

        horizontalLayout->addWidget(label_3);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        shutdownButton = new QPushButton(topPanel);
        shutdownButton->setObjectName(QStringLiteral("shutdownButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(shutdownButton->sizePolicy().hasHeightForWidth());
        shutdownButton->setSizePolicy(sizePolicy1);
        shutdownButton->setMinimumSize(QSize(55, 55));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/rsc/shutdown_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        shutdownButton->setIcon(icon);
        shutdownButton->setIconSize(QSize(50, 50));

        horizontalLayout->addWidget(shutdownButton);

        restartButton = new QPushButton(topPanel);
        restartButton->setObjectName(QStringLiteral("restartButton"));
        sizePolicy1.setHeightForWidth(restartButton->sizePolicy().hasHeightForWidth());
        restartButton->setSizePolicy(sizePolicy1);
        restartButton->setMinimumSize(QSize(55, 55));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icons/rsc/restart_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        restartButton->setIcon(icon1);
        restartButton->setIconSize(QSize(50, 50));

        horizontalLayout->addWidget(restartButton);

        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(390, 70, 301, 271));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy2);
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/images/rsc/new_robot.png")));
        label_4->setScaledContents(true);
        loginForm = new QWidget(centralwidget);
        loginForm->setObjectName(QStringLiteral("loginForm"));
        loginForm->setGeometry(QRect(330, 350, 350, 150));
        sizePolicy1.setHeightForWidth(loginForm->sizePolicy().hasHeightForWidth());
        loginForm->setSizePolicy(sizePolicy1);
        loginForm->setMinimumSize(QSize(350, 150));
        loginForm->setStyleSheet(QStringLiteral("#verticalLayout_2{border:2px solid rgb(170,170,127);border-radius:10}"));
        verticalLayout_2 = new QVBoxLayout(loginForm);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(35, 35, 35, 25);
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label = new QLabel(loginForm);
        label->setObjectName(QStringLiteral("label"));
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        label->setMinimumSize(QSize(24, 24));
        QFont font2;
        font2.setFamily(QStringLiteral("Times New Roman"));
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setWeight(75);
        label->setFont(font2);
        label->setPixmap(QPixmap(QString::fromUtf8(":/icons/rsc/\347\224\250\346\210\267.png")));
        label->setScaledContents(false);

        horizontalLayout_6->addWidget(label);

        username = new QLineEdit(loginForm);
        username->setObjectName(QStringLiteral("username"));
        username->setMinimumSize(QSize(0, 25));

        horizontalLayout_6->addWidget(username);


        verticalLayout_2->addLayout(horizontalLayout_6);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_2 = new QLabel(loginForm);
        label_2->setObjectName(QStringLiteral("label_2"));
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);
        label_2->setMinimumSize(QSize(24, 24));
        label_2->setFont(font2);
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/icons/rsc/\345\257\206\347\240\201.png")));

        horizontalLayout_4->addWidget(label_2);

        password = new QLineEdit(loginForm);
        password->setObjectName(QStringLiteral("password"));
        password->setMinimumSize(QSize(0, 25));

        horizontalLayout_4->addWidget(password);


        verticalLayout_2->addLayout(horizontalLayout_4);

        verticalSpacer_4 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_4);

        loginButon = new QPushButton(loginForm);
        loginButon->setObjectName(QStringLiteral("loginButon"));
        loginButon->setMinimumSize(QSize(0, 30));
        QPalette palette;
        QBrush brush(QColor(0, 170, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        QBrush brush1(QColor(240, 240, 240, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        loginButon->setPalette(palette);
        loginButon->setFont(font2);

        verticalLayout_2->addWidget(loginButon);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1000, 23));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        currentDateTime->setText(QApplication::translate("MainWindow", "Monday, 26-10-2015 3:14 PM", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "\346\234\272\345\231\250\344\272\272\345\201\245\345\272\267\346\231\272\350\203\275\350\257\212\346\226\255\347\263\273\347\273\237", Q_NULLPTR));
        shutdownButton->setText(QString());
        restartButton->setText(QString());
        label_4->setText(QString());
        label->setText(QString());
        label_2->setText(QString());
        loginButon->setText(QApplication::translate("MainWindow", "\347\231\273\345\275\225", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
