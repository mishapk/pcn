#include "events.h"
#include "ui_events.h"


Events::Events(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Events)
{
    ui->setupUi(this);

    connect(ui->radioButton_1,SIGNAL(toggled(bool)),this,SLOT(changeFilter(bool)));
    connect(ui->radioButton_2,SIGNAL(toggled(bool)),this,SLOT(changeFilter(bool)));
    connect(ui->radioButton_3,SIGNAL(toggled(bool)),this,SLOT(changeFilter(bool)));
    connect(ui->radioButton_4,SIGNAL(toggled(bool)),this,SLOT(changeFilter(bool)));

    pCalendar1 = new QCalendarWidget();
    pCalendar1->setFirstDayOfWeek(Qt::Monday);
    ui->dateEdit_1->setCalendarPopup(true);
    ui->dateEdit_1->setCalendarWidget(pCalendar1);
    ui->dateEdit_1->setDate(QDate::currentDate());

    pCalendar2 = new QCalendarWidget();
    pCalendar2->setFirstDayOfWeek(Qt::Monday);
  //  ui->dateEdit_1->setLocale();
    ui->dateEdit_2->setCalendarPopup(true);
    ui->dateEdit_2->setCalendarWidget(pCalendar2);
    ui->dateEdit_2->setDate(QDate::currentDate());

    ui->dateEdit_1->hide();
    ui->dateEdit_2->hide();
  //DataBase query
    initializeModel();

    IndexRadioButton=1;


}

Events::~Events()
{
    delete ui;
}

void Events::changeFilter(bool checked)
{
    if(!checked) return;
    ui->dateEdit_1->hide();
    ui->dateEdit_2->hide();
    if (ui->radioButton_1->isChecked())
    {
       IndexRadioButton=1;
    }
    if (ui->radioButton_2->isChecked())
    {
       IndexRadioButton=2;
    }
    if (ui->radioButton_3->isChecked())
    {
        ui->dateEdit_1->show();
        IndexRadioButton=3;
    }
    if (ui->radioButton_4->isChecked())
    {
        ui->dateEdit_1->show();
        ui->dateEdit_2->show();
        IndexRadioButton=4;
    }

}

void Events::initializeModel()
{
    model= new EventColorQSqlQueryModel(this);
    model->setQuery("select * from events order by id desc;");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Date"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("IDS"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Information"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("Level"));

    QSortFilterProxyModel *sqlproxy = new QSortFilterProxyModel(this);
    sqlproxy->setSourceModel(model);
    ui->tableView->verticalHeader()->setVisible(false);
    ui->tableView->setSortingEnabled(true);
    ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableView->setSelectionMode(QAbstractItemView::SingleSelection);
 //   ui->tableView->setShowGrid(false);

    ui->tableView->setModel(sqlproxy);
    ui->tableView->resizeColumnToContents(0);
    ui->tableView->resizeColumnToContents(1);
    ui->tableView->resizeColumnToContents(2);
    ui->tableView->horizontalHeader()->setResizeMode(3,QHeaderView::Stretch);
    ui->tableView->resizeColumnToContents(4);

}

void Events::on_pushButton_clicked()
{
    QString SqlText("select * from events %1 order by id desc"),p,d1,d2,f1,f2;
    bool ch=ui->checkBox->isChecked();
    f1="yyyy-MM-dd 00:00:00";
    f2="yyyy-MM-dd 23:59:59";
    switch(IndexRadioButton)
    {
    case 2: d1=QDate::currentDate().toString(f1);
            d2=QDate::currentDate().toString(f2);break;
    case 3: d1=ui->dateEdit_1->date().toString(f1);
            d2=ui->dateEdit_1->date().toString(f2);break;
    case 4: d1=ui->dateEdit_1->date().toString(f1);
            d2=ui->dateEdit_2->date().toString(f2);break;
    }
    if(IndexRadioButton==1)
       p=SqlText.arg(ch?"":"where(level<>0)");
    else
       p=SqlText.arg("where((dt between '%3' and '%4') %2)").arg(ch?"":"and (level<>0)").arg(d1).arg(d2);




    qDebug()<<ui->dateEdit_1->date().toString(f1);

    qDebug()<<p;
    model->setQuery(p);
}

