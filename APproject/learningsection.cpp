#include "learningsection.h"
#include "ui_learningsection.h"
#include <QTextStream>
#include <QFile>
#include <QLabel>
#include <QPlainTextEdit>
learningSection::learningSection(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::learningSection)
{
    ui->setupUi(this);
    /*QFile file("learning.txt");
    QLabel *testLabel= new QLabel;

    QString line;
    if (file.open(QIODevice::ReadOnly | QIODevice::Text)){
        QTextStream stream(&file);
        while (!stream.atEnd()){

            line.append(stream.readLine()+"\n");
        }
        testLabel->setText(line);
    }
    QPlainTextEdit* ted=new QPlainTextEdit(line,this);
    ted->show();*/
}


learningSection::~learningSection()
{
    delete ui;
}
