TEMPLATE = app
CONFIG += console
CONFIG -= qt
CONFIG += c++11

SOURCES += main.cpp \
    list.cpp \
    printReverseList.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    list.h \
    declarations.h

