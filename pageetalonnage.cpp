#include "pageetalonnage.h"
#include "ui_pageetalonnage.h"

pageetalonnage::pageetalonnage(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::pageetalonnage)
{
    ui->setupUi(this);
}

pageetalonnage::~pageetalonnage()
{
    delete ui;
}
