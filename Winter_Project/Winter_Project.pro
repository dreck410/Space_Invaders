#-------------------------------------------------
#
# Project created by QtCreator 2013-12-16T20:10:40
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Winter_Project
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    ingame.cpp \
    Timer.cpp \
    world.cpp \
    ship.cpp \
    gamelabel.cpp

HEADERS  += mainwindow.h \
    ingame.h \
    Timer.h \
    world.h \
    ship.h \
    gamelabel.h

FORMS    += mainwindow.ui \
    ingame.ui

RESOURCES += \
    ../resources.qrc
