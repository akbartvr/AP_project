/********************************************************************************
** Form generated from reading UI file 'dialog_login.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
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
    QPushButton *okPB;
    QLineEdit *ledPass;
    QLabel *lblPass;
    QLabel *lblUser;
    QPushButton *forgetPassPB;
    QLineEdit *ledUser;

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
        okPB = new QPushButton(Dialog_Login);
        okPB->setObjectName(QString::fromUtf8("okPB"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(okPB->sizePolicy().hasHeightForWidth());
        okPB->setSizePolicy(sizePolicy);
        okPB->setMaximumSize(QSize(200, 35));
        okPB->setLayoutDirection(Qt::RightToLeft);

        grl->addWidget(okPB, 2, 1, 1, 1);

        ledPass = new QLineEdit(Dialog_Login);
        ledPass->setObjectName(QString::fromUtf8("ledPass"));
        ledPass->setEchoMode(QLineEdit::Password);
        ledPass->setClearButtonEnabled(true);

        grl->addWidget(ledPass, 1, 1, 1, 1);

        lblPass = new QLabel(Dialog_Login);
        lblPass->setObjectName(QString::fromUtf8("lblPass"));

        grl->addWidget(lblPass, 1, 0, 1, 1);

        lblUser = new QLabel(Dialog_Login);
        lblUser->setObjectName(QString::fromUtf8("lblUser"));

        grl->addWidget(lblUser, 0, 0, 1, 1);

        forgetPassPB = new QPushButton(Dialog_Login);
        forgetPassPB->setObjectName(QString::fromUtf8("forgetPassPB"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(forgetPassPB->sizePolicy().hasHeightForWidth());
        forgetPassPB->setSizePolicy(sizePolicy1);
        forgetPassPB->setMaximumSize(QSize(1000, 35));

        grl->addWidget(forgetPassPB, 3, 0, 1, 1);

        ledUser = new QLineEdit(Dialog_Login);
        ledUser->setObjectName(QString::fromUtf8("ledUser"));
        ledUser->setClearButtonEnabled(true);

        grl->addWidget(ledUser, 0, 1, 1, 1);


        horizontalLayout->addLayout(grl);


        retranslateUi(Dialog_Login);

        QMetaObject::connectSlotsByName(Dialog_Login);
    } // setupUi

    void retranslateUi(QDialog *Dialog_Login)
    {
        Dialog_Login->setWindowTitle(QCoreApplication::translate("Dialog_Login", "Dialog", nullptr));
        okPB->setText(QCoreApplication::translate("Dialog_Login", "Ok", nullptr));
        ledPass->setPlaceholderText(QCoreApplication::translate("Dialog_Login", "\330\261\331\205\330\262 \330\271\330\250\331\210\330\261", nullptr));
        lblPass->setText(QCoreApplication::translate("Dialog_Login", "PASSWORD :", nullptr));
        lblUser->setText(QCoreApplication::translate("Dialog_Login", "USERNAME :", nullptr));
        forgetPassPB->setText(QCoreApplication::translate("Dialog_Login", "Forgot Password?", nullptr));
        ledUser->setPlaceholderText(QCoreApplication::translate("Dialog_Login", "\331\206\330\247\331\205\342\200\214\332\251\330\247\330\261\330\250\330\261\333\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog_Login: public Ui_Dialog_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_LOGIN_H
