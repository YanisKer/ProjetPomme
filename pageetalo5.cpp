#include "pageetalo5.h"
#include "ui_pageetalo5.h"

pageetalo5::pageetalo5(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::pageetalo5)
{
    ui->setupUi(this);
}

pageetalo5::~pageetalo5()
{
    delete ui;
}
