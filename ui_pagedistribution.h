/********************************************************************************
** Form generated from reading UI file 'pagedistribution.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGEDISTRIBUTION_H
#define UI_PAGEDISTRIBUTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_pagedistribution
{
public:
    QLabel *label;
    QFrame *fr_pompe_1;
    QLabel *label_2;
    QFrame *fr_pompe_2;
    QLabel *label_3;
    QFrame *fr_pompe_3;
    QLabel *label_5;
    QPushButton *pb_FinDistri;
    QLCDNumber *lcd_nb_bt;
    QLabel *label_7;

    void setupUi(QWidget *pagedistribution)
    {
        if (pagedistribution->objectName().isEmpty())
            pagedistribution->setObjectName(QString::fromUtf8("pagedistribution"));
        pagedistribution->resize(800, 480);
        label = new QLabel(pagedistribution);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(220, 40, 361, 51));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        label->setFont(font);
        fr_pompe_1 = new QFrame(pagedistribution);
        fr_pompe_1->setObjectName(QString::fromUtf8("fr_pompe_1"));
        fr_pompe_1->setGeometry(QRect(20, 100, 251, 131));
        fr_pompe_1->setFrameShape(QFrame::StyledPanel);
        fr_pompe_1->setFrameShadow(QFrame::Raised);
        label_2 = new QLabel(fr_pompe_1);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(120, 60, 21, 17));
        QFont font1;
        font1.setPointSize(17);
        font1.setBold(true);
        label_2->setFont(font1);
        fr_pompe_2 = new QFrame(pagedistribution);
        fr_pompe_2->setObjectName(QString::fromUtf8("fr_pompe_2"));
        fr_pompe_2->setGeometry(QRect(280, 100, 251, 131));
        fr_pompe_2->setFrameShape(QFrame::StyledPanel);
        fr_pompe_2->setFrameShadow(QFrame::Raised);
        label_3 = new QLabel(fr_pompe_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(120, 60, 14, 17));
        label_3->setFont(font1);
        fr_pompe_3 = new QFrame(pagedistribution);
        fr_pompe_3->setObjectName(QString::fromUtf8("fr_pompe_3"));
        fr_pompe_3->setGeometry(QRect(540, 100, 241, 131));
        QFont font2;
        font2.setPointSize(11);
        fr_pompe_3->setFont(font2);
        fr_pompe_3->setFrameShape(QFrame::StyledPanel);
        fr_pompe_3->setFrameShadow(QFrame::Raised);
        label_5 = new QLabel(fr_pompe_3);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(120, 60, 21, 17));
        label_5->setFont(font1);
        pb_FinDistri = new QPushButton(pagedistribution);
        pb_FinDistri->setObjectName(QString::fromUtf8("pb_FinDistri"));
        pb_FinDistri->setGeometry(QRect(20, 350, 761, 101));
        QFont font3;
        font3.setPointSize(18);
        font3.setBold(true);
        pb_FinDistri->setFont(font3);
        lcd_nb_bt = new QLCDNumber(pagedistribution);
        lcd_nb_bt->setObjectName(QString::fromUtf8("lcd_nb_bt"));
        lcd_nb_bt->setGeometry(QRect(500, 250, 281, 81));
        label_7 = new QLabel(pagedistribution);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(20, 210, 511, 161));
        label_7->setFont(font3);

        retranslateUi(pagedistribution);

        QMetaObject::connectSlotsByName(pagedistribution);
    } // setupUi

    void retranslateUi(QWidget *pagedistribution)
    {
        pagedistribution->setWindowTitle(QCoreApplication::translate("pagedistribution", "Form", nullptr));
        label->setText(QCoreApplication::translate("pagedistribution", "DISTRIBUTION EN COURS", nullptr));
        label_2->setText(QCoreApplication::translate("pagedistribution", "1", nullptr));
        label_3->setText(QCoreApplication::translate("pagedistribution", "2", nullptr));
        label_5->setText(QCoreApplication::translate("pagedistribution", "3", nullptr));
        pb_FinDistri->setText(QCoreApplication::translate("pagedistribution", "FIN DISTRIBUTION", nullptr));
        label_7->setText(QCoreApplication::translate("pagedistribution", "NOMBRE DE BOUTEILLES DISTRIBU\303\211ES :", nullptr));
    } // retranslateUi

};

namespace Ui {
    class pagedistribution: public Ui_pagedistribution {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGEDISTRIBUTION_H
