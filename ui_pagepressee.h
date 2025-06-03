/********************************************************************************
** Form generated from reading UI file 'pagepressee.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGEPRESSEE_H
#define UI_PAGEPRESSEE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PagePressee
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *PagePressee)
    {
        if (PagePressee->objectName().isEmpty())
            PagePressee->setObjectName(QString::fromUtf8("PagePressee"));
        PagePressee->resize(800, 480);
        centralwidget = new QWidget(PagePressee);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(250, 220, 531, 211));
        QFont font;
        font.setPointSize(25);
        font.setBold(true);
        pushButton_2->setFont(font);
        PagePressee->setCentralWidget(centralwidget);
        menubar = new QMenuBar(PagePressee);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        PagePressee->setMenuBar(menubar);
        statusbar = new QStatusBar(PagePressee);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        PagePressee->setStatusBar(statusbar);

        retranslateUi(PagePressee);

        QMetaObject::connectSlotsByName(PagePressee);
    } // setupUi

    void retranslateUi(QMainWindow *PagePressee)
    {
        PagePressee->setWindowTitle(QCoreApplication::translate("PagePressee", "MainWindow", nullptr));
        pushButton_2->setText(QCoreApplication::translate("PagePressee", "MISE EN BOUTEILLE", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PagePressee: public Ui_PagePressee {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGEPRESSEE_H
