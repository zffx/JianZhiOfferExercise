TEMPLATE = app
CONFIG += console
CONFIG -= qt
CONFIG += c++11

SOURCES += main.cpp \
    List.cpp \
    PrintReverseList.cpp \
    BinaryTree.cpp \
    ConstructBinaryTree.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    List.h \
    Declarations.h
    BinaryTree.h

