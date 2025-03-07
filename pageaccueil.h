#ifndef PAGEACCUEIL_H
#define PAGEACCUEIL_H

#include <QMainWindow>
#include "pagemodeetpompe.h"

namespace Ui {
class PageAccueil;
}

class PageAccueil : public QMainWindow {
    Q_OBJECT

public:
    explicit PageAccueil(QWidget *parent = nullptr);
    ~PageAccueil();

private slots:
    void ouvrirPageSecondaire();

private:
    Ui::PageAccueil *ui;
    PageModeEtPompe *pageModeEtPompe;
};

#endif // PAGEACCUEIL_H
