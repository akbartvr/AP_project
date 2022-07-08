/********************************************************************************
** Form generated from reading UI file 'doctorsschedule.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DOCTORSSCHEDULE_H
#define UI_DOCTORSSCHEDULE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_doctorsSchedule
{
public:
    QMenuBar *menubar;
    QWidget *centralwidget;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *doctorsSchedule)
    {
        if (doctorsSchedule->objectName().isEmpty())
            doctorsSchedule->setObjectName(QString::fromUtf8("doctorsSchedule"));
        doctorsSchedule->resize(800, 600);
        menubar = new QMenuBar(doctorsSchedule);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        doctorsSchedule->setMenuBar(menubar);
        centralwidget = new QWidget(doctorsSchedule);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        doctorsSchedule->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(doctorsSchedule);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        doctorsSchedule->setStatusBar(statusbar);

        retranslateUi(doctorsSchedule);

        QMetaObject::connectSlotsByName(doctorsSchedule);
    } // setupUi

    void retranslateUi(QMainWindow *doctorsSchedule)
    {
        doctorsSchedule->setWindowTitle(QCoreApplication::translate("doctorsSchedule", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class doctorsSchedule: public Ui_doctorsSchedule {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DOCTORSSCHEDULE_H
