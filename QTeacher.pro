#-------------------------------------------------
#
# Project created by QtCreator 2015-02-28T23:05:56
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = QTeacher
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    database.cpp \
    qteacher.cpp

HEADERS  += mainwindow.h \
    database.h \
    qteacher.h

FORMS    += mainwindow.ui