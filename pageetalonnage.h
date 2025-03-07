#ifndef PAGEETALONNAGE_H
#define PAGEETALONNAGE_H

#include <QWidget>

namespace Ui {
class pageetalonnage;
}

class pageetalonnage : public QWidget
{
    Q_OBJECT

public:
    explicit pageetalonnage(QWidget *parent = nullptr);
    ~pageetalonnage();

private:
    Ui::pageetalonnage *ui;
};

#endif // PAGEETALONNAGE_H
