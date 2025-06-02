#include "pagepressee.h"
#include "ui_pagepressee.h"
#include "pageaccueil.h"
#include "pagemodeetpompe.h"
#include <QUrl>
#include <QDesktopServices> // pour ouvrir une URL dans le navigateur



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


void PagePressee::on_pushButton_clicked()
{
    QUrl url("https://youtu.be/dQw4w9WgXcQ?si=ViJY-XH51jAqsKjo");
    QDesktopServices::openUrl(url);
}

