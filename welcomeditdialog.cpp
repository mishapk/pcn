#include "welcomeditdialog.h"
#include "ui_welcomeditdialog.h"

WelcomEditDialog::WelcomEditDialog(QWidget *parent, const QString &TitleName, const QString &login, const QString &password) :
    QDialog(parent),
    ui(new Ui::WelcomEditDialog)
{
    ui->setupUi(this);
    this->setWindowTitle(TitleName);
    ui->LoginEdit->setText(login);
    ui->PasswordEdit->setText(password);
}

WelcomEditDialog::~WelcomEditDialog()
{
    delete ui;
}

QString WelcomEditDialog::Login()
{
    return ui->LoginEdit->text();
}

QString WelcomEditDialog::Password()
{
    return ui->PasswordEdit->text();
}
