#ifndef DIALOG_LOGIN_H
#define DIALOG_LOGIN_H

#include <QDialog>
#include <QWidget>
//#include<QGridLayout>
//#include<QLabel>
//#include<QPushButton>
//#include<QLineEdit>

namespace Ui {
class Dialog_Login;
}

class Dialog_Login : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_Login(QWidget *parent = nullptr);
    ~Dialog_Login();
private slots:

private:
    Ui::Dialog_Login *ui;

};

#endif // DIALOG_LOGIN_H
