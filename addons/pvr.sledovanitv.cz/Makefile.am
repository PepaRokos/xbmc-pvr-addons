#
# Makefile for the PVR IPTV Simple add-on for XBMC PVR
#
# See the README for copyright information and
# how to reach the author.
#

ADDONBINNAME    = XBMC_Sledovanitv.cz
ADDONNAME       = pvr.sledovanitv.cz
LIBNAME         = libpvrsledovanitv-addon
lib_LTLIBRARIES = libpvrsledovanitv-addon.la

LIBS            = @abs_top_srcdir@/lib/jsoncpp/libjsoncpp.la

include ../Makefile.include.am

INCLUDES+=-I@abs_top_srcdir@/lib/jsoncpp/include

libpvrsledovanitv_addon_la_SOURCES = src/client.cpp \
                                    src/PVRIptvData.cpp \
                                    src/apimanager.cpp
libpvrsledovanitv_addon_la_LDFLAGS = $(ZLIB_LIBS) @TARGET_LDFLAGS@


