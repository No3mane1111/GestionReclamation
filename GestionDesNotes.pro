QT       += core gui
QT       += sql
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    clientpage.cpp \
    envoyerreclamation.cpp \
    loginprofesseur.cpp \
    loginstudent.cpp \
    main.cpp \
    mainwindow.cpp \
    pageetudiants2.cpp \
    pageprofesseurs.cpp \
    platrformeetud.cpp \
    registerstudent.cpp \
    saisirlesnotes.cpp \
    validernotes.cpp

HEADERS += \
    clientpage.h \
    envoyerreclamation.h \
    loginprofesseur.h \
    loginstudent.h \
    mainwindow.h \
    pageetudiants2.h \
    pageprofesseurs.h \
    platrformeetud.h \
    registerstudent.h \
    saisirlesnotes.h \
    validernotes.h

FORMS += \
    clientpage.ui \
    envoyerreclamation.ui \
    loginprofesseur.ui \
    loginstudent.ui \
    mainwindow.ui \
    pageetudiants2.ui \
    pageprofesseurs.ui \
    platrformeetud.ui \
    registerstudent.ui \
    saisirlesnotes.ui \
    validernotes.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
