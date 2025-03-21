#ifndef PAGEETALO2_H
#define PAGEETALO2_H

#include <QWidget>

namespace Ui {
class pageetalo2;
}

class pageetalo2 : public QWidget
{
    Q_OBJECT

public:
    explicit pageetalo2(QWidget *parent = nullptr);
    ~pageetalo2();

private:
    Ui::pageetalo2 *ui;
};

#endif // PAGEETALO2_H
