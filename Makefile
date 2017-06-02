#############################################################################
# Makefile for building: JungleLifeLinux
# Generated by qmake (3.0) (Qt 5.7.1)
# Project:  JungleLifeLinux.pro
# Template: app
# Command: /usr/lib/x86_64-linux-gnu/qt5/bin/qmake -o Makefile JungleLifeLinux.pro
#############################################################################

MAKEFILE      = Makefile

####### Compiler, tools and options

CC            = gcc
CXX           = g++
DEFINES       = -DQT_NO_DEBUG -DQT_WIDGETS_LIB -DQT_GUI_LIB -DQT_CORE_LIB
CFLAGS        = -m64 -pipe -O2 -Wall -W -D_REENTRANT -fPIC $(DEFINES)
CXXFLAGS      = -m64 -pipe -O2 -Wall -W -D_REENTRANT -fPIC $(DEFINES)
INCPATH       = -I. -isystem /usr/include/x86_64-linux-gnu/qt5 -isystem /usr/include/x86_64-linux-gnu/qt5/QtWidgets -isystem /usr/include/x86_64-linux-gnu/qt5/QtGui -isystem /usr/include/x86_64-linux-gnu/qt5/QtCore -I. -I. -I/usr/lib/x86_64-linux-gnu/qt5/mkspecs/linux-g++-64
QMAKE         = /usr/lib/x86_64-linux-gnu/qt5/bin/qmake
DEL_FILE      = rm -f
CHK_DIR_EXISTS= test -d
MKDIR         = mkdir -p
COPY          = cp -f
COPY_FILE     = cp -f
COPY_DIR      = cp -f -R
INSTALL_FILE  = install -m 644 -p
INSTALL_PROGRAM = install -m 755 -p
INSTALL_DIR   = cp -f -R
DEL_FILE      = rm -f
SYMLINK       = ln -f -s
DEL_DIR       = rmdir
MOVE          = mv -f
TAR           = tar -cf
COMPRESS      = gzip -9f
DISTNAME      = JungleLifeLinux1.0.0
DISTDIR = /home/hinadira/JungleLifeLinux/.tmp/JungleLifeLinux1.0.0
LINK          = g++
LFLAGS        = -m64 -Wl,-O1
LIBS          = $(SUBLIBS) -L/usr/X11R6/lib64 -lQt5Widgets -lQt5Gui -lQt5Core -lGL -lpthread 
AR            = ar cqs
RANLIB        = 
SED           = sed
STRIP         = strip

####### Output directory

OBJECTS_DIR   = ./

####### Files

SOURCES       = main.cpp \
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
		StatisticNames.cpp moc_InterfaceWindow.cpp \
		moc_AnimalObserver.cpp \
		moc_NewWorldDialog.cpp \
		moc_Simulation.cpp \
		moc_Spatial.cpp
OBJECTS       = main.o \
		InterfaceWindow.o \
		Animal.o \
		AnimalFactory.o \
		AnimalObserver.o \
		AnimalObserverSubject.o \
		AnimalState.o \
		AnimalStateSubject.o \
		Carnivore.o \
		ChasingState.o \
		Configuration.o \
		DeadState.o \
		EatenState.o \
		Environment.o \
		EscapingState.o \
		GrazingState.o \
		Herbivore.o \
		HuntingState.o \
		MyItem.o \
		NewWorldDialog.o \
		organism.o \
		Phenotype.o \
		Plant.o \
		RestingState.o \
		Simulation.o \
		Spatial.o \
		Statistic.o \
		StatisticNames.o \
		moc_InterfaceWindow.o \
		moc_AnimalObserver.o \
		moc_NewWorldDialog.o \
		moc_Simulation.o \
		moc_Spatial.o
