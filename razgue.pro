TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    src/main.cpp

HEADERS += \
    src/platform.h

win32: LIBS += -L$$PWD/lib/ -lpdcurses
