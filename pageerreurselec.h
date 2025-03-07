#ifndef PAGEERREURSELEC_H
#define PAGEERREURSELEC_H

#include <QWidget>

namespace Ui {
class PageErreurSelec;
}

class PageErreurSelec : public QWidget {
    Q_OBJECT

public:
    explicit PageErreurSelec(QWidget *parent = nullptr);
    ~PageErreurSelec();

private slots:
    void on_pushButton_clicked(); // Slot pour le bouton "Compris"

private:
    Ui::PageErreurSelec *ui;
};

#endif // PAGEERREURSELEC_H
