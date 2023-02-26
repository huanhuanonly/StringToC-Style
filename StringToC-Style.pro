QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17
QMAKE_CXXFLAGS += /source-charset:utf-8 /execution-charset:utf-8

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    mainwindow.h

FORMS += \
    mainwindow.ui

TRANSLATIONS += \
    StringToC-Style_zh_CN.ts
CONFIG += lrelease
CONFIG += embed_translations

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

#可执行文件名称
TARGET = StringToC-Style
 
#版本信息
VERSION = 1.0.0
 
#图标
RC_ICONS = StringToCStyle.ico
 
#公司名称
QMAKE_TARGET_COMPANY = "LoveRain"
 
#产品名称
QMAKE_TARGET_PRODUCT = "StringToC-Style"
 
#文件说明
QMAKE_TARGET_DESCRIPTION = "One-click conversion of string to C style"
 
#版权信息
QMAKE_TARGET_COPYRIGHT = "Copyright (c) 2022-2023 LoveRain Yanghuanhuan 3347484963@qq.com.  All rights reserved."
 
#中文（简体）
RC_LANG = 0x0004
