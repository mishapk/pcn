#############################################################################
# Makefile for building: pcn
# Generated by qmake (2.01a) (Qt 4.8.1) on: Tue Apr 8 11:47:40 2014
# Project:  pcn.pro
# Template: app
# Command: /home/mishapk/QtSDK/Desktop/Qt/4.8.1/gcc/bin/qmake -spec ../../../QtSDK/Desktop/Qt/4.8.1/gcc/mkspecs/linux-g++ -o Makefile pcn.pro
#############################################################################

####### Compiler, tools and options

CC            = gcc
CXX           = g++
DEFINES       = -DQT_NO_DEBUG -DQT_SQL_LIB -DQT_GUI_LIB -DQT_CORE_LIB -DQT_SHARED
CFLAGS        = -pipe -O2 -Wall -W -D_REENTRANT $(DEFINES)
CXXFLAGS      = -pipe -O2 -Wall -W -D_REENTRANT $(DEFINES)
INCPATH       = -I../../../QtSDK/Desktop/Qt/4.8.1/gcc/mkspecs/linux-g++ -I. -I../../../QtSDK/Desktop/Qt/4.8.1/gcc/include/QtCore -I../../../QtSDK/Desktop/Qt/4.8.1/gcc/include/QtGui -I../../../QtSDK/Desktop/Qt/4.8.1/gcc/include/QtSql -I../../../QtSDK/Desktop/Qt/4.8.1/gcc/include -I. -I.
LINK          = g++
LFLAGS        = -Wl,-O1 -Wl,-rpath,/home/mishapk/QtSDK/Desktop/Qt/4.8.1/gcc/lib
LIBS          = $(SUBLIBS)  -L/home/mishapk/QtSDK/Desktop/Qt/4.8.1/gcc/lib -lQtSql -L/home/mishapk/QtSDK/Desktop/Qt/4.8.1/gcc/lib -lQtGui -L/usr/X11R6/lib -lQtCore -lpthread 
AR            = ar cqs
RANLIB        = 
QMAKE         = /home/mishapk/QtSDK/Desktop/Qt/4.8.1/gcc/bin/qmake
TAR           = tar -cf
COMPRESS      = gzip -9f
COPY          = cp -f
SED           = sed
COPY_FILE     = $(COPY)
COPY_DIR      = $(COPY) -r
STRIP         = strip
INSTALL_FILE  = install -m 644 -p
INSTALL_DIR   = $(COPY_DIR)
INSTALL_PROGRAM = install -m 755 -p
DEL_FILE      = rm -f
SYMLINK       = ln -f -s
DEL_DIR       = rmdir
MOVE          = mv -f
CHK_DIR_EXISTS= test -d
MKDIR         = mkdir -p

####### Output directory

OBJECTS_DIR   = ./

####### Files

SOURCES       = main.cpp \
		mainwindow.cpp \
		notify.cpp \
		welcome.cpp \
		monitoring.cpp \
		welcomeditdialog.cpp \
		events.cpp \
		eventcolorqsqlquerymodel.cpp moc_mainwindow.cpp \
		moc_notify.cpp \
		moc_welcome.cpp \
		moc_monitoring.cpp \
		moc_welcomeditdialog.cpp \
		moc_events.cpp \
		moc_eventcolorqsqlquerymodel.cpp
OBJECTS       = main.o \
		mainwindow.o \
		notify.o \
		welcome.o \
		monitoring.o \
		welcomeditdialog.o \
		events.o \
		eventcolorqsqlquerymodel.o \
		moc_mainwindow.o \
		moc_notify.o \
		moc_welcome.o \
		moc_monitoring.o \
		moc_welcomeditdialog.o \
		moc_events.o \
		moc_eventcolorqsqlquerymodel.o
