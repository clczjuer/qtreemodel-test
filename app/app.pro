TEMPLATE = app
QT += widgets
SOURCES += main.cpp

INCLUDEPATH += \
    ../core \
    $$OUT_PWD/../core
LIBS += -L../core -lcore
PRE_TARGETDEPS += ../core/libcore.a
