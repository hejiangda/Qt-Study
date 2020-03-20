TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        main.cpp

unix:!macx: LIBS += -L$$PWD/../build-lib001-Desktop_Qt_5_14_0_GCC_64bit-Debug/ -llib001

INCLUDEPATH += $$PWD/../lib001
DEPENDPATH += $$PWD/../lib001
