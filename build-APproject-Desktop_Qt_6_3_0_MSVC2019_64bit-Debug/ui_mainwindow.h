/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mainwindow
{
public:
    QAction *actionExit;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer_3;
    QLabel *welcomeLabel;
    QSpacerItem *verticalSpacer_2;
    QVBoxLayout *verticalLayout;
    QPushButton *registerPB;
    QPushButton *loginPB;
    QPushButton *doctorsPB;
    QPushButton *servicesPB;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *verticalSpacer;
    QMenuBar *menubar;
    QMenu *menuexit;

    void setupUi(QMainWindow *mainwindow)
    {
        if (mainwindow->objectName().isEmpty())
            mainwindow->setObjectName(QString::fromUtf8("mainwindow"));
        mainwindow->resize(651, 516);
        actionExit = new QAction(mainwindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        centralwidget = new QWidget(mainwindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_3);

        welcomeLabel = new QLabel(centralwidget);
        welcomeLabel->setObjectName(QString::fromUtf8("welcomeLabel"));
        QFont font;
        font.setBold(true);
        welcomeLabel->setFont(font);
        welcomeLabel->setScaledContents(false);
        welcomeLabel->setAlignment(Qt::AlignCenter);
        welcomeLabel->setMargin(0);
        welcomeLabel->setIndent(0);

        verticalLayout_2->addWidget(welcomeLabel);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        registerPB = new QPushButton(centralwidget);
        registerPB->setObjectName(QString::fromUtf8("registerPB"));

        verticalLayout->addWidget(registerPB);

        loginPB = new QPushButton(centralwidget);
        loginPB->setObjectName(QString::fromUtf8("loginPB"));

        verticalLayout->addWidget(loginPB);

        doctorsPB = new QPushButton(centralwidget);
        doctorsPB->setObjectName(QString::fromUtf8("doctorsPB"));

        verticalLayout->addWidget(doctorsPB);

        servicesPB = new QPushButton(centralwidget);
        servicesPB->setObjectName(QString::fromUtf8("servicesPB"));

        verticalLayout->addWidget(servicesPB);


        verticalLayout_2->addLayout(verticalLayout);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_4);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        mainwindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(mainwindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 651, 25));
        menuexit = new QMenu(menubar);
        menuexit->setObjectName(QString::fromUtf8("menuexit"));
        mainwindow->setMenuBar(menubar);

        menubar->addAction(menuexit->menuAction());
        menuexit->addAction(actionExit);

        retranslateUi(mainwindow);
        QObject::connect(actionExit, &QAction::triggered, mainwindow, qOverload<>(&QMainWindow::close));

        QMetaObject::connectSlotsByName(mainwindow);
    } // setupUi

    void retranslateUi(QMainWindow *mainwindow)
    {
        mainwindow->setWindowTitle(QCoreApplication::translate("mainwindow", "mainwindow", nullptr));
        actionExit->setText(QCoreApplication::translate("mainwindow", "Exit", nullptr));
        welcomeLabel->setText(QCoreApplication::translate("mainwindow", "\330\250\331\207 \330\263\330\247\331\205\330\247\331\206\331\207 \333\214 \330\250\333\214\331\205\330\247\330\261\330\263\330\252\330\247\331\206 \330\256\331\210\330\264 \330\242\331\205\330\257\333\214\330\257", nullptr));
        registerPB->setText(QCoreApplication::translate("mainwindow", "\330\253\330\250\330\252 \331\206\330\247\331\205", nullptr));
        loginPB->setText(QCoreApplication::translate("mainwindow", "\331\210\330\261\331\210\330\257", nullptr));
        doctorsPB->setText(QCoreApplication::translate("mainwindow", "\331\276\330\262\330\264\332\251\330\247\331\206", nullptr));
        servicesPB->setText(QCoreApplication::translate("mainwindow", "\330\247\331\205\332\251\330\247\331\206\330\247\330\252 \331\210 \330\256\330\257\331\205\330\247\330\252 \330\250\333\214\331\205\330\247\330\261\330\263\330\252\330\247\331\206", nullptr));
        menuexit->setTitle(QCoreApplication::translate("mainwindow", "File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class mainwindow: public Ui_mainwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
