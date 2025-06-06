#include "pagemodeetpompe.h"
#include "pageetalo.h"
#include "ui_pagemodeetpompe.h"

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
    QButtonGroup *modeButtonGroup = new QButtonGroup(this);

    // Ajout des boutons de mode dans le groupe modeButtonGroup avec des identifiants

    modeButtonGroup->addButton(ui->pb_semiauto, 1);
    modeButtonGroup->addButton(ui->pb_auto, 2);

    // Active le mode "checkable" (type bouton radio ou à bascule) sur les boutons de mode

    ui->pb_semiauto->setCheckable(true);
    ui->pb_auto->setCheckable(true);
    ui->pb_auto->setChecked(true);
    // Active le mode "checkable" sur les deux autres boutons

    ui->pb_continuer->setCheckable(true);

    ui->pb_continuer->setEnabled(true);

    // Connexions
    connect(ui->pb_semiauto, &QPushButton::clicked, this, &PageModeEtPompe::onButtonClicked);
    connect(ui->pb_auto, &QPushButton::clicked, this, &PageModeEtPompe::onButtonClicked);

    // Connexion correcte au slot CONTINUER
    connect(ui->pb_continuer, &QPushButton::clicked, this, &PageModeEtPompe::on_pb_continuer_clicked);

    this->setWindowState(Qt::WindowFullScreen);
    selectedMode=2;
}

void PageModeEtPompe::onButtonClicked(){
    QPushButton *button = qobject_cast<QPushButton*>(sender());
    if (button){
        if (button->text()=="SEMI-AUTO")
        {
            qDebug() << "Semi auto selectionné";

            selectedMode=1;
        }
        else if (button->text()=="AUTOMATIQUE")
        {
            qDebug() << "Auto selectionné";

            selectedMode=2;
        }
    } 
}

PageModeEtPompe::~PageModeEtPompe()
{
    delete ui;
}

void PageModeEtPompe::on_pb_continuer_clicked()
{

    if (!pageEtalo) {
        pageEtalo = new PageEtalo(selectedMode); // NE PAS mettre "this" en parent ici
    }
    pageEtalo->setWindowState(Qt::WindowFullScreen);
    pageEtalo->show();
    this->hide();
}
