#include "pageaccueil.h"
#include "ui_pageaccueil.h"
#include "ComSerie.h"
#include <QDebug>

PageAccueil::PageAccueil(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::PageAccueil) {
    ui->setupUi(this);
    connect(ui->pushButton_2, &QPushButton::clicked, this, &PageAccueil::ouvrirPageSecondaire);

    connect(ComSerie::getInstance(),&ComSerie::dataRecu,this,&PageAccueil::traiterDonnees_accueil);
}

PageAccueil::~PageAccueil() {
    delete ui;
}

void PageAccueil::ouvrirPageSecondaire() {
    pagePressee = new PagePressee(this);
    pagePressee->show();
    disconnect(ComSerie::getInstance(),&ComSerie::dataRecu,this,&PageAccueil::traiterDonnees_accueil);
    this->hide();
}

void PageAccueil::traiterDonnees_accueil(const QByteArray &data){
    qDebug() << "Data recue" << (data);
}
