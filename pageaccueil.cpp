#include "pageaccueil.h"
#include "ui_pageaccueil.h"
#include "ComSerie.h"
#include <QDebug>

PageAccueil::PageAccueil(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::PageAccueil) {
    ui->setupUi(this);
    connect(ui->pushButton_2, &QPushButton::clicked, this, &PageAccueil::ouvrirPageSecondaire);
    ComSerie::getInstance()->envoyerCommande("test");
    connect(ComSerie::getInstance(),&ComSerie::dataRecu,this,&PageAccueil::traiterDonnees);
}

PageAccueil::~PageAccueil() {
    delete ui;
}

void PageAccueil::ouvrirPageSecondaire() {
    pagePressee = new PagePressee(this);
    pagePressee->show();
    this->hide();
}

void PageAccueil::traiterDonnees(const QByteArray &data){
    qDebug() << "Data recue" << QString::fromUtf8(data);
   }