DIST          = JungleLifeLinux.pro.user \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/spec_pre.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/common/unix.conf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/common/linux.conf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/common/sanitize.conf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/common/gcc-base.conf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/common/gcc-base-unix.conf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/common/g++-base.conf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/common/g++-unix.conf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/qconfig.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_bootstrap_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_concurrent.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_concurrent_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_core.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_core_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_dbus.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_dbus_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_eglfs_device_lib_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_eglfs_kms_support_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_gui.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_gui_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_network.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_network_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_opengl.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_opengl_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_openglextensions.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_openglextensions_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_platformsupport_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_printsupport.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_printsupport_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_sql.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_sql_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_testlib.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_testlib_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_widgets.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_widgets_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_xcb_qpa_lib_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_xml.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_xml_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/qt_functions.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/qt_config.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/linux-g++-64/qmake.conf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/spec_post.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/exclusive_builds.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/toolchain.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/default_pre.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/resolve_config.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/default_post.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/warn_on.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/qt.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/resources.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/moc.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/unix/opengl.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/uic.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/unix/thread.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/file_copies.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/testcase_targets.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/exceptions.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/yacc.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/lex.prf \
		JungleLifeLinux.pro InterfaceWindow.h \
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
		Organism.h main.cpp \
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
QMAKE_TARGET  = JungleLifeLinux
DESTDIR       = 
TARGET        = JungleLifeLinux


first: all
####### Build rules

$(TARGET): ui_InterfaceWindow.h ui_NewWorldDialog.h $(OBJECTS)  
	$(LINK) $(LFLAGS) -o $(TARGET) $(OBJECTS) $(OBJCOMP) $(LIBS)

Makefile: JungleLifeLinux.pro /usr/lib/x86_64-linux-gnu/qt5/mkspecs/linux-g++-64/qmake.conf /usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/spec_pre.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/common/unix.conf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/common/linux.conf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/common/sanitize.conf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/common/gcc-base.conf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/common/gcc-base-unix.conf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/common/g++-base.conf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/common/g++-unix.conf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/qconfig.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_bootstrap_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_concurrent.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_concurrent_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_core.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_core_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_dbus.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_dbus_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_eglfs_device_lib_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_eglfs_kms_support_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_gui.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_gui_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_network.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_network_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_opengl.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_opengl_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_openglextensions.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_openglextensions_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_platformsupport_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_printsupport.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_printsupport_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_sql.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_sql_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_testlib.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_testlib_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_widgets.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_widgets_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_xcb_qpa_lib_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_xml.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_xml_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/qt_functions.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/qt_config.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/linux-g++-64/qmake.conf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/spec_post.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/exclusive_builds.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/toolchain.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/default_pre.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/resolve_config.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/default_post.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/warn_on.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/qt.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/resources.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/moc.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/unix/opengl.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/uic.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/unix/thread.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/file_copies.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/testcase_targets.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/exceptions.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/yacc.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/lex.prf \
		JungleLifeLinux.pro \
		/usr/lib/x86_64-linux-gnu/libQt5Widgets.prl \
		/usr/lib/x86_64-linux-gnu/libQt5Gui.prl \
		/usr/lib/x86_64-linux-gnu/libQt5Core.prl
	$(QMAKE) -o Makefile JungleLifeLinux.pro
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/spec_pre.prf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/common/unix.conf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/common/linux.conf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/common/sanitize.conf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/common/gcc-base.conf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/common/gcc-base-unix.conf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/common/g++-base.conf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/common/g++-unix.conf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/qconfig.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_bootstrap_private.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_concurrent.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_concurrent_private.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_core.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_core_private.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_dbus.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_dbus_private.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_eglfs_device_lib_private.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_eglfs_kms_support_private.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_gui.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_gui_private.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_network.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_network_private.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_opengl.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_opengl_private.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_openglextensions.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_openglextensions_private.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_platformsupport_private.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_printsupport.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_printsupport_private.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_sql.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_sql_private.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_testlib.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_testlib_private.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_widgets.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_widgets_private.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_xcb_qpa_lib_private.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_xml.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_xml_private.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/qt_functions.prf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/qt_config.prf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/linux-g++-64/qmake.conf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/spec_post.prf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/exclusive_builds.prf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/toolchain.prf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/default_pre.prf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/resolve_config.prf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/default_post.prf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/warn_on.prf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/qt.prf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/resources.prf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/moc.prf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/unix/opengl.prf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/uic.prf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/unix/thread.prf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/file_copies.prf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/testcase_targets.prf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/exceptions.prf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/yacc.prf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/lex.prf:
JungleLifeLinux.pro:
/usr/lib/x86_64-linux-gnu/libQt5Widgets.prl:
/usr/lib/x86_64-linux-gnu/libQt5Gui.prl:
/usr/lib/x86_64-linux-gnu/libQt5Core.prl:
qmake: FORCE
	@$(QMAKE) -o Makefile JungleLifeLinux.pro

qmake_all: FORCE


all: Makefile $(TARGET)

