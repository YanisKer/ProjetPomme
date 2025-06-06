#include "pageetalo.h"
#include <QVBoxLayout>
#include <QLabel>
#include "ComSerie.h"
#include "pagedistribution.h"
#include <QDebug>

PageEtalo::PageEtalo(int selectedMode, QWidget *parent) // Constructeur de la classe PageEtalo
    : QWidget(parent),
    serial(new QSerialPort(this)),
    labelInstruction(new QLabel("En attente de l'instruction...", this))
{
    selectedModeEtalo=selectedMode;
    QVBoxLayout *layout = new QVBoxLayout(this);
    layout->addWidget(labelInstruction);
    labelInstruction->setStyleSheet("font-size: 27pt; font-weight: bold;"); // Applique un style au label (police de taille 27 et gras)
    labelInstruction->setAlignment(Qt::AlignCenter);
    qDebug() << "Constructeur Page Etalo";
    ComSerie::getInstance()->envoyerCommande("TETX");
    connect(ComSerie::getInstance(),&ComSerie::dataRecu,this,&PageEtalo::traiterDonnees_etalo); // Connecte le signal "dataRecu" au slot "traiterDonnees_etalo"
    dataRecues=""; // Initialise la chaîne de caractères utilisée pour stocker une commande reçue
}

void PageEtalo::traiterDonnees_etalo(const QByteArray &data){

    dataRecues += QString::fromUtf8(data);
    QStringList lignes = dataRecues.split('\n', Qt::SkipEmptyParts);
    // Si la fin du message ne se termine pas par '\n', on garde la dernière ligne
    if (!dataRecues.endsWith('\n')) {
        dataRecues = lignes.takeLast(); // ligne incomplète à conserver
    } else {
        dataRecues.clear(); // toutes les lignes sont complètes
    }
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
                labelInstruction->setText("Patienter... étalonnage en cours..."); // Renvoie sur l'éxécutable, le texte entre ""
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
                if(selectedModeEtalo==1)
                {
                    ComSerie::getInstance()->envoyerCommande("TSAX");
                }else if (selectedModeEtalo==2)
                {
                    ComSerie::getInstance()->envoyerCommande("TAUX");
                }
                disconnect(ComSerie::getInstance(),&ComSerie::dataRecu,this,&PageEtalo::traiterDonnees_etalo);
                this->hide();
                pagedistribution *pageDistribution = new pagedistribution(); // Pointeur pageDistribution, on crée dynamiquement un nouvel objet pageDistribution
                pageDistribution->setWindowState(Qt::WindowFullScreen);
                pageDistribution->show();
            }
        }
    }
}
