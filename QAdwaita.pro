#-------------------------------------------------
#
# Project created by QtCreator 2015-01-12T13:23:15
#
#-------------------------------------------------

QT       += core gui

TARGET = QAdwaita
TEMPLATE = lib
CONFIG += plugin

DESTDIR = $$[QT_INSTALL_PLUGINS]/styles

SOURCES += qadwaitaplugin.cpp

HEADERS += qadwaitaplugin.h
DISTFILES += QAdwaita.json

unix {
    target.path = /usr/lib
    INSTALLS += target
}
