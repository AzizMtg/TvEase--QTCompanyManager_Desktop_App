/********************************************************************************
** Form generated from reading UI file 'pmwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PMWINDOW_H
#define UI_PMWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PMWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QLineEdit *txtInput;
    QPushButton *btnSend;
    QTextEdit *txtChat;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *PMWindow)
    {
        if (PMWindow->objectName().isEmpty())
            PMWindow->setObjectName(QStringLiteral("PMWindow"));
        PMWindow->resize(687, 630);
        PMWindow->setStyleSheet(QStringLiteral("background-image: url(:/img/images/background.jpg);"));
        centralwidget = new QWidget(PMWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
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

        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setFamily(QStringLiteral("Neue Haas Grotesk Text Pro Extr"));
        font.setPointSize(9);
        label->setFont(font);
        label->setStyleSheet(QLatin1String("border : none ;\n"
"background-color: none;\n"
"color : #333770 ;\n"
"background-image: url();\n"
"\n"
"    "));

        gridLayout->addWidget(label, 2, 0, 1, 1);

        PMWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(PMWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 687, 26));
        PMWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(PMWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        PMWindow->setStatusBar(statusbar);

        retranslateUi(PMWindow);

        btnSend->setDefault(true);


        QMetaObject::connectSlotsByName(PMWindow);
    } // setupUi

    void retranslateUi(QMainWindow *PMWindow)
    {
        PMWindow->setWindowTitle(QApplication::translate("PMWindow", "MainWindow", Q_NULLPTR));
        btnSend->setText(QApplication::translate("PMWindow", "Send", Q_NULLPTR));
        label->setText(QApplication::translate("PMWindow", "Veuiller entrer votre message ici et cliquer sur envoyer", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class PMWindow: public Ui_PMWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PMWINDOW_H
