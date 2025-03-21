#include "pageetalo.h"
#include "ui_pageetalo.h"

pageetalo::pageetalo(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::pageetalo)
{
    ui->setupUi(this);
}

pageetalo::~pageetalo()
{
    delete ui;
}
