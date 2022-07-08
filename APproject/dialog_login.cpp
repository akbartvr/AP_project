#include "dialog_login.h"
#include "ui_dialog_login.h"

Dialog_Login::Dialog_Login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_Login)
{
    ui->setupUi(this);
    this->setWindowTitle("Login");
    ui->lblUser->setStyleSheet("QLabel { color : goldenrod; }");
    ui->lblPass->setStyleSheet("QLabel { color : goldenrod; }");
    ui->ledUser->setStyleSheet("QLineEdit {  background-color: darkblue ; color : yellow; }");
    ui->ledPass->setStyleSheet("QLineEdit {  background-color: darkblue ; color : yellow; }");
    ui->okPB->setStyleSheet("QPushButton { background-color: darkblue ; color : gold; }");
    ui->forgetPassPB->setStyleSheet("QPushButton { background-color: darkblue ; color : red; }");
}

Dialog_Login::~Dialog_Login()
{
    delete ui;
}

