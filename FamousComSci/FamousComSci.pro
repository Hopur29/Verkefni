QT += core
QT -= gui

TARGET = FamousComSci
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    menu.cpp \
    scientist.cpp \
    manager.cpp \
    data.cpp    \

HEADERS += \
    menu.h \
    scientist.h \
    manager.h \
    data.h    \

DISTFILES +=

