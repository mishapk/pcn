#include "monitoring.h"
#include "ui_monitoring.h"

Monitoring::Monitoring(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Monitoring)
{
    ui->setupUi(this);
}

Monitoring::~Monitoring()
{
    delete ui;
}
