#include "ComSerie.h"
#include <QDebug>
#include <QMessageBox>

ComSerie* ComSerie::instance = nullptr;

ComSerie* ComSerie::getInstance() {
    if (!instance)
        instance = new ComSerie();
    return instance;
}

ComSerie::ComSerie(QObject *parent) : QObject(parent) {
    portSerie = new QSerialPort(this);
    portSerie->setPortName("/dev/ttyACM0");
    portSerie->setBaudRate(QSerialPort::Baud115200);
    
    if (portSerie->open(QIODevice::ReadWrite)) {
        connect(portSerie, &QSerialPort::readyRead, this, &ComSerie::lireDonnees);
    } else {
        qDebug() << "Erreur ouverture port série :" << portSerie->errorString();
        QMessageBox::critical(nullptr,"Erreur", "Erreur d'ouverture du port série");

    }
}

ComSerie::~ComSerie() {
    if (portSerie->isOpen()) {
        portSerie->close();
    }
}

void ComSerie::envoyerCommande(const QByteArray &data) {
    if (portSerie->isOpen()) {
        portSerie->write(data);
    }
}

void ComSerie::lireDonnees() {
    QByteArray data = portSerie->readAll();
    emit dataRecu(data);
}
