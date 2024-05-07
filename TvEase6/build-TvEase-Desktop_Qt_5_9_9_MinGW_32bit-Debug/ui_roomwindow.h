/********************************************************************************
** Form generated from reading UI file 'roomwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ROOMWINDOW_H
#define UI_ROOMWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RoomWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QTextEdit *txtChat;
    QListWidget *listUsers;
    QLineEdit *txtInput;
    QPushButton *btnSend;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *RoomWindow)
    {
        if (RoomWindow->objectName().isEmpty())
            RoomWindow->setObjectName(QStringLiteral("RoomWindow"));
        RoomWindow->resize(809, 723);
        RoomWindow->setStyleSheet(QStringLiteral("background-image: url(:/img/images/background.jpg);"));
        centralwidget = new QWidget(RoomWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        txtChat = new QTextEdit(centralwidget);
        txtChat->setObjectName(QStringLiteral("txtChat"));
        txtChat->setStyleSheet(QLatin1String("border : none ;\n"
"background-color: none;\n"
"color : #333770 ;\n"
"background-image: url();\n"
"\n"
"    "));
        txtChat->setReadOnly(true);

        gridLayout->addWidget(txtChat, 0, 0, 1, 1);

        listUsers = new QListWidget(centralwidget);
        listUsers->setObjectName(QStringLiteral("listUsers"));
        listUsers->setMaximumSize(QSize(200, 16777215));
        listUsers->setStyleSheet(QLatin1String("border : none ;\n"
"background-color: none;\n"
"color : #333770 ;\n"
"background-image: url();\n"
"\n"
"    "));

        gridLayout->addWidget(listUsers, 0, 1, 1, 1);

        txtInput = new QLineEdit(centralwidget);
        txtInput->setObjectName(QStringLiteral("txtInput"));
        txtInput->setStyleSheet(QLatin1String("border : none ;\n"
"background-color: none;\n"
"color : #333770 ;\n"
"background-image: url();\n"
"\n"
"    "));

        gridLayout->addWidget(txtInput, 1, 0, 1, 1);

        btnSend = new QPushButton(centralwidget);
        btnSend->setObjectName(QStringLiteral("btnSend"));
        btnSend->setAutoDefault(true);

        gridLayout->addWidget(btnSend, 1, 1, 1, 1);

        RoomWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(RoomWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 809, 26));
        RoomWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(RoomWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        RoomWindow->setStatusBar(statusbar);

        retranslateUi(RoomWindow);

        btnSend->setDefault(true);


        QMetaObject::connectSlotsByName(RoomWindow);
    } // setupUi

    void retranslateUi(QMainWindow *RoomWindow)
    {
        RoomWindow->setWindowTitle(QApplication::translate("RoomWindow", "MainWindow", Q_NULLPTR));
        btnSend->setText(QApplication::translate("RoomWindow", "Send", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class RoomWindow: public Ui_RoomWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ROOMWINDOW_H
