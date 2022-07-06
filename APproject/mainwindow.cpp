#include "mainwindow.h"
#include "dialog_login.h"
#include "registeration_form.h"
#include "ui_mainwindow.h"
#include "learningsection.h"

#include <QMessageBox>
mainwindow::mainwindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::mainwindow)
{

    ui->setupUi(this);
    this->setStyleSheet("background-color: forestgreen;");
    ui->welcomeLabel->setStyleSheet("QLabel { color : lawngreen; }");
    ui->registerPB->setStyleSheet("QPushButton { background-color: teal ; color : lawngreen; }");
    ui->loginPB->setStyleSheet("QPushButton { background-color: teal ; color : lawngreen; }");
    ui->teachingPB->setStyleSheet("QPushButton { background-color: teal ; color : lawngreen; }");
    ui->doctorsPB->setStyleSheet("QPushButton { background-color: teal ; color : lawngreen; }");
    ui->servicesPB->setStyleSheet("QPushButton { background-color: teal ; color : lawngreen; }");
}



mainwindow::~mainwindow()
{
    delete ui;
}




/*void mainwindow::registerPB_clicked()
{
    Registery_form *rg = new Registery_form(this);
    rg->show();
}




void mainwindow::loginPB_clicked()
{
    Dialog_Login *app=new Dialog_Login(this);
    app->show();
}*/





void mainwindow::on_loginPB_clicked()
{
    Dialog_Login *app=new Dialog_Login(this);
    app->show();
}


void mainwindow::on_registerPB_clicked()
{
    Registery_form *rg = new Registery_form(this);
    rg->show();
}


void mainwindow::on_teachingPB_clicked()
{
    learningSection* learning=new learningSection(this);
    learning->show();
}

