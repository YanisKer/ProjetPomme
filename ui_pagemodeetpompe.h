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
    QPushButton *pb_semiauto;
    QPushButton *pb_auto;
    QPushButton *pb_2pompes;
    QPushButton *pb_3pompes;
    QPushButton *pb_continuer;
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
        pb_1pompe->setGeometry(QRect(20, 170, 251, 131));
        QFont font;
        font.setPointSize(18);
        font.setBold(true);
        pb_1pompe->setFont(font);
        pb_semiauto = new QPushButton(centralwidget);
        pb_semiauto->setObjectName(QString::fromUtf8("pb_semiauto"));
        pb_semiauto->setGeometry(QRect(20, 10, 371, 151));
        pb_semiauto->setFont(font);
        pb_auto = new QPushButton(centralwidget);
        pb_auto->setObjectName(QString::fromUtf8("pb_auto"));
        pb_auto->setGeometry(QRect(410, 10, 371, 151));
        QFont font1;
        font1.setPointSize(19);
        font1.setBold(true);
        pb_auto->setFont(font1);
        pb_2pompes = new QPushButton(centralwidget);
        pb_2pompes->setObjectName(QString::fromUtf8("pb_2pompes"));
        pb_2pompes->setGeometry(QRect(280, 170, 251, 131));
        pb_2pompes->setFont(font);
        pb_3pompes = new QPushButton(centralwidget);
        pb_3pompes->setObjectName(QString::fromUtf8("pb_3pompes"));
        pb_3pompes->setGeometry(QRect(540, 170, 241, 131));
        pb_3pompes->setFont(font);
        pb_continuer = new QPushButton(centralwidget);
        pb_continuer->setObjectName(QString::fromUtf8("pb_continuer"));
        pb_continuer->setGeometry(QRect(20, 320, 761, 111));
        QFont font2;
        font2.setPointSize(20);
        font2.setBold(true);
        pb_continuer->setFont(font2);
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
        pb_semiauto->setText(QCoreApplication::translate("PageModeEtPompe", "SEMI-AUTO", nullptr));
        pb_auto->setText(QCoreApplication::translate("PageModeEtPompe", "AUTOMATIQUE", nullptr));
        pb_2pompes->setText(QCoreApplication::translate("PageModeEtPompe", "2 POMPES", nullptr));
        pb_3pompes->setText(QCoreApplication::translate("PageModeEtPompe", "3 POMPES", nullptr));
        pb_continuer->setText(QCoreApplication::translate("PageModeEtPompe", "CONTINUER", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PageModeEtPompe: public Ui_PageModeEtPompe {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGEMODEETPOMPE_H
