#-------------------------------------------------
#
# Project created by QtCreator 2012-02-28T20:30:57
#
#-------------------------------------------------

QT       += network sql svg webkit phonon testlib

TARGET = tst_browserttest
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app


SOURCES += tst_browserttest.cpp \
    ../Browser/browser/browser.cpp
DEFINES += SRCDIR=\\\"$$PWD/\\\"

HEADERS += \
    ../Browser/browser/browser.h