dist: distdir FORCE
	(cd `dirname $(DISTDIR)` && $(TAR) $(DISTNAME).tar $(DISTNAME) && $(COMPRESS) $(DISTNAME).tar) && $(MOVE) `dirname $(DISTDIR)`/$(DISTNAME).tar.gz . && $(DEL_FILE) -r $(DISTDIR)

distdir: FORCE
	@test -d $(DISTDIR) || mkdir -p $(DISTDIR)
	$(COPY_FILE) --parents $(DIST) $(DISTDIR)/
	$(COPY_FILE) --parents InterfaceWindow.h Animal.h AnimalFactory.h AnimalObserver.h AnimalObserverSubject.h AnimalState.h AnimalStateSubject.h Carnivore.h ChasingState.h Configuration.h DeadState.h EatenState.h Environment.h EscapingState.h GrazingState.h Herbivore.h HuntingState.h NewWorldDialog.h Phenotype.h Plant.h RestingState.h Simulation.h Spatial.h Statistic.h StatisticNames.h ui_InterfaceWindow.h ui_NewWorldDialog.h MyItem.h Organism.h $(DISTDIR)/
	$(COPY_FILE) --parents main.cpp InterfaceWindow.cpp Animal.cpp AnimalFactory.cpp AnimalObserver.cpp AnimalObserverSubject.cpp AnimalState.cpp AnimalStateSubject.cpp Carnivore.cpp ChasingState.cpp Configuration.cpp DeadState.cpp EatenState.cpp Environment.cpp EscapingState.cpp GrazingState.cpp Herbivore.cpp HuntingState.cpp MyItem.cpp NewWorldDialog.cpp organism.cpp Phenotype.cpp Plant.cpp RestingState.cpp Simulation.cpp Spatial.cpp Statistic.cpp StatisticNames.cpp $(DISTDIR)/
	$(COPY_FILE) --parents InterfaceWindow.ui NewWorldDialog.ui $(DISTDIR)/


clean: compiler_clean 
	-$(DEL_FILE) $(OBJECTS)
	-$(DEL_FILE) *~ core *.core


distclean: clean 
	-$(DEL_FILE) $(TARGET) 
	-$(DEL_FILE) .qmake.stash
	-$(DEL_FILE) Makefile


####### Sub-libraries

mocclean: compiler_moc_header_clean compiler_moc_source_clean

mocables: compiler_moc_header_make_all compiler_moc_source_make_all

check: first

benchmark: first

compiler_rcc_make_all:
compiler_rcc_clean:
compiler_moc_header_make_all: moc_InterfaceWindow.cpp moc_AnimalObserver.cpp moc_NewWorldDialog.cpp moc_Simulation.cpp moc_Spatial.cpp
compiler_moc_header_clean:
	-$(DEL_FILE) moc_InterfaceWindow.cpp moc_AnimalObserver.cpp moc_NewWorldDialog.cpp moc_Simulation.cpp moc_Spatial.cpp
moc_InterfaceWindow.cpp: MyItem.h \
		Simulation.h \
		Environment.h \
		Plant.h \
		Organism.h \
		Spatial.h \
		Carnivore.h \
		Animal.h \
		Phenotype.h \
		AnimalState.h \
		AnimalStateSubject.h \
		Statistic.h \
		AnimalObserverSubject.h \
		Herbivore.h \
		EatenState.h \
		AnimalFactory.h \
		InterfaceWindow.h \
		/usr/lib/x86_64-linux-gnu/qt5/bin/moc
	/usr/lib/x86_64-linux-gnu/qt5/bin/moc $(DEFINES) -I/usr/lib/x86_64-linux-gnu/qt5/mkspecs/linux-g++-64 -I/home/hinadira/JungleLifeLinux -I/usr/include/x86_64-linux-gnu/qt5 -I/usr/include/x86_64-linux-gnu/qt5/QtWidgets -I/usr/include/x86_64-linux-gnu/qt5/QtGui -I/usr/include/x86_64-linux-gnu/qt5/QtCore -I/usr/include/c++/6 -I/usr/include/x86_64-linux-gnu/c++/6 -I/usr/include/c++/6/backward -I/usr/lib/gcc/x86_64-linux-gnu/6/include -I/usr/local/include -I/usr/lib/gcc/x86_64-linux-gnu/6/include-fixed -I/usr/include/x86_64-linux-gnu -I/usr/include InterfaceWindow.h -o moc_InterfaceWindow.cpp

