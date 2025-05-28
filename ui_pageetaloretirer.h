/********************************************************************************
** Form generated from reading UI file 'pageetaloretirer.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGEETALORETIRER_H
#define UI_PAGEETALORETIRER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_pageetaloretirer
{
public:
    QLabel *label;

    void setupUi(QWidget *pageetaloretirer)
    {
        if (pageetaloretirer->objectName().isEmpty())
            pageetaloretirer->setObjectName(QString::fromUtf8("pageetaloretirer"));
        pageetaloretirer->resize(800, 480);
        label = new QLabel(pageetaloretirer);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(150, 190, 511, 81));
        QFont font;
        font.setPointSize(15);
        font.setBold(true);
        label->setFont(font);

        retranslateUi(pageetaloretirer);

        QMetaObject::connectSlotsByName(pageetaloretirer);
    } // setupUi

    void retranslateUi(QWidget *pageetaloretirer)
    {
        pageetaloretirer->setWindowTitle(QCoreApplication::translate("pageetaloretirer", "Form", nullptr));
        label->setText(QCoreApplication::translate("pageetaloretirer", "Veuillez retirer la bouteille de sa jauge de contrainte.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class pageetaloretirer: public Ui_pageetaloretirer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGEETALORETIRER_H
