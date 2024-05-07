# TvEase

## Aperçu

Cette application de Gestion de Chaîne de Télévision est une solution complète pour gérer différents aspects de l'exploitation d'une chaîne de télévision. De la gestion des abonnements à la coordination du personnel, cette application propose une gamme de fonctionnalités pour rationaliser les opérations.

## Fonctions Clés

### 1. Gestion des Abonnements
- Ajouter, supprimer et gérer les abonnements des téléspectateurs.
- Suivre le statut des abonnements et les paiements.

### 2. Gestion de la Publicité
- Planifier et gérer les publicités pour différents créneaux horaires.
- Suivre la performance publicitaire et les revenus.

### 3. Gestion des Programmes
- Programmer et organiser les émissions de télévision.
- Mettre à jour facilement les horaires des programmes au besoin.

### 4. Gestion du Personnel
- Gérer les rôles, les horaires et les tâches du personnel.
- Coordonner la communication et les activités du personnel.

### 5. Messagerie LAN
- Fonctionnalité de messagerie instantanée pour la communication interne.
- Facilite la communication rapide entre les membres de l'équipe.

### 6. Chatbot
- Chatbot alimenté par l'IA pour répondre aux questions courantes.
- Fournit une assistance aux téléspectateurs et aux membres du personnel.

### 7. Texte en Parole
- Convertit le contenu texte en audio parlé.
- Utile pour diffuser des annonces ou des mises à jour d'actualités.

### 8. Détection de Caméra
- Intégration avec des caméras à des fins de surveillance.

### 9. Mini-Jeux
- Jeux pour que le personnel puisse se divertir pendant les pauses.
- Aide à renforcer le moral et à se détendre.

### 10. Participation aux Événements
- Le personnel peut consulter et participer à des événements.
- Vérifiez qui d'autre participe et coordonnez les activités.

### 11. Intégration des Cartes
- Cartes intégrées pour des informations basées sur la localisation.
- Aide à la planification et à la coordination des événements ou des tâches.

## Fonctionnalités Supplémentaires

- [Listez ici toutes les autres fonctionnalités notables, telles que les analyses, les rapports, etc.]

## Installation

[Fournissez ici les instructions d'installation, y compris toutes les dépendances ou les étapes de configuration.]

## Utilisation

Veuiller changer dans le fichier connexion.cpp les coordonees de votre base de donnees, vous rencontrerez peut etre aussi une erreur concernant le 'ui_lobiza.h' si c'est le cas veuiller remplacer ce code dans 'ui_lobiza.h' : #ifndef UI_LOPIZA_H
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


## Contributeurs

*Chaima NAANAA
|| Med Aziz MAATOUG || Siwar CHAYADA || Khalil TRIKI || Khalil BEN CHAABENE || Anas YAHYAOUI*
ce projet a ete fait sous l'encadremement de madame Imen Trabelsi
## Licence

[Spécifiez la licence sous laquelle l'application est distribuée.]

## Support

contact 
mohamedaziz.maatoug@esprit.tn
