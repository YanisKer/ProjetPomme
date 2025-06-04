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
    QPushButton *pb_semiauto;
    QPushButton *pb_auto;
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
        pb_semiauto = new QPushButton(centralwidget);
        pb_semiauto->setObjectName(QString::fromUtf8("pb_semiauto"));
        pb_semiauto->setGeometry(QRect(20, 10, 371, 261));
        QFont font;
        font.setPointSize(18);
        font.setBold(true);
        pb_semiauto->setFont(font);
        pb_auto = new QPushButton(centralwidget);
        pb_auto->setObjectName(QString::fromUtf8("pb_auto"));
        pb_auto->setGeometry(QRect(410, 10, 371, 261));
        QFont font1;
        font1.setPointSize(19);
        font1.setBold(true);
        pb_auto->setFont(font1);
        pb_continuer = new QPushButton(centralwidget);
        pb_continuer->setObjectName(QString::fromUtf8("pb_continuer"));
        pb_continuer->setGeometry(QRect(20, 280, 761, 151));
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
        pb_semiauto->setText(QCoreApplication::translate("PageModeEtPompe", "SEMI-AUTO", nullptr));
        pb_auto->setText(QCoreApplication::translate("PageModeEtPompe", "AUTOMATIQUE", nullptr));
        pb_continuer->setText(QCoreApplication::translate("PageModeEtPompe", "CONTINUER", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PageModeEtPompe: public Ui_PageModeEtPompe {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGEMODEETPOMPE_H
