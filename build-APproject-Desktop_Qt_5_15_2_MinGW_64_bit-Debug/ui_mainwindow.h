/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mainwindow
{
public:
    QWidget *centralwidget;
    QPushButton *registerPB;
    QPushButton *loginPB;
    QPushButton *doctorsPB;
    QPushButton *servicesPB;
    QLabel *welcomeLabel;
    QMenuBar *menubar;
    QMenu *menuexit;

    void setupUi(QMainWindow *mainwindow)
    {
        if (mainwindow->objectName().isEmpty())
            mainwindow->setObjectName(QString::fromUtf8("mainwindow"));
        mainwindow->resize(651, 516);
        centralwidget = new QWidget(mainwindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        registerPB = new QPushButton(centralwidget);
        registerPB->setObjectName(QString::fromUtf8("registerPB"));
        registerPB->setGeometry(QRect(149, 180, 351, 24));
        loginPB = new QPushButton(centralwidget);
        loginPB->setObjectName(QString::fromUtf8("loginPB"));
        loginPB->setGeometry(QRect(149, 210, 351, 24));
        doctorsPB = new QPushButton(centralwidget);
        doctorsPB->setObjectName(QString::fromUtf8("doctorsPB"));
        doctorsPB->setGeometry(QRect(150, 240, 351, 24));
        servicesPB = new QPushButton(centralwidget);
        servicesPB->setObjectName(QString::fromUtf8("servicesPB"));
        servicesPB->setGeometry(QRect(150, 270, 351, 24));
        welcomeLabel = new QLabel(centralwidget);
        welcomeLabel->setObjectName(QString::fromUtf8("welcomeLabel"));
        welcomeLabel->setGeometry(QRect(210, 50, 211, 51));
        QFont font;
        font.setBold(true);
        welcomeLabel->setFont(font);
        welcomeLabel->setScaledContents(false);
        welcomeLabel->setMargin(0);
        welcomeLabel->setIndent(0);
        mainwindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(mainwindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 651, 21));
        menuexit = new QMenu(menubar);
        menuexit->setObjectName(QString::fromUtf8("menuexit"));
        mainwindow->setMenuBar(menubar);

        menubar->addAction(menuexit->menuAction());

        retranslateUi(mainwindow);

        QMetaObject::connectSlotsByName(mainwindow);
    } // setupUi

    void retranslateUi(QMainWindow *mainwindow)
    {
        mainwindow->setWindowTitle(QCoreApplication::translate("mainwindow", "mainwindow", nullptr));
        registerPB->setText(QCoreApplication::translate("mainwindow", "\330\253\330\250\330\252 \331\206\330\247\331\205", nullptr));
        loginPB->setText(QCoreApplication::translate("mainwindow", "\331\210\330\261\331\210\330\257", nullptr));
        doctorsPB->setText(QCoreApplication::translate("mainwindow", "\331\276\330\262\330\264\332\251\330\247\331\206", nullptr));
        servicesPB->setText(QCoreApplication::translate("mainwindow", "\330\247\331\205\332\251\330\247\331\206\330\247\330\252 \331\210 \330\256\330\257\331\205\330\247\330\252 \330\250\333\214\331\205\330\247\330\261\330\263\330\252\330\247\331\206", nullptr));
        welcomeLabel->setText(QCoreApplication::translate("mainwindow", "\330\250\331\207 \330\263\330\247\331\205\330\247\331\206\331\207 \333\214 \330\250\333\214\331\205\330\247\330\261\330\263\330\252\330\247\331\206 \330\256\331\210\330\264 \330\242\331\205\330\257\333\214\330\257", nullptr));
        menuexit->setTitle(QCoreApplication::translate("mainwindow", "exit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class mainwindow: public Ui_mainwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
