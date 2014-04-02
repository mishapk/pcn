/********************************************************************************
** Form generated from reading UI file 'welcomeditdialog.ui'
**
** Created: Mon Mar 10 15:58:11 2014
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WELCOMEDITDIALOG_H
#define UI_WELCOMEDITDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QFormLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_WelcomEditDialog
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *LoginEdit;
    QLabel *label_2;
    QLineEdit *PasswordEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *WelcomEditDialog)
    {
        if (WelcomEditDialog->objectName().isEmpty())
            WelcomEditDialog->setObjectName(QString::fromUtf8("WelcomEditDialog"));
        WelcomEditDialog->resize(327, 119);
        verticalLayout = new QVBoxLayout(WelcomEditDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        label = new QLabel(WelcomEditDialog);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        LoginEdit = new QLineEdit(WelcomEditDialog);
        LoginEdit->setObjectName(QString::fromUtf8("LoginEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, LoginEdit);

        label_2 = new QLabel(WelcomEditDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        PasswordEdit = new QLineEdit(WelcomEditDialog);
        PasswordEdit->setObjectName(QString::fromUtf8("PasswordEdit"));

        formLayout->setWidget(1, QFormLayout::FieldRole, PasswordEdit);


        verticalLayout->addLayout(formLayout);

        buttonBox = new QDialogButtonBox(WelcomEditDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(WelcomEditDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), WelcomEditDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), WelcomEditDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(WelcomEditDialog);
    } // setupUi

    void retranslateUi(QDialog *WelcomEditDialog)
    {
        WelcomEditDialog->setWindowTitle(QApplication::translate("WelcomEditDialog", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("WelcomEditDialog", "User name:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("WelcomEditDialog", "Password:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class WelcomEditDialog: public Ui_WelcomEditDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WELCOMEDITDIALOG_H
