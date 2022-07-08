#include "doctors.h"
#include "doctorsintroduction.h"
#include "doctorsschedule.h"
#include "ui_doctors.h"

doctors::doctors(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::doctors)
{
    ui->setupUi(this);
    this->setStyleSheet("background-color: midnightblue;");
    ui->doctorsLabel->setStyleSheet("QLabel { color : goldenrod; }");
    ui->introPB->setStyleSheet("QPushButton { background-color: darkblue ; color : gold; }");
    ui->schedulePB->setStyleSheet("QPushButton { background-color: darkblue ; color : gold; }");
}

doctors::~doctors()
{
    delete ui;
}

void doctors::on_introPB_clicked()
{
    ptr = new doctorsIntroduction(this);
    ptr->show();
}


void doctors::on_schedulePB_clicked()
{
    ptr = new doctorsSchedule(this);
    ptr->show();
}

