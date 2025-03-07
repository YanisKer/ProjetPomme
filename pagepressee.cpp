#include "pagepressee.h"
#include "ui_pagepressee.h"
#include "pageaccueil.h"

PagePressee::PagePressee(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::PagePressee)
{
    ui->setupUi(this);
    this->setWindowState(Qt::WindowFullScreen);
}

PagePressee::~PagePressee()
{
    delete ui;
}

void PagePressee::on_pushButton_2_clicked()
{
    PageModeEtPompe *pageModeEtPompe = new PageModeEtPompe(this);
    pageModeEtPompe->setWindowState(Qt::WindowFullScreen);
    pageModeEtPompe->show();
    this->hide();
    return;

}


void PagePressee::on_pushButton_3_clicked()
{
    PageAccueil *pageAccueil = new PageAccueil(this);
    pageAccueil->setWindowState(Qt::WindowFullScreen);
    pageAccueil->show();
    this->hide();
    return;

}

