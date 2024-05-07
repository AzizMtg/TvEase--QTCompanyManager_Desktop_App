QT       += core gui sql widgets serialport printsupport serialport
QT += charts network
QT += multimedia
QT       += core gui multimedia multimediawidgets
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets quickwidgets

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    abonnement.cpp \
    arduino.cpp \
    auditeur.cpp \
    codempass.cpp \
    confirmmotpass.cpp \
    connexion.cpp \
    cpersonnel.cpp \
    csecuritysd.cpp \
    ctravailler.cpp \
    forgetmotpass.cpp \
    main.cpp \
    mainwindow.cpp \
    nouvmotpass.cpp \
    nouvoncepass.cpp \
    personnelle.cpp \
    programme.cpp \
    publicite.cpp \
    securitestudio.cpp \
    singin.cpp \
    staperso.cpp \
    studio.cpp \
    travailler.cpp\
    cprogramme.cpp \
    statprog.cpp\
    cabonnement.cpp \
    ajtevent.cpp \
    chat.cpp \
    employearduino.cpp \
    espeak.cpp \
    lopiza.cpp \
    mesevents.cpp \
    pubarduino.cpp \
    testdialog.cpp \
    cpub.cpp \
    event.cpp \
    pubhisto.cpp \
    dialognickname.cpp \
    messenger.cpp \
    peer.cpp \
    pmwindow.cpp \
    roomwindow.cpp \
    dialogroom.cpp \
    dialogabout.cpp \
    abonnement_arduino.cpp\
    gamehub.cpp \
    parkings.cpp \
    statstudio.cpp \
    cstudio.cpp \
    gui/w.cpp \
    core/tile.cpp \
    core/board.cpp \
    core/game.cpp \
    gui/qgameboard.cpp \
    gui/qtile.cpp \
    gui/qresetbutton.cpp \
    core/observer.cpp \
    core/subject.cpp \
    gui/qgameoverwindow.cpp \
    ss.cpp\
    widget.cpp \
    field.cpp \
    tile.cpp \
    snake.cpp\
    alarme.cpp \
    audi.cpp \



HEADERS += \
    abonnement.h \
    arduino.h \
    auditeur.h \
    codempass.h \
    confirmmotpass.h \
    connexion.h \
    cpersonnel.h \
    csecuritysd.h \
    ctravailler.h \
    forgetmotpass.h \
    mainwindow.h \
    nouvmotpass.h \
    nouvoncepass.h \
    personnelle.h \
    programme.h \
    publicite.h \
    securitestudio.h \
    singin.h \
    staperso.h \
    studio.h \
    travailler.h \
    cprogramme.h \
    statprog.h\
     cabonnement.h \
    ajtevent.h \
    chat.h \
    employearduino.h \
    espeak.h \
    lopiza.h \
    mesevents.h \
    pubarduino.h \
    testdialog.h \
    cpub.h \
    event.h \
    pubhisto.h \
    dialognickname.h \
    messenger.h \
    peer.h \
    pmwindow.h \
    roomwindow.h \
    dialogroom.h \
    dialogabout.h \
    abonnement_arduino.h \
    gamehub.h \
    parkings.h \
    statstudio.h \
    cstudio.h \
    gui/w.h \
    core/tile.h \
    core/board.h \
    core/game.h \
    gui/qgameboard.h \
    gui/qtile.h \
    gui/qresetbutton.h \
    core/observer.h \
    core/subject.h \
    gui/qgameoverwindow.h \
    ss.h\
    widget.h \
    field.h\
    tile.h \
    snake.h\
    alarme.h \
    audi.h \




FORMS += \
    abonnement.ui \
    auditeur.ui \
    codempass.ui \
    confirmmotpass.ui \
    forgetmotpass.ui \
    mainwindow.ui \
    nouvmotpass.ui \
    nouvoncepass.ui \
    personnelle.ui \
    programme.ui \
    publicite.ui \
    securitestudio.ui \
    singin.ui \
    staperso.ui \
    studio.ui \
    travailler.ui\
    statprog.ui\
    ajtevent.ui \
    chat.ui \
    employearduino.ui \
    lopiza.ui \
    mesevents.ui \
    pubarduino.ui \
    testdialog.ui \
    event.ui \
    pubhisto.ui \
    dialognickname.ui \
    pmwindow.ui \
    roomwindow.ui \
    dialogroom.ui \
    dialogabout.ui\
   abonnement_arduino.ui \
    gamehub.ui \
    parkings.ui \
    statstudio.ui \
    alarme.ui \




# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    source.qrc \
    qml.qrc

LIBS += -L"C:/Program Files (x86)/eSpeak" -lespeak_sapi
LIBS += -lole32 -lsapi

DISTFILES += \
    images/565422.png
