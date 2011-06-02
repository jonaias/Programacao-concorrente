TARGET = ImageAdjuster
TEMPLATE = app
SOURCES += main.cpp

QMAKE_CXXFLAGS += -fopenmp
QMAKE_LFLAGS += -fopenmp
LIBS += -lgomp

DESTDIR = ../bin
