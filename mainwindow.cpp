#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "initdb.h"
#include <QtSql>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //-----------------Init Data Base-----------------
    if (!QSqlDatabase::drivers().contains("QSQLITE"))
        QMessageBox::critical(this, "Unable to load database", "This demo needs the SQLITE driver");

    // initialize the database
    QSqlError err = initDb();
    if (err.type() != QSqlError::NoError) {
        showError(err);
        return;
    }
    QSqlQuery q;
   if (!q.exec(QLatin1String("insert into events(ids, info, level) values(0, 'Start program',0)")))
       qDebug()<< q.lastError();

    //[1]
    //-----------------Group Action-------------------
    QActionGroup *ActionGroup= new QActionGroup(this);
    ActionGroup->addAction(ui->actionNotify);
    ActionGroup->addAction(ui->actionMonitoring);
    ActionGroup->addAction(ui->actionWelcome);
    ActionGroup->addAction(ui->actionEvents);

    //[2]
    //-----------Create and add wiget frame---------
    //0
    pWelocme= new Welcome(this);
    ui->stackedWidget->addWidget(pWelocme);
    //1
    Monitoring *pMonitoring= new Monitoring(this);
    ui->stackedWidget->addWidget(pMonitoring);
    //2
    pEvents= new Events(this);
    ui->stackedWidget->addWidget(pEvents);
    //3
    pNotify= new Notify(this);
    ui->stackedWidget->addWidget(pNotify);

    //[3]
    //-----------Link wiget frame with action-------
    QSignalMapper *mapper = new QSignalMapper(this);
    mapper->setMapping(ui->actionWelcome,0);
    mapper->connect(ui->actionWelcome, SIGNAL(triggered(bool)), mapper, SLOT(map()));

    mapper->setMapping(ui->actionMonitoring,1);
    mapper->connect(ui->actionMonitoring, SIGNAL(triggered(bool)), mapper, SLOT(map()));

    mapper->setMapping(ui->actionEvents,2);
    mapper->connect(ui->actionEvents, SIGNAL(triggered(bool)), mapper, SLOT(map()));

    mapper->setMapping(ui->actionNotify,3);
    mapper->connect(ui->actionNotify, SIGNAL(triggered(bool)), mapper, SLOT(map()));


    connect(mapper, SIGNAL(mapped(int)), ui->stackedWidget, SLOT(setCurrentIndex(int)));
    //--------------------------------------
    ui->stackedWidget->setCurrentIndex(0);
    ui->actionWelcome->setChecked(true);
    //AdminMode connect signal
    connect(pWelocme,SIGNAL(AdminMode(bool)),this,SLOT(slotAdminMode(bool)));

}

MainWindow::~MainWindow()
{
    QSqlQuery q;

    if (!q.exec(QLatin1String("insert into events(ids, info, level) values(0,'Shutdown program',0)")))
       qDebug()<< q.lastError();
    delete ui;
}

void MainWindow::slotAdminMode(bool flagAD)
{
    pWelocme->SetAdminMode(flagAD);
    pEvents->on_pushButton_clicked();
}



void MainWindow::showError(const QSqlError &err)
{
    QMessageBox::critical(this, "Unable to initialize Database",
                "Error initializing database: " + err.text());
}
