QT += core
QT -= gui

CONFIG += c++11

TARGET = Skilaverkefni1
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    readinfo.cpp \
    database.cpp

HEADERS += \
    readinfo.h \
    database.h
