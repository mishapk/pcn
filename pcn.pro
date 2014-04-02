#-------------------------------------------------
#
# Project created by QtCreator 2014-03-09T14:00:50
#
#-------------------------------------------------

QT       += core gui sql

TARGET = pcn
TEMPLATE = app
TRANSLATIONS += pcn_en.ts \
    pcn_ru.ts \
    pcn_ua.ts


SOURCES += main.cpp\
        mainwindow.cpp \
    notify.cpp \
    welcome.cpp \
    monitoring.cpp \
    welcomeditdialog.cpp \
    events.cpp \
    eventcolorqsqlquerymodel.cpp

HEADERS  += mainwindow.h \
    notify.h \
    welcome.h \
    monitoring.h \
    initdb.h \
    welcomeditdialog.h \
    events.h \
    eventcolorqsqlquerymodel.h

FORMS    += mainwindow.ui \
    notify.ui \
    welcome.ui \
    monitoring.ui \
    welcomeditdialog.ui \
    events.ui
