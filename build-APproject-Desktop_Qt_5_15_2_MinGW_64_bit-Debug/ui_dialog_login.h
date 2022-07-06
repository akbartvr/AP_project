/********************************************************************************
** Form generated from reading UI file 'dialog_login.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_LOGIN_H
#define UI_DIALOG_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog_Login
{
public:
    QHBoxLayout *horizontalLayout;
    QGridLayout *grl;
    QPushButton *pushButton;
    QLineEdit *lineEdit_2;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLabel *label;
    QPushButton *pushButton_2;

    void setupUi(QDialog *Dialog_Login)
    {
        if (Dialog_Login->objectName().isEmpty())
            Dialog_Login->setObjectName(QString::fromUtf8("Dialog_Login"));
        Dialog_Login->resize(891, 512);
        horizontalLayout = new QHBoxLayout(Dialog_Login);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetFixedSize);
        grl = new QGridLayout();
        grl->setObjectName(QString::fromUtf8("grl"));
        grl->setSizeConstraint(QLayout::SetDefaultConstraint);
        pushButton = new QPushButton(Dialog_Login);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        pushButton->setMaximumSize(QSize(200, 35));
        pushButton->setLayoutDirection(Qt::RightToLeft);

        grl->addWidget(pushButton, 2, 1, 1, 1);

        lineEdit_2 = new QLineEdit(Dialog_Login);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setEchoMode(QLineEdit::Password);
        lineEdit_2->setClearButtonEnabled(true);

        grl->addWidget(lineEdit_2, 1, 1, 1, 1);

        label_2 = new QLabel(Dialog_Login);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        grl->addWidget(label_2, 1, 0, 1, 1);

        lineEdit = new QLineEdit(Dialog_Login);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setClearButtonEnabled(true);

        grl->addWidget(lineEdit, 0, 1, 1, 1);

        label = new QLabel(Dialog_Login);
        label->setObjectName(QString::fromUtf8("label"));

        grl->addWidget(label, 0, 0, 1, 1);

        pushButton_2 = new QPushButton(Dialog_Login);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy1);
        pushButton_2->setMaximumSize(QSize(1000, 35));

        grl->addWidget(pushButton_2, 3, 0, 1, 1);


        horizontalLayout->addLayout(grl);


        retranslateUi(Dialog_Login);

        QMetaObject::connectSlotsByName(Dialog_Login);
    } // setupUi

    void retranslateUi(QDialog *Dialog_Login)
    {
        Dialog_Login->setWindowTitle(QCoreApplication::translate("Dialog_Login", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("Dialog_Login", "Ok", nullptr));
        lineEdit_2->setPlaceholderText(QCoreApplication::translate("Dialog_Login", "\330\261\331\205\330\262 \330\271\330\250\331\210\330\261", nullptr));
        label_2->setText(QCoreApplication::translate("Dialog_Login", "PASSWORD :", nullptr));
        lineEdit->setPlaceholderText(QCoreApplication::translate("Dialog_Login", "\331\206\330\247\331\205\342\200\214\332\251\330\247\330\261\330\250\330\261\333\214", nullptr));
        label->setText(QCoreApplication::translate("Dialog_Login", "USERNAME :", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Dialog_Login", "Forgot Password?", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog_Login: public Ui_Dialog_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_LOGIN_H
