#-------------------------------------------------
#
# Project created by QtCreator 2018-04-09T15:08:05
#
#-------------------------------------------------

QT       += core gui serialport opengl

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets printsupport

TARGET = qt-app
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        mainwindow.cpp \
    window_data.cpp \
    window_graph.cpp \
    window_opengl.cpp \
    window_settings.cpp \
    qcustomplot.cpp



HEADERS += \
        mainwindow.h \
    window_data.h \
    window_graph.h \
    window_opengl.h \
    window_settings.h \
    qcustomplot.h


FORMS += \
        mainwindow.ui \
    window_data.ui \
    window_graph.ui \
    window_opengl.ui \
    window_settings.ui

