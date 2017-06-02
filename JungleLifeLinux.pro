#-------------------------------------------------
#
# Project created by QtCreator 2017-05-17T17:37:09
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = JungleLifeLinux
TEMPLATE = app


SOURCES += main.cpp\
        InterfaceWindow.cpp \
    Animal.cpp \
    AnimalFactory.cpp \
    AnimalObserver.cpp \
    AnimalObserverSubject.cpp \
    AnimalState.cpp \
    AnimalStateSubject.cpp \
    Carnivore.cpp \
    ChasingState.cpp \
    Configuration.cpp \
    DeadState.cpp \
    EatenState.cpp \
    Environment.cpp \
    EscapingState.cpp \
    GrazingState.cpp \
    Herbivore.cpp \
    HuntingState.cpp \
    MyItem.cpp \
    NewWorldDialog.cpp \
    organism.cpp \
    Phenotype.cpp \
    Plant.cpp \
    RestingState.cpp \
    Simulation.cpp \
    Spatial.cpp \
    Statistic.cpp \
    StatisticNames.cpp

HEADERS  += InterfaceWindow.h \
    Animal.h \
    AnimalFactory.h \
    AnimalObserver.h \
    AnimalObserverSubject.h \
    AnimalState.h \
    AnimalStateSubject.h \
    Carnivore.h \
    ChasingState.h \
    Configuration.h \
    DeadState.h \
    EatenState.h \
    Environment.h \
    EscapingState.h \
    GrazingState.h \
    Herbivore.h \
    HuntingState.h \
    NewWorldDialog.h \
    Phenotype.h \
    Plant.h \
    RestingState.h \
    Simulation.h \
    Spatial.h \
    Statistic.h \
    StatisticNames.h \
    ui_InterfaceWindow.h \
    ui_NewWorldDialog.h \
    MyItem.h \
    Organism.h

FORMS    += InterfaceWindow.ui \
    NewWorldDialog.ui

DISTFILES += \
    JungleLifeLinux.pro.user
