#include "pageetalo3.h"
#include "ui_pageetalo3.h"

pageetalo3::pageetalo3(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::pageetalo3)
{
    ui->setupUi(this);
}

pageetalo3::~pageetalo3()
{
    delete ui;
}
