#include "pageerreurselec.h"
#include "ui_pageerreurselec.h"

PageErreurSelec::PageErreurSelec(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PageErreurSelec) {
    ui->setupUi(this);
}

PageErreurSelec::~PageErreurSelec() {
    delete ui;
}

void PageErreurSelec::on_pushButton_clicked() {
    emit changeToModeEtPompePage(); // Émettre le signal
}
