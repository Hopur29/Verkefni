QT += core
QT -= gui

TARGET = FamousComSci
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    menu.cpp \
    scientist.cpp \
    manager.cpp

HEADERS += \
    menu.h \
    scientist.h \
    manager.h

DISTFILES +=

