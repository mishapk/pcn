#include "eventcolorqsqlquerymodel.h"

EventColorQSqlQueryModel::EventColorQSqlQueryModel(QObject *parent) :
    QSqlQueryModel(parent)
{
}

QVariant EventColorQSqlQueryModel::data(const QModelIndex &index, int role) const
{
    QVariant value = QSqlQueryModel::data(index, role);

    if (role == Qt::BackgroundColorRole)
    {
        int level=	QSqlRecord (record(index.row())).value(4).toInt();
        switch(level)
        {
        case 1 : return qVariantFromValue(QColor(0xff,0xca,0x00));
        case 2 : return qVariantFromValue(QColor(Qt::red));
        case 3 : return qVariantFromValue(QColor(Qt::gray));
        case 4 : return qVariantFromValue(QColor(Qt::green));
        }
    }
    if(role==Qt::DisplayRole )
    {

        if (index.column() == 4)
        {
            switch(value.toInt())
            {
            case 0 : return qVariantFromValue(tr("Program"));
            case 1 : return qVariantFromValue(tr("Level I"));
            case 2 : return qVariantFromValue(tr("Level II"));
            case 3 : return qVariantFromValue(tr("Fault"));
            case 4 : return qVariantFromValue(tr("Correct"));
            }
        }

    }
    return value;
}


