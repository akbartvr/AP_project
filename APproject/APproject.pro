QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    dialog_login.cpp \
    doctors.cpp \
    doctorsintroduction.cpp \
    doctorsschedule.cpp \
    learningsection.cpp \
    main.cpp \
    mainwindow.cpp \
    registeration_form.cpp

HEADERS += \
    dialog_login.h \
    doctors.h \
    doctorsintroduction.h \
    doctorsschedule.h \
    learningsection.h \
    mainwindow.h \
    registeration_form.h

FORMS += \
    dialog_login.ui \
    doctors.ui \
    doctorsintroduction.ui \
    doctorsschedule.ui \
    learningsection.ui \
    mainwindow.ui \
    register_form.ui \
    registeration_form.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
