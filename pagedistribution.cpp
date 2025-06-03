#include "pagedistribution.h"
#include "pagemodeetpompe.h"
#include "qdebug.h"
#include "ui_pagedistribution.h"
#include "ComSerie.h"
#include <QStandardPaths>
#include <QFile>
#include <QTextStream>
#include <QDateTime>
#include <QDir>

pagedistribution::pagedistribution(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::pagedistribution)
{
    ui->setupUi(this);
    connect(ComSerie::getInstance(),&ComSerie::dataRecu,this,&pagedistribution::traiterDonnees_distri); // Connecte le signal "dataRecu" au slot "traiterDonnees_etalo"
    nbBouteilles=0;
    ui->pb_FinDistri->setEnabled(false);
}

pagedistribution::~pagedistribution()
{
    delete ui;
}

void pagedistribution::traiterDonnees_distri(const QByteArray &data){

    commandeRecue+=QString(data);

    if(commandeRecue.endsWith('\n')){
        if(commandeRecue == "TSRAX\r\n"){
            ui->fr_pompe_1->setStyleSheet("background-color: red;");

        }else if (commandeRecue == "TSOAX\r\n"){
            ui->fr_pompe_1->setStyleSheet("background-color: orange;");
        }else if (commandeRecue == "TSVAX\r\n"){
            ui->fr_pompe_1->setStyleSheet("background-color: green;");
            nbBouteilles++;
            ui->lcd_nb_bt->display(nbBouteilles);
        }
        if(commandeRecue == "TSRBX\r\n"){
            ui->fr_pompe_2->setStyleSheet("background-color: red;");

        }else if (commandeRecue == "TSOBX\r\n"){
            ui->fr_pompe_2->setStyleSheet("background-color: orange;");
        }else if (commandeRecue == "TSVBX\r\n"){
            ui->fr_pompe_2->setStyleSheet("background-color: green;");
            nbBouteilles++;
            ui->lcd_nb_bt->display(nbBouteilles);
        }
        if(commandeRecue == "TSRCX\r\n"){
            ui->fr_pompe_3->setStyleSheet("background-color: red;");

        }else if (commandeRecue == "TSOCX\r\n"){
            ui->fr_pompe_3->setStyleSheet("background-color: orange;");
        }else if (commandeRecue == "TSVCX\r\n"){
            ui->fr_pompe_3->setStyleSheet("background-color: green;");
            nbBouteilles++;
            ui->lcd_nb_bt->display(nbBouteilles);
        }
        if(commandeRecue == "TSRDX\r\n"){
            ui->fr_pompe_4->setStyleSheet("background-color: red;");

        }else if (commandeRecue == "TSODX\r\n"){
            ui->fr_pompe_4->setStyleSheet("background-color: orange;");
        }else if (commandeRecue == "TSVDX\r\n"){
            ui->fr_pompe_4->setStyleSheet("background-color: green;");
            nbBouteilles++;
            ui->lcd_nb_bt->display(nbBouteilles);
        }
        if(commandeRecue == "TSREX\r\n"){
            ui->fr_pompe_5->setStyleSheet("background-color: red;");

        }else if (commandeRecue == "TSOEX\r\n"){
            ui->fr_pompe_5->setStyleSheet("background-color: orange;");
        }else if (commandeRecue == "TSVEX\r\n"){
            ui->fr_pompe_5->setStyleSheet("background-color: green;");
            nbBouteilles++;
            ui->lcd_nb_bt->display(nbBouteilles);
            ui->pb_FinDistri->setEnabled(true);
        }





        commandeRecue="";//Reinitialisation de la variable.
    }
}
void pagedistribution::on_pb_FinDistri_clicked()
{
    genererCSV();
    // Crée la nouvelle page
    PageModeEtPompe *pageModeEtPompe = new PageModeEtPompe();

    // Affiche en plein écran
    pageModeEtPompe->setWindowState(Qt::WindowFullScreen);
    pageModeEtPompe->show();

    // Ferme la page distribution actuelle (optionnel)
    this->close();
}

void pagedistribution::genererCSV()
{
    // Récupérer le chemin du dossier Téléchargements
    QString path = QStandardPaths::writableLocation(QStandardPaths::DownloadLocation);
    if (path.isEmpty()) {
        qDebug() << "Impossible de récupérer le dossier Téléchargements.";
        return;
    }

    // Créer un nom de fichier unique avec date/heure
    QString nomFichier = QString("distribution_%1.csv")
                             .arg(QDateTime::currentDateTime().toString("yyyyMMdd_hhmmss"));

    QString cheminComplet = QDir(path).filePath(nomFichier);

    QFile fichier(cheminComplet);
    if (!fichier.open(QIODevice::WriteOnly | QIODevice::Text)) {
        qDebug() << "Impossible d'ouvrir le fichier pour écriture :" << cheminComplet;
        return;
    }

    QTextStream out(&fichier);

    // Écrire les entêtes (ajuste selon tes données)
    out << "Date,Nombre de bouteilles\n";

    // Écrire une ligne avec la date et le nombre de bouteilles
    out << QDateTime::currentDateTime().toString(Qt::ISODate) << "," << nbBouteilles << "\n";

    fichier.close();

    qDebug() << "Fichier CSV généré dans :" << cheminComplet;
}

