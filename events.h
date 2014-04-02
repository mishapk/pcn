#ifndef EVENTS_H
#define EVENTS_H

#include <QWidget>
#include <QtGui>
#include <QSortFilterProxyModel>
#include "eventcolorqsqlquerymodel.h"

namespace Ui {
class Events;
}

class Events : public QWidget
{
    Q_OBJECT
    
public:
    explicit Events(QWidget *parent = 0);
    ~Events();
private slots:
    void changeFilter(bool checked = true);
public slots:
    void on_pushButton_clicked();

private:
    Ui::Events *ui;
    int IndexRadioButton;
    QCalendarWidget * pCalendar1;
    QCalendarWidget * pCalendar2;
    EventColorQSqlQueryModel * model;
    void initializeModel();

};

#endif // EVENTS_H
