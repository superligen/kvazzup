#-------------------------------------------------
#
# Project created by QtCreator 2016-04-07T09:05:00
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = HEVC_conference
TEMPLATE = app

INCLUDEPATH += src

SOURCES +=\
    src/callwindow.cpp \
    src/camerafilter.cpp \
    src/cameraframegrabber.cpp \
    src/displayfilter.cpp \
    src/filter.cpp \
    src/filtergraph.cpp \
    src/main.cpp \
    src/mainwindow.cpp \
    src/videowidget.cpp \
    src/kvazaarfilter.cpp

HEADERS  += \
    src/callwindow.h \
    src/camerafilter.h \
    src/cameraframegrabber.h \
    src/displayfilter.h \
    src/filter.h \
    src/filtergraph.h \
    src/mainwindow.h \
    src/videowidget.h \
    src/kvazaarfilter.h

FORMS    += \
    ui/callwindow.ui \
    ui/mainwindow.ui


QT+=multimedia
QT+=multimediawidgets

QMAKE_CXXFLAGS += -std=c++11

INCLUDEPATH += $$PWD/../kvazaar/src

win32: LIBS += -L$$PWD/../ -llibkvazaar.dll

INCLUDEPATH += $$PWD/../
DEPENDPATH += $$PWD/../