moc_AnimalObserver.cpp: AnimalObserverSubject.h \
		Phenotype.h \
		Statistic.h \
		AnimalObserver.h \
		/usr/lib/x86_64-linux-gnu/qt5/bin/moc
	/usr/lib/x86_64-linux-gnu/qt5/bin/moc $(DEFINES) -I/usr/lib/x86_64-linux-gnu/qt5/mkspecs/linux-g++-64 -I/home/hinadira/JungleLifeLinux -I/usr/include/x86_64-linux-gnu/qt5 -I/usr/include/x86_64-linux-gnu/qt5/QtWidgets -I/usr/include/x86_64-linux-gnu/qt5/QtGui -I/usr/include/x86_64-linux-gnu/qt5/QtCore -I/usr/include/c++/6 -I/usr/include/x86_64-linux-gnu/c++/6 -I/usr/include/c++/6/backward -I/usr/lib/gcc/x86_64-linux-gnu/6/include -I/usr/local/include -I/usr/lib/gcc/x86_64-linux-gnu/6/include-fixed -I/usr/include/x86_64-linux-gnu -I/usr/include AnimalObserver.h -o moc_AnimalObserver.cpp

moc_NewWorldDialog.cpp: NewWorldDialog.h \
		/usr/lib/x86_64-linux-gnu/qt5/bin/moc
	/usr/lib/x86_64-linux-gnu/qt5/bin/moc $(DEFINES) -I/usr/lib/x86_64-linux-gnu/qt5/mkspecs/linux-g++-64 -I/home/hinadira/JungleLifeLinux -I/usr/include/x86_64-linux-gnu/qt5 -I/usr/include/x86_64-linux-gnu/qt5/QtWidgets -I/usr/include/x86_64-linux-gnu/qt5/QtGui -I/usr/include/x86_64-linux-gnu/qt5/QtCore -I/usr/include/c++/6 -I/usr/include/x86_64-linux-gnu/c++/6 -I/usr/include/c++/6/backward -I/usr/lib/gcc/x86_64-linux-gnu/6/include -I/usr/local/include -I/usr/lib/gcc/x86_64-linux-gnu/6/include-fixed -I/usr/include/x86_64-linux-gnu -I/usr/include NewWorldDialog.h -o moc_NewWorldDialog.cpp

moc_Simulation.cpp: Environment.h \
		Plant.h \
		Organism.h \
		Spatial.h \
		Carnivore.h \
		Animal.h \
		Phenotype.h \
		AnimalState.h \
		AnimalStateSubject.h \
		Statistic.h \
		AnimalObserverSubject.h \
		Herbivore.h \
		EatenState.h \
		AnimalFactory.h \
		Simulation.h \
		/usr/lib/x86_64-linux-gnu/qt5/bin/moc
	/usr/lib/x86_64-linux-gnu/qt5/bin/moc $(DEFINES) -I/usr/lib/x86_64-linux-gnu/qt5/mkspecs/linux-g++-64 -I/home/hinadira/JungleLifeLinux -I/usr/include/x86_64-linux-gnu/qt5 -I/usr/include/x86_64-linux-gnu/qt5/QtWidgets -I/usr/include/x86_64-linux-gnu/qt5/QtGui -I/usr/include/x86_64-linux-gnu/qt5/QtCore -I/usr/include/c++/6 -I/usr/include/x86_64-linux-gnu/c++/6 -I/usr/include/c++/6/backward -I/usr/lib/gcc/x86_64-linux-gnu/6/include -I/usr/local/include -I/usr/lib/gcc/x86_64-linux-gnu/6/include-fixed -I/usr/include/x86_64-linux-gnu -I/usr/include Simulation.h -o moc_Simulation.cpp

moc_Spatial.cpp: Spatial.h \
		/usr/lib/x86_64-linux-gnu/qt5/bin/moc
	/usr/lib/x86_64-linux-gnu/qt5/bin/moc $(DEFINES) -I/usr/lib/x86_64-linux-gnu/qt5/mkspecs/linux-g++-64 -I/home/hinadira/JungleLifeLinux -I/usr/include/x86_64-linux-gnu/qt5 -I/usr/include/x86_64-linux-gnu/qt5/QtWidgets -I/usr/include/x86_64-linux-gnu/qt5/QtGui -I/usr/include/x86_64-linux-gnu/qt5/QtCore -I/usr/include/c++/6 -I/usr/include/x86_64-linux-gnu/c++/6 -I/usr/include/c++/6/backward -I/usr/lib/gcc/x86_64-linux-gnu/6/include -I/usr/local/include -I/usr/lib/gcc/x86_64-linux-gnu/6/include-fixed -I/usr/include/x86_64-linux-gnu -I/usr/include Spatial.h -o moc_Spatial.cpp

