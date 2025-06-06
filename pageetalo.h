#ifndef PAGEETALO_H
#define PAGEETALO_H

#include <QWidget>
#include <QSerialPort>

class QLabel;

class PageEtalo : public QWidget
{
    Q_OBJECT

public:
    explicit PageEtalo(int selectedMode=0,QWidget *parent = nullptr );

private slots:
    void traiterDonnees_etalo(const QByteArray &data);
private:

    int selectedModeEtalo;
    QSerialPort *serial;
    QByteArray buffer;
    QLabel *labelInstruction;
    QString dataRecues;
};

#endif // PAGEETALO_H
