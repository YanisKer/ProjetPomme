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
#include <QMessageBox>

pagedistribution::pagedistribution(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::pagedistribution)
{
    ui->setupUi(this);
    connect(ComSerie::getInstance(),&ComSerie::dataRecu,this,&pagedistribution::traiterDonnees_distri); // Connecte le signal "dataRecu" au slot "traiterDonnees_etalo"
    ComSerie::getInstance()->envoyerCommande("TSAX");
    nbBouteilles=0;
    dataRecues="";

}

pagedistribution::~pagedistribution()
{
    delete ui;
}

void pagedistribution::traiterDonnees_distri(const QByteArray &data){

    dataRecues += QString::fromUtf8(data);
    QStringList lignes = dataRecues.split('\n');

    // Garder la dernière ligne incomplète dans dataRecues
    dataRecues = lignes.takeLast();

    for (const QString &ligne : lignes) {

        QString commande = ligne.trimmed();

        if (!commande.isEmpty()) {
            qDebug() << "Commande recue distri:" << commande;
            if(commande == "TSRAX"){
                ui->fr_pompe_1->setStyleSheet("background-color: red;");

            }else if (commande == "TSOAX"){
                ui->fr_pompe_1->setStyleSheet("background-color: orange;");
            }else if (commande == "TSVAX"){
                ui->fr_pompe_1->setStyleSheet("background-color: green;");
                nbBouteilles++;
                ui->lcd_nb_bt->display(nbBouteilles);
            }
            if(commande == "TSRBX"){
                ui->fr_pompe_2->setStyleSheet("background-color: red;");

            }else if (commande == "TSOBX"){
                ui->fr_pompe_2->setStyleSheet("background-color: orange;");
            }else if (commande == "TSVBX"){
                ui->fr_pompe_2->setStyleSheet("background-color: green;");
                nbBouteilles++;
                ui->lcd_nb_bt->display(nbBouteilles);
            }
            if(commande == "TSRCX"){
                ui->fr_pompe_3->setStyleSheet("background-color: red;");

            }else if (commande == "TSOCX"){
                ui->fr_pompe_3->setStyleSheet("background-color: orange;");
            }else if (commande == "TSVCX"){
                ui->fr_pompe_3->setStyleSheet("background-color: green;");
                nbBouteilles++;
                ui->lcd_nb_bt->display(nbBouteilles);
            }
            if(commande == "TSRDX"){



            }

        }
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
    out << QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss") << ",Nombre de bouteilles : " << nbBouteilles << "\n";

    fichier.close();
    QMessageBox::information(nullptr,"Enregistré", "Fichier de données enregistré dans Téléchargements");
    qDebug() << "Fichier CSV généré dans :" << cheminComplet;
}
