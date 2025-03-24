/********************************************************************************
** Form generated from reading UI file 'pageetalo5.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGEETALO5_H
#define UI_PAGEETALO5_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_pageetalo5
{
public:
    QLabel *label;

    void setupUi(QWidget *pageetalo5)
    {
        if (pageetalo5->objectName().isEmpty())
            pageetalo5->setObjectName(QString::fromUtf8("pageetalo5"));
        pageetalo5->resize(800, 480);
        label = new QLabel(pageetalo5);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(220, 190, 391, 61));
        QFont font;
        font.setPointSize(15);
        font.setBold(true);
        label->setFont(font);

        retranslateUi(pageetalo5);

        QMetaObject::connectSlotsByName(pageetalo5);
    } // setupUi

    void retranslateUi(QWidget *pageetalo5)
    {
        pageetalo5->setWindowTitle(QCoreApplication::translate("pageetalo5", "Form", nullptr));
        label->setText(QCoreApplication::translate("pageetalo5", "Veuillez ins\303\251rer la cinqui\303\250me bouteille.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class pageetalo5: public Ui_pageetalo5 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGEETALO5_H
