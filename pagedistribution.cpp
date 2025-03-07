#include "pagedistribution.h"
#include "ui_pagedistribution.h"

pagedistribution::pagedistribution(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::pagedistribution)
{
    ui->setupUi(this);
}

pagedistribution::~pagedistribution()
{
    delete ui;
}
