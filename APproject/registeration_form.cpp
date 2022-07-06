#include "registeration_form.h"


Registery_form::Registery_form(QWidget *parent) :
    QDialog(parent)
{
//    ui->setupUi(this);
    setWindowTitle("registeration_form");
    vbl = new QVBoxLayout();
    grb = new QGroupBox();
    grb1 = new QGroupBox();
    grl= new QGridLayout();
    grl1 = new QGridLayout();
    lblUser= new QLabel();
    lblPass = new QLabel();
    lblPassrp = new QLabel();
    lblName= new QLabel();
    lblAge = new QLabel();
    lblEmail = new QLabel();
    lblNcode = new QLabel();
    lblNumber = new QLabel;
    ledNumber = new QLineEdit;
    ledUser = new QLineEdit();
    ledPass = new QLineEdit();
    ledPassrp = new QLineEdit();
    ledName = new QLineEdit();
    ledEmail = new QLineEdit();
    ledNcode = new QLineEdit();
    pbn = new QPushButton("save");
    spb = new QSpinBox();
    //grl->setSizeConstraint(QLayout::SetFixedSize);
    lblName->setText("Name :");
    grl->addWidget(lblName,0,0);
    grl->addWidget(ledName,0,1,1,2);
    ledName->setPlaceholderText("نام‌‌و‌نام‌خانوادگی");
    lblAge->setText("Age :");
    grl->addWidget(lblAge,0,3);
    grl->addWidget(spb,0,4);
    spb->setPrefix("سن: ");
    lblNcode->setText("N_code :");
    grl->addWidget(lblNcode,1,0);
    grl->addWidget(ledNcode,1,1,1,2);
    ledNcode->setPlaceholderText("کدملی");
    lblNumber->setText("Number :");
    grl->addWidget(lblNumber,1,3);
    ledNumber->setPlaceholderText("شماره‌تلفن");
    grl->addWidget(ledNumber,1,4,1,2);
    lblEmail->setText("Email :");
    grl->addWidget(lblEmail,2,0);
    grl->addWidget(ledEmail,2,1,1,2);
    ledEmail->setPlaceholderText("ایمیل");
    grb->setLayout(grl);
    vbl->addWidget(grb);
    lblUser->setText("USERNAME :");
    grl1->addWidget(lblUser,0,0);
    ledUser->setPlaceholderText("نام‌کاربری");
    grl1->addWidget(ledUser,0,1,1,2);
    lblPass->setText("PASSWORD :");
    ledPass->setPlaceholderText("رمز ‌عبور");
    grl1->addWidget(lblPass,1,0);
    grl1->addWidget(ledPass,1,1,1,2);
    lblPassrp->setText("Again :");
    ledPassrp->setPlaceholderText("تکرار رمز ‌عبور");
    grl1->addWidget(lblPassrp,2,0);
    grl1->addWidget(ledPassrp,2,1,1,2);
    ledPass->setEchoMode(QLineEdit::PasswordEchoOnEdit);
    ledPassrp->setEchoMode(QLineEdit::PasswordEchoOnEdit);
    grl1->addWidget(pbn,3,2);
    grb1->setLayout(grl1);
    vbl->addWidget(grb1);
    setLayout(vbl);
    QJsonObject data;
    data["name"]=ledName->text();
    data["age"]=spb->value();
    data["n_code"]=ledNcode->text();
    data["number"]=ledNumber->text();
    data["email"]=ledEmail->text();
    data["username"]=ledUser->text();
    data["password"]=ledPass->text();
    QJsonDocument doc(data);
    QFile file("E:/project/data.json");
    file.open(QIODevice::ReadWrite);
    file.write(doc.toJson());

}

Registery_form::~Registery_form()
{
    delete grb;
    delete grb1;
    delete grl;
    delete grl1;
    delete lblUser;
    delete lblPass;
    delete lblPassrp;
    delete lblName;
    delete lblAge;
    delete lblEmail;
    delete lblNcode;
    delete lblNumber;
    delete ledNumber;
    delete ledUser;
    delete ledPass;
    delete ledPassrp;
    delete ledName;
    delete ledEmail;
    delete ledNcode;
    delete pbn;
    delete pbn1;
    delete spb;
    delete vbl;
}
//    QFile file("C:/Users/user/Desktop/AP-project/Untitled-2.json");
//    file.open(QIODevice::ReadOnly);
//    QByteArray b = file.readAll();
//    QJsonDocument d = QJsonDocument::fromJson(b);
//    QJsonObject o = d.object();
//    qDebug()<< o["name"].toString();
//    qDebug()<< o["Age"].toInt();
//    qDebug()<< (o["address"].toObject())["city"].toString();
//    qDebug()<< (o["ali0"].toObject())["name"].toString();
//    qDebug()<< o["username"][1]["name"].toString();
//    foreach(QJsonValue x, o["username"].toArray())
//    {
//        qDebug()<< x.toObject()["name"];
//    }
//    QJsonObject j;
//    j["name"]="abolfazl";
//    j["age"]=20;
//    QJsonArray grade;
//    grade = {10,12,14};
//    grade.append(QJsonValue(20));
//    QJsonObject addr;
//    addr["city"]="esfahan";
//    j["address"]=addr;
//    QJsonDocument d(j);
//    QFile f("C:/Users/user/Desktop/AP-project/Untitled-3.json");
//    f.open(QIODevice::ReadWrite);
//    f.write(d.toJson());
