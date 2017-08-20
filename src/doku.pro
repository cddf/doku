#-------------------------------------------------
#
# Project created by QtCreator 2017-08-20T17:25:45
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = doku
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    db/dbwrapper.cpp \
    personen/person.cpp \
    personen/klient.cpp \
    personen/mitarbeiter.cpp

HEADERS  += mainwindow.h \
    db/dbwrapper.h \
    personen/person.h \
    personen/klient.h \
    personen/mitarbeiter.h

FORMS    += mainwindow.ui

DISTFILES += \
    doku.pro.user
