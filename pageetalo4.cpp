#include "pageetalo4.h"
#include "ui_pageetalo4.h"

pageetalo4::pageetalo4(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::pageetalo4)
{
    ui->setupUi(this);
}

pageetalo4::~pageetalo4()
{
    delete ui;
}
