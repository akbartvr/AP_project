/********************************************************************************
** Form generated from reading UI file 'learningsection.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LEARNINGSECTION_H
#define UI_LEARNINGSECTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_learningSection
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *learningSection)
    {
        if (learningSection->objectName().isEmpty())
            learningSection->setObjectName(QString::fromUtf8("learningSection"));
        learningSection->resize(800, 600);
        centralwidget = new QWidget(learningSection);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        learningSection->setCentralWidget(centralwidget);
        menubar = new QMenuBar(learningSection);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        learningSection->setMenuBar(menubar);
        statusbar = new QStatusBar(learningSection);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        learningSection->setStatusBar(statusbar);

        retranslateUi(learningSection);

        QMetaObject::connectSlotsByName(learningSection);
    } // setupUi

    void retranslateUi(QMainWindow *learningSection)
    {
        learningSection->setWindowTitle(QCoreApplication::translate("learningSection", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class learningSection: public Ui_learningSection {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LEARNINGSECTION_H
