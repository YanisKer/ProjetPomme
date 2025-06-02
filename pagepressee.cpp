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

void PagePressee::on_pushButton_2_clicked() // Lorsque l'on appuie sur le bouton Mise en Bouteille
{
    PageModeEtPompe *pageModeEtPompe = new PageModeEtPompe(this);
    pageModeEtPompe->setWindowState(Qt::WindowFullScreen); // Pour mettre l'éxécutable en plein écran
    pageModeEtPompe->show();
    this->hide();
    return;

}

void PagePressee::on_pushButton_3_clicked() // Lorsque l'on appuie sur le bouton Retour
{
    PageAccueil *pageAccueil = new PageAccueil(this);
    pageAccueil->setWindowState(Qt::WindowFullScreen);
    pageAccueil->show();
    this->hide();
    return;
}

void PagePressee::on_pushButton_clicked() // Lorsque l'on appuie sur le bouton Pasteurisation
{
    QUrl url("https://youtu.be/xvFZjo5PgG0?si=lEh-AMVvBIZ8UDY4");
    QDesktopServices::openUrl(url); // Ouvrira le lien ci-dessus entre guillemets
}
