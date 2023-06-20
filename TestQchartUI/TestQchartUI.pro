QT       += core gui charts

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    form.cpp \
    form_2.cpp \
    form_3.cpp \
    main.cpp \
    testmaininterface.cpp

HEADERS += \
    form.h \
    form_2.h \
    form_3.h \
    testmaininterface.h

FORMS += \
    form.ui \
    form_2.ui \
    form_3.ui \
    testmaininterface.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
