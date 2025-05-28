/********************************************************************************
** Form generated from reading UI file 'pagenettoyage.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGENETTOYAGE_H
#define UI_PAGENETTOYAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_pagenettoyage
{
public:
    QLabel *label;

    void setupUi(QWidget *pagenettoyage)
    {
        if (pagenettoyage->objectName().isEmpty())
            pagenettoyage->setObjectName(QString::fromUtf8("pagenettoyage"));
        pagenettoyage->resize(800, 480);
        label = new QLabel(pagenettoyage);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(130, 180, 621, 91));
        QFont font;
        font.setPointSize(35);
        font.setBold(true);
        label->setFont(font);

        retranslateUi(pagenettoyage);

        QMetaObject::connectSlotsByName(pagenettoyage);
    } // setupUi

    void retranslateUi(QWidget *pagenettoyage)
    {
        pagenettoyage->setWindowTitle(QCoreApplication::translate("pagenettoyage", "Form", nullptr));
        label->setText(QCoreApplication::translate("pagenettoyage", "NETTOYAGE EN COURS", nullptr));
    } // retranslateUi

};

namespace Ui {
    class pagenettoyage: public Ui_pagenettoyage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGENETTOYAGE_H
