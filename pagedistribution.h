#ifndef PAGEDISTRIBUTION_H
#define PAGEDISTRIBUTION_H

#include <QWidget>

namespace Ui {
class pagedistribution;
}

class pagedistribution : public QWidget
{
    Q_OBJECT

public:
    explicit pagedistribution(QWidget *parent = nullptr);
    ~pagedistribution();

private slots:
    void traiterDonnees_distri(const QByteArray &data);
    void on_pb_FinDistri_2_clicked();



private:
    Ui::pagedistribution *ui;
    QString dataRecues;
    int nbBouteilles;
    void genererCSV();
};

#endif // PAGEDISTRIBUTION_H
