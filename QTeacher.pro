#-------------------------------------------------
#
# Project created by QtCreator 2015-02-28T23:05:56
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets sql

TARGET = QTeacher
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    word.cpp \
    qteacherapp.cpp \
    dbcontroller.cpp \
    userinterface.cpp \
    wordhelper.cpp \
    csvreader.cpp \
    session.cpp

HEADERS  += mainwindow.h \
    word.h \
    schema.h \
    qteacherapp.h \
    dbcontroller.h \
    userinterface.h \
    wordhelper.h \
    csvreader.h \
    session.h \
    config.h

FORMS    += mainwindow.ui

DISTFILES += \
    schema.sql
