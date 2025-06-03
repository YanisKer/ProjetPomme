/********************************************************************************
** Form generated from reading UI file 'pageaccueil.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGEACCUEIL_H
#define UI_PAGEACCUEIL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PageAccueil
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton_2;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *PageAccueil)
    {
        if (PageAccueil->objectName().isEmpty())
            PageAccueil->setObjectName(QString::fromUtf8("PageAccueil"));
        PageAccueil->resize(800, 480);
        centralwidget = new QWidget(PageAccueil);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(10, 110, 781, 201));
        QFont font;
        font.setPointSize(25);
        font.setBold(true);
        pushButton_2->setFont(font);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(340, 340, 201, 41));
        QFont font1;
        font1.setPointSize(19);
        font1.setBold(true);
        label->setFont(font1);
        PageAccueil->setCentralWidget(centralwidget);
        menubar = new QMenuBar(PageAccueil);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        PageAccueil->setMenuBar(menubar);
        statusbar = new QStatusBar(PageAccueil);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        PageAccueil->setStatusBar(statusbar);

        retranslateUi(PageAccueil);

        QMetaObject::connectSlotsByName(PageAccueil);
    } // setupUi

    void retranslateUi(QMainWindow *PageAccueil)
    {
        PageAccueil->setWindowTitle(QCoreApplication::translate("PageAccueil", "MainWindow", nullptr));
        pushButton_2->setText(QCoreApplication::translate("PageAccueil", "NOUVELLE PRESS\303\211E", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class PageAccueil: public Ui_PageAccueil {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGEACCUEIL_H
