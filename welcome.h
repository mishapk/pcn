#ifndef WELCOME_H
#define WELCOME_H

#include <QWidget>
#include <QtGui/QtGui>
#include <QtSql>
#include "welcomeditdialog.h"
namespace Ui {
class Welcome;
}

class Welcome : public QWidget
{
    Q_OBJECT
    
public:
    explicit Welcome(QWidget *parent = 0);
    ~Welcome();
    QPushButton* createButton(const QString& str);
    QPushButton* createEnterButton(const QString& str);
    QPushButton* createBackSpaceButton(const QString& str);
    bool AdminUser;
    void SetAdminMode(bool flag);
signals:
    void AdminMode(bool flag);
private slots:
    void slotButtonClicked();
    void slotEnterButtonClicked();
    void slotBackSpaceButtonClicked();
    void on_AddButton_clicked();

    void on_EditButton_clicked();

    void on_DeleteButton_clicked();

private:
    Ui::Welcome *ui;
    QSqlTableModel *model;


};

#endif // WELCOME_H
