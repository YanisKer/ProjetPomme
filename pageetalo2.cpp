#include "pageetalo2.h"
#include "ui_pageetalo2.h"

pageetalo2::pageetalo2(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::pageetalo2)
{
    ui->setupUi(this);
}

pageetalo2::~pageetalo2()
{
    delete ui;
}
