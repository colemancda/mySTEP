#
# Generated by the NeXT Project Builder.
#
# NOTE: Do NOT change this file -- Project Builder maintains it.
#
# Put all of your customizations in files called Makefile.preamble
# and Makefile.postamble (both optional), and Makefile will include them.
#

NAME = Bundle

PROJECTVERSION = 2.8
PROJECT_TYPE = Loadable Bundle

CLASSES = BreakTest.m SetTestCase.m

HFILES = BreakTest.h SetTestCase.h

OTHERSRCS = Makefile.preamble Makefile Makefile.postamble m.template\
            h.template


MAKEFILEDIR = $(MAKEFILEPATH)/pb_makefiles
CODE_GEN_STYLE = DYNAMIC
MAKEFILE = bundle.make
NEXTSTEP_INSTALLDIR = $(HOME)/Library
WINDOWS_INSTALLDIR = /MyBundles
LIBS = 
DEBUG_LIBS = $(LIBS)
PROF_LIBS = $(LIBS)
BUNDLE_EXTENSION = bundle


FRAMEWORK_PATHS = -F/Local/Library/Frameworks
FRAMEWORKS = -framework Foundation -framework SenFoundation\
             -framework SenTestingKit


NEXTSTEP_OBJCPLUS_COMPILER = /usr/bin/cc
WINDOWS_OBJCPLUS_COMPILER = $(DEVDIR)/gcc
PDO_UNIX_OBJCPLUS_COMPILER = $(NEXTDEV_BIN)/gcc
NEXTSTEP_JAVA_COMPILER = /usr/bin/javac
WINDOWS_JAVA_COMPILER = $(JDKBINDIR)/javac.exe
PDO_UNIX_JAVA_COMPILER = $(NEXTDEV_BIN)/javac

include $(MAKEFILEDIR)/platform.make

-include Makefile.preamble

include $(MAKEFILEDIR)/$(MAKEFILE)

-include Makefile.postamble

-include Makefile.dependencies
