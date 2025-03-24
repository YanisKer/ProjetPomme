#ifndef PAGEMODEETPOMPE_H
#define PAGEMODEETPOMPE_H

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
    void on_pushButton_3_clicked();
    void onButtonClicked();

private:
    Ui::PageModeEtPompe *ui;
    QButtonGroup *modeButtonGroup;
    QButtonGroup *pompeButtonGroup;
    int selectedMode;
    int selectedPompeCount;
};

#endif // PAGEMODEETPOMPE_H

