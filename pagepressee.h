#ifndef PAGEPRESSEE_H
#define PAGEPRESSEE_H

#include <QMainWindow>

namespace Ui {
class PagePressee;
}

class PagePressee : public QMainWindow
{
    Q_OBJECT

public:
    explicit PagePressee(QWidget *parent = nullptr);
    ~PagePressee();

private:
    Ui::PagePressee *ui;
};

#endif // PAGEPRESSEE_H
