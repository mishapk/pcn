#ifndef WELCOMEDITDIALOG_H
#define WELCOMEDITDIALOG_H

#include <QDialog>

namespace Ui {
class WelcomEditDialog;
}

class WelcomEditDialog : public QDialog
{
    Q_OBJECT
    
public:
    explicit WelcomEditDialog(QWidget *parent = 0,  const QString &TitleName=0,
                              const QString &login=0,const QString &password=0);
    ~WelcomEditDialog();
    QString Login();
    QString Password();
    
private:
    Ui::WelcomEditDialog *ui;
};

#endif // WELCOMEDITDIALOG_H
