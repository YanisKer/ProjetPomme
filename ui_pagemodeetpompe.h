/********************************************************************************
** Form generated from reading UI file 'pagemodeetpompe.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGEMODEETPOMPE_H
#define UI_PAGEMODEETPOMPE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PageModeEtPompe
{
public:
    QWidget *centralwidget;
    QPushButton *pb_1pompe;
    QPushButton *pb_manuel;
    QPushButton *pb_semiauto;
    QPushButton *pb_auto;
    QPushButton *pb_2pompes;
    QPushButton *pb_3pompes;
    QPushButton *pb_4pompes;
    QPushButton *pb_5pompes;
    QPushButton *pb_continuer;
    QPushButton *pushButton_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *PageModeEtPompe)
    {
        if (PageModeEtPompe->objectName().isEmpty())
            PageModeEtPompe->setObjectName(QString::fromUtf8("PageModeEtPompe"));
        PageModeEtPompe->resize(800, 480);
        centralwidget = new QWidget(PageModeEtPompe);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pb_1pompe = new QPushButton(centralwidget);
        pb_1pompe->setObjectName(QString::fromUtf8("pb_1pompe"));
        pb_1pompe->setGeometry(QRect(20, 175, 151, 131));
        QFont font;
        font.setPointSize(18);
        font.setBold(true);
        pb_1pompe->setFont(font);
        pb_manuel = new QPushButton(centralwidget);
        pb_manuel->setObjectName(QString::fromUtf8("pb_manuel"));
        pb_manuel->setGeometry(QRect(20, 10, 251, 151));
        QFont font1;
        font1.setPointSize(19);
        font1.setBold(true);
        pb_manuel->setFont(font1);
        pb_semiauto = new QPushButton(centralwidget);
        pb_semiauto->setObjectName(QString::fromUtf8("pb_semiauto"));
        pb_semiauto->setGeometry(QRect(280, 10, 251, 151));
        pb_semiauto->setFont(font);
        pb_auto = new QPushButton(centralwidget);
        pb_auto->setObjectName(QString::fromUtf8("pb_auto"));
        pb_auto->setGeometry(QRect(540, 10, 241, 151));
        pb_auto->setFont(font1);
        pb_2pompes = new QPushButton(centralwidget);
        pb_2pompes->setObjectName(QString::fromUtf8("pb_2pompes"));
        pb_2pompes->setGeometry(QRect(180, 175, 151, 131));
        pb_2pompes->setFont(font);
        pb_3pompes = new QPushButton(centralwidget);
        pb_3pompes->setObjectName(QString::fromUtf8("pb_3pompes"));
        pb_3pompes->setGeometry(QRect(340, 175, 141, 131));
        pb_3pompes->setFont(font);
        pb_4pompes = new QPushButton(centralwidget);
        pb_4pompes->setObjectName(QString::fromUtf8("pb_4pompes"));
        pb_4pompes->setGeometry(QRect(491, 175, 141, 131));
        pb_4pompes->setFont(font);
        pb_5pompes = new QPushButton(centralwidget);
        pb_5pompes->setObjectName(QString::fromUtf8("pb_5pompes"));
        pb_5pompes->setGeometry(QRect(640, 175, 141, 131));
        pb_5pompes->setFont(font);
        pb_continuer = new QPushButton(centralwidget);
        pb_continuer->setObjectName(QString::fromUtf8("pb_continuer"));
        pb_continuer->setGeometry(QRect(350, 320, 431, 111));
        QFont font2;
        font2.setPointSize(20);
        font2.setBold(true);
        pb_continuer->setFont(font2);
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(20, 320, 321, 111));
        pushButton_3->setFont(font2);
        PageModeEtPompe->setCentralWidget(centralwidget);
        menubar = new QMenuBar(PageModeEtPompe);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        PageModeEtPompe->setMenuBar(menubar);
        statusbar = new QStatusBar(PageModeEtPompe);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        PageModeEtPompe->setStatusBar(statusbar);

        retranslateUi(PageModeEtPompe);

        QMetaObject::connectSlotsByName(PageModeEtPompe);
    } // setupUi

    void retranslateUi(QMainWindow *PageModeEtPompe)
    {
        PageModeEtPompe->setWindowTitle(QCoreApplication::translate("PageModeEtPompe", "MainWindow", nullptr));
        pb_1pompe->setText(QCoreApplication::translate("PageModeEtPompe", "1 POMPE", nullptr));
        pb_manuel->setText(QCoreApplication::translate("PageModeEtPompe", "MANUEL", nullptr));
        pb_semiauto->setText(QCoreApplication::translate("PageModeEtPompe", "SEMI-AUTO", nullptr));
        pb_auto->setText(QCoreApplication::translate("PageModeEtPompe", "AUTOMATIQUE", nullptr));
        pb_2pompes->setText(QCoreApplication::translate("PageModeEtPompe", "2 POMPES", nullptr));
        pb_3pompes->setText(QCoreApplication::translate("PageModeEtPompe", "3 POMPES", nullptr));
        pb_4pompes->setText(QCoreApplication::translate("PageModeEtPompe", "4 POMPES", nullptr));
        pb_5pompes->setText(QCoreApplication::translate("PageModeEtPompe", "5 POMPES", nullptr));
        pb_continuer->setText(QCoreApplication::translate("PageModeEtPompe", "CONTINUER", nullptr));
        pushButton_3->setText(QCoreApplication::translate("PageModeEtPompe", "RETOUR", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PageModeEtPompe: public Ui_PageModeEtPompe {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGEMODEETPOMPE_H
