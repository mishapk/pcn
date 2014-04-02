#include "welcome.h"
#include "ui_welcome.h"
Welcome::Welcome(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Welcome)
{
    ui->setupUi(this);

    //Create digital button
    QChar aButton[3][3]={{'7','8','9'},
                         {'4','5','6'},
                         {'1','2','3'} };
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            ui->grid_button->addWidget(createButton(aButton[i][j]),i,j);
    ui->grid_button->addWidget(createButton("0"),3,0);

    ui->grid_button->addWidget(createBackSpaceButton("BackSpace"),3,1,1,2);
    ui->grid_button->addWidget(createEnterButton("Enter"),0,3,4,1);

    //Create model
    model = new QSqlTableModel(this);
    model->setTable("users");
    model->sort(0,Qt::DescendingOrder);
    model->select();



    ui->listView->setModel(model);
    ui->listView->setModelColumn(1);

    //-----------------------------
    QDataWidgetMapper *mapper = new QDataWidgetMapper(this);
    mapper->setModel(model);
    mapper->addMapping(ui->LoginEdit, model->fieldIndex("login"));

    connect(ui->listView->selectionModel(), SIGNAL(currentRowChanged(QModelIndex,QModelIndex)),
            mapper, SLOT(setCurrentModelIndex(QModelIndex)));
    connect(ui->listView->selectionModel(), SIGNAL(currentRowChanged(QModelIndex,QModelIndex)),
            ui->PasswordEdit, SLOT(clear()));
    //Set no edit listView mode
    ui->listView->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->widgetEditButton->hide();
}

Welcome::~Welcome()
{
    delete ui;
}

QPushButton *Welcome::createButton(const QString &str)
{
      QPushButton* pcmd = new QPushButton(str);
      pcmd->setMinimumSize(40, 40);
      connect(pcmd, SIGNAL(clicked()), SLOT(slotButtonClicked()));
      return pcmd;
}

QPushButton *Welcome::createEnterButton(const QString &str)
{
    QPushButton* pcmd = new QPushButton(str);
    QSizePolicy pls;
    pls.setHorizontalPolicy(QSizePolicy::Minimum);
    pls.setVerticalPolicy(QSizePolicy::MinimumExpanding);
    pcmd->setSizePolicy(pls);
    pcmd->setMinimumSize(40, 40);
    connect(pcmd, SIGNAL(clicked()), SLOT(slotEnterButtonClicked()));
    return pcmd;
}

QPushButton *Welcome::createBackSpaceButton(const QString &str)
{
    QPushButton* pcmd = new QPushButton(str);
    pcmd->setMinimumSize(40, 40);
    connect(pcmd, SIGNAL(clicked()), SLOT(slotBackSpaceButtonClicked()));
    return pcmd;
}

void Welcome::SetAdminMode(bool flag)
{
    if(flag)
        ui->widgetEditButton->show();
    else
        ui->widgetEditButton->hide();
}


void Welcome::slotButtonClicked()
{
    QString str=ui->PasswordEdit->text();
    str+=((QPushButton*)sender())->text();
    ui->PasswordEdit->setText(str);
}

void Welcome::slotEnterButtonClicked()
{

    QSqlRecord rec=model->record(ui->listView->currentIndex().row());
   // qDebug()<<rec.value("password").toString();
    bool compare=ui->PasswordEdit->text()==rec.value("password").toString();
    if (compare)
    {
        QMessageBox:: information(this, "Information",
                    "You have successfully logged in system" );
        ui->lineEdit_Cu_Us->setText(ui->LoginEdit->text());
        AdminUser=rec.value("admin").toBool();
        QSqlQuery q;
        QString SQL=QString("insert into events(ids, info, level) values(0, 'Login user: %1',0)").arg(ui->LoginEdit->text());
        if (!q.exec(SQL))
        qDebug()<< q.lastError();

        emit AdminMode(AdminUser);

    }
        else
        QMessageBox::critical(this, tr("Error"),
                    tr("Error initializing user") );

}

void Welcome::slotBackSpaceButtonClicked()
{
    QString str=ui->PasswordEdit->text();
    str.remove(str.length()-1,1);
    ui->PasswordEdit->setText(str);
}

void Welcome::on_AddButton_clicked()
{
    WelcomEditDialog WED(this,"Add user");

    if(WED.exec())
    {
        QSqlRecord rec = model->record();
        rec.setValue("login",WED.Login());
        rec.setValue("password",WED.Password());
        rec.setValue("admin",0);
        model->insertRecord(-1, rec);
        model->submitAll();
    }

}

void Welcome::on_EditButton_clicked()
{
    int index=ui->listView->currentIndex().row();
    QSqlRecord rec=model->record(index);
    QString pass=rec.value("password").toString();
    WelcomEditDialog WED(this,"Edit user",ui->LoginEdit->text(),pass);

    if(WED.exec())
    {
        rec.setValue("login",WED.Login());
        rec.setValue("password",WED.Password());
        model->setRecord(index,rec);
        model->submitAll();
    }
}

void Welcome::on_DeleteButton_clicked()
{
    int q=QMessageBox::question(
                this, tr("Delete"),
                tr("Do you really want to delete this user?"),
                QMessageBox::Yes | QMessageBox::No);
    if(q==QMessageBox::Yes)
    {
        int i=ui->listView->currentIndex().row();
        model->removeRows(i,1);
        model->submitAll();
    }
}
