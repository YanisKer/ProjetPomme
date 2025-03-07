#ifndef PAGEDISTRIBUTION_H
#define PAGEDISTRIBUTION_H

#include <QWidget>

namespace Ui {
class pagedistribution;
}

class pagedistribution : public QWidget
{
    Q_OBJECT

public:
    explicit pagedistribution(QWidget *parent = nullptr);
    ~pagedistribution();

private:
    Ui::pagedistribution *ui;
};

#endif // PAGEDISTRIBUTION_H
