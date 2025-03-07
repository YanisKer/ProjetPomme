#include "pageerreurselec.h"
#include "ui_pageerreurselec.h"

pageerreurselec::pageerreurselec(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::pageerreurselec) {
    ui->setupUi(this);
}

pageerreurselec::~pageerreurselec() {
    delete ui;
}
