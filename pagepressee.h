#ifndef PAGEPRESSEE_H
#define PAGEPRESSEE_H

#include "pagemodeetpompe.h"
#include <QMainWindow>

namespace Ui {
class PagePressee;
}

class PagePressee : public QMainWindow
{
    Q_OBJECT

public:
    explicit PagePressee(QWidget *parent = nullptr);
    ~PagePressee();

private slots:
    void on_pushButton_2_clicked();


private:
    Ui::PagePressee *ui;
};

#endif // PAGEPRESSEE_H
