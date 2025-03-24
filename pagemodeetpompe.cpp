#include "pagemodeetpompe.h"
#include "ui_pagemodeetpompe.h"
#include "pagepressee.h"
#include <QPushButton>
#include <QMessageBox>
#include <QVBoxLayout>
#include <QFile>
#include <QtUiTools/QUiLoader>
#include <QDebug>

PageModeEtPompe::PageModeEtPompe(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::PageModeEtPompe)
{
    ui->setupUi(this);

    QVBoxLayout *layout = new QVBoxLayout(this);
    QButtonGroup *modeButtonGroup = new QButtonGroup(this);
    QButtonGroup *pompeButtonGroup = new QButtonGroup(this);

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

    ui->pb_manuel->setCheckable(true);
    ui->pb_semiauto->setCheckable(true);
    ui->pb_auto->setCheckable(true);
    ui->pb_1pompe->setCheckable(true);
    ui->pb_2pompes->setCheckable(true);
    ui->pb_3pompes->setCheckable(true);
    ui->pb_4pompes->setCheckable(true);
    ui->pb_5pompes->setCheckable(true);
    ui->pushButton_3->setCheckable(true);
    ui->pb_continuer->setCheckable(true);

    connect(ui->pb_manuel, &QPushButton::clicked, this, &PageModeEtPompe::onButtonClicked);
    connect(ui->pb_semiauto, &QPushButton::clicked, this, &PageModeEtPompe::onButtonClicked);
    connect(ui->pb_auto, &QPushButton::clicked, this, &PageModeEtPompe::onButtonClicked);
    connect(ui->pb_1pompe, &QPushButton::clicked, this, &PageModeEtPompe::onButtonClicked);
    connect(ui->pb_2pompes, &QPushButton::clicked, this, &PageModeEtPompe::onButtonClicked);
    connect(ui->pb_3pompes, &QPushButton::clicked, this, &PageModeEtPompe::onButtonClicked);
    connect(ui->pb_4pompes, &QPushButton::clicked, this, &PageModeEtPompe::onButtonClicked);
    connect(ui->pb_5pompes, &QPushButton::clicked, this, &PageModeEtPompe::onButtonClicked);
    connect(ui->pushButton_3, &QPushButton::clicked, this, &PageModeEtPompe::onButtonClicked);
    connect(ui->pb_continuer, &QPushButton::clicked, this, &PageModeEtPompe::onButtonClicked);


    this->setWindowState(Qt::WindowFullScreen);

}

void PageModeEtPompe::onButtonClicked(){
    QPushButton *button = qobject_cast<QPushButton*>(sender());
    if (button){
        if (button->isChecked()){
            qDebug() << button->text() << "Bouton enfoncé";
        } else {
            qDebug() << button->text() << "Bouton relaché";
        }
    }
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
