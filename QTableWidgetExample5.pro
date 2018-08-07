QT       += core gui
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TEMPLATE = app
QMAKE_CXXFLAGS += -std=c++17 -Wall -Wextra -Weffc++

unix {
  QMAKE_CXXFLAGS += -Werror
}

SOURCES += qtmain.cpp \
    qnumberedcolumn.cpp

HEADERS += \
    qnumberedcolumn.h
