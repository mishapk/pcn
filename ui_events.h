/********************************************************************************
** Form generated from reading UI file 'events.ui'
**
** Created: Sat Mar 15 10:48:15 2014
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EVENTS_H
#define UI_EVENTS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDateEdit>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTableView>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Events
{
public:
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QTableView *tableView;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QRadioButton *radioButton_1;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;
    QCheckBox *checkBox;
    QDateEdit *dateEdit_1;
    QDateEdit *dateEdit_2;
    QPushButton *pushButton;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *Events)
    {
        if (Events->objectName().isEmpty())
            Events->setObjectName(QString::fromUtf8("Events"));
        Events->resize(400, 310);
        verticalLayout_3 = new QVBoxLayout(Events);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        tableView = new QTableView(Events);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        horizontalLayout->addWidget(tableView);

        groupBox = new QGroupBox(Events);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        radioButton_1 = new QRadioButton(groupBox);
        radioButton_1->setObjectName(QString::fromUtf8("radioButton_1"));
        radioButton_1->setChecked(true);

        verticalLayout->addWidget(radioButton_1);

        radioButton_2 = new QRadioButton(groupBox);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));

        verticalLayout->addWidget(radioButton_2);

        radioButton_3 = new QRadioButton(groupBox);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));

        verticalLayout->addWidget(radioButton_3);

        radioButton_4 = new QRadioButton(groupBox);
        radioButton_4->setObjectName(QString::fromUtf8("radioButton_4"));

        verticalLayout->addWidget(radioButton_4);

        checkBox = new QCheckBox(groupBox);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setChecked(true);

        verticalLayout->addWidget(checkBox);

        dateEdit_1 = new QDateEdit(groupBox);
        dateEdit_1->setObjectName(QString::fromUtf8("dateEdit_1"));

        verticalLayout->addWidget(dateEdit_1);

        dateEdit_2 = new QDateEdit(groupBox);
        dateEdit_2->setObjectName(QString::fromUtf8("dateEdit_2"));

        verticalLayout->addWidget(dateEdit_2);

        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        verticalLayout_2->addLayout(verticalLayout);


        horizontalLayout->addWidget(groupBox);


        verticalLayout_3->addLayout(horizontalLayout);


        retranslateUi(Events);

        QMetaObject::connectSlotsByName(Events);
    } // setupUi

    void retranslateUi(QWidget *Events)
    {
        Events->setWindowTitle(QApplication::translate("Events", "Form", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("Events", "Filter", 0, QApplication::UnicodeUTF8));
        radioButton_1->setText(QApplication::translate("Events", "All", 0, QApplication::UnicodeUTF8));
        radioButton_2->setText(QApplication::translate("Events", "Today", 0, QApplication::UnicodeUTF8));
        radioButton_3->setText(QApplication::translate("Events", "Date", 0, QApplication::UnicodeUTF8));
        radioButton_4->setText(QApplication::translate("Events", "Date range", 0, QApplication::UnicodeUTF8));
        checkBox->setText(QApplication::translate("Events", "Program events", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("Events", "Accept", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Events: public Ui_Events {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EVENTS_H
