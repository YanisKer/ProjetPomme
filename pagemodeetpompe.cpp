#include "pagemodeetpompe.h"
#include "pageaccueil.h"
#include "ui_pagemodeetpompe.h"
#include <QMessageBox>
#include <QFile>
#include <QtUiTools/QUiLoader>

PageModeEtPompe::PageModeEtPompe(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::PageModeEtPompe)
{
    ui->setupUi(this);

    modeButtonGroup = new QButtonGroup(this);
    modeButtonGroup->addButton(ui->pb_manuel, 0);
    modeButtonGroup->addButton(ui->pb_semiauto, 1);
    modeButtonGroup->addButton(ui->pb_auto, 2);

    pompeButtonGroup = new QButtonGroup(this);
    pompeButtonGroup->addButton(ui->pb_1pompe, 1);
    pompeButtonGroup->addButton(ui->pb_2pompes, 2);
    pompeButtonGroup->addButton(ui->pb_3pompes, 3);
    pompeButtonGroup->addButton(ui->pb_4pompes, 4);
    pompeButtonGroup->addButton(ui->pb_5pompes, 5);

    this->setWindowState(Qt::WindowFullScreen);

}

PageModeEtPompe::~PageModeEtPompe()
{
    delete ui;
}

void PageModeEtPompe::on_pushButton_3_clicked()
{
    PagePressee *pagePressee = new PagePressee(this);
    pagePressee->setWindowState(Qt::WindowFullScreen);
    pagePressee->show();

    this->hide();
    return;
}