DIST          = ../../../QtSDK/Desktop/Qt/4.8.1/gcc/mkspecs/common/unix.conf \
		../../../QtSDK/Desktop/Qt/4.8.1/gcc/mkspecs/common/linux.conf \
		../../../QtSDK/Desktop/Qt/4.8.1/gcc/mkspecs/common/gcc-base.conf \
		../../../QtSDK/Desktop/Qt/4.8.1/gcc/mkspecs/common/gcc-base-unix.conf \
		../../../QtSDK/Desktop/Qt/4.8.1/gcc/mkspecs/common/g++-base.conf \
		../../../QtSDK/Desktop/Qt/4.8.1/gcc/mkspecs/common/g++-unix.conf \
		../../../QtSDK/Desktop/Qt/4.8.1/gcc/mkspecs/qconfig.pri \
		../../../QtSDK/Desktop/Qt/4.8.1/gcc/mkspecs/modules/qt_webkit_version.pri \
		../../../QtSDK/Desktop/Qt/4.8.1/gcc/mkspecs/features/qt_functions.prf \
		../../../QtSDK/Desktop/Qt/4.8.1/gcc/mkspecs/features/qt_config.prf \
		../../../QtSDK/Desktop/Qt/4.8.1/gcc/mkspecs/features/exclusive_builds.prf \
		../../../QtSDK/Desktop/Qt/4.8.1/gcc/mkspecs/features/default_pre.prf \
		../../../QtSDK/Desktop/Qt/4.8.1/gcc/mkspecs/features/release.prf \
		../../../QtSDK/Desktop/Qt/4.8.1/gcc/mkspecs/features/default_post.prf \
		../../../QtSDK/Desktop/Qt/4.8.1/gcc/mkspecs/features/unix/gdb_dwarf_index.prf \
		../../../QtSDK/Desktop/Qt/4.8.1/gcc/mkspecs/features/warn_on.prf \
		../../../QtSDK/Desktop/Qt/4.8.1/gcc/mkspecs/features/qt.prf \
		../../../QtSDK/Desktop/Qt/4.8.1/gcc/mkspecs/features/unix/thread.prf \
		../../../QtSDK/Desktop/Qt/4.8.1/gcc/mkspecs/features/moc.prf \
		../../../QtSDK/Desktop/Qt/4.8.1/gcc/mkspecs/features/resources.prf \
		../../../QtSDK/Desktop/Qt/4.8.1/gcc/mkspecs/features/uic.prf \
		../../../QtSDK/Desktop/Qt/4.8.1/gcc/mkspecs/features/yacc.prf \
		../../../QtSDK/Desktop/Qt/4.8.1/gcc/mkspecs/features/lex.prf \
		../../../QtSDK/Desktop/Qt/4.8.1/gcc/mkspecs/features/include_source_dir.prf \
		pcn.pro
QMAKE_TARGET  = pcn
DESTDIR       = 
TARGET        = pcn

first: all
####### Implicit rules

.SUFFIXES: .o .c .cpp .cc .cxx .C

.cpp.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cc.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cxx.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.C.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.c.o:
	$(CC) -c $(CFLAGS) $(INCPATH) -o "$@" "$<"

####### Build rules

all: Makefile $(TARGET)

$(TARGET): ui_mainwindow.h ui_notify.h ui_welcome.h ui_monitoring.h ui_welcomeditdialog.h ui_events.h $(OBJECTS)  
	$(LINK) $(LFLAGS) -o $(TARGET) $(OBJECTS) $(OBJCOMP) $(LIBS)

Makefile: pcn.pro  ../../../QtSDK/Desktop/Qt/4.8.1/gcc/mkspecs/linux-g++/qmake.conf ../../../QtSDK/Desktop/Qt/4.8.1/gcc/mkspecs/common/unix.conf \
		../../../QtSDK/Desktop/Qt/4.8.1/gcc/mkspecs/common/linux.conf \
		../../../QtSDK/Desktop/Qt/4.8.1/gcc/mkspecs/common/gcc-base.conf \
		../../../QtSDK/Desktop/Qt/4.8.1/gcc/mkspecs/common/gcc-base-unix.conf \
		../../../QtSDK/Desktop/Qt/4.8.1/gcc/mkspecs/common/g++-base.conf \
		../../../QtSDK/Desktop/Qt/4.8.1/gcc/mkspecs/common/g++-unix.conf \
		../../../QtSDK/Desktop/Qt/4.8.1/gcc/mkspecs/qconfig.pri \
		../../../QtSDK/Desktop/Qt/4.8.1/gcc/mkspecs/modules/qt_webkit_version.pri \
		../../../QtSDK/Desktop/Qt/4.8.1/gcc/mkspecs/features/qt_functions.prf \
		../../../QtSDK/Desktop/Qt/4.8.1/gcc/mkspecs/features/qt_config.prf \
		../../../QtSDK/Desktop/Qt/4.8.1/gcc/mkspecs/features/exclusive_builds.prf \
		../../../QtSDK/Desktop/Qt/4.8.1/gcc/mkspecs/features/default_pre.prf \
		../../../QtSDK/Desktop/Qt/4.8.1/gcc/mkspecs/features/release.prf \
		../../../QtSDK/Desktop/Qt/4.8.1/gcc/mkspecs/features/default_post.prf \
		../../../QtSDK/Desktop/Qt/4.8.1/gcc/mkspecs/features/unix/gdb_dwarf_index.prf \
		../../../QtSDK/Desktop/Qt/4.8.1/gcc/mkspecs/features/warn_on.prf \
		../../../QtSDK/Desktop/Qt/4.8.1/gcc/mkspecs/features/qt.prf \
		../../../QtSDK/Desktop/Qt/4.8.1/gcc/mkspecs/features/unix/thread.prf \
		../../../QtSDK/Desktop/Qt/4.8.1/gcc/mkspecs/features/moc.prf \
		../../../QtSDK/Desktop/Qt/4.8.1/gcc/mkspecs/features/resources.prf \
		../../../QtSDK/Desktop/Qt/4.8.1/gcc/mkspecs/features/uic.prf \
		../../../QtSDK/Desktop/Qt/4.8.1/gcc/mkspecs/features/yacc.prf \
		../../../QtSDK/Desktop/Qt/4.8.1/gcc/mkspecs/features/lex.prf \
		../../../QtSDK/Desktop/Qt/4.8.1/gcc/mkspecs/features/include_source_dir.prf \
		/home/mishapk/QtSDK/Desktop/Qt/4.8.1/gcc/lib/libQtSql.prl \
		/home/mishapk/QtSDK/Desktop/Qt/4.8.1/gcc/lib/libQtCore.prl \
		/home/mishapk/QtSDK/Desktop/Qt/4.8.1/gcc/lib/libQtGui.prl
	$(QMAKE) -spec ../../../QtSDK/Desktop/Qt/4.8.1/gcc/mkspecs/linux-g++ -o Makefile pcn.pro
