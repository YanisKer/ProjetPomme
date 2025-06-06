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
    int selectedMode; //0 Rien de selectionne ; 1 Semi-Auto ; 2 Auto
    PageEtalo *pageEtalo = nullptr; // Ajout ici

};

#endif // PAGEMODEETPOMPE_H

