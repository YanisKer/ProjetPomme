#ifndef PAGEERREURSELEC_H
#define PAGEERREURSELEC_H

#include <QWidget>

namespace Ui {
class pageerreurselec;
}

class pageerreurselec : public QWidget {
    Q_OBJECT

public:
    explicit pageerreurselec(QWidget *parent = nullptr);
    ~pageerreurselec();

private:
    Ui::pageerreurselec *ui;
};

#endif // PAGEERREURSELEC_H