../../../QtSDK/Desktop/Qt/4.8.1/gcc/mkspecs/common/unix.conf:
../../../QtSDK/Desktop/Qt/4.8.1/gcc/mkspecs/common/linux.conf:
../../../QtSDK/Desktop/Qt/4.8.1/gcc/mkspecs/common/gcc-base.conf:
../../../QtSDK/Desktop/Qt/4.8.1/gcc/mkspecs/common/gcc-base-unix.conf:
../../../QtSDK/Desktop/Qt/4.8.1/gcc/mkspecs/common/g++-base.conf:
../../../QtSDK/Desktop/Qt/4.8.1/gcc/mkspecs/common/g++-unix.conf:
../../../QtSDK/Desktop/Qt/4.8.1/gcc/mkspecs/qconfig.pri:
../../../QtSDK/Desktop/Qt/4.8.1/gcc/mkspecs/modules/qt_webkit_version.pri:
../../../QtSDK/Desktop/Qt/4.8.1/gcc/mkspecs/features/qt_functions.prf:
../../../QtSDK/Desktop/Qt/4.8.1/gcc/mkspecs/features/qt_config.prf:
../../../QtSDK/Desktop/Qt/4.8.1/gcc/mkspecs/features/exclusive_builds.prf:
../../../QtSDK/Desktop/Qt/4.8.1/gcc/mkspecs/features/default_pre.prf:
../../../QtSDK/Desktop/Qt/4.8.1/gcc/mkspecs/features/release.prf:
../../../QtSDK/Desktop/Qt/4.8.1/gcc/mkspecs/features/default_post.prf:
../../../QtSDK/Desktop/Qt/4.8.1/gcc/mkspecs/features/unix/gdb_dwarf_index.prf:
../../../QtSDK/Desktop/Qt/4.8.1/gcc/mkspecs/features/warn_on.prf:
../../../QtSDK/Desktop/Qt/4.8.1/gcc/mkspecs/features/qt.prf:
../../../QtSDK/Desktop/Qt/4.8.1/gcc/mkspecs/features/unix/thread.prf:
../../../QtSDK/Desktop/Qt/4.8.1/gcc/mkspecs/features/moc.prf:
../../../QtSDK/Desktop/Qt/4.8.1/gcc/mkspecs/features/resources.prf:
../../../QtSDK/Desktop/Qt/4.8.1/gcc/mkspecs/features/uic.prf:
../../../QtSDK/Desktop/Qt/4.8.1/gcc/mkspecs/features/yacc.prf:
../../../QtSDK/Desktop/Qt/4.8.1/gcc/mkspecs/features/lex.prf:
../../../QtSDK/Desktop/Qt/4.8.1/gcc/mkspecs/features/include_source_dir.prf:
/home/mishapk/QtSDK/Desktop/Qt/4.8.1/gcc/lib/libQtSql.prl:
/home/mishapk/QtSDK/Desktop/Qt/4.8.1/gcc/lib/libQtCore.prl:
/home/mishapk/QtSDK/Desktop/Qt/4.8.1/gcc/lib/libQtGui.prl:
qmake:  FORCE
	@$(QMAKE) -spec ../../../QtSDK/Desktop/Qt/4.8.1/gcc/mkspecs/linux-g++ -o Makefile pcn.pro

