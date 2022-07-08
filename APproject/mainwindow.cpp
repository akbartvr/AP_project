#include "mainwindow.h"
#include "dialog_login.h"
#include "doctors.h"
#include "registeration_form.h"
#include "ui_mainwindow.h"
#include "learningsection.h"

#include <QMessageBox>
mainwindow::mainwindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::mainwindow)
{

    ui->setupUi(this);
    this->setStyleSheet("background-color: midnightblue;");
    ui->welcomeLabel->setStyleSheet("QLabel { color : goldenrod; }");
    ui->registerPB->setStyleSheet("QPushButton { background-color: darkblue ; color : gold; }");
    ui->loginPB->setStyleSheet("QPushButton { background-color: darkblue ; color : gold; }");
    ui->doctorsPB->setStyleSheet("QPushButton { background-color: darkblue ; color : gold; }");
    ui->servicesPB->setStyleSheet("QPushButton { background-color: darkblue ; color : gold; }");
}



mainwindow::~mainwindow()
{
    delete ui;
}





void mainwindow::on_loginPB_clicked()
{
    qDialogPtr = new Dialog_Login(this);
    qDialogPtr->show();
}

void mainwindow::on_registerPB_clicked()
{
    qDialogPtr = new Registery_form(this);
    qDialogPtr->show();
}

void mainwindow::on_doctorsPB_clicked()
{
    qMainWindowPtr = new doctors();
    qMainWindowPtr -> show();
}

