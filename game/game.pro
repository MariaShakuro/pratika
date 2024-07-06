QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    mainwindow.cpp \
    stylehelper.cpp

HEADERS += \
    mainwindow.h \
    stylehelper.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    loading.qrc \
    recourses.qrc

DISTFILES += \
    ../resources/images/depositphotos_102412140-stock-illustration-group-of-wild-animal.jpg \
    ../resources/images/depositphotos_102537306-stock-illustration-ant-and-bee-with-white.jpg \
    ../resources/images/depositphotos_13270628-stock-illustration-3d-cartoon-bird.jpg \
    ../resources/images/depositphotos_13270993-stock-illustration-red-bear.jpg \
    ../resources/images/depositphotos_136889860-stock-photo-funny-cartoon-character.jpg \
    ../resources/images/depositphotos_223511466-stock-illustration-funny-cartoon-friends.jpg \
    ../resources/images/depositphotos_28808489-stock-photo-fun-giraffe-with-glasses.jpg \
    ../resources/images/depositphotos_37483085-stock-photo-fun-koala.jpg \
    ../resources/images/depositphotos_503220292-stock-photo-illustration-cute-cartoon-character-mask.jpg \
    ../resources/images/depositphotos_6631424-stock-illustration-fun-cat.jpg \
    ../resources/images/depositphotos_71499821-stock-photo-fun-cartoon-dog.jpg
