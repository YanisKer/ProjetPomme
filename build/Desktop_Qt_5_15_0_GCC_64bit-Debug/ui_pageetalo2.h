/********************************************************************************
** Form generated from reading UI file 'pageetalo2.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGEETALO2_H
#define UI_PAGEETALO2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_pageetalo2
{
public:
    QLabel *label;

    void setupUi(QWidget *pageetalo2)
    {
        if (pageetalo2->objectName().isEmpty())
            pageetalo2->setObjectName(QString::fromUtf8("pageetalo2"));
        pageetalo2->resize(800, 480);
        label = new QLabel(pageetalo2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(230, 170, 411, 121));
        QFont font;
        font.setPointSize(15);
        font.setBold(true);
        label->setFont(font);

        retranslateUi(pageetalo2);

        QMetaObject::connectSlotsByName(pageetalo2);
    } // setupUi

    void retranslateUi(QWidget *pageetalo2)
    {
        pageetalo2->setWindowTitle(QCoreApplication::translate("pageetalo2", "Form", nullptr));
        label->setText(QCoreApplication::translate("pageetalo2", "Veuillez ins\303\251rer la deuxi\303\250me bouteille.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class pageetalo2: public Ui_pageetalo2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGEETALO2_H
