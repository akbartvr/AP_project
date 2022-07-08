/********************************************************************************
** Form generated from reading UI file 'registeration_form.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTERATION_FORM_H
#define UI_REGISTERATION_FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_Registery_form
{
public:

    void setupUi(QDialog *Registery_form)
    {
        if (Registery_form->objectName().isEmpty())
            Registery_form->setObjectName(QString::fromUtf8("Registery_form"));
        Registery_form->resize(400, 300);

        retranslateUi(Registery_form);

        QMetaObject::connectSlotsByName(Registery_form);
    } // setupUi

    void retranslateUi(QDialog *Registery_form)
    {
        Registery_form->setWindowTitle(QCoreApplication::translate("Registery_form", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Registery_form: public Ui_Registery_form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERATION_FORM_H
