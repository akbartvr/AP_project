/********************************************************************************
** Form generated from reading UI file 'doctorsintroduction.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DOCTORSINTRODUCTION_H
#define UI_DOCTORSINTRODUCTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_doctorsIntroduction
{
public:
    QMenuBar *menubar;
    QWidget *centralwidget;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *doctorsIntroduction)
    {
        if (doctorsIntroduction->objectName().isEmpty())
            doctorsIntroduction->setObjectName(QString::fromUtf8("doctorsIntroduction"));
        doctorsIntroduction->resize(800, 600);
        menubar = new QMenuBar(doctorsIntroduction);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        doctorsIntroduction->setMenuBar(menubar);
        centralwidget = new QWidget(doctorsIntroduction);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        doctorsIntroduction->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(doctorsIntroduction);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        doctorsIntroduction->setStatusBar(statusbar);

        retranslateUi(doctorsIntroduction);

        QMetaObject::connectSlotsByName(doctorsIntroduction);
    } // setupUi

    void retranslateUi(QMainWindow *doctorsIntroduction)
    {
        doctorsIntroduction->setWindowTitle(QCoreApplication::translate("doctorsIntroduction", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class doctorsIntroduction: public Ui_doctorsIntroduction {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DOCTORSINTRODUCTION_H
