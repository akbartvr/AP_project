#include "doctorsschedule.h"
#include "ui_doctorsschedule.h"

doctorsSchedule::doctorsSchedule(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::doctorsSchedule)
{
    ui->setupUi(this);
}

doctorsSchedule::~doctorsSchedule()
{
    delete ui;
}
