/********************************************************************************
** Form generated from reading UI file 'pageetalo4.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGEETALO4_H
#define UI_PAGEETALO4_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_pageetalo4
{
public:
    QLabel *label;

    void setupUi(QWidget *pageetalo4)
    {
        if (pageetalo4->objectName().isEmpty())
            pageetalo4->setObjectName(QString::fromUtf8("pageetalo4"));
        pageetalo4->resize(800, 480);
        label = new QLabel(pageetalo4);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(220, 210, 371, 41));
        QFont font;
        font.setPointSize(15);
        font.setBold(true);
        label->setFont(font);

        retranslateUi(pageetalo4);

        QMetaObject::connectSlotsByName(pageetalo4);
    } // setupUi

    void retranslateUi(QWidget *pageetalo4)
    {
        pageetalo4->setWindowTitle(QCoreApplication::translate("pageetalo4", "Form", nullptr));
        label->setText(QCoreApplication::translate("pageetalo4", "Veuillez ins\303\251rer la quatri\303\250me bouteille.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class pageetalo4: public Ui_pageetalo4 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGEETALO4_H
