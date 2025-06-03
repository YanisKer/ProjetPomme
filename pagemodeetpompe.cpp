#include "pagemodeetpompe.h"
#include "pageetalo.h"
#include "pagenettoyage.h"
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

    // Désactive le bouton "Continuer" par défaut (il sera activé plus tard selon une condition)
    ui->pb_continuer->setEnabled(false);

    // Connexions
    connect(ui->pb_semiauto, &QPushButton::clicked, this, &PageModeEtPompe::onButtonClicked);
    connect(ui->pb_auto, &QPushButton::clicked, this, &PageModeEtPompe::onButtonClicked);

    // Connexion correcte au slot CONTINUER
    connect(ui->pb_continuer, &QPushButton::clicked, this, &PageModeEtPompe::on_pb_continuer_clicked);

    this->setWindowState(Qt::WindowFullScreen);
}

void PageModeEtPompe::onButtonClicked(){
    QPushButton *button = qobject_cast<QPushButton*>(sender());
    if (button){
        if (button->isChecked()){
            qDebug() << button->text() << "Bouton enfoncé"; // QDebug permet de visualiser le fonctionnement du code dans le terminal de QT Creator
        } else {
            qDebug() << button->text() << "Bouton relâché"; // QDebug permet de visualiser le fonctionnement du code dans le terminal de QT Creator
        }
    }

    bool modeSelected =  // Le double pipe permet la sélection sans relachement, ainsi il faut sélectionner un des 2 choix
                        ui->pb_semiauto->isChecked() ||
                        ui->pb_auto->isChecked();



    ui->pb_continuer->setEnabled(modeSelected);
    qDebug() << "Continuer activé:" << ui->pb_continuer->isEnabled();
}

PageModeEtPompe::~PageModeEtPompe()
{
    delete ui;
}

void PageModeEtPompe::on_pb_continuer_clicked()
{
    if (!pageEtalo) {
        pageEtalo = new PageEtalo(); // NE PAS mettre "this" en parent ici
    }
    pageEtalo->setWindowState(Qt::WindowFullScreen);
    pageEtalo->show();
    this->hide();
}
