#ifndef COMSERIE_H
#define COMSERIE_H

#include <QObject>
#include <QSerialPort>
#include <QSerialPortInfo>

class ComSerie : public QObject {
    Q_OBJECT

public:
    static ComSerie* getInstance(); // Singleton
    ~ComSerie();

    void envoyerCommande(const QByteArray &data);

signals:
    void dataRecu(const QByteArray &data);

private slots:
    void lireDonnees();

private:
    explicit ComSerie(QObject *parent = nullptr);
    static ComSerie* instance;

    QSerialPort *portSerie;
};

#endif // COMSERIE_H

