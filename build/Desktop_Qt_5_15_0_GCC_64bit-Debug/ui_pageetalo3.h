/********************************************************************************
** Form generated from reading UI file 'pageetalo3.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGEETALO3_H
#define UI_PAGEETALO3_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_pageetalo3
{
public:
    QLabel *label;

    void setupUi(QWidget *pageetalo3)
    {
        if (pageetalo3->objectName().isEmpty())
            pageetalo3->setObjectName(QString::fromUtf8("pageetalo3"));
        pageetalo3->resize(800, 480);
        label = new QLabel(pageetalo3);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(220, 200, 391, 61));
        QFont font;
        font.setPointSize(15);
        font.setBold(true);
        label->setFont(font);

        retranslateUi(pageetalo3);

        QMetaObject::connectSlotsByName(pageetalo3);
    } // setupUi

    void retranslateUi(QWidget *pageetalo3)
    {
        pageetalo3->setWindowTitle(QCoreApplication::translate("pageetalo3", "Form", nullptr));
        label->setText(QCoreApplication::translate("pageetalo3", "Veuillez ins\303\251rer la troisi\303\250me bouteille.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class pageetalo3: public Ui_pageetalo3 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGEETALO3_H
