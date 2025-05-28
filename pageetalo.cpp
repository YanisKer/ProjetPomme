#include "pageetalo.h"
#include <QVBoxLayout>
#include <QLabel>
#include "ComSerie.h"
#include <QDebug>
PageEtalo::PageEtalo(QWidget *parent)
    : QWidget(parent),
    serial(new QSerialPort(this)),
    labelInstruction(new QLabel("En attente de l'instruction...", this))
{
    QVBoxLayout *layout = new QVBoxLayout(this);
    layout->addWidget(labelInstruction);
    labelInstruction->setStyleSheet("font-size: 27pt;");
    labelInstruction->setAlignment(Qt::AlignCenter);

    ComSerie::getInstance()->envoyerCommande("TETX");
    connect(ComSerie::getInstance(),&ComSerie::dataRecu,this,&PageEtalo::traiterDonnees_etalo);
    commandeRecue="";
}


void PageEtalo::traiterDonnees_etalo(const QByteArray &data){

    commandeRecue+=QString(data);

    if(commandeRecue.endsWith('\n')){

        qDebug() << "Commande recue étalonnage" << commandeRecue;
        if (commandeRecue == "TCAX\r\n") {
            qDebug() << "Mettre première bouteille";
            labelInstruction->setText("Mettre bouteille sur distributeur N°1");

        }
        else if (commandeRecue == "TPAX\r\n") {
            qDebug() << "Mettre première bouteille";
            labelInstruction->setText("Patienter...étalonnage en cours");

        }
        else if (commandeRecue == "TCBX\r\n") {
            qDebug() << "Mettre deuxième bouteille";
            labelInstruction->setText("Mettre bouteille sur distributeur N°2");
        }

        else if (commandeRecue == "TCCX\r\n") {
            qDebug() << "Mettre troisième bouteille";
            labelInstruction->setText("Mettre bouteille sur distributeur N°3");
        }
        commandeRecue="";//Reinitialisation de la variable.
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
