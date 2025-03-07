#ifndef PAGENETTOYAGE_H
#define PAGENETTOYAGE_H

#include <QWidget>

namespace Ui {
class pagenettoyage;
}

class pagenettoyage : public QWidget
{
    Q_OBJECT

public:
    explicit pagenettoyage(QWidget *parent = nullptr);
    ~pagenettoyage();

private:
    Ui::pagenettoyage *ui;
};

#endif // PAGENETTOYAGE_H
