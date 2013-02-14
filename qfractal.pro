#-------------------------------------------------
#
# Project created by QtCreator 2013-01-27T18:56:53
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = qfractal
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    backgroundworker.cpp

HEADERS  += mainwindow.h \
    backgroundworker.h

FORMS    += mainwindow.ui
