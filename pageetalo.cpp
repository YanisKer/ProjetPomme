#include "pageetalo.h"
#include <QVBoxLayout>
#include <QLabel>

PageEtalo::PageEtalo(QWidget *parent)
    : QWidget(parent),
    serial(new QSerialPort(this)),
    labelInstruction(new QLabel("En attente de l'instruction...", this))
{
    QVBoxLayout *layout = new QVBoxLayout(this);
    layout->addWidget(labelInstruction);

    serial->setPortName("/dev/ttyACM*");  // À adapter
    serial->setBaudRate(QSerialPort::Baud9600);
    serial->setDataBits(QSerialPort::Data8);
    serial->setParity(QSerialPort::NoParity);
    serial->setStopBits(QSerialPort::OneStop);
    serial->setFlowControl(QSerialPort::NoFlowControl);

    if (!serial->open(QIODevice::ReadOnly)) {
        labelInstruction->setText("Erreur ouverture port série");
        return;
    }

    connect(serial, &QSerialPort::readyRead, this, &PageEtalo::readSerialData);
}

void PageEtalo::readSerialData()
{
    QByteArray data = serial->readAll();
    buffer.append(data);

    while (buffer.contains('\n')) {
        int index = buffer.indexOf('\n');
        QByteArray line = buffer.left(index).trimmed();
        buffer.remove(0, index + 1);

        QString msg = QString::fromUtf8(line);

        // Vérifie que le message commence par 'T' et finit par 'X'
        if (msg.startsWith('T') && msg.endsWith('X')) {
            QString instruction = decodeMessage(msg);
            labelInstruction->setText(instruction);
        }
        // Sinon on ignore le message
    }
}


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
