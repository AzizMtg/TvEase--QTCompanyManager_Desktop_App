TvEase!
============

Overview
-------

TvEase is a comprehensive solution designed to manage various aspects of operating a television channel. This application offers a wide range of features to streamline your operations, from handling subscriptions to coordinating staff, and scheduling TV shows to managing advertisements.

Key Features
------------
![signin](https://github.com/AzizMtg/TvEase--QTCompanyManager_Desktop_App/assets/131389390/20efef31-d3ae-4c5f-b900-20880fe1795b)

### Subscription Management

* Add, remove, and manage viewer subscriptions
* Track subscription status and payments

### Advertising Management

* Schedule and manage advertisements for different time slots
* Monitor ad performance and revenue

### Program Management

* Schedule and organize TV shows
* Easily update program schedules as needed

### Staff Management

* Manage roles, schedules, and tasks of the staff
* Coordinate communication and activities among staff members

  ![manag](https://github.com/AzizMtg/TvEase--QTCompanyManager_Desktop_App/assets/131389390/3a5e898e-0fa7-4058-a136-a01b14a77290)


### LAN Messaging

* Instant messaging functionality for internal communication
* Facilitates quick communication between team members

  ![lan](https://github.com/AzizMtg/TvEase--QTCompanyManager_Desktop_App/assets/131389390/06ffec1d-97e9-4dc1-89ef-81b3c75bf3dc)


### Chatbot

* AI-powered chatbot to answer common questions
* Provides assistance to viewers and staff members

  ![chatbot](https://github.com/AzizMtg/TvEase--QTCompanyManager_Desktop_App/assets/131389390/9f1a6d8b-26ce-4843-a763-b4ae73d912fb)


### Text-to-Speech

* Converts text content into spoken audio
* Useful for broadcasting announcements or news updates

### Camera Detection

* Integration with cameras for surveillance purposes

### Mini-Games

* Games for staff to enjoy during breaks
* Helps boost morale and relaxation

  ![game](https://github.com/AzizMtg/TvEase--QTCompanyManager_Desktop_App/assets/131389390/d41bb79b-14a9-4a71-8307-b289398f42ba)


### Event Participation

* Staff can view and participate in events
* Check who else is attending and coordinate activities

### Map Integration

* Integrated maps for location-based information
* Helps in planning and coordinating events or tasks

TvEase is a versatile tool that simplifies television channel operations, enhances productivity, and improves viewer experience.



## Usage

* Change the database credentials in connexion.cpp to match your database setup.
* If you encounter an error related to ui_lobiza.h, replace the code in ui_lobiza.h with the following:
```bash
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

class Ui_Lopiza {
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

    void setupUi(QMainWindow *MainWindow) {
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
    }

    void retranslateUi(QMainWindow *MainWindow) {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "TvEase LAN Messenger", Q_NULLPTR));
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
    }
};

namespace Ui { class Lopiza: public Ui_Lopiza {}; } 

QT_END_NAMESPACE

#endif // UI_LOPIZA_H

```
    
## Authors

- [@Aziz Mtg](https://github.com/AzizMtg)
- [@chaima naanaa](https://github.com/chaimanaanaa)
- [@Khalil Triki](https://github.com/khaliltriki02)
- [@Khalil Ben Chaabene](https://github.com/5Obz)
- [@Siwar Chayada](https://github.com/si-war)






## 🔗 Link for Video Showcase : 
[![Youtube-Kanal](https://img.shields.io/badge/YouTube-FF0000?style=for-the-badge&logo=youtube&logoColor=white)](https://www.youtube.com/watch?v=jxq2mOY_DpM)