compiler_moc_source_make_all:
compiler_moc_source_clean:
compiler_uic_make_all: ui_InterfaceWindow.h ui_NewWorldDialog.h
compiler_uic_clean:
	-$(DEL_FILE) ui_InterfaceWindow.h ui_NewWorldDialog.h
ui_InterfaceWindow.h: InterfaceWindow.ui \
		/usr/lib/x86_64-linux-gnu/qt5/bin/uic
	/usr/lib/x86_64-linux-gnu/qt5/bin/uic InterfaceWindow.ui -o ui_InterfaceWindow.h

ui_NewWorldDialog.h: NewWorldDialog.ui \
		/usr/lib/x86_64-linux-gnu/qt5/bin/uic
	/usr/lib/x86_64-linux-gnu/qt5/bin/uic NewWorldDialog.ui -o ui_NewWorldDialog.h

compiler_yacc_decl_make_all:
compiler_yacc_decl_clean:
compiler_yacc_impl_make_all:
compiler_yacc_impl_clean:
compiler_lex_make_all:
compiler_lex_clean:
compiler_clean: compiler_moc_header_clean compiler_uic_clean 

####### Compile

main.o: main.cpp InterfaceWindow.h \
		MyItem.h \
		Simulation.h \
		Environment.h \
		Plant.h \
		Organism.h \
		Spatial.h \
		Carnivore.h \
		Animal.h \
		Phenotype.h \
		AnimalState.h \
		AnimalStateSubject.h \
		Statistic.h \
		AnimalObserverSubject.h \
		Herbivore.h \
		EatenState.h \
		AnimalFactory.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o main.o main.cpp

InterfaceWindow.o: InterfaceWindow.cpp InterfaceWindow.h \
		MyItem.h \
		Simulation.h \
		Environment.h \
		Plant.h \
		Organism.h \
		Spatial.h \
		Carnivore.h \
		Animal.h \
		Phenotype.h \
		AnimalState.h \
		AnimalStateSubject.h \
		Statistic.h \
		AnimalObserverSubject.h \
		Herbivore.h \
		EatenState.h \
		AnimalFactory.h \
		ui_InterfaceWindow.h \
		NewWorldDialog.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o InterfaceWindow.o InterfaceWindow.cpp

Animal.o: Animal.cpp Animal.h \
		Organism.h \
		Spatial.h \
		Phenotype.h \
		AnimalState.h \
		AnimalStateSubject.h \
		Statistic.h \
		AnimalObserverSubject.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o Animal.o Animal.cpp

AnimalFactory.o: AnimalFactory.cpp AnimalFactory.h \
		Phenotype.h \
		Carnivore.h \
		Animal.h \
		Organism.h \
		Spatial.h \
		AnimalState.h \
		AnimalStateSubject.h \
		Statistic.h \
		AnimalObserverSubject.h \
		Herbivore.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o AnimalFactory.o AnimalFactory.cpp

AnimalObserver.o: AnimalObserver.cpp AnimalObserver.h \
		AnimalObserverSubject.h \
		Phenotype.h \
		Statistic.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o AnimalObserver.o AnimalObserver.cpp

AnimalObserverSubject.o: AnimalObserverSubject.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o AnimalObserverSubject.o AnimalObserverSubject.cpp

AnimalState.o: AnimalState.cpp AnimalState.h \
		AnimalStateSubject.h \
		Phenotype.h \
		Statistic.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o AnimalState.o AnimalState.cpp

AnimalStateSubject.o: AnimalStateSubject.cpp AnimalStateSubject.h \
		Phenotype.h \
		Statistic.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o AnimalStateSubject.o AnimalStateSubject.cpp

Carnivore.o: Carnivore.cpp Carnivore.h \
		Animal.h \
		Organism.h \
		Spatial.h \
		Phenotype.h \
		AnimalState.h \
		AnimalStateSubject.h \
		Statistic.h \
		AnimalObserverSubject.h \
		HuntingState.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o Carnivore.o Carnivore.cpp

