QT += core

CONFIG += c++11

TARGET = SimpleLogger
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    logger.cpp

HEADERS += \
    logger.h
