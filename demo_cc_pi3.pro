QT       += core gui serialport 
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    pageaccueil.cpp \
    pagedistribution.cpp \
    pageerreurselec.cpp \
    pageetalo.cpp \
    pagemodeetpompe.cpp \
    pagenettoyage.cpp \
    pagepressee.cpp \
    ComSerie.cpp

HEADERS += \
    pageaccueil.h \
    pagedistribution.h \
    pageerreurselec.h \
    pageetalo.h \
    pagemodeetpompe.h \
    pagenettoyage.h \
    pagepressee.h \
    ComSerie.h

FORMS += \
    pageaccueil.ui \
    pagedistribution.ui \
    pageerreurselec.ui \
    pageetalonnageRetirer.ui \
    pagemodeetpompe.ui \
    pagenettoyage.ui \
    pagepressee.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
