#ifndef PAGEETALORETIRER_H
#define PAGEETALORETIRER_H

#include <QWidget>

namespace Ui {
class pageetaloretirer;
}

class pageetaloretirer : public QWidget
{
    Q_OBJECT

public:
    explicit pageetaloretirer(QWidget *parent = nullptr);
    ~pageetaloretirer();

private:
    Ui::pageetaloretirer *ui;
};

#endif // PAGEETALORETIRER_H
