#ifndef PAGEETALO5_H
#define PAGEETALO5_H

#include <QWidget>

namespace Ui {
class pageetalo5;
}

class pageetalo5 : public QWidget
{
    Q_OBJECT

public:
    explicit pageetalo5(QWidget *parent = nullptr);
    ~pageetalo5();

private:
    Ui::pageetalo5 *ui;
};

#endif // PAGEETALO5_H
