TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    calctax.cpp

HEADERS += \
    head.h

LIBS += -lboost_unit_test_framework