dist: 
	@$(CHK_DIR_EXISTS) .tmp/pcn1.0.0 || $(MKDIR) .tmp/pcn1.0.0 
	$(COPY_FILE) --parents $(SOURCES) $(DIST) .tmp/pcn1.0.0/ && $(COPY_FILE) --parents mainwindow.h notify.h welcome.h monitoring.h initdb.h welcomeditdialog.h events.h eventcolorqsqlquerymodel.h .tmp/pcn1.0.0/ && $(COPY_FILE) --parents main.cpp mainwindow.cpp notify.cpp welcome.cpp monitoring.cpp welcomeditdialog.cpp events.cpp eventcolorqsqlquerymodel.cpp .tmp/pcn1.0.0/ && $(COPY_FILE) --parents mainwindow.ui notify.ui welcome.ui monitoring.ui welcomeditdialog.ui events.ui .tmp/pcn1.0.0/ && $(COPY_FILE) --parents pcn_en.ts pcn_ru.ts pcn_ua.ts .tmp/pcn1.0.0/ && (cd `dirname .tmp/pcn1.0.0` && $(TAR) pcn1.0.0.tar pcn1.0.0 && $(COMPRESS) pcn1.0.0.tar) && $(MOVE) `dirname .tmp/pcn1.0.0`/pcn1.0.0.tar.gz . && $(DEL_FILE) -r .tmp/pcn1.0.0


clean:compiler_clean 
	-$(DEL_FILE) $(OBJECTS)
	-$(DEL_FILE) *~ core *.core


####### Sub-libraries

distclean: clean
	-$(DEL_FILE) $(TARGET) 
	-$(DEL_FILE) Makefile


check: first

mocclean: compiler_moc_header_clean compiler_moc_source_clean

mocables: compiler_moc_header_make_all compiler_moc_source_make_all

compiler_moc_header_make_all: moc_mainwindow.cpp moc_notify.cpp moc_welcome.cpp moc_monitoring.cpp moc_welcomeditdialog.cpp moc_events.cpp moc_eventcolorqsqlquerymodel.cpp
compiler_moc_header_clean:
	-$(DEL_FILE) moc_mainwindow.cpp moc_notify.cpp moc_welcome.cpp moc_monitoring.cpp moc_welcomeditdialog.cpp moc_events.cpp moc_eventcolorqsqlquerymodel.cpp
moc_mainwindow.cpp: notify.h \
		welcome.h \
		welcomeditdialog.h \
		monitoring.h \
		events.h \
		eventcolorqsqlquerymodel.h \
		mainwindow.h
	/home/mishapk/QtSDK/Desktop/Qt/4.8.1/gcc/bin/moc $(DEFINES) $(INCPATH) mainwindow.h -o moc_mainwindow.cpp

moc_notify.cpp: notify.h
	/home/mishapk/QtSDK/Desktop/Qt/4.8.1/gcc/bin/moc $(DEFINES) $(INCPATH) notify.h -o moc_notify.cpp

moc_welcome.cpp: welcomeditdialog.h \
		welcome.h
	/home/mishapk/QtSDK/Desktop/Qt/4.8.1/gcc/bin/moc $(DEFINES) $(INCPATH) welcome.h -o moc_welcome.cpp

moc_monitoring.cpp: monitoring.h
	/home/mishapk/QtSDK/Desktop/Qt/4.8.1/gcc/bin/moc $(DEFINES) $(INCPATH) monitoring.h -o moc_monitoring.cpp

moc_welcomeditdialog.cpp: welcomeditdialog.h
	/home/mishapk/QtSDK/Desktop/Qt/4.8.1/gcc/bin/moc $(DEFINES) $(INCPATH) welcomeditdialog.h -o moc_welcomeditdialog.cpp

moc_events.cpp: eventcolorqsqlquerymodel.h \
		events.h
	/home/mishapk/QtSDK/Desktop/Qt/4.8.1/gcc/bin/moc $(DEFINES) $(INCPATH) events.h -o moc_events.cpp

