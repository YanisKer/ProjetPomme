#include "pageaccueil.h"
#include "ui_pageaccueil.h"

PageAccueil::PageAccueil(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::PageAccueil) {
    ui->setupUi(this);
    connect(ui->pushButton_2, &QPushButton::clicked, this, &PageAccueil::ouvrirPageSecondaire);
}

PageAccueil::~PageAccueil() {
    delete ui;
}

void PageAccueil::ouvrirPageSecondaire() {
    pagePressee = new PagePressee(this);
    pagePressee->show();
    this->hide();
}
