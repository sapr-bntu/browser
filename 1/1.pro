#-------------------------------------------------
#
# Project created by QtCreator 2012-02-19T15:13:42
#
#-------------------------------------------------

QT       += testlib

QT       -= gui

TARGET = test_myclass
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app

HEADERS       = MyClass.h
SOURCES += test_myclass.cpp
DEFINES += SRCDIR=\\\"$$PWD/\\\"
CONFIG       += qtestlib
win32:TARGET  = ../TestLib
