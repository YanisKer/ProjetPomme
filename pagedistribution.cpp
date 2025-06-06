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
                nbBouteilles++;
                ui->lcd_nb_bt->display(nbBouteilles);
            }else if (commande == "TSVAX"){
                ui->fr_pompe_1->setStyleSheet("background-color: green;");

            }else if (commande == "TSBAX"){
                ui->fr_pompe_1->setStyleSheet("background-color: white;");
            }
            if(commande == "TSRBX"){
                ui->fr_pompe_2->setStyleSheet("background-color: red;");

            }else if (commande == "TSOBX"){
                ui->fr_pompe_2->setStyleSheet("background-color: orange;");
                nbBouteilles++;
                ui->lcd_nb_bt->display(nbBouteilles);
            }else if (commande == "TSVBX"){
                ui->fr_pompe_2->setStyleSheet("background-color: green;");

            }else if (commande == "TSBBX"){
                    ui->fr_pompe_2->setStyleSheet("background-color: white;");
                }
            if(commande == "TSRCX"){
                ui->fr_pompe_3->setStyleSheet("background-color: red;");
            }else if (commande == "TSOCX"){
                ui->fr_pompe_3->setStyleSheet("background-color: orange;");
                nbBouteilles++;
                ui->lcd_nb_bt->display(nbBouteilles);
            }else if (commande == "TSVCX"){
                ui->fr_pompe_3->setStyleSheet("background-color: green;");
            }else if (commande == "TSBCX"){
                ui->fr_pompe_3->setStyleSheet("background-color: white;");
            }
        }
    }
}

void pagedistribution::on_pb_FinDistri_2_clicked()
{
    ComSerie::getInstance()->envoyerCommande("TMFX"); // Envoie la commande "TMFX" à l'Arduino pour annoncer la fin de la distribution du jus, avant de passer[...]
    // [...] sur une autre page
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
    // D'abord, essayer le chemin standard
    QString path = QStandardPaths::writableLocation(QStandardPaths::DownloadLocation);

    // Si vide, on tente manuellement
    if (path.isEmpty()) {
        QString home = QDir::homePath();
        path = home + "/Téléchargements"; // ou "/Downloads" selon le système
    }

    // S'assurer que le dossier existe
    QDir dir(path);
    if (!dir.exists()) {
        qDebug() << "Le dossier Téléchargements n'existe pas, tentative de création.";
        if (!dir.mkpath(".")) {
            qDebug() << "Échec de création du dossier Téléchargements.";
            return;
        }
    }

    QString fichierNom = "distribution_log.csv";
    QString cheminComplet = dir.filePath(fichierNom);

    QFile fichier(cheminComplet);
    bool fichierExistant = fichier.exists();

    if (!fichier.open(QIODevice::Append | QIODevice::Text)) {
        qDebug() << "Impossible d'ouvrir le fichier pour écriture :" << cheminComplet;
        return;
    }

    QTextStream out(&fichier);

    // Si fichier nouveau, écrire les entêtes
    if (!fichierExistant) {
        out << "Date,Heure,Nombre de bouteilles\n";
    }

    QString date = QDate::currentDate().toString("dd/MM/yyyy");
    QString heure = QTime::currentTime().toString("HH:mm:ss");

    out << date << "," << heure << "," << nbBouteilles << "\n";

    fichier.close();

    QMessageBox::information(this, "Fichier généré", "Les données ont été enregistrées dans :\n" + cheminComplet);
    qDebug() << "Fichier CSV mis à jour dans :" << cheminComplet;
}
