/********************************************************************************
** Form generated from reading UI file 'pageerreurselec.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGEERREURSELEC_H
#define UI_PAGEERREURSELEC_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_pageerreurselec
{
public:
    QPushButton *pushButton;
    QLabel *label;

    void setupUi(QWidget *pageerreurselec)
    {
        if (pageerreurselec->objectName().isEmpty())
            pageerreurselec->setObjectName(QString::fromUtf8("pageerreurselec"));
        pageerreurselec->resize(800, 480);
        pushButton = new QPushButton(pageerreurselec);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(130, 160, 551, 201));
        QFont font;
        font.setPointSize(23);
        font.setBold(true);
        pushButton->setFont(font);
        label = new QLabel(pageerreurselec);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(70, 60, 871, 61));
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        label->setFont(font1);

        retranslateUi(pageerreurselec);

        QMetaObject::connectSlotsByName(pageerreurselec);
    } // setupUi

    void retranslateUi(QWidget *pageerreurselec)
    {
        pageerreurselec->setWindowTitle(QCoreApplication::translate("pageerreurselec", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("pageerreurselec", "J'ai compris !", nullptr));
        label->setText(QCoreApplication::translate("pageerreurselec", "Veuillez s\303\251lectionner un mode et le nombre de pompes avant de continuer.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class pageerreurselec: public Ui_pageerreurselec {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGEERREURSELEC_H
