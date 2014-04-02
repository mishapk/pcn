#include "notify.h"
#include "ui_notify.h"

Notify::Notify(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Notify)
{
    ui->setupUi(this);
    ui->widget->setFixedWidth(180);
}

Notify::~Notify()
{
    delete ui;
}
