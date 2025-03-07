/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QProgressBar *progressBar;
    QSlider *horizontalSlider;
    QPushButton *buttonReglages;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 480);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(320, 130, 201, 101));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        pushButton->setFont(font);
        progressBar = new QProgressBar(centralwidget);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setGeometry(QRect(60, 130, 251, 101));
        QFont font1;
        font1.setPointSize(14);
        progressBar->setFont(font1);
        progressBar->setValue(24);
        horizontalSlider = new QSlider(centralwidget);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(60, 240, 251, 91));
        horizontalSlider->setStyleSheet(QString::fromUtf8("QSlider::groove:horizontal {\n"
"        border: 1px solid #999;\n"
"        height: 30px; /* \303\211paisseur de la barre */\n"
"        background: #ddd;\n"
"        margin: 0px;\n"
"        border-radius: 5px;\n"
"    }\n"
"\n"
"QSlider::handle:horizontal {\n"
"        background: #0078d7; /* Couleur du curseur */\n"
"        border: 1px solid #5c5c5c;\n"
"        width: 60px; /* Largeur du curseur */\n"
"        margin: -5px 0; /* Positionnement (centr\303\251 sur la barre) */\n"
"        border-radius: 10px;\n"
"    }"));
        horizontalSlider->setOrientation(Qt::Horizontal);
        buttonReglages = new QPushButton(centralwidget);
        buttonReglages->setObjectName(QString::fromUtf8("buttonReglages"));
        buttonReglages->setGeometry(QRect(60, 30, 691, 91));
        buttonReglages->setFont(font);
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(530, 130, 221, 101));
        pushButton_3->setFont(font);
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(320, 240, 201, 101));
        QFont font2;
        font2.setPointSize(14);
        font2.setBold(true);
        font2.setStrikeOut(false);
        pushButton_4->setFont(font2);
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(530, 240, 221, 101));
        pushButton_5->setFont(font);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);
        QObject::connect(horizontalSlider, SIGNAL(valueChanged(int)), progressBar, SLOT(setValue(int)));
        QObject::connect(pushButton, SIGNAL(clicked()), progressBar, SLOT(reset()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "R\303\251initaliser", nullptr));
        buttonReglages->setText(QCoreApplication::translate("MainWindow", "R\303\251glages", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Embouteillement", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "Test des valves", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "Pasteurisation", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
