/********************************************************************************
** Form generated from reading UI file 'welcome.ui'
**
** Created: Mon Mar 10 20:12:28 2014
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WELCOME_H
#define UI_WELCOME_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListView>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Welcome
{
public:
    QVBoxLayout *verticalLayout_4;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QLineEdit *PasswordEdit;
    QLabel *label;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer;
    QGridLayout *grid_button;
    QLineEdit *LoginEdit;
    QLabel *label_3;
    QListView *listView;
    QLineEdit *lineEdit_Cu_Us;
    QLabel *label_4;
    QWidget *widgetEditButton;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout;
    QPushButton *AddButton;
    QPushButton *EditButton;
    QPushButton *DeleteButton;
    QSpacerItem *verticalSpacer_4;

    void setupUi(QWidget *Welcome)
    {
        if (Welcome->objectName().isEmpty())
            Welcome->setObjectName(QString::fromUtf8("Welcome"));
        Welcome->resize(504, 321);
        verticalLayout_4 = new QVBoxLayout(Welcome);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 2, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 0, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 4, 1, 1);

        PasswordEdit = new QLineEdit(Welcome);
        PasswordEdit->setObjectName(QString::fromUtf8("PasswordEdit"));
        PasswordEdit->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(PasswordEdit, 4, 2, 1, 1);

        label = new QLabel(Welcome);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label, 4, 1, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_2 = new QLabel(Welcome);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setLayoutDirection(Qt::LeftToRight);
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_2->addWidget(label_2);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_3);


        gridLayout->addLayout(verticalLayout_2, 2, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 6, 2, 1, 1);

        grid_button = new QGridLayout();
        grid_button->setObjectName(QString::fromUtf8("grid_button"));

        gridLayout->addLayout(grid_button, 5, 2, 1, 1);

        LoginEdit = new QLineEdit(Welcome);
        LoginEdit->setObjectName(QString::fromUtf8("LoginEdit"));
        LoginEdit->setReadOnly(true);

        gridLayout->addWidget(LoginEdit, 3, 2, 1, 1);

        label_3 = new QLabel(Welcome);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_3, 3, 1, 1, 1);

        listView = new QListView(Welcome);
        listView->setObjectName(QString::fromUtf8("listView"));

        gridLayout->addWidget(listView, 2, 2, 1, 1);

        lineEdit_Cu_Us = new QLineEdit(Welcome);
        lineEdit_Cu_Us->setObjectName(QString::fromUtf8("lineEdit_Cu_Us"));
        lineEdit_Cu_Us->setReadOnly(true);

        gridLayout->addWidget(lineEdit_Cu_Us, 1, 2, 1, 1);

        label_4 = new QLabel(Welcome);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_4, 1, 1, 1, 1);

        widgetEditButton = new QWidget(Welcome);
        widgetEditButton->setObjectName(QString::fromUtf8("widgetEditButton"));
        verticalLayout_3 = new QVBoxLayout(widgetEditButton);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        AddButton = new QPushButton(widgetEditButton);
        AddButton->setObjectName(QString::fromUtf8("AddButton"));

        verticalLayout->addWidget(AddButton);

        EditButton = new QPushButton(widgetEditButton);
        EditButton->setObjectName(QString::fromUtf8("EditButton"));

        verticalLayout->addWidget(EditButton);

        DeleteButton = new QPushButton(widgetEditButton);
        DeleteButton->setObjectName(QString::fromUtf8("DeleteButton"));

        verticalLayout->addWidget(DeleteButton);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);


        verticalLayout_3->addLayout(verticalLayout);


        gridLayout->addWidget(widgetEditButton, 2, 3, 1, 1);


        verticalLayout_4->addLayout(gridLayout);


        retranslateUi(Welcome);

        QMetaObject::connectSlotsByName(Welcome);
    } // setupUi

    void retranslateUi(QWidget *Welcome)
    {
        Welcome->setWindowTitle(QApplication::translate("Welcome", "Form", 0, QApplication::UnicodeUTF8));
        PasswordEdit->setInputMask(QString());
        label->setText(QApplication::translate("Welcome", "Password:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Welcome", "Select user:", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Welcome", "Login:", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("Welcome", "Current user:", 0, QApplication::UnicodeUTF8));
        AddButton->setText(QApplication::translate("Welcome", "Add", 0, QApplication::UnicodeUTF8));
        EditButton->setText(QApplication::translate("Welcome", "Edit", 0, QApplication::UnicodeUTF8));
        DeleteButton->setText(QApplication::translate("Welcome", "Delete", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Welcome: public Ui_Welcome {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WELCOME_H
