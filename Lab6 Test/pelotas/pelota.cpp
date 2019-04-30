#include "pelota.h"
#include "ui_pelota.h"

pelota::pelota(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::pelota)
{
    ui->setupUi(this);
}

pelota::~pelota()
{
    delete ui;
}
