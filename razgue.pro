TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    src/main.cpp \
    src/ccave.cpp

HEADERS += \
    src/platform.h \
    src/ccavetile.h \
    src/ccave.h

win32: LIBS += -L$$PWD/lib/ -lpdcurses
linux: LIBS += -lncurses
