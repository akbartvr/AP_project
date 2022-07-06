#ifndef REGISTERATION_FORM_H
#define REGISTERATION_FORM_H

#include <QDialog>
#include <QWidget>
#include<QGridLayout>
#include<QLabel>
#include<QPushButton>
#include<QLineEdit>
#include<QString>
#include<QSpinBox>
#include<QGroupBox>
#include<QVBoxLayout>
#include<QFile>
#include<QJsonDocument>
#include<QJsonObject>
#include<QDebug>
#include<QJsonArray>
struct User
{
    QString name[30];
    int age;
    long long int number;
    long long int n_code;
    QString e_mail[50];
    QString username[30];
    QString password[30];
};
//namespace Ui {
//class Registery_form;
//}

class Registery_form : public QDialog
{
    Q_OBJECT

public:
    explicit Registery_form(QWidget *parent = nullptr);
    ~Registery_form();

private:
//    Ui::Registery_form *ui;
    QGroupBox *grb;
    QGroupBox *grb1;
    QGridLayout *grl;
    QGridLayout *grl1;
    QLabel *lblUser;
    QLabel *lblPass;
    QLabel *lblPassrp;
    QLabel *lblName;
    QLabel *lblAge;
    QLabel *lblEmail;
    QLabel *lblNcode;
    QLabel *lblNumber;
    QLineEdit *ledNumber;
    QLineEdit *ledUser;
    QLineEdit *ledPass;
    QLineEdit *ledPassrp;
    QLineEdit *ledName;
    QLineEdit *ledEmail;
    QLineEdit *ledNcode;
    QPushButton *pbn;
    QPushButton *pbn1;
    QSpinBox *spb;
    QVBoxLayout *vbl;

};

#endif // REGISTERATION_FORM_H
