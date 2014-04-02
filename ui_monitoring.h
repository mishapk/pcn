/********************************************************************************
** Form generated from reading UI file 'monitoring.ui'
**
** Created: Sun Mar 9 14:59:50 2014
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MONITORING_H
#define UI_MONITORING_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGraphicsView>
#include <QtGui/QHeaderView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Monitoring
{
public:
    QGraphicsView *graphicsView;

    void setupUi(QWidget *Monitoring)
    {
        if (Monitoring->objectName().isEmpty())
            Monitoring->setObjectName(QString::fromUtf8("Monitoring"));
        Monitoring->resize(400, 300);
        graphicsView = new QGraphicsView(Monitoring);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(50, 30, 256, 192));

        retranslateUi(Monitoring);

        QMetaObject::connectSlotsByName(Monitoring);
    } // setupUi

    void retranslateUi(QWidget *Monitoring)
    {
        Monitoring->setWindowTitle(QApplication::translate("Monitoring", "Form", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Monitoring: public Ui_Monitoring {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MONITORING_H
