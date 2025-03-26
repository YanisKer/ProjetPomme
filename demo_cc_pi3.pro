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
    pageetalo2.cpp \
    pageetalo3.cpp \
    pageetalo4.cpp \
    pageetalo5.cpp \
    pageetaloretirer.cpp \
    pagemodeetpompe.cpp \
    pagenettoyage.cpp \
    pagepressee.cpp \
    ComSerie.cpp

HEADERS += \
    pageaccueil.h \
    pagedistribution.h \
    pageerreurselec.h \
    pageetalo.h \
    pageetalo2.h \
    pageetalo3.h \
    pageetalo4.h \
    pageetalo5.h \
    pageetaloretirer.h \
    pagemodeetpompe.h \
    pagenettoyage.h \
    pagepressee.h \
    ComSerie.h

FORMS += \
    pageaccueil.ui \
    pagedistribution.ui \
    pageerreurselec.ui \
    pageetalo.ui \
    pageetalo2.ui \
    pageetalo3.ui \
    pageetalo4.ui \
    pageetalo5.ui \
    pageetalonnageRetirer.ui \
    pageetaloretirer.ui \
    pagemodeetpompe.ui \
    pagenettoyage.ui \
    pagepressee.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
