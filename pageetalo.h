#ifndef PAGEETALO_H
#define PAGEETALO_H

#include <QWidget>

namespace Ui {
class pageetalo;
}

class pageetalo : public QWidget
{
    Q_OBJECT

public:
    explicit pageetalo(QWidget *parent = nullptr);
    ~pageetalo();

private:
    Ui::pageetalo *ui;
};

#endif // PAGEETALO_H
