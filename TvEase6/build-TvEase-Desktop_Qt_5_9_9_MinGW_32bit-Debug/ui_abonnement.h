/********************************************************************************
** Form generated from reading UI file 'abonnement.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABONNEMENT_H
#define UI_ABONNEMENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_abonnement
{
public:
    QGroupBox *groupBox;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_30;
    QPushButton *pushButton_31;
    QPushButton *pushButton_32;
    QPushButton *pushButton_33;
    QPushButton *pushButton_34;
    QPushButton *pushButton_35;
    QPushButton *pushButton_36;
    QLabel *label;
    QLabel *label_34;
    QLabel *label_26;
    QLabel *label_33;
    QLabel *label_35;
    QLabel *label_32;
    QLabel *label_36;
    QGroupBox *groupBox_7;
    QLabel *label_30;
    QLabel *label_31;
    QLineEdit *lineEdit_role;
    QLineEdit *lineEdit_nomprenom;
    QPushButton *pushButton_parametre_compte;
    QGroupBox *groupBox_8;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGroupBox *groupBox_2;
    QTableView *tableView_liste_abonnement;
    QLineEdit *lineEdit_recherche;
    QPushButton *pushButton_recherche_abonnement;
    QComboBox *comboBoxFiltre;
    QPushButton *pushButton_2;
    QWidget *tab_3;
    QGroupBox *groupBox_3;
    QComboBox *comboBox_type_abonnement;
    QLabel *label_3;
    QDateEdit *dateEdit_debut;
    QDateEdit *dateEdit_expiration;
    QLabel *label_4;
    QLabel *label_5;
    QPushButton *pushButton_Gnerer;
    QPushButton *pushButton_4;
    QLineEdit *lineEdit_id_auditeur;
    QLabel *label_12;
    QLabel *label_13;
    QLineEdit *lineEdit_numero_abonnement;
    QGroupBox *groupBox_6;
    QLineEdit *lineEdit_jours;
    QPushButton *pushButton_estimer;
    QLabel *label_14;
    QLineEdit *lineEdit_prix;
    QComboBox *comboBox_reduction;
    QPushButton *pushButton_promo;
    QLineEdit *lineEdit_promo;
    QLineEdit *lineEdit_code;
    QPushButton *swipe;
    QPushButton *coupon;
    QPushButton *pushButton;
    QWidget *tab_4;
    QGroupBox *groupBox_4;
    QLineEdit *lineEdit_numero_c;
    QLabel *label_6;
    QComboBox *comboBox_type_c;
    QLabel *label_7;
    QDateEdit *dateEdit_debut_c;
    QDateEdit *dateEdit_expiration_c;
    QLabel *label_8;
    QLabel *label_9;
    QPushButton *pushButton_5;
    QLineEdit *lineEdit_id_abonnement_c;
    QLabel *label_11;
    QPushButton *pushButton_8;
    QPushButton *pushButton_qr;
    QPushButton *lcd;
    QWidget *tab_2;
    QGroupBox *groupBox_5;
    QLineEdit *lineEdit_supprimer_abonnement;
    QLabel *label_10;
    QPushButton *pushButton_supprimer_abonnement;
    QPushButton *pushButton_7;
    QWidget *tab_5;
    QFrame *verticalFrame;
    QVBoxLayout *verticalLayout_2;
    QPushButton *actualiser;
    QTableView *tableView_historique;
    QLabel *label_15;
    QPushButton *pushButton_3;

    void setupUi(QDialog *abonnement)
    {
        if (abonnement->objectName().isEmpty())
            abonnement->setObjectName(QStringLiteral("abonnement"));
        abonnement->resize(1500, 800);
        abonnement->setStyleSheet(QStringLiteral("background-color: #F0F0F0; "));
        groupBox = new QGroupBox(abonnement);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(0, 0, 181, 801));
        groupBox->setStyleSheet(QLatin1String("background-image: url(:/img/images/background.jpg);\n"
""));
        verticalLayoutWidget = new QWidget(groupBox);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 80, 181, 738));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(verticalLayoutWidget->sizePolicy().hasHeightForWidth());
        verticalLayoutWidget->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_30 = new QPushButton(verticalLayoutWidget);
        pushButton_30->setObjectName(QStringLiteral("pushButton_30"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_30->sizePolicy().hasHeightForWidth());
        pushButton_30->setSizePolicy(sizePolicy1);
        pushButton_30->setStyleSheet(QLatin1String("QPushButton{\n"
"background-color: transparent;\n"
"	background-image: url();\n"
"    font-family: Neue Haas Grotesk Text Pro Thin; \n"
"    font-weight: bold; \n"
"    font-size: 20px; \n"
"border : none ; \n"
"border-radius : 0 px ;\n"
"color : #4D53A8 ; \n"
"}\n"
"QPushButton:hover{\n"
"background-color: #E3E4F2;\n"
" \n"
"}\n"
"\n"
""));
        QIcon icon;
        icon.addFile(QStringLiteral(":/img/images/perso.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_30->setIcon(icon);
        pushButton_30->setIconSize(QSize(30, 30));

        verticalLayout->addWidget(pushButton_30);

        pushButton_31 = new QPushButton(verticalLayoutWidget);
        pushButton_31->setObjectName(QStringLiteral("pushButton_31"));
        sizePolicy1.setHeightForWidth(pushButton_31->sizePolicy().hasHeightForWidth());
        pushButton_31->setSizePolicy(sizePolicy1);
        pushButton_31->setStyleSheet(QLatin1String("QPushButton{\n"
"background-color: transparent;\n"
"	background-image: url();\n"
"    font-family: Neue Haas Grotesk Text Pro Thin; \n"
"    font-weight: bold; \n"
"    font-size: 20px; \n"
"border : none ; \n"
"border-radius : 0 px ;\n"
"color : #4D53A8 ; \n"
"}\n"
"QPushButton:hover{\n"
"background-color: #E3E4F2;\n"
" \n"
"}\n"
"\n"
""));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/img/images/program.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_31->setIcon(icon1);
        pushButton_31->setIconSize(QSize(30, 30));

        verticalLayout->addWidget(pushButton_31);

        pushButton_32 = new QPushButton(verticalLayoutWidget);
        pushButton_32->setObjectName(QStringLiteral("pushButton_32"));
        sizePolicy1.setHeightForWidth(pushButton_32->sizePolicy().hasHeightForWidth());
        pushButton_32->setSizePolicy(sizePolicy1);
        pushButton_32->setStyleSheet(QLatin1String("QPushButton{\n"
"background-color: transparent;\n"
"	background-image: url();\n"
"    font-family: Neue Haas Grotesk Text Pro Thin; \n"
"    font-weight: bold; \n"
"    font-size: 20px; \n"
"border : none ; \n"
"border-radius : 0 px ;\n"
"color : #4D53A8 ; \n"
"}\n"
"QPushButton:hover{\n"
"background-color: #E3E4F2;\n"
" \n"
"}\n"
"\n"
""));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/img/images/pub.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_32->setIcon(icon2);
        pushButton_32->setIconSize(QSize(30, 30));

        verticalLayout->addWidget(pushButton_32);

        pushButton_33 = new QPushButton(verticalLayoutWidget);
        pushButton_33->setObjectName(QStringLiteral("pushButton_33"));
        sizePolicy1.setHeightForWidth(pushButton_33->sizePolicy().hasHeightForWidth());
        pushButton_33->setSizePolicy(sizePolicy1);
        pushButton_33->setStyleSheet(QLatin1String("QPushButton{\n"
"background-color: transparent;\n"
"	background-image: url();\n"
"    font-family: Neue Haas Grotesk Text Pro Thin; \n"
"    font-weight: bold; \n"
"    font-size: 20px; \n"
"border : none ; \n"
"border-radius : 0 px ;\n"
"color : #4D53A8 ; \n"
"}\n"
"QPushButton:hover{\n"
"background-color: #E3E4F2;\n"
" \n"
"}\n"
"\n"
""));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/img/images/audi.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_33->setIcon(icon3);
        pushButton_33->setIconSize(QSize(30, 30));

        verticalLayout->addWidget(pushButton_33);

        pushButton_34 = new QPushButton(verticalLayoutWidget);
        pushButton_34->setObjectName(QStringLiteral("pushButton_34"));
        sizePolicy1.setHeightForWidth(pushButton_34->sizePolicy().hasHeightForWidth());
        pushButton_34->setSizePolicy(sizePolicy1);
        pushButton_34->setStyleSheet(QLatin1String("background-color: #E3E4F2;\n"
"	background-image: url();\n"
"\n"
"  font-family: Neue Haas Grotesk Text Pro Thin, sans-serif; \n"
"  font-weight: bold; \n"
"    font-size: 20px; \n"
"border : none ; \n"
"border-radius : 0 px ;\n"
"color : #4D53A8 ; "));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/img/images/abonementtt.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_34->setIcon(icon4);
        pushButton_34->setIconSize(QSize(30, 30));

        verticalLayout->addWidget(pushButton_34);

        pushButton_35 = new QPushButton(verticalLayoutWidget);
        pushButton_35->setObjectName(QStringLiteral("pushButton_35"));
        sizePolicy1.setHeightForWidth(pushButton_35->sizePolicy().hasHeightForWidth());
        pushButton_35->setSizePolicy(sizePolicy1);
        pushButton_35->setStyleSheet(QLatin1String("QPushButton{\n"
"background-color: transparent;\n"
"	background-image: url();\n"
"    font-family: Neue Haas Grotesk Text Pro Thin; \n"
"    font-weight: bold; \n"
"    font-size: 20px; \n"
"border : none ; \n"
"border-radius : 0 px ;\n"
"color : #4D53A8 ; \n"
"}\n"
"QPushButton:hover{\n"
"background-color: #E3E4F2;\n"
" \n"
"}\n"
"\n"
""));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/img/images/stu.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_35->setIcon(icon5);
        pushButton_35->setIconSize(QSize(30, 30));

        verticalLayout->addWidget(pushButton_35);

        pushButton_36 = new QPushButton(verticalLayoutWidget);
        pushButton_36->setObjectName(QStringLiteral("pushButton_36"));
        sizePolicy1.setHeightForWidth(pushButton_36->sizePolicy().hasHeightForWidth());
        pushButton_36->setSizePolicy(sizePolicy1);
        pushButton_36->setStyleSheet(QLatin1String("QPushButton{\n"
"background-color: transparent;\n"
"	background-image: url();\n"
"    font-family: Neue Haas Grotesk Text Pro Thin; \n"
"    font-weight: bold; \n"
"    font-size: 20px; \n"
"border : none ; \n"
"border-radius : 0 px ;\n"
"color : #4D53A8 ; \n"
"}\n"
"QPushButton:hover{\n"
"background-color: #E3E4F2;\n"
" \n"
"}\n"
"\n"
""));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/img/images/quit.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_36->setIcon(icon6);
        pushButton_36->setIconSize(QSize(50, 100));

        verticalLayout->addWidget(pushButton_36);

        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 20, 141, 31));
        QFont font;
        font.setFamily(QStringLiteral("Neue Haas Grotesk Text Pro Extr"));
        font.setPointSize(20);
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        label->setFont(font);
        label->setStyleSheet(QLatin1String("border : none ;\n"
"background-color: none;\n"
"color : #333770 ;\n"
"background-image: url();\n"
"    "));
        label_34 = new QLabel(groupBox);
        label_34->setObjectName(QStringLiteral("label_34"));
        label_34->setGeometry(QRect(60, 470, 71, 16));
        QFont font1;
        font1.setFamily(QStringLiteral("Neue Haas Grotesk Text Pro Medi"));
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        label_34->setFont(font1);
        label_34->setStyleSheet(QLatin1String("background-color: none;\n"
"background-image: url();\n"
""));
        label_26 = new QLabel(groupBox);
        label_26->setObjectName(QStringLiteral("label_26"));
        label_26->setGeometry(QRect(50, 150, 81, 16));
        label_26->setFont(font1);
        label_26->setStyleSheet(QLatin1String("background-color: none;\n"
"background-image: url();\n"
""));
        label_33 = new QLabel(groupBox);
        label_33->setObjectName(QStringLiteral("label_33"));
        label_33->setGeometry(QRect(60, 360, 61, 16));
        label_33->setFont(font1);
        label_33->setStyleSheet(QLatin1String("background-color: none;\n"
"background-image: url();\n"
""));
        label_35 = new QLabel(groupBox);
        label_35->setObjectName(QStringLiteral("label_35"));
        label_35->setGeometry(QRect(50, 570, 91, 16));
        label_35->setFont(font1);
        label_35->setStyleSheet(QLatin1String("background-color: none;\n"
"background-image: url();\n"
""));
        label_32 = new QLabel(groupBox);
        label_32->setObjectName(QStringLiteral("label_32"));
        label_32->setGeometry(QRect(50, 260, 81, 21));
        label_32->setFont(font1);
        label_32->setStyleSheet(QLatin1String("background-color: none;\n"
"background-image: url();\n"
""));
        label_36 = new QLabel(groupBox);
        label_36->setObjectName(QStringLiteral("label_36"));
        label_36->setGeometry(QRect(70, 680, 61, 16));
        label_36->setFont(font1);
        label_36->setStyleSheet(QLatin1String("background-color: none;\n"
"background-image: url();\n"
""));
        groupBox_7 = new QGroupBox(abonnement);
        groupBox_7->setObjectName(QStringLiteral("groupBox_7"));
        groupBox_7->setGeometry(QRect(210, 0, 1261, 91));
        groupBox_7->setStyleSheet(QString::fromUtf8("border-top-right-radius : 40px ; \n"
"background-image: url(:/img/images/background.jpg);\n"
"border-top-left-radius: 20px; /* Coin arrondi en haut \303\240 gauche */\n"
"    border-bottom-left-radius: 20px; /* Coin arrondi en bas \303\240 gauche */\n"
"    border-top-right-radius: 20px; /* Coin arrondi en haut \303\240 droite */\n"
"    border-bottom-right-radius: 20px; /* Coin arrondi en bas \303\240 droite */"));
        label_30 = new QLabel(groupBox_7);
        label_30->setObjectName(QStringLiteral("label_30"));
        label_30->setGeometry(QRect(950, 20, 231, 31));
        QFont font2;
        font2.setFamily(QStringLiteral("Neue Haas Grotesk Text Pro Extr"));
        font2.setPointSize(13);
        font2.setBold(true);
        font2.setItalic(false);
        font2.setWeight(75);
        label_30->setFont(font2);
        label_30->setStyleSheet(QLatin1String("border : none ;\n"
"background-color: none;\n"
"color : #333770 ;\n"
"    background-image : url();\n"
""));
        label_31 = new QLabel(groupBox_7);
        label_31->setObjectName(QStringLiteral("label_31"));
        label_31->setGeometry(QRect(1060, 50, 51, 31));
        QFont font3;
        font3.setFamily(QStringLiteral("Neue Haas Grotesk Text Pro Extr"));
        font3.setPointSize(15);
        font3.setBold(true);
        font3.setItalic(false);
        font3.setWeight(75);
        label_31->setFont(font3);
        label_31->setStyleSheet(QLatin1String("border : none ;\n"
"background-color: none;\n"
"color : #333770 ;\n"
"    background-image : url();\n"
""));
        lineEdit_role = new QLineEdit(groupBox_7);
        lineEdit_role->setObjectName(QStringLiteral("lineEdit_role"));
        lineEdit_role->setGeometry(QRect(50, 40, 181, 21));
        QFont font4;
        font4.setPointSize(10);
        font4.setBold(true);
        font4.setWeight(75);
        lineEdit_role->setFont(font4);
        lineEdit_role->setStyleSheet(QLatin1String("background-color: transparent ; \n"
"border : none ;\n"
"color : #333770 ;\n"
"background-image : url();"));
        lineEdit_role->setReadOnly(true);
        lineEdit_nomprenom = new QLineEdit(groupBox_7);
        lineEdit_nomprenom->setObjectName(QStringLiteral("lineEdit_nomprenom"));
        lineEdit_nomprenom->setGeometry(QRect(20, 20, 271, 21));
        QFont font5;
        font5.setPointSize(14);
        font5.setBold(true);
        font5.setWeight(75);
        lineEdit_nomprenom->setFont(font5);
        lineEdit_nomprenom->setStyleSheet(QLatin1String("background-color: transparent ; \n"
"border : none ;\n"
"color : #333770 ;\n"
"background-image : url();"));
        lineEdit_nomprenom->setReadOnly(true);
        pushButton_parametre_compte = new QPushButton(groupBox_7);
        pushButton_parametre_compte->setObjectName(QStringLiteral("pushButton_parametre_compte"));
        pushButton_parametre_compte->setGeometry(QRect(1170, 20, 91, 61));
        pushButton_parametre_compte->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_parametre_compte->setStyleSheet(QLatin1String("background-color: transparent ; \n"
"border : none ;\n"
"color : #333770 ;\n"
"background-image : url();"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/img/images/motpas.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_parametre_compte->setIcon(icon7);
        pushButton_parametre_compte->setIconSize(QSize(50, 50));
        groupBox_8 = new QGroupBox(abonnement);
        groupBox_8->setObjectName(QStringLiteral("groupBox_8"));
        groupBox_8->setGeometry(QRect(180, 750, 1361, 101));
        groupBox_8->setStyleSheet(QString::fromUtf8("border-top-right-radius : 40px ; \n"
"background-image: url(:/img/images/background.jpg);\n"
"/*border-top-left-radius: 20px; /*Coin arrondi en haut \303\240 gauche \n"
"    border-bottom-left-radius: 20px; /* Coin arrondi en bas \303\240 gauche \n"
"    border-top-right-radius: 20px; /* Coin arrondi en haut \303\240 droite \n"
"    border-bottom-right-radius: 20px; /* Coin arrondi en bas \303\240 droite */"));
        tabWidget = new QTabWidget(abonnement);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(250, 100, 1251, 641));
        QFont font6;
        font6.setPointSize(13);
        tabWidget->setFont(font6);
        tabWidget->setStyleSheet(QLatin1String("QTabWidget::pane {\n"
"    border-top: 5px solid #C2C7CB; /* Top border color */\n"
"    top: -0.5em;\n"
"    border: none;\n"
"    border-top-left-radius: 10px; /* Rounded border on the far left */\n"
"    border-top-right-radius: 10px; /* Rounded border on the far right */\n"
"}\n"
"\n"
"QTabWidget::tab-bar {\n"
"    alignment: center;\n"
"}\n"
"\n"
"QTabBar::tab {\n"
"    background-color:  #DD7373;\n"
"    /* Background color of tabs */\n"
"    color:  #E4E5E0;\n"
"    /* Text color of tabs */\n"
"    font: 12pt Arial, sans-serif;\n"
"    padding: 17px; /* Padding of tabs */\n"
"    width: 200px;\n"
"}\n"
"\n"
"QTabBar::tab:selected {\n"
"    /* Background color of selected tab */\n"
"    \n"
"	background-color: #333770;\n"
"    color: white; /* Text color of selected tab */\n"
"}\n"
"\n"
"QTabBar::tab:hover {\n"
"}\n"
"\n"
"/* Apply circular border to QPushButton container */\n"
"#buttonContainer {\n"
"    border: 2px solid #C2C7CB; /* Border color and width */\n"
"    border-radius: 50%; /* Circular bord"
                        "er */\n"
"    padding: 9px; /* Adjust padding as needed */\n"
"}\n"
"\n"
"QPushButton {\n"
"    background-color: #E7E7E7; /* Background color of button */\n"
"    color: #FFFFFF; /* Text color of button */\n"
"    padding: 20px; /* Padding of button */\n"
"    border: none; /* No border */\n"
"    border-radius: 7px; /* Rounded corners */\n"
"}\n"
""));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        groupBox_2 = new QGroupBox(tab);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(50, 40, 811, 401));
        tableView_liste_abonnement = new QTableView(groupBox_2);
        tableView_liste_abonnement->setObjectName(QStringLiteral("tableView_liste_abonnement"));
        tableView_liste_abonnement->setGeometry(QRect(180, 80, 571, 291));
        tableView_liste_abonnement->setStyleSheet(QString::fromUtf8("QTableView {\n"
"    background-color: #ffffff; /* Couleur de fond */\n"
"    alternate-background-color: #f2f2f2; /* Couleur de fond alternative des lignes */\n"
"    border: 1px solid #dcdcdc; /* Bordure */\n"
"    selection-background-color: #a9c6e7; /* Couleur de fond de la s\303\251lection */\n"
"}\n"
"\n"
"QTableView::item {\n"
"    padding: 5px; /* Marge int\303\251rieure des cellules */\n"
"    border-bottom: 1px solid #dcdcdc; /* Bordure basse de chaque cellule */\n"
"}\n"
"\n"
"QTableView::item:selected {\n"
"    background-color: #a9c6e7; /* Couleur de fond de la cellule s\303\251lectionn\303\251e */\n"
"    color: #000000; /* Couleur du texte de la cellule s\303\251lectionn\303\251e */\n"
"}\n"
"\n"
"QHeaderView::section {\n"
"    background-color: #4c7da3; /* Couleur de fond de l'en-t\303\252te */\n"
"    color: #ffffff; /* Couleur du texte de l'en-t\303\252te */\n"
"    padding: 10px; /* Marge int\303\251rieure de l'en-t\303\252te */\n"
"    border: 1px solid #dcdcdc; /* Bordure de l'en-t\303\252"
                        "te */\n"
"}\n"
"\n"
"QHeaderView::section:checked {\n"
"    background-color: #7aa8cc; /* Couleur de fond de l'en-t\303\252te lorsqu'il est coch\303\251e */\n"
"}\n"
"\n"
"QScrollBar:vertical {\n"
"    background: transparent; /* Fond de la barre de d\303\251filement */\n"
"    border: none; /* Pas de bordure */\n"
"    width: 10px; /* Largeur de la barre de d\303\251filement */\n"
"    margin: 0px 0px 0px 0px; /* Marge */\n"
"}\n"
"\n"
"QScrollBar::handle:vertical {\n"
"    background: #a9c6e7; /* Couleur de la poign\303\251e de la barre de d\303\251filement */\n"
"    min-height: 20px; /* Hauteur minimale de la poign\303\251e */\n"
"}\n"
"\n"
"QScrollBar::handle:vertical:hover {\n"
"    background: #7aa8cc; /* Couleur de la poign\303\251e de la barre de d\303\251filement au survol */\n"
"}\n"
"\n"
"QScrollBar::add-line:vertical, QScrollBar::sub-line:vertical {\n"
"    background: none; /* Pas de couleur de fond pour les boutons de d\303\251filement */\n"
"}\n"
"\n"
"QScrollBar::add-page:vertical, QScrollBar:"
                        ":sub-page:vertical {\n"
"    background: none; /* Pas de couleur de fond pour les pages de d\303\251filement */\n"
"}\n"
""));
        lineEdit_recherche = new QLineEdit(groupBox_2);
        lineEdit_recherche->setObjectName(QStringLiteral("lineEdit_recherche"));
        lineEdit_recherche->setGeometry(QRect(360, 30, 191, 31));
        lineEdit_recherche->setStyleSheet(QLatin1String("QLineEdit {\n"
"                border: 2px solid blue;\n"
"                border-radius: 10px;\n"
"                padding: 5px;\n"
"            }\n"
""));
        pushButton_recherche_abonnement = new QPushButton(groupBox_2);
        pushButton_recherche_abonnement->setObjectName(QStringLiteral("pushButton_recherche_abonnement"));
        pushButton_recherche_abonnement->setGeometry(QRect(560, 30, 31, 31));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/img/images/385529678_211836881972185_2463027834182630932_n.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_recherche_abonnement->setIcon(icon8);
        comboBoxFiltre = new QComboBox(groupBox_2);
        comboBoxFiltre->setObjectName(QStringLiteral("comboBoxFiltre"));
        comboBoxFiltre->setGeometry(QRect(600, 31, 131, 31));
        pushButton_2 = new QPushButton(groupBox_2);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(730, 30, 31, 31));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/img/images/429333860_331684199293783_5245463704783326312_n.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon9);
        tabWidget->addTab(tab, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        groupBox_3 = new QGroupBox(tab_3);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(90, 40, 1091, 411));
        comboBox_type_abonnement = new QComboBox(groupBox_3);
        comboBox_type_abonnement->setObjectName(QStringLiteral("comboBox_type_abonnement"));
        comboBox_type_abonnement->setGeometry(QRect(230, 30, 231, 31));
        label_3 = new QLabel(groupBox_3);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(50, 40, 151, 20));
        label_3->setFont(font6);
        dateEdit_debut = new QDateEdit(groupBox_3);
        dateEdit_debut->setObjectName(QStringLiteral("dateEdit_debut"));
        dateEdit_debut->setGeometry(QRect(230, 100, 231, 31));
        dateEdit_debut->setStyleSheet(QLatin1String("QDateEdit {\n"
"        border: 2px solid blue;\n"
"        border-radius: 10px;\n"
"        padding: 5px;\n"
"    }"));
        dateEdit_expiration = new QDateEdit(groupBox_3);
        dateEdit_expiration->setObjectName(QStringLiteral("dateEdit_expiration"));
        dateEdit_expiration->setGeometry(QRect(230, 160, 231, 31));
        dateEdit_expiration->setStyleSheet(QLatin1String("QDateEdit {\n"
"        border: 2px solid blue;\n"
"        border-radius: 10px;\n"
"        padding: 5px;\n"
"    }"));
        label_4 = new QLabel(groupBox_3);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(60, 100, 151, 20));
        label_4->setFont(font6);
        label_5 = new QLabel(groupBox_3);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(60, 160, 151, 20));
        label_5->setFont(font6);
        pushButton_Gnerer = new QPushButton(groupBox_3);
        pushButton_Gnerer->setObjectName(QStringLiteral("pushButton_Gnerer"));
        pushButton_Gnerer->setGeometry(QRect(260, 260, 141, 41));
        QFont font7;
        font7.setFamily(QStringLiteral("Arial"));
        font7.setBold(true);
        font7.setWeight(75);
        pushButton_Gnerer->setFont(font7);
        pushButton_Gnerer->setStyleSheet(QLatin1String("QPushButton{\n"
"	color: rgb(0, 0, 136);\n"
"	color: rgb(0, 132, 255);\n"
"	color: rgb(14, 159, 255);\n"
"background:none;\n"
"    font-family: Arial, sans-serif; \n"
"    font-weight: bold; \n"
"    font-size: 13px; \n"
"border : none ; \n"
"border-radius : 0 px ;\n"
"color : black ; \n"
"padding:1px;\n"
"background-color:  #0084ff;\n"
"border-radius: 20px;\n"
"\n"
"\n"
"}\n"
"QPushButton:hover{\n"
"background-color:  #55aaff;\n"
"border:none ; \n"
"border-radius: 20px;\n"
"\n"
" \n"
"}"));
        pushButton_4 = new QPushButton(groupBox_3);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(410, 260, 51, 41));
        QFont font8;
        font8.setPointSize(10);
        pushButton_4->setFont(font8);
        pushButton_4->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255, 255)"));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/img/images/426073232_439368305083214_952548747131786395_n.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_4->setIcon(icon10);
        pushButton_4->setIconSize(QSize(30, 30));
        lineEdit_id_auditeur = new QLineEdit(groupBox_3);
        lineEdit_id_auditeur->setObjectName(QStringLiteral("lineEdit_id_auditeur"));
        lineEdit_id_auditeur->setGeometry(QRect(230, 210, 231, 31));
        lineEdit_id_auditeur->setStyleSheet(QLatin1String("QLineEdit {\n"
"                border: 2px solid blue;\n"
"                border-radius: 10px;\n"
"                padding: 5px;\n"
"            }\n"
""));
        label_12 = new QLabel(groupBox_3);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(30, 330, 171, 20));
        label_12->setFont(font6);
        label_13 = new QLabel(groupBox_3);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(50, 210, 151, 20));
        label_13->setFont(font6);
        lineEdit_numero_abonnement = new QLineEdit(groupBox_3);
        lineEdit_numero_abonnement->setObjectName(QStringLiteral("lineEdit_numero_abonnement"));
        lineEdit_numero_abonnement->setGeometry(QRect(230, 330, 231, 31));
        lineEdit_numero_abonnement->setStyleSheet(QLatin1String("QLineEdit {\n"
"                border: 2px solid blue;\n"
"                border-radius: 10px;\n"
"                padding: 5px;\n"
"            }\n"
""));
        groupBox_6 = new QGroupBox(groupBox_3);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        groupBox_6->setGeometry(QRect(490, 10, 351, 381));
        groupBox_6->setStyleSheet(QLatin1String("QGroupBox {\n"
"    font-weight: bold;\n"
"    border: 2px solid blue; /* Cadre de 2 pixels solide bleu */\n"
"    border-radius: 5px;\n"
"    margin-top: 10px;\n"
"}\n"
"\n"
"QGroupBox::title {\n"
"    subcontrol-origin: margin;\n"
"    subcontrol-position: top center;\n"
"    padding: 0 5px;\n"
"}\n"
"\n"
"QGroupBox:disabled {\n"
"    color: gray;\n"
"}\n"
"\n"
"QGroupBox:!disabled {\n"
"    color: black;\n"
"}\n"
""));
        lineEdit_jours = new QLineEdit(groupBox_6);
        lineEdit_jours->setObjectName(QStringLiteral("lineEdit_jours"));
        lineEdit_jours->setGeometry(QRect(60, 260, 231, 31));
        lineEdit_jours->setStyleSheet(QLatin1String("QLineEdit {\n"
"                border: 2px solid blue;\n"
"                border-radius: 10px;\n"
"                padding: 5px;\n"
"            }\n"
""));
        pushButton_estimer = new QPushButton(groupBox_6);
        pushButton_estimer->setObjectName(QStringLiteral("pushButton_estimer"));
        pushButton_estimer->setGeometry(QRect(110, 170, 141, 41));
        pushButton_estimer->setFont(font7);
        pushButton_estimer->setStyleSheet(QLatin1String("QPushButton{\n"
"	color: rgb(0, 0, 136);\n"
"	color: rgb(0, 132, 255);\n"
"	color: rgb(14, 159, 255);\n"
"background:none;\n"
"    font-family: Arial, sans-serif; \n"
"    font-weight: bold; \n"
"    font-size: 13px; \n"
"border : none ; \n"
"border-radius : 0 px ;\n"
"color : black ; \n"
"padding:1px;\n"
"background-color:  #0084ff;\n"
"border-radius: 20px;\n"
"\n"
"\n"
"}\n"
"QPushButton:hover{\n"
"background-color:  #55aaff;\n"
"border:none ; \n"
"border-radius: 20px;\n"
"\n"
" \n"
"}"));
        label_14 = new QLabel(groupBox_6);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(300, 220, 21, 31));
        label_14->setFont(font8);
        lineEdit_prix = new QLineEdit(groupBox_6);
        lineEdit_prix->setObjectName(QStringLiteral("lineEdit_prix"));
        lineEdit_prix->setGeometry(QRect(60, 220, 231, 31));
        lineEdit_prix->setStyleSheet(QLatin1String("QLineEdit {\n"
"                border: 2px solid blue;\n"
"                border-radius: 10px;\n"
"                padding: 5px;\n"
"            }\n"
""));
        comboBox_reduction = new QComboBox(groupBox_6);
        comboBox_reduction->setObjectName(QStringLiteral("comboBox_reduction"));
        comboBox_reduction->setGeometry(QRect(50, 40, 271, 31));
        pushButton_promo = new QPushButton(groupBox_6);
        pushButton_promo->setObjectName(QStringLiteral("pushButton_promo"));
        pushButton_promo->setGeometry(QRect(210, 310, 121, 51));
        pushButton_promo->setFont(font7);
        pushButton_promo->setStyleSheet(QLatin1String("QPushButton{\n"
"	color: rgb(0, 0, 136);\n"
"	color: rgb(0, 132, 255);\n"
"	color: rgb(14, 159, 255);\n"
"background:none;\n"
"    font-family: Arial, sans-serif; \n"
"    font-weight: bold; \n"
"    font-size: 13px; \n"
"border : none ; \n"
"border-radius : 0 px ;\n"
"color : black ; \n"
"padding:1px;\n"
"background-color:  #0084ff;\n"
"border-radius: 20px;\n"
"\n"
"\n"
"}\n"
"QPushButton:hover{\n"
"background-color:  #55aaff;\n"
"border:none ; \n"
"border-radius: 20px;\n"
"\n"
" \n"
"}"));
        lineEdit_promo = new QLineEdit(groupBox_6);
        lineEdit_promo->setObjectName(QStringLiteral("lineEdit_promo"));
        lineEdit_promo->setGeometry(QRect(30, 320, 161, 31));
        lineEdit_promo->setStyleSheet(QLatin1String("QLineEdit {\n"
"                border: 2px solid blue;\n"
"                border-radius: 10px;\n"
"                padding: 5px;\n"
"            }\n"
""));
        lineEdit_code = new QLineEdit(groupBox_6);
        lineEdit_code->setObjectName(QStringLiteral("lineEdit_code"));
        lineEdit_code->setGeometry(QRect(60, 120, 231, 31));
        lineEdit_code->setStyleSheet(QLatin1String("QLineEdit {\n"
"                border: 2px solid blue;\n"
"                border-radius: 10px;\n"
"                padding: 5px;\n"
"            }\n"
""));
        swipe = new QPushButton(groupBox_6);
        swipe->setObjectName(QStringLiteral("swipe"));
        swipe->setGeometry(QRect(160, 80, 41, 31));
        QIcon icon11;
        icon11.addFile(QStringLiteral(":/img/images/up-down-arrows_9684989.png"), QSize(), QIcon::Normal, QIcon::Off);
        swipe->setIcon(icon11);
        swipe->setIconSize(QSize(50, 30));
        coupon = new QPushButton(groupBox_6);
        coupon->setObjectName(QStringLiteral("coupon"));
        coupon->setGeometry(QRect(300, 120, 41, 31));
        QIcon icon12;
        icon12.addFile(QStringLiteral(":/img/images/10-percent_7312829.png"), QSize(), QIcon::Normal, QIcon::Off);
        coupon->setIcon(icon12);
        coupon->setIconSize(QSize(50, 30));
        pushButton = new QPushButton(groupBox_3);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(810, 0, 61, 61));
        QIcon icon13;
        icon13.addFile(QStringLiteral(":/img/images/icons8-discount-100.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon13);
        pushButton->setIconSize(QSize(73, 74));
        groupBox_6->raise();
        comboBox_type_abonnement->raise();
        label_3->raise();
        dateEdit_debut->raise();
        dateEdit_expiration->raise();
        label_4->raise();
        label_5->raise();
        pushButton_Gnerer->raise();
        pushButton_4->raise();
        lineEdit_id_auditeur->raise();
        label_12->raise();
        label_13->raise();
        lineEdit_numero_abonnement->raise();
        pushButton->raise();
        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        groupBox_4 = new QGroupBox(tab_4);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(310, 50, 601, 411));
        lineEdit_numero_c = new QLineEdit(groupBox_4);
        lineEdit_numero_c->setObjectName(QStringLiteral("lineEdit_numero_c"));
        lineEdit_numero_c->setGeometry(QRect(210, 150, 231, 31));
        lineEdit_numero_c->setStyleSheet(QLatin1String("QLineEdit {\n"
"                border: 2px solid blue;\n"
"                border-radius: 10px;\n"
"                padding: 5px;\n"
"            }\n"
""));
        label_6 = new QLabel(groupBox_4);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(10, 150, 181, 20));
        label_6->setFont(font6);
        comboBox_type_c = new QComboBox(groupBox_4);
        comboBox_type_c->setObjectName(QStringLiteral("comboBox_type_c"));
        comboBox_type_c->setGeometry(QRect(210, 200, 231, 31));
        label_7 = new QLabel(groupBox_4);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(30, 200, 151, 20));
        label_7->setFont(font6);
        dateEdit_debut_c = new QDateEdit(groupBox_4);
        dateEdit_debut_c->setObjectName(QStringLiteral("dateEdit_debut_c"));
        dateEdit_debut_c->setGeometry(QRect(210, 260, 231, 31));
        dateEdit_debut_c->setStyleSheet(QLatin1String("QDateEdit {\n"
"        border: 2px solid blue;\n"
"        border-radius: 10px;\n"
"        padding: 5px;\n"
"    }"));
        dateEdit_expiration_c = new QDateEdit(groupBox_4);
        dateEdit_expiration_c->setObjectName(QStringLiteral("dateEdit_expiration_c"));
        dateEdit_expiration_c->setGeometry(QRect(210, 310, 231, 31));
        dateEdit_expiration_c->setStyleSheet(QLatin1String("QDateEdit {\n"
"        border: 2px solid blue;\n"
"        border-radius: 10px;\n"
"        padding: 5px;\n"
"    }"));
        label_8 = new QLabel(groupBox_4);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(40, 260, 151, 20));
        label_8->setFont(font6);
        label_9 = new QLabel(groupBox_4);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(40, 310, 151, 20));
        label_9->setFont(font6);
        pushButton_5 = new QPushButton(groupBox_4);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(270, 350, 101, 41));
        pushButton_5->setFont(font7);
        pushButton_5->setStyleSheet(QLatin1String("QPushButton{\n"
"	color: rgb(0, 0, 136);\n"
"	color: rgb(0, 132, 255);\n"
"	color: rgb(14, 159, 255);\n"
"background:none;\n"
"    font-family: Arial, sans-serif; \n"
"    font-weight: bold; \n"
"    font-size: 13px; \n"
"border : none ; \n"
"border-radius : 0 px ;\n"
"color : black ; \n"
"padding:1px;\n"
"background-color:  #0084ff;\n"
"border-radius: 20px;\n"
"\n"
"\n"
"}\n"
"QPushButton:hover{\n"
"background-color:  #55aaff;\n"
"border:none ; \n"
"border-radius: 20px;\n"
"\n"
" \n"
"}"));
        lineEdit_id_abonnement_c = new QLineEdit(groupBox_4);
        lineEdit_id_abonnement_c->setObjectName(QStringLiteral("lineEdit_id_abonnement_c"));
        lineEdit_id_abonnement_c->setGeometry(QRect(210, 30, 231, 31));
        lineEdit_id_abonnement_c->setStyleSheet(QLatin1String("QLineEdit {\n"
"                border: 2px solid blue;\n"
"                border-radius: 10px;\n"
"                padding: 5px;\n"
"            }\n"
""));
        label_11 = new QLabel(groupBox_4);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(20, 30, 181, 20));
        label_11->setFont(font6);
        pushButton_8 = new QPushButton(groupBox_4);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(270, 70, 101, 41));
        pushButton_8->setFont(font7);
        pushButton_8->setStyleSheet(QLatin1String("QPushButton{\n"
"	color: rgb(0, 0, 136);\n"
"	color: rgb(0, 132, 255);\n"
"	color: rgb(14, 159, 255);\n"
"background:none;\n"
"    font-family: Arial, sans-serif; \n"
"    font-weight: bold; \n"
"    font-size: 13px; \n"
"border : none ; \n"
"border-radius : 0 px ;\n"
"color : black ; \n"
"padding:1px;\n"
"background-color:  #0084ff;\n"
"border-radius: 20px;\n"
"\n"
"\n"
"}\n"
"QPushButton:hover{\n"
"background-color:  #55aaff;\n"
"border:none ; \n"
"border-radius: 20px;\n"
"\n"
" \n"
"}"));
        pushButton_qr = new QPushButton(groupBox_4);
        pushButton_qr->setObjectName(QStringLiteral("pushButton_qr"));
        pushButton_qr->setGeometry(QRect(470, 30, 101, 23));
        lcd = new QPushButton(groupBox_4);
        lcd->setObjectName(QStringLiteral("lcd"));
        lcd->setGeometry(QRect(50, 350, 101, 41));
        lcd->setFont(font7);
        lcd->setStyleSheet(QLatin1String("QPushButton{\n"
"	color: rgb(0, 0, 136);\n"
"	color: rgb(0, 132, 255);\n"
"	color: rgb(14, 159, 255);\n"
"background:none;\n"
"    font-family: Arial, sans-serif; \n"
"    font-weight: bold; \n"
"    font-size: 13px; \n"
"border : none ; \n"
"border-radius : 0 px ;\n"
"color : black ; \n"
"padding:1px;\n"
"background-color:  #0084ff;\n"
"border-radius: 20px;\n"
"\n"
"\n"
"}\n"
"QPushButton:hover{\n"
"background-color:  #55aaff;\n"
"border:none ; \n"
"border-radius: 20px;\n"
"\n"
" \n"
"}"));
        tabWidget->addTab(tab_4, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        groupBox_5 = new QGroupBox(tab_2);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        groupBox_5->setGeometry(QRect(320, 30, 601, 411));
        lineEdit_supprimer_abonnement = new QLineEdit(groupBox_5);
        lineEdit_supprimer_abonnement->setObjectName(QStringLiteral("lineEdit_supprimer_abonnement"));
        lineEdit_supprimer_abonnement->setGeometry(QRect(220, 79, 231, 31));
        lineEdit_supprimer_abonnement->setStyleSheet(QLatin1String("QLineEdit {\n"
"                border: 2px solid blue;\n"
"                border-radius: 10px;\n"
"                padding: 5px;\n"
"            }\n"
""));
        label_10 = new QLabel(groupBox_5);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(30, 80, 181, 20));
        label_10->setFont(font6);
        pushButton_supprimer_abonnement = new QPushButton(groupBox_5);
        pushButton_supprimer_abonnement->setObjectName(QStringLiteral("pushButton_supprimer_abonnement"));
        pushButton_supprimer_abonnement->setGeometry(QRect(290, 140, 101, 41));
        pushButton_supprimer_abonnement->setFont(font7);
        pushButton_supprimer_abonnement->setStyleSheet(QLatin1String("QPushButton{\n"
"	color: rgb(0, 0, 136);\n"
"	color: rgb(0, 132, 255);\n"
"	color: rgb(14, 159, 255);\n"
"background:none;\n"
"    font-family: Arial, sans-serif; \n"
"    font-weight: bold; \n"
"    font-size: 13px; \n"
"border : none ; \n"
"border-radius : 0 px ;\n"
"color : black ; \n"
"padding:1px;\n"
"background-color:  #0084ff;\n"
"border-radius: 20px;\n"
"\n"
"\n"
"}\n"
"QPushButton:hover{\n"
"background-color:  #55aaff;\n"
"border:none ; \n"
"border-radius: 20px;\n"
"\n"
" \n"
"}"));
        pushButton_7 = new QPushButton(groupBox_5);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(390, 140, 121, 41));
        pushButton_7->setFont(font8);
        pushButton_7->setStyleSheet(QStringLiteral("background-color: none;"));
        QIcon icon14;
        icon14.addFile(QStringLiteral(":/img/images/416638327_926199295369604_8163174007800803743_n.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_7->setIcon(icon14);
        pushButton_7->setIconSize(QSize(60, 60));
        tabWidget->addTab(tab_2, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        verticalFrame = new QFrame(tab_5);
        verticalFrame->setObjectName(QStringLiteral("verticalFrame"));
        verticalFrame->setGeometry(QRect(120, 60, 731, 411));
        verticalLayout_2 = new QVBoxLayout(verticalFrame);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        actualiser = new QPushButton(tab_5);
        actualiser->setObjectName(QStringLiteral("actualiser"));
        actualiser->setGeometry(QRect(400, 20, 111, 31));
        actualiser->setStyleSheet(QLatin1String("QPushButton{\n"
"	color: rgb(0, 0, 136);\n"
"	color: rgb(0, 132, 255);\n"
"	color: rgb(14, 159, 255);\n"
"background:none;\n"
"    font-family: Arial, sans-serif; \n"
"    font-weight: bold; \n"
"    font-size: 13px; \n"
"border : none ; \n"
"border-radius : 0 px ;\n"
"color : black ; \n"
"padding:1px;\n"
"background-color:  #0084ff;\n"
"border-radius: 20px;\n"
"\n"
"\n"
"}\n"
"QPushButton:hover{\n"
"background-color:  #55aaff;\n"
"border:none ; \n"
"border-radius: 20px;\n"
"\n"
" \n"
"}"));
        QIcon icon15;
        icon15.addFile(QStringLiteral(":/img/images/refresh_189687.png"), QSize(), QIcon::Normal, QIcon::Off);
        actualiser->setIcon(icon15);
        tableView_historique = new QTableView(tab_5);
        tableView_historique->setObjectName(QStringLiteral("tableView_historique"));
        tableView_historique->setGeometry(QRect(860, 110, 331, 351));
        tableView_historique->setStyleSheet(QString::fromUtf8("QTableView {\n"
"    background-color: #ffffff; /* Couleur de fond */\n"
"    alternate-background-color: #f2f2f2; /* Couleur de fond alternative des lignes */\n"
"    border: 1px solid #dcdcdc; /* Bordure */\n"
"    selection-background-color: #a9c6e7; /* Couleur de fond de la s\303\251lection */\n"
"}\n"
"\n"
"QTableView::item {\n"
"    padding: 5px; /* Marge int\303\251rieure des cellules */\n"
"    border-bottom: 1px solid #dcdcdc; /* Bordure basse de chaque cellule */\n"
"}\n"
"\n"
"QTableView::item:selected {\n"
"    background-color: #a9c6e7; /* Couleur de fond de la cellule s\303\251lectionn\303\251e */\n"
"    color: #000000; /* Couleur du texte de la cellule s\303\251lectionn\303\251e */\n"
"}\n"
"\n"
"QHeaderView::section {\n"
"    background-color: #4c7da3; /* Couleur de fond de l'en-t\303\252te */\n"
"    color: #ffffff; /* Couleur du texte de l'en-t\303\252te */\n"
"    padding: 10px; /* Marge int\303\251rieure de l'en-t\303\252te */\n"
"    border: 1px solid #dcdcdc; /* Bordure de l'en-t\303\252"
                        "te */\n"
"}\n"
"\n"
"QHeaderView::section:checked {\n"
"    background-color: #7aa8cc; /* Couleur de fond de l'en-t\303\252te lorsqu'il est coch\303\251e */\n"
"}\n"
"\n"
"QScrollBar:vertical {\n"
"    background: transparent; /* Fond de la barre de d\303\251filement */\n"
"    border: none; /* Pas de bordure */\n"
"    width: 10px; /* Largeur de la barre de d\303\251filement */\n"
"    margin: 0px 0px 0px 0px; /* Marge */\n"
"}\n"
"\n"
"QScrollBar::handle:vertical {\n"
"    background: #a9c6e7; /* Couleur de la poign\303\251e de la barre de d\303\251filement */\n"
"    min-height: 20px; /* Hauteur minimale de la poign\303\251e */\n"
"}\n"
"\n"
"QScrollBar::handle:vertical:hover {\n"
"    background: #7aa8cc; /* Couleur de la poign\303\251e de la barre de d\303\251filement au survol */\n"
"}\n"
"\n"
"QScrollBar::add-line:vertical, QScrollBar::sub-line:vertical {\n"
"    background: none; /* Pas de couleur de fond pour les boutons de d\303\251filement */\n"
"}\n"
"\n"
"QScrollBar::add-page:vertical, QScrollBar:"
                        ":sub-page:vertical {\n"
"    background: none; /* Pas de couleur de fond pour les pages de d\303\251filement */\n"
"}\n"
""));
        label_15 = new QLabel(tab_5);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(930, 60, 191, 20));
        label_15->setFont(font6);
        pushButton_3 = new QPushButton(tab_5);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(1110, 30, 121, 71));
        pushButton_3->setStyleSheet(QLatin1String("QString styleSheet = \"QPushButton {\"\n"
"                     \"background-color: transparent;\"\n"
"                     \"border: none;\"\n"
"                     \"}\"\n"
"                     \"QPushButton::icon {\"\n"
"                     \"background-color: transparent;\"\n"
"                     \"}\";\n"
"pushButton->setStyleSheet(styleSheet);\n"
""));
        QIcon icon16;
        icon16.addFile(QStringLiteral(":/img/images/history_3503775.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon16);
        pushButton_3->setIconSize(QSize(42, 51));
        tabWidget->addTab(tab_5, QString());
        pushButton_3->raise();
        verticalFrame->raise();
        actualiser->raise();
        tableView_historique->raise();
        label_15->raise();

        retranslateUi(abonnement);
        QObject::connect(pushButton_36, SIGNAL(clicked()), abonnement, SLOT(close()));

        tabWidget->setCurrentIndex(4);


        QMetaObject::connectSlotsByName(abonnement);
    } // setupUi

    void retranslateUi(QDialog *abonnement)
    {
        abonnement->setWindowTitle(QApplication::translate("abonnement", "Dialog", Q_NULLPTR));
        groupBox->setTitle(QString());
        pushButton_30->setText(QString());
        pushButton_31->setText(QString());
        pushButton_32->setText(QString());
        pushButton_33->setText(QString());
        pushButton_34->setText(QString());
        pushButton_35->setText(QString());
        pushButton_36->setText(QApplication::translate("abonnement", "Quitter", Q_NULLPTR));
        label->setText(QApplication::translate("abonnement", "Tv'Ease", Q_NULLPTR));
        label_34->setText(QApplication::translate("abonnement", "Auditeurs", Q_NULLPTR));
        label_26->setText(QApplication::translate("abonnement", "Personnel", Q_NULLPTR));
        label_33->setText(QApplication::translate("abonnement", "Publicite", Q_NULLPTR));
        label_35->setText(QApplication::translate("abonnement", "Abonnement", Q_NULLPTR));
        label_32->setText(QApplication::translate("abonnement", "Programme", Q_NULLPTR));
        label_36->setText(QApplication::translate("abonnement", "Studios", Q_NULLPTR));
        groupBox_7->setTitle(QString());
        label_30->setText(QApplication::translate("abonnement", "Vendredi 22  Fevrier 2024", Q_NULLPTR));
        label_31->setText(QApplication::translate("abonnement", "13\302\260", Q_NULLPTR));
        pushButton_parametre_compte->setText(QString());
        groupBox_8->setTitle(QString());
        groupBox_2->setTitle(QString());
        lineEdit_recherche->setText(QString());
        lineEdit_recherche->setPlaceholderText(QApplication::translate("abonnement", "Chercher ici", Q_NULLPTR));
        pushButton_recherche_abonnement->setText(QString());
        comboBoxFiltre->clear();
        comboBoxFiltre->insertItems(0, QStringList()
         << QApplication::translate("abonnement", "Date d'expiration croissante", Q_NULLPTR)
         << QApplication::translate("abonnement", "Type", Q_NULLPTR)
         << QApplication::translate("abonnement", "Standard", Q_NULLPTR)
         << QApplication::translate("abonnement", "Family", Q_NULLPTR)
         << QApplication::translate("abonnement", "Premium", Q_NULLPTR)
        );
        pushButton_2->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("abonnement", "Liste ", Q_NULLPTR));
        groupBox_3->setTitle(QString());
        comboBox_type_abonnement->clear();
        comboBox_type_abonnement->insertItems(0, QStringList()
         << QApplication::translate("abonnement", "Family", Q_NULLPTR)
         << QApplication::translate("abonnement", "Premium", Q_NULLPTR)
         << QApplication::translate("abonnement", "Standard", Q_NULLPTR)
         << QApplication::translate("abonnement", "Prmium++", Q_NULLPTR)
         << QApplication::translate("abonnement", "VIP", Q_NULLPTR)
        );
        label_3->setText(QApplication::translate("abonnement", "Type d'abonnement", Q_NULLPTR));
        label_4->setText(QApplication::translate("abonnement", "Date d'activation", Q_NULLPTR));
        label_5->setText(QApplication::translate("abonnement", "Date d'\303\251xpiration", Q_NULLPTR));
        pushButton_Gnerer->setText(QApplication::translate("abonnement", "G\303\251n\303\251rer", Q_NULLPTR));
        pushButton_4->setText(QString());
        lineEdit_id_auditeur->setText(QString());
        lineEdit_id_auditeur->setPlaceholderText(QApplication::translate("abonnement", "R\303\251f\303\251rence de l'auditeur", Q_NULLPTR));
        label_12->setText(QApplication::translate("abonnement", "Num\303\251ro d'abonnement", Q_NULLPTR));
        label_13->setText(QApplication::translate("abonnement", "R\303\251ference auditeur", Q_NULLPTR));
        lineEdit_numero_abonnement->setText(QString());
        lineEdit_numero_abonnement->setPlaceholderText(QApplication::translate("abonnement", "Num\303\251ro d'abonnement", Q_NULLPTR));
        groupBox_6->setTitle(QApplication::translate("abonnement", "R\303\251duction", Q_NULLPTR));
        lineEdit_jours->setText(QString());
        lineEdit_jours->setPlaceholderText(QApplication::translate("abonnement", "Expiration ", Q_NULLPTR));
        pushButton_estimer->setText(QApplication::translate("abonnement", "Estimer le prix", Q_NULLPTR));
        label_14->setText(QApplication::translate("abonnement", "TTC", Q_NULLPTR));
        lineEdit_prix->setText(QString());
        lineEdit_prix->setPlaceholderText(QApplication::translate("abonnement", "prix en TTC", Q_NULLPTR));
        comboBox_reduction->clear();
        comboBox_reduction->insertItems(0, QStringList()
         << QApplication::translate("abonnement", "pas de R\303\251duction", Q_NULLPTR)
         << QApplication::translate("abonnement", "10%", Q_NULLPTR)
         << QApplication::translate("abonnement", "20%", Q_NULLPTR)
         << QApplication::translate("abonnement", "30%", Q_NULLPTR)
        );
        pushButton_promo->setText(QApplication::translate("abonnement", "G\303\251n\303\251rer le code", Q_NULLPTR));
        lineEdit_promo->setText(QString());
        lineEdit_promo->setPlaceholderText(QApplication::translate("abonnement", "taper le code promo  ", Q_NULLPTR));
        lineEdit_code->setText(QString());
        lineEdit_code->setPlaceholderText(QApplication::translate("abonnement", "code promo", Q_NULLPTR));
        swipe->setText(QString());
        coupon->setText(QString());
        pushButton->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("abonnement", "G\303\251n\303\251rer", Q_NULLPTR));
        groupBox_4->setTitle(QString());
        label_6->setText(QApplication::translate("abonnement", "Num\303\251ro d'abonnement", Q_NULLPTR));
        comboBox_type_c->clear();
        comboBox_type_c->insertItems(0, QStringList()
         << QApplication::translate("abonnement", "Family", Q_NULLPTR)
         << QApplication::translate("abonnement", "Premium", Q_NULLPTR)
         << QApplication::translate("abonnement", "Standard", Q_NULLPTR)
         << QApplication::translate("abonnement", "Prmium++", Q_NULLPTR)
         << QApplication::translate("abonnement", "VIP", Q_NULLPTR)
        );
        label_7->setText(QApplication::translate("abonnement", "Type d'abonnement", Q_NULLPTR));
        label_8->setText(QApplication::translate("abonnement", "Date d'activation", Q_NULLPTR));
        label_9->setText(QApplication::translate("abonnement", "Date d'\303\251xpiration", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("abonnement", "Enregister", Q_NULLPTR));
        label_11->setText(QApplication::translate("abonnement", "ID Abonnement", Q_NULLPTR));
        pushButton_8->setText(QApplication::translate("abonnement", "Chercher", Q_NULLPTR));
        pushButton_qr->setText(QApplication::translate("abonnement", "scanner", Q_NULLPTR));
        lcd->setText(QApplication::translate("abonnement", "Afficher \303\251cran", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("abonnement", "Mettre \303\240 jour", Q_NULLPTR));
        groupBox_5->setTitle(QString());
        lineEdit_supprimer_abonnement->setPlaceholderText(QApplication::translate("abonnement", "taper l'abonnement a supprimer", Q_NULLPTR));
        label_10->setText(QApplication::translate("abonnement", "Num\303\251ro d'abonnement", Q_NULLPTR));
        pushButton_supprimer_abonnement->setText(QApplication::translate("abonnement", "supprimer", Q_NULLPTR));
        pushButton_7->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("abonnement", "Supprimer", Q_NULLPTR));
        actualiser->setText(QApplication::translate("abonnement", "Actualiser", Q_NULLPTR));
        label_15->setText(QApplication::translate("abonnement", "Historique des op\303\251rations", Q_NULLPTR));
        pushButton_3->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("abonnement", "Statistiques", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class abonnement: public Ui_abonnement {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABONNEMENT_H
