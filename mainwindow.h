#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtGui/QtGui>
#include <QtSql>
#include "notify.h"
#include "welcome.h"
#include "monitoring.h"
#include "events.h"


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
private slots:
    void slotAdminMode(bool flagAD);
private:
    Ui::MainWindow *ui;
    void showError(const QSqlError &err);
    Welcome *pWelocme;
    Notify *pNotify;
    Events *pEvents;


};

#endif // MAINWINDOW_H
