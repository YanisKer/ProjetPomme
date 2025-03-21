#ifndef PAGEETALO4_H
#define PAGEETALO4_H

#include <QWidget>

namespace Ui {
class pageetalo4;
}

class pageetalo4 : public QWidget
{
    Q_OBJECT

public:
    explicit pageetalo4(QWidget *parent = nullptr);
    ~pageetalo4();

private:
    Ui::pageetalo4 *ui;
};

#endif // PAGEETALO4_H
