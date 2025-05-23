#ifndef PAGEETALO_H
#define PAGEETALO_H

#include <QWidget>
#include <QSerialPort>

class QLabel;

class PageEtalo : public QWidget
{
    Q_OBJECT

public:
    explicit PageEtalo(QWidget *parent = nullptr);

private slots:
    void readSerialData();

private:
    QString decodeMessage(const QString &msg);

    QSerialPort *serial;
    QByteArray buffer;
    QLabel *labelInstruction;
};

#endif // PAGEETALO_H
