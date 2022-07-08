#include "doctorsintroduction.h"
#include "ui_doctorsintroduction.h"

doctorsIntroduction::doctorsIntroduction(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::doctorsIntroduction)
{
    ui->setupUi(this);
}

doctorsIntroduction::~doctorsIntroduction()
{
    delete ui;
}
