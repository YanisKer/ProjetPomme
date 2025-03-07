/********************************************************************************
** Form generated from reading UI file 'pageetalonnage.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGEETALONNAGE_H
#define UI_PAGEETALONNAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_pageetalonnage
{
public:
    QLabel *label;
    QLabel *label_2;

    void setupUi(QWidget *pageetalonnage)
    {
        if (pageetalonnage->objectName().isEmpty())
            pageetalonnage->setObjectName(QString::fromUtf8("pageetalonnage"));
        pageetalonnage->resize(800, 480);
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        pageetalonnage->setFont(font);
        label = new QLabel(pageetalonnage);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(190, 100, 441, 191));
        QFont font1;
        font1.setPointSize(25);
        font1.setBold(true);
        label->setFont(font1);
        label_2 = new QLabel(pageetalonnage);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(80, 230, 741, 41));
        QFont font2;
        font2.setPointSize(18);
        font2.setBold(true);
        label_2->setFont(font2);

        retranslateUi(pageetalonnage);

        QMetaObject::connectSlotsByName(pageetalonnage);
    } // setupUi

    void retranslateUi(QWidget *pageetalonnage)
    {
        pageetalonnage->setWindowTitle(QCoreApplication::translate("pageetalonnage", "Form", nullptr));
        label->setText(QCoreApplication::translate("pageetalonnage", "\303\211TALONNAGE EN COURS...", nullptr));
        label_2->setText(QCoreApplication::translate("pageetalonnage", "Ne pas eteindre la machine pendant cette action, merci.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class pageetalonnage: public Ui_pageetalonnage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGEETALONNAGE_H