ChasingState.o: ChasingState.cpp ChasingState.h \
		AnimalState.h \
		AnimalStateSubject.h \
		Phenotype.h \
		Statistic.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o ChasingState.o ChasingState.cpp

Configuration.o: Configuration.cpp Configuration.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o Configuration.o Configuration.cpp

DeadState.o: DeadState.cpp DeadState.h \
		AnimalState.h \
		AnimalStateSubject.h \
		Phenotype.h \
		Statistic.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o DeadState.o DeadState.cpp

EatenState.o: EatenState.cpp EatenState.h \
		AnimalState.h \
		AnimalStateSubject.h \
		Phenotype.h \
		Statistic.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o EatenState.o EatenState.cpp

Environment.o: Environment.cpp Environment.h \
		Plant.h \
		Organism.h \
		Spatial.h \
		Carnivore.h \
		Animal.h \
		Phenotype.h \
		AnimalState.h \
		AnimalStateSubject.h \
		Statistic.h \
		AnimalObserverSubject.h \
		Herbivore.h \
		EatenState.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o Environment.o Environment.cpp

EscapingState.o: EscapingState.cpp EscapingState.h \
		AnimalState.h \
		AnimalStateSubject.h \
		Phenotype.h \
		Statistic.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o EscapingState.o EscapingState.cpp

GrazingState.o: GrazingState.cpp GrazingState.h \
		AnimalState.h \
		AnimalStateSubject.h \
		Phenotype.h \
		Statistic.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o GrazingState.o GrazingState.cpp

Herbivore.o: Herbivore.cpp Herbivore.h \
		Animal.h \
		Organism.h \
		Spatial.h \
		Phenotype.h \
		AnimalState.h \
		AnimalStateSubject.h \
		Statistic.h \
		AnimalObserverSubject.h \
		GrazingState.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o Herbivore.o Herbivore.cpp

HuntingState.o: HuntingState.cpp HuntingState.h \
		AnimalState.h \
		AnimalStateSubject.h \
		Phenotype.h \
		Statistic.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o HuntingState.o HuntingState.cpp

MyItem.o: MyItem.cpp MyItem.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o MyItem.o MyItem.cpp

NewWorldDialog.o: NewWorldDialog.cpp NewWorldDialog.h \
		ui_NewWorldDialog.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o NewWorldDialog.o NewWorldDialog.cpp

organism.o: organism.cpp Organism.h \
		Spatial.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o organism.o organism.cpp

Phenotype.o: Phenotype.cpp Phenotype.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o Phenotype.o Phenotype.cpp

Plant.o: Plant.cpp Plant.h \
		Organism.h \
		Spatial.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o Plant.o Plant.cpp

RestingState.o: RestingState.cpp RestingState.h \
		AnimalState.h \
		AnimalStateSubject.h \
		Phenotype.h \
		Statistic.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o RestingState.o RestingState.cpp

Simulation.o: Simulation.cpp Simulation.h \
		Environment.h \
		Plant.h \
		Organism.h \
		Spatial.h \
		Carnivore.h \
		Animal.h \
		Phenotype.h \
		AnimalState.h \
		AnimalStateSubject.h \
		Statistic.h \
		AnimalObserverSubject.h \
		Herbivore.h \
		EatenState.h \
		AnimalFactory.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o Simulation.o Simulation.cpp

Spatial.o: Spatial.cpp Spatial.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o Spatial.o Spatial.cpp

Statistic.o: Statistic.cpp Statistic.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o Statistic.o Statistic.cpp

StatisticNames.o: StatisticNames.cpp StatisticNames.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o StatisticNames.o StatisticNames.cpp

moc_InterfaceWindow.o: moc_InterfaceWindow.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_InterfaceWindow.o moc_InterfaceWindow.cpp

moc_AnimalObserver.o: moc_AnimalObserver.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_AnimalObserver.o moc_AnimalObserver.cpp

moc_NewWorldDialog.o: moc_NewWorldDialog.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_NewWorldDialog.o moc_NewWorldDialog.cpp

moc_Simulation.o: moc_Simulation.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_Simulation.o moc_Simulation.cpp

moc_Spatial.o: moc_Spatial.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_Spatial.o moc_Spatial.cpp

####### Install

install:  FORCE

uninstall:  FORCE

FORCE:

