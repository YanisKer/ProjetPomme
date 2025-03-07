#include "pagepressee.h"
#include "ui_pagepressee.h"

PagePressee::PagePressee(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::PagePressee)
{
    ui->setupUi(this);
}

PagePressee::~PagePressee()
{
    delete ui;
}
