#include "dialog_login.h"
#include "ui_dialog_login.h"

Dialog_Login::Dialog_Login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_Login)
{
    ui->setupUi(this);
    this->setWindowTitle("Login");

}

Dialog_Login::~Dialog_Login()
{
    delete ui;
}

