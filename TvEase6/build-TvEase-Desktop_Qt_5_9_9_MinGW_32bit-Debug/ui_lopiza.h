#ifndef UI_LOPIZA_H
#define UI_LOPIZA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Lopiza
{
public:
    QAction *actionContents;
    QAction *actionAbout;
    QAction *actionExit;
    QAction *actionOptions;
    QAction *actionJoin;
    QAction *actionList;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QLabel *lblWelcome;
    QListWidget *listUsers;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menuHelp;
    QMenu *menuRoom;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(296, 606);
        actionContents = new QAction(MainWindow);
        actionContents->setObjectName(QStringLiteral("actionContents"));
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        actionOptions = new QAction(MainWindow);
        actionOptions->setObjectName(QStringLiteral("actionOptions"));
        actionJoin = new QAction(MainWindow);
        actionJoin->setObjectName(QStringLiteral("actionJoin"));
        actionList = new QAction(MainWindow);
        actionList->setObjectName(QStringLiteral("actionList"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        lblWelcome = new QLabel(centralWidget);
        lblWelcome->setObjectName(QStringLiteral("lblWelcome"));

        verticalLayout->addWidget(lblWelcome);

        listUsers = new QListWidget(centralWidget);
        listUsers->setObjectName(QStringLiteral("listUsers"));

        verticalLayout->addWidget(listUsers);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 296, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuEdit = new QMenu(menuBar);
        menuEdit->setObjectName(QStringLiteral("menuEdit"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        menuRoom = new QMenu(menuBar);
        menuRoom->setObjectName(QStringLiteral("menuRoom"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuEdit->menuAction());
        menuBar->addAction(menuRoom->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addSeparator();
        menuFile->addAction(actionExit);
        menuEdit->addAction(actionOptions);
        menuHelp->addSeparator();
        menuHelp->addAction(actionAbout);
        menuRoom->addAction(actionJoin);
        menuRoom->addAction(actionList);

        retranslateUi(MainWindow);
        QObject::connect(menuBar, SIGNAL(triggered(QAction*)), MainWindow, SLOT(onMenu(QAction*)));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "TvEase Lan Messenger", Q_NULLPTR));
        actionContents->setText(QApplication::translate("MainWindow", "Contents", Q_NULLPTR));
        actionAbout->setText(QApplication::translate("MainWindow", "About", Q_NULLPTR));
        actionExit->setText(QApplication::translate("MainWindow", "Exit", Q_NULLPTR));
        actionOptions->setText(QApplication::translate("MainWindow", "Options", Q_NULLPTR));
        actionJoin->setText(QApplication::translate("MainWindow", "Join", Q_NULLPTR));
        actionList->setText(QApplication::translate("MainWindow", "List", Q_NULLPTR));
        lblWelcome->setText(QApplication::translate("MainWindow", "Welcome", Q_NULLPTR));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", Q_NULLPTR));
        menuEdit->setTitle(QApplication::translate("MainWindow", "Edit", Q_NULLPTR));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", Q_NULLPTR));
        menuRoom->setTitle(QApplication::translate("MainWindow", "Room", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Lopiza: public Ui_Lopiza {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOPIZA_H
