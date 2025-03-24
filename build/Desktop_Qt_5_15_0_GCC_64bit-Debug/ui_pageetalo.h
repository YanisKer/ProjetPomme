/********************************************************************************
** Form generated from reading UI file 'pageetalo.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGEETALO_H
#define UI_PAGEETALO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_pageetalo
{
public:
    QLabel *label;

    void setupUi(QWidget *pageetalo)
    {
        if (pageetalo->objectName().isEmpty())
            pageetalo->setObjectName(QString::fromUtf8("pageetalo"));
        pageetalo->resize(800, 480);
        label = new QLabel(pageetalo);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(150, 190, 491, 71));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        label->setFont(font);

        retranslateUi(pageetalo);

        QMetaObject::connectSlotsByName(pageetalo);
    } // setupUi

    void retranslateUi(QWidget *pageetalo)
    {
        pageetalo->setWindowTitle(QCoreApplication::translate("pageetalo", "Form", nullptr));
        label->setText(QCoreApplication::translate("pageetalo", "Veuillez ins\303\251rer la premi\303\250re bouteille.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class pageetalo: public Ui_pageetalo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGEETALO_H
