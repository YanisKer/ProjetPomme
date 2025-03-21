#include "pageetaloretirer.h"
#include "ui_pageetaloretirer.h"

pageetaloretirer::pageetaloretirer(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::pageetaloretirer)
{
    ui->setupUi(this);
}

pageetaloretirer::~pageetaloretirer()
{
    delete ui;
}