moc_eventcolorqsqlquerymodel.cpp: eventcolorqsqlquerymodel.h
	/home/mishapk/QtSDK/Desktop/Qt/4.8.1/gcc/bin/moc $(DEFINES) $(INCPATH) eventcolorqsqlquerymodel.h -o moc_eventcolorqsqlquerymodel.cpp

compiler_rcc_make_all:
compiler_rcc_clean:
compiler_image_collection_make_all: qmake_image_collection.cpp
compiler_image_collection_clean:
	-$(DEL_FILE) qmake_image_collection.cpp
compiler_moc_source_make_all:
compiler_moc_source_clean:
compiler_uic_make_all: ui_mainwindow.h ui_notify.h ui_welcome.h ui_monitoring.h ui_welcomeditdialog.h ui_events.h
compiler_uic_clean:
	-$(DEL_FILE) ui_mainwindow.h ui_notify.h ui_welcome.h ui_monitoring.h ui_welcomeditdialog.h ui_events.h
ui_mainwindow.h: mainwindow.ui
	/home/mishapk/QtSDK/Desktop/Qt/4.8.1/gcc/bin/uic mainwindow.ui -o ui_mainwindow.h

ui_notify.h: notify.ui
	/home/mishapk/QtSDK/Desktop/Qt/4.8.1/gcc/bin/uic notify.ui -o ui_notify.h

ui_welcome.h: welcome.ui
	/home/mishapk/QtSDK/Desktop/Qt/4.8.1/gcc/bin/uic welcome.ui -o ui_welcome.h

ui_monitoring.h: monitoring.ui
	/home/mishapk/QtSDK/Desktop/Qt/4.8.1/gcc/bin/uic monitoring.ui -o ui_monitoring.h

ui_welcomeditdialog.h: welcomeditdialog.ui
	/home/mishapk/QtSDK/Desktop/Qt/4.8.1/gcc/bin/uic welcomeditdialog.ui -o ui_welcomeditdialog.h

ui_events.h: events.ui
	/home/mishapk/QtSDK/Desktop/Qt/4.8.1/gcc/bin/uic events.ui -o ui_events.h

compiler_yacc_decl_make_all:
compiler_yacc_decl_clean:
compiler_yacc_impl_make_all:
compiler_yacc_impl_clean:
compiler_lex_make_all:
compiler_lex_clean:
compiler_clean: compiler_moc_header_clean compiler_uic_clean 

####### Compile

main.o: main.cpp mainwindow.h \
		notify.h \
		welcome.h \
		welcomeditdialog.h \
		monitoring.h \
		events.h \
		eventcolorqsqlquerymodel.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o main.o main.cpp

mainwindow.o: mainwindow.cpp mainwindow.h \
		notify.h \
		welcome.h \
		welcomeditdialog.h \
		monitoring.h \
		events.h \
		eventcolorqsqlquerymodel.h \
		ui_mainwindow.h \
		initdb.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o mainwindow.o mainwindow.cpp

notify.o: notify.cpp notify.h \
		ui_notify.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o notify.o notify.cpp

welcome.o: welcome.cpp welcome.h \
		welcomeditdialog.h \
		ui_welcome.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o welcome.o welcome.cpp

monitoring.o: monitoring.cpp monitoring.h \
		ui_monitoring.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o monitoring.o monitoring.cpp

welcomeditdialog.o: welcomeditdialog.cpp welcomeditdialog.h \
		ui_welcomeditdialog.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o welcomeditdialog.o welcomeditdialog.cpp

events.o: events.cpp events.h \
		eventcolorqsqlquerymodel.h \
		ui_events.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o events.o events.cpp

eventcolorqsqlquerymodel.o: eventcolorqsqlquerymodel.cpp eventcolorqsqlquerymodel.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o eventcolorqsqlquerymodel.o eventcolorqsqlquerymodel.cpp

moc_mainwindow.o: moc_mainwindow.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_mainwindow.o moc_mainwindow.cpp

moc_notify.o: moc_notify.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_notify.o moc_notify.cpp

moc_welcome.o: moc_welcome.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_welcome.o moc_welcome.cpp

moc_monitoring.o: moc_monitoring.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_monitoring.o moc_monitoring.cpp

moc_welcomeditdialog.o: moc_welcomeditdialog.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_welcomeditdialog.o moc_welcomeditdialog.cpp

moc_events.o: moc_events.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_events.o moc_events.cpp

moc_eventcolorqsqlquerymodel.o: moc_eventcolorqsqlquerymodel.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_eventcolorqsqlquerymodel.o moc_eventcolorqsqlquerymodel.cpp

####### Install

install:   FORCE

uninstall:   FORCE

FORCE:

