#ifndef EVENTCOLORQSQLQUERYMODEL_H
#define EVENTCOLORQSQLQUERYMODEL_H

#include <QSqlQueryModel>
#include <QSqlRecord>
#include <QColor>
#include <QtGui>

class EventColorQSqlQueryModel : public QSqlQueryModel
{
    Q_OBJECT
public:
    EventColorQSqlQueryModel(QObject *parent = 0);
    QVariant data(const QModelIndex &item, int role) const;


    
};

#endif // EVENTCOLORQSQLQUERYMODEL_H
