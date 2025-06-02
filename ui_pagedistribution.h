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
    QFrame *frame;
    QLabel *label_2;
    QFrame *frame_2;
    QLabel *label_3;
    QFrame *frame_4;
    QLabel *label_4;
    QFrame *frame_3;
    QLabel *label_5;
    QFrame *frame_5;
    QLabel *label_6;
    QPushButton *pushButton;
    QLCDNumber *lcdNumber;
    QLabel *label_7;

    void setupUi(QWidget *pagedistribution)
    {
        if (pagedistribution->objectName().isEmpty())
            pagedistribution->setObjectName(QString::fromUtf8("pagedistribution"));
        pagedistribution->resize(800, 480);
        label = new QLabel(pagedistribution);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(220, 40, 351, 51));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        label->setFont(font);
        frame = new QFrame(pagedistribution);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(20, 110, 141, 131));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(62, 59, 21, 17));
        QFont font1;
        font1.setPointSize(17);
        font1.setBold(true);
        label_2->setFont(font1);
        frame_2 = new QFrame(pagedistribution);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(180, 110, 141, 131));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        label_3 = new QLabel(frame_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(64, 59, 14, 17));
        label_3->setFont(font1);
        frame_4 = new QFrame(pagedistribution);
        frame_4->setObjectName(QString::fromUtf8("frame_4"));
        frame_4->setGeometry(QRect(500, 110, 131, 131));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        label_4 = new QLabel(frame_4);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(60, 58, 20, 17));
        label_4->setFont(font1);
        frame_3 = new QFrame(pagedistribution);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setGeometry(QRect(340, 110, 141, 131));
        QFont font2;
        font2.setPointSize(11);
        frame_3->setFont(font2);
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        label_5 = new QLabel(frame_3);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(65, 59, 21, 17));
        label_5->setFont(font1);
        frame_5 = new QFrame(pagedistribution);
        frame_5->setObjectName(QString::fromUtf8("frame_5"));
        frame_5->setGeometry(QRect(650, 110, 131, 131));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        label_6 = new QLabel(frame_5);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(61, 58, 21, 17));
        label_6->setFont(font1);
        pushButton = new QPushButton(pagedistribution);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(20, 350, 761, 101));
        QFont font3;
        font3.setPointSize(18);
        font3.setBold(true);
        pushButton->setFont(font3);
        lcdNumber = new QLCDNumber(pagedistribution);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));
        lcdNumber->setGeometry(QRect(500, 250, 281, 81));
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
        label->setText(QCoreApplication::translate("pagedistribution", "DISTRIBUTION EN COURS..", nullptr));
        label_2->setText(QCoreApplication::translate("pagedistribution", "1", nullptr));
        label_3->setText(QCoreApplication::translate("pagedistribution", "2", nullptr));
        label_4->setText(QCoreApplication::translate("pagedistribution", "4", nullptr));
        label_5->setText(QCoreApplication::translate("pagedistribution", "3", nullptr));
        label_6->setText(QCoreApplication::translate("pagedistribution", "5", nullptr));
        pushButton->setText(QCoreApplication::translate("pagedistribution", "FIN DISTRIBUTION", nullptr));
        label_7->setText(QCoreApplication::translate("pagedistribution", "NOMBRE DE BOUTEILLES DISTRIBU\303\211ES :", nullptr));
    } // retranslateUi

};

namespace Ui {
    class pagedistribution: public Ui_pagedistribution {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGEDISTRIBUTION_H
