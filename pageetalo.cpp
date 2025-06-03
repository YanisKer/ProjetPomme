#include "pageetalo.h"
#include <QVBoxLayout>
#include <QLabel>
#include "ComSerie.h"
#include "pagedistribution.h"
#include <QDebug>
PageEtalo::PageEtalo(QWidget *parent) // Constructeur de la classe PageEtalo
    : QWidget(parent),
    serial(new QSerialPort(this)),
    labelInstruction(new QLabel("En attente de l'instruction...", this))
{
    QVBoxLayout *layout = new QVBoxLayout(this);
    layout->addWidget(labelInstruction);
    labelInstruction->setStyleSheet("font-size: 27pt; font-weight: bold;"); // Applique un style au label (grosse police et gras)

    labelInstruction->setAlignment(Qt::AlignCenter);
    qDebug() << "Constructeur Page Etalo";
    ComSerie::getInstance()->envoyerCommande("TETX");
    connect(ComSerie::getInstance(),&ComSerie::dataRecu,this,&PageEtalo::traiterDonnees_etalo); // Connecte le signal "dataRecu" au slot "traiterDonnees_etalo"
    dataRecues=""; // Initialise la chaîne de caractères utilisée pour stocker une commande reçue
}


void PageEtalo::traiterDonnees_etalo(const QByteArray &data){


    dataRecues += QString::fromUtf8(data);
    QStringList lignes = dataRecues.split('\n');

    // Garder la dernière ligne incomplète dans dataRecues
    dataRecues = lignes.takeLast();

    for (const QString &ligne : lignes) {

        QString commande = ligne.trimmed();

        if (!commande.isEmpty()) {
            qDebug() << "Commande recue étalonnage: [" << commande << "] Longueur :" << commande.length();
            // Reçoit la première commande

            if (commande== "TCAX") {
                qDebug() << "Mettre première bouteille";
                labelInstruction->setText("Mettre bouteille sur distributeur N°1"); // Renvoie sur l'éxécutable, le texte entre ""

            }
            else if (commande == "TPAX") { // Reçoit la deuxième commande
                qDebug() << "Patienter";
                labelInstruction->setText("Patienter... étalonnage en cours.."); // Renvoie sur l'éxécutable, le texte entre ""

            }
            else if (commande == "TCBX") { // Reçoit la troisième commande
                qDebug() << "Mettre deuxième bouteille";
                labelInstruction->setText("Mettre bouteille sur distributeur N°2"); // Renvoie sur l'éxécutable, le texte entre ""
            }

            else if (commande == "TCCX") { // Reçoit la quatrième commande
                qDebug() << "Mettre troisième bouteille";
                labelInstruction->setText("Mettre bouteille sur distributeur N°3"); // Renvoie sur l'éxécutable, le texte entre ""
            }
            else if (commande == "TEFX") { // Reçoit la cinquième commande
                qDebug() << "Fin étalonnage";
                labelInstruction->setText("Etalonnage terminé"); // Renvoie sur l'éxécutable, le texte entre ""

                disconnect(ComSerie::getInstance(),&ComSerie::dataRecu,this,&PageEtalo::traiterDonnees_etalo);
                this->hide();
                pagedistribution *pageDistribution = new pagedistribution();
                pageDistribution->setWindowState(Qt::WindowFullScreen);
                pageDistribution->show();



                dataRecues="";//Reinitialisation de la variable.
            }
        }
    }

}
/*
QString PageEtalo::decodeMessage(const QString &msg)
{
    if (msg == "TETX") {
        return "Mettre la première bouteille pour étalonnage";

    }
    else if (msg == "TSAX") return "Mode Semi Auto";
    else if (msg == "TMAX") return "Mode Manuel";
    else if (msg == "TAUX") return "Mode Auto";
    else if (msg == "TDFX") return "Distribution finie";
    else if (msg == "TPFX") return "Pressée finie";
    else if (msg == "TNLX") return "Nombre de litres";
    else if (msg == "TNBX") return "Nombre de bouteilles";
    else if (msg == "TEFX") return "Étalonnage fini";
    else if (msg == "TSPX") return "Statut pompe";
    else if (msg == "TNTX") return "Nettoyage terminé";
    else if (msg == "TNPX") return "Nettoyage pompe";
    else if (msg == "TNFX") return "Nettoyage finie";

    return "Instruction inconnue : " + msg;
}
*/
