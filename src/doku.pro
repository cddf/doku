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
    personen/person.cpp \
    personen/klient.cpp \
    personen/mitarbeiter.cpp \
    doku/doku.cpp \
    modul.cpp \
    daten/dateihandling.cpp

HEADERS  += mainwindow.h \
    personen/person.h \
    personen/klient.h \
    personen/mitarbeiter.h \
    doku/doku.h \
    daten/dateihandling.h

FORMS    += mainwindow.ui

DISTFILES += \
    doku.pro.user
