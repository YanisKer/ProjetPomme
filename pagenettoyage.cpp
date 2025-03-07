#include "pagenettoyage.h"
#include "ui_pagenettoyage.h"

pagenettoyage::pagenettoyage(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::pagenettoyage)
{
    ui->setupUi(this);
}

pagenettoyage::~pagenettoyage()
{
    delete ui;
}
