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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_pageetalo
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label;

    void setupUi(QWidget *pageetalo)
    {
        if (pageetalo->objectName().isEmpty())
            pageetalo->setObjectName(QString::fromUtf8("pageetalo"));
        pageetalo->resize(800, 480);
        gridLayout_2 = new QGridLayout(pageetalo);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 2, 1, 1);

        label = new QLabel(pageetalo);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        label->setFont(font);

        gridLayout->addWidget(label, 0, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 2, 2);


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
