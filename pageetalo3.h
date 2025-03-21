#ifndef PAGEETALO3_H
#define PAGEETALO3_H

#include <QWidget>

namespace Ui {
class pageetalo3;
}

class pageetalo3 : public QWidget
{
    Q_OBJECT

public:
    explicit pageetalo3(QWidget *parent = nullptr);
    ~pageetalo3();

private:
    Ui::pageetalo3 *ui;
};

#endif // PAGEETALO3_H
