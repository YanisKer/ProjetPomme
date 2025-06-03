#ifndef PAGEMODEETPOMPE_H
#define PAGEMODEETPOMPE_H

#include "pageetalo.h"
#include <QMainWindow>
#include <QButtonGroup>

namespace Ui {
class PageModeEtPompe;
}

class PageModeEtPompe : public QMainWindow
{
    Q_OBJECT

public:
    explicit PageModeEtPompe(QWidget *parent = nullptr);
    ~PageModeEtPompe();

private slots:

    void onButtonClicked();
    void on_pb_continuer_clicked();

private:
    Ui::PageModeEtPompe *ui;
    QButtonGroup *modeButtonGroup;
    QButtonGroup *pompeButtonGroup;
    int selectedMode;
    int selectedPompeCount;
    PageEtalo *pageEtalo = nullptr; // Ajout ici

};

#endif // PAGEMODEETPOMPE_H

