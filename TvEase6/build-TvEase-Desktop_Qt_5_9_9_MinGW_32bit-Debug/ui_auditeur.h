/********************************************************************************
** Form generated from reading UI file 'auditeur.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUDITEUR_H
#define UI_AUDITEUR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qcameraviewfinder.h"

QT_BEGIN_NAMESPACE

class Ui_auditeur
{
public:
    QGroupBox *groupBox_2;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton_23;
    QPushButton *pushButton_24;
    QPushButton *pushButton_25;
    QPushButton *pushButton_26;
    QPushButton *pushButton_27;
    QPushButton *pushButton_28;
    QPushButton *pushButton_29;
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
    QPushButton *pushButton_22;
    QPushButton *pushButton_17;
    QGroupBox *groupBox_8;
    QTabWidget *tabWidget;
    QWidget *tab_6;
    QGroupBox *groupBox_9;
    QTableView *tableView_lister_audi;
    QLineEdit *lineEdit_recherche_audi;
    QPushButton *pushButton_9;
    QComboBox *comboBox_trie;
    QPushButton *pushButton_pdf_audi;
    QLabel *label_40;
    QPushButton *pushButto_recherche_audi;
    QWidget *tab_7;
    QGroupBox *groupBox_10;
    QLabel *label_19;
    QLineEdit *ajouter_nom_audi;
    QLabel *label_20;
    QLineEdit *ajouter_prenom_audi;
    QLabel *label_21;
    QLineEdit *ajouter_adr_audi;
    QLabel *label_22;
    QLabel *label_23;
    QLabel *label_24;
    QLineEdit *ajouter_mail_audi;
    QLineEdit *ajouter_tele_audi;
    QPushButton *pushButton_ajouter_audi;
    QPushButton *pushButton_RESET_audi;
    QDateEdit *ajouter_ddn_audi;
    QLineEdit *ajouter_id_audi;
    QLabel *label_27;
    QLabel *imagebrowser;
    QPushButton *pushButton_16;
    QPushButton *browse;
    QWidget *tab_8;
    QGroupBox *groupBox_11;
    QLineEdit *modifier_id_audi;
    QPushButton *pushButton_modifier_audi;
    QPushButton *pushButton_RESET_audi_2;
    QLabel *label_41;
    QPushButton *pushButton_modifier_personnel_2;
    QPushButton *pushButton_id_recher;
    QLineEdit *modifier_nom_audi;
    QLabel *label_25;
    QLineEdit *modifier_adr_audi;
    QLabel *label_42;
    QLineEdit *modifier_mail_audi;
    QLineEdit *modifier_prenom_audi;
    QLabel *label_43;
    QLabel *label_44;
    QLabel *label_45;
    QLabel *label_46;
    QLineEdit *modifier_tele_audi;
    QLabel *label_47;
    QDateEdit *modifier_ddn_audi;
    QWidget *tab_9;
    QGroupBox *groupBox_12;
    QLineEdit *supprimer_id_audi;
    QPushButton *pushButton_supprimer_audi;
    QPushButton *pushButton_RESET_audi_3;
    QLabel *label_48;
    QWidget *tab;
    QGroupBox *groupBox_14;
    QPushButton *pushButton_14;
    QPushButton *pushButton_13;
    QPushButton *pushButton_20;
    QCameraViewfinder *widget_Camera_View;
    QPushButton *pushButton_15;

    void setupUi(QDialog *auditeur)
    {
        if (auditeur->objectName().isEmpty())
            auditeur->setObjectName(QStringLiteral("auditeur"));
        auditeur->resize(1500, 800);
        auditeur->setStyleSheet(QStringLiteral("background-color: #F0F0F0; "));
        groupBox_2 = new QGroupBox(auditeur);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(0, 0, 181, 801));
        groupBox_2->setStyleSheet(QStringLiteral("background-image: url(:/img/images/background.jpg);"));
        verticalLayoutWidget_2 = new QWidget(groupBox_2);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(0, 80, 181, 740));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(verticalLayoutWidget_2->sizePolicy().hasHeightForWidth());
        verticalLayoutWidget_2->setSizePolicy(sizePolicy);
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton_23 = new QPushButton(verticalLayoutWidget_2);
        pushButton_23->setObjectName(QStringLiteral("pushButton_23"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_23->sizePolicy().hasHeightForWidth());
        pushButton_23->setSizePolicy(sizePolicy1);
        pushButton_23->setStyleSheet(QLatin1String("QPushButton{\n"
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
        pushButton_23->setIcon(icon);
        pushButton_23->setIconSize(QSize(30, 30));

        verticalLayout_2->addWidget(pushButton_23);

        pushButton_24 = new QPushButton(verticalLayoutWidget_2);
        pushButton_24->setObjectName(QStringLiteral("pushButton_24"));
        sizePolicy1.setHeightForWidth(pushButton_24->sizePolicy().hasHeightForWidth());
        pushButton_24->setSizePolicy(sizePolicy1);
        pushButton_24->setStyleSheet(QLatin1String("QPushButton{\n"
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
        pushButton_24->setIcon(icon1);
        pushButton_24->setIconSize(QSize(30, 30));

        verticalLayout_2->addWidget(pushButton_24);

        pushButton_25 = new QPushButton(verticalLayoutWidget_2);
        pushButton_25->setObjectName(QStringLiteral("pushButton_25"));
        sizePolicy1.setHeightForWidth(pushButton_25->sizePolicy().hasHeightForWidth());
        pushButton_25->setSizePolicy(sizePolicy1);
        pushButton_25->setStyleSheet(QLatin1String("QPushButton{\n"
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
        pushButton_25->setIcon(icon2);
        pushButton_25->setIconSize(QSize(30, 30));

        verticalLayout_2->addWidget(pushButton_25);

        pushButton_26 = new QPushButton(verticalLayoutWidget_2);
        pushButton_26->setObjectName(QStringLiteral("pushButton_26"));
        sizePolicy1.setHeightForWidth(pushButton_26->sizePolicy().hasHeightForWidth());
        pushButton_26->setSizePolicy(sizePolicy1);
        pushButton_26->setStyleSheet(QLatin1String("background-color: #E3E4F2;\n"
"	background-image: url();\n"
"\n"
"  font-family: Neue Haas Grotesk Text Pro Thin, sans-serif; \n"
"  font-weight: bold; \n"
"    font-size: 20px; \n"
"border : none ; \n"
"border-radius : 0 px ;\n"
"color : #4D53A8 ; "));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/img/images/audi.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_26->setIcon(icon3);
        pushButton_26->setIconSize(QSize(30, 30));

        verticalLayout_2->addWidget(pushButton_26);

        pushButton_27 = new QPushButton(verticalLayoutWidget_2);
        pushButton_27->setObjectName(QStringLiteral("pushButton_27"));
        sizePolicy1.setHeightForWidth(pushButton_27->sizePolicy().hasHeightForWidth());
        pushButton_27->setSizePolicy(sizePolicy1);
        pushButton_27->setStyleSheet(QLatin1String("QPushButton{\n"
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
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/img/images/abonementtt.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_27->setIcon(icon4);
        pushButton_27->setIconSize(QSize(30, 30));

        verticalLayout_2->addWidget(pushButton_27);

        pushButton_28 = new QPushButton(verticalLayoutWidget_2);
        pushButton_28->setObjectName(QStringLiteral("pushButton_28"));
        sizePolicy1.setHeightForWidth(pushButton_28->sizePolicy().hasHeightForWidth());
        pushButton_28->setSizePolicy(sizePolicy1);
        pushButton_28->setStyleSheet(QLatin1String("QPushButton{\n"
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
        pushButton_28->setIcon(icon5);
        pushButton_28->setIconSize(QSize(30, 30));

        verticalLayout_2->addWidget(pushButton_28);

        pushButton_29 = new QPushButton(verticalLayoutWidget_2);
        pushButton_29->setObjectName(QStringLiteral("pushButton_29"));
        sizePolicy1.setHeightForWidth(pushButton_29->sizePolicy().hasHeightForWidth());
        pushButton_29->setSizePolicy(sizePolicy1);
        pushButton_29->setStyleSheet(QLatin1String("QPushButton{\n"
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
        pushButton_29->setIcon(icon6);
        pushButton_29->setIconSize(QSize(50, 100));

        verticalLayout_2->addWidget(pushButton_29);

        label = new QLabel(groupBox_2);
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
        label_34 = new QLabel(groupBox_2);
        label_34->setObjectName(QStringLiteral("label_34"));
        label_34->setGeometry(QRect(60, 470, 71, 16));
        QFont font1;
        font1.setFamily(QStringLiteral("Neue Haas Grotesk Text Pro Medi"));
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        label_34->setFont(font1);
        label_34->setStyleSheet(QLatin1String("background-color: none;\n"
"background-image: url();"));
        label_26 = new QLabel(groupBox_2);
        label_26->setObjectName(QStringLiteral("label_26"));
        label_26->setGeometry(QRect(60, 150, 81, 16));
        label_26->setFont(font1);
        label_26->setStyleSheet(QLatin1String("background-color: none;\n"
"background-image: url();"));
        label_33 = new QLabel(groupBox_2);
        label_33->setObjectName(QStringLiteral("label_33"));
        label_33->setGeometry(QRect(60, 360, 61, 16));
        label_33->setFont(font1);
        label_33->setStyleSheet(QLatin1String("background-color: none;\n"
"background-image: url();"));
        label_35 = new QLabel(groupBox_2);
        label_35->setObjectName(QStringLiteral("label_35"));
        label_35->setGeometry(QRect(50, 570, 91, 16));
        label_35->setFont(font1);
        label_35->setStyleSheet(QLatin1String("background-color: none;\n"
"background-image: url();"));
        label_32 = new QLabel(groupBox_2);
        label_32->setObjectName(QStringLiteral("label_32"));
        label_32->setGeometry(QRect(50, 250, 81, 21));
        label_32->setFont(font1);
        label_32->setStyleSheet(QLatin1String("background-color: none;\n"
"background-image: url();"));
        label_36 = new QLabel(groupBox_2);
        label_36->setObjectName(QStringLiteral("label_36"));
        label_36->setGeometry(QRect(70, 680, 61, 16));
        label_36->setFont(font1);
        label_36->setStyleSheet(QLatin1String("background-color: none;\n"
"background-image: url();"));
        groupBox_7 = new QGroupBox(auditeur);
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
        label_30->setGeometry(QRect(960, 20, 231, 31));
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
        lineEdit_role->setGeometry(QRect(70, 40, 181, 21));
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
        lineEdit_nomprenom->setGeometry(QRect(40, 20, 281, 21));
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
        pushButton_22 = new QPushButton(groupBox_7);
        pushButton_22->setObjectName(QStringLiteral("pushButton_22"));
        pushButton_22->setGeometry(QRect(740, 10, 179, 71));
        sizePolicy1.setHeightForWidth(pushButton_22->sizePolicy().hasHeightForWidth());
        pushButton_22->setSizePolicy(sizePolicy1);
        QFont font6;
        font6.setFamily(QStringLiteral("Neue Haas Grotesk 58 Pro Thin"));
        font6.setBold(true);
        font6.setWeight(75);
        pushButton_22->setFont(font6);
        pushButton_22->setStyleSheet(QLatin1String("QPushButton{\n"
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
        QIcon icon8;
        icon8.addFile(QStringLiteral("../../../../../in/60802.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_22->setIcon(icon8);
        pushButton_22->setIconSize(QSize(50, 100));
        pushButton_17 = new QPushButton(groupBox_7);
        pushButton_17->setObjectName(QStringLiteral("pushButton_17"));
        pushButton_17->setGeometry(QRect(460, 10, 241, 81));
        sizePolicy1.setHeightForWidth(pushButton_17->sizePolicy().hasHeightForWidth());
        pushButton_17->setSizePolicy(sizePolicy1);
        pushButton_17->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color: rgb(0, 0, 127);\n"
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
        QIcon icon9;
        icon9.addFile(QStringLiteral("../../../../../in/stat.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_17->setIcon(icon9);
        pushButton_17->setIconSize(QSize(30, 50));
        groupBox_8 = new QGroupBox(auditeur);
        groupBox_8->setObjectName(QStringLiteral("groupBox_8"));
        groupBox_8->setGeometry(QRect(180, 750, 1361, 101));
        groupBox_8->setStyleSheet(QString::fromUtf8("border-top-right-radius : 40px ; \n"
"background-image: url(:/img/images/background.jpg);\n"
"/*border-top-left-radius: 20px; /*Coin arrondi en haut \303\240 gauche \n"
"    border-bottom-left-radius: 20px; /* Coin arrondi en bas \303\240 gauche \n"
"    border-top-right-radius: 20px; /* Coin arrondi en haut \303\240 droite \n"
"    border-bottom-right-radius: 20px; /* Coin arrondi en bas \303\240 droite */"));
        tabWidget = new QTabWidget(auditeur);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(230, 110, 1261, 581));
        QFont font7;
        font7.setFamily(QStringLiteral("Neue Haas Grotesk Text Pro Blac"));
        font7.setPointSize(10);
        font7.setBold(true);
        font7.setWeight(75);
        tabWidget->setFont(font7);
        tabWidget->setCursor(QCursor(Qt::PointingHandCursor));
        tabWidget->setStyleSheet(QLatin1String("QTabWidget::pane {\n"
"    border-top: 5px solid #40A2E3; /* Top border color */\n"
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
"    background-color:  #40A2E3;\n"
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
        tab_6 = new QWidget();
        tab_6->setObjectName(QStringLiteral("tab_6"));
        groupBox_9 = new QGroupBox(tab_6);
        groupBox_9->setObjectName(QStringLiteral("groupBox_9"));
        groupBox_9->setGeometry(QRect(10, 10, 1231, 531));
        groupBox_9->setStyleSheet(QLatin1String("background-color :  #B5C0D0; \n"
"border-radius : 50px ;"));
        tableView_lister_audi = new QTableView(groupBox_9);
        tableView_lister_audi->setObjectName(QStringLiteral("tableView_lister_audi"));
        tableView_lister_audi->setGeometry(QRect(40, 70, 1121, 381));
        tableView_lister_audi->viewport()->setProperty("cursor", QVariant(QCursor(Qt::PointingHandCursor)));
        tableView_lister_audi->setStyleSheet(QLatin1String("background-color:white ; \n"
"border-radius : 0px ; "));
        lineEdit_recherche_audi = new QLineEdit(groupBox_9);
        lineEdit_recherche_audi->setObjectName(QStringLiteral("lineEdit_recherche_audi"));
        lineEdit_recherche_audi->setGeometry(QRect(90, 30, 231, 31));
        lineEdit_recherche_audi->setStyleSheet(QLatin1String("background-color: white;\n"
"border : none ; \n"
"border-bottom : 3px solid black  ; \n"
"\n"
"\n"
""));
        pushButton_9 = new QPushButton(groupBox_9);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setGeometry(QRect(320, 30, 41, 31));
        pushButton_9->setStyleSheet(QStringLiteral("background-color : none ; "));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/img/images/search.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_9->setIcon(icon10);
        pushButton_9->setIconSize(QSize(50, 25));
        comboBox_trie = new QComboBox(groupBox_9);
        comboBox_trie->setObjectName(QStringLiteral("comboBox_trie"));
        comboBox_trie->setGeometry(QRect(930, 40, 171, 21));
        comboBox_trie->setStyleSheet(QLatin1String("background-color: #E5E4E4 ;\n"
""));
        pushButton_pdf_audi = new QPushButton(groupBox_9);
        pushButton_pdf_audi->setObjectName(QStringLiteral("pushButton_pdf_audi"));
        pushButton_pdf_audi->setGeometry(QRect(530, 470, 181, 41));
        QFont font8;
        font8.setFamily(QStringLiteral("Neue Haas Grotesk Text Pro"));
        font8.setPointSize(11);
        font8.setBold(true);
        font8.setItalic(false);
        font8.setUnderline(false);
        font8.setWeight(75);
        pushButton_pdf_audi->setFont(font8);
        pushButton_pdf_audi->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_pdf_audi->setStyleSheet(QLatin1String("\n"
"#pushButton_pdf_audi{\n"
"background-image: url();\n"
"color : white; \n"
"border-radius : 3px ;\n"
"padding : 10px ; \n"
"background-color:#40679E;\n"
"color : white ; \n"
"}\n"
"\n"
"\n"
"#pushButton_pdf_audi:hover {\n"
"color : white ; \n"
"background-color : #26577C; \n"
"}"));
        QIcon icon11;
        icon11.addFile(QStringLiteral(":/img/images/pd.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_pdf_audi->setIcon(icon11);
        pushButton_pdf_audi->setIconSize(QSize(30, 50));
        label_40 = new QLabel(groupBox_9);
        label_40->setObjectName(QStringLiteral("label_40"));
        label_40->setGeometry(QRect(780, 40, 121, 21));
        QFont font9;
        font9.setFamily(QStringLiteral("Neue Haas Grotesk Text Pro Extr"));
        font9.setPointSize(10);
        font9.setBold(true);
        font9.setWeight(75);
        label_40->setFont(font9);
        pushButto_recherche_audi = new QPushButton(groupBox_9);
        pushButto_recherche_audi->setObjectName(QStringLiteral("pushButto_recherche_audi"));
        pushButto_recherche_audi->setGeometry(QRect(360, 30, 31, 31));
        QFont font10;
        font10.setPointSize(8);
        pushButto_recherche_audi->setFont(font10);
        pushButto_recherche_audi->setStyleSheet(QLatin1String("\n"
"#pushButto_recherche_audi{\n"
"background-image: url();\n"
"color : white; \n"
"border-radius : 3px ;\n"
"padding : 10px ; \n"
"background-color:#40679E;\n"
"color : white ; \n"
"}\n"
"\n"
"\n"
"#pushButto_recherche_audi:hover {\n"
"color : white ; \n"
"background-color : #26577C; \n"
"}"));
        QIcon icon12;
        icon12.addFile(QStringLiteral(":/img/OneDrive/Bureau/SEARCH.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButto_recherche_audi->setIcon(icon12);
        tabWidget->addTab(tab_6, QString());
        tab_7 = new QWidget();
        tab_7->setObjectName(QStringLiteral("tab_7"));
        groupBox_10 = new QGroupBox(tab_7);
        groupBox_10->setObjectName(QStringLiteral("groupBox_10"));
        groupBox_10->setGeometry(QRect(10, 10, 1241, 531));
        groupBox_10->setCursor(QCursor(Qt::ArrowCursor));
        groupBox_10->setStyleSheet(QLatin1String("background-color :  #B5C0D0; \n"
"border-radius : 50px ;\n"
"\n"
"\n"
"\n"
"\n"
"\n"
""));
        label_19 = new QLabel(groupBox_10);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(50, 120, 61, 21));
        QFont font11;
        font11.setFamily(QStringLiteral("Neue Haas Grotesk Text Pro Extr"));
        font11.setPointSize(12);
        font11.setBold(true);
        font11.setWeight(75);
        label_19->setFont(font11);
        label_19->setStyleSheet(QLatin1String("color: black ; \n"
"border:none ; "));
        ajouter_nom_audi = new QLineEdit(groupBox_10);
        ajouter_nom_audi->setObjectName(QStringLiteral("ajouter_nom_audi"));
        ajouter_nom_audi->setGeometry(QRect(250, 110, 301, 31));
        ajouter_nom_audi->setStyleSheet(QLatin1String("background-color: white ; \n"
"border-radius : 10px ; \n"
"border : 1px solid black ;"));
        label_20 = new QLabel(groupBox_10);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(590, 110, 91, 31));
        label_20->setFont(font11);
        label_20->setStyleSheet(QLatin1String("color: black ; \n"
"border:none ; "));
        ajouter_prenom_audi = new QLineEdit(groupBox_10);
        ajouter_prenom_audi->setObjectName(QStringLiteral("ajouter_prenom_audi"));
        ajouter_prenom_audi->setGeometry(QRect(750, 110, 331, 31));
        ajouter_prenom_audi->setStyleSheet(QLatin1String("background-color: white ; \n"
"border-radius : 10px ; \n"
"border : 1px solid black ;"));
        label_21 = new QLabel(groupBox_10);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(600, 190, 191, 31));
        label_21->setFont(font11);
        label_21->setStyleSheet(QLatin1String("color: black ; \n"
"border:none ; "));
        ajouter_adr_audi = new QLineEdit(groupBox_10);
        ajouter_adr_audi->setObjectName(QStringLiteral("ajouter_adr_audi"));
        ajouter_adr_audi->setGeometry(QRect(250, 270, 301, 31));
        ajouter_adr_audi->setStyleSheet(QLatin1String("background-color: white ; \n"
"border-radius : 10px ; \n"
"border : 1px solid black ;"));
        label_22 = new QLabel(groupBox_10);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setGeometry(QRect(600, 270, 91, 21));
        label_22->setFont(font11);
        label_22->setStyleSheet(QLatin1String("color: black ; \n"
"border:none ; "));
        label_23 = new QLabel(groupBox_10);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setGeometry(QRect(50, 260, 101, 21));
        label_23->setFont(font11);
        label_23->setStyleSheet(QLatin1String("color: black ; \n"
"border:none ; "));
        label_24 = new QLabel(groupBox_10);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setGeometry(QRect(50, 190, 201, 31));
        label_24->setFont(font11);
        label_24->setStyleSheet(QLatin1String("color: black ; \n"
"border:none ; "));
        ajouter_mail_audi = new QLineEdit(groupBox_10);
        ajouter_mail_audi->setObjectName(QStringLiteral("ajouter_mail_audi"));
        ajouter_mail_audi->setGeometry(QRect(750, 270, 331, 31));
        ajouter_mail_audi->setStyleSheet(QLatin1String("background-color: white ; \n"
"border-radius : 10px ; \n"
"border : 1px solid black ;"));
        ajouter_tele_audi = new QLineEdit(groupBox_10);
        ajouter_tele_audi->setObjectName(QStringLiteral("ajouter_tele_audi"));
        ajouter_tele_audi->setGeometry(QRect(750, 190, 331, 31));
        ajouter_tele_audi->setStyleSheet(QLatin1String("background-color: white ; \n"
"border-radius : 10px ; \n"
"border : 1px solid black ;"));
        pushButton_ajouter_audi = new QPushButton(groupBox_10);
        pushButton_ajouter_audi->setObjectName(QStringLiteral("pushButton_ajouter_audi"));
        pushButton_ajouter_audi->setGeometry(QRect(140, 460, 391, 61));
        pushButton_ajouter_audi->setFont(font4);
        pushButton_ajouter_audi->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_ajouter_audi->setStyleSheet(QLatin1String("#pushButton_ajouter_audi\n"
"{background-color : #333770 ;\n"
"border-radius : 10px ;\n"
"color : white ; \n"
"padding:10px ;\n"
"border:none ; \n"
"}\n"
"\n"
"#pushButton_ajouter_audi:hover\n"
"{\n"
"color : white ; \n"
"background-color : #26577C; \n"
"\n"
"}"));
        pushButton_RESET_audi = new QPushButton(groupBox_10);
        pushButton_RESET_audi->setObjectName(QStringLiteral("pushButton_RESET_audi"));
        pushButton_RESET_audi->setGeometry(QRect(630, 460, 421, 61));
        pushButton_RESET_audi->setFont(font4);
        pushButton_RESET_audi->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_RESET_audi->setStyleSheet(QLatin1String("#pushButton_RESET_audi\n"
"{background-color : #333770 ;\n"
"border-radius : 10px ;\n"
"color : white ; \n"
"padding : 10px ; \n"
"border:none ; }\n"
"\n"
"\n"
"#pushButton_RESET_audi:hover\n"
"{\n"
"color : white ; \n"
"background-color : #26577C; \n"
" }\n"
""));
        ajouter_ddn_audi = new QDateEdit(groupBox_10);
        ajouter_ddn_audi->setObjectName(QStringLiteral("ajouter_ddn_audi"));
        ajouter_ddn_audi->setGeometry(QRect(250, 190, 301, 31));
        ajouter_ddn_audi->setStyleSheet(QLatin1String("background-color: white ; \n"
"border-radius : 10px ; \n"
"border : 1px solid black ;"));
        ajouter_id_audi = new QLineEdit(groupBox_10);
        ajouter_id_audi->setObjectName(QStringLiteral("ajouter_id_audi"));
        ajouter_id_audi->setGeometry(QRect(440, 30, 301, 31));
        ajouter_id_audi->setStyleSheet(QLatin1String("background-color: white ; \n"
"border-radius : 10px ; \n"
"border : 1px solid black ;"));
        label_27 = new QLabel(groupBox_10);
        label_27->setObjectName(QStringLiteral("label_27"));
        label_27->setGeometry(QRect(380, 30, 61, 21));
        label_27->setFont(font11);
        label_27->setStyleSheet(QLatin1String("color: black ; \n"
"border:none ; "));
        imagebrowser = new QLabel(groupBox_10);
        imagebrowser->setObjectName(QStringLiteral("imagebrowser"));
        imagebrowser->setGeometry(QRect(510, 320, 261, 121));
        imagebrowser->setStyleSheet(QLatin1String("border-radius : 10px ; \n"
"image: url(:/img/images/telecharger.png);\n"
"border : 1px solid black ;"));
        imagebrowser->setFrameShape(QFrame::WinPanel);
        imagebrowser->setScaledContents(true);
        pushButton_16 = new QPushButton(groupBox_10);
        pushButton_16->setObjectName(QStringLiteral("pushButton_16"));
        pushButton_16->setGeometry(QRect(280, 340, 191, 71));
        sizePolicy1.setHeightForWidth(pushButton_16->sizePolicy().hasHeightForWidth());
        pushButton_16->setSizePolicy(sizePolicy1);
        pushButton_16->setFont(font6);
        pushButton_16->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color: rgb(194, 194, 194);\n"
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
        QIcon icon13;
        icon13.addFile(QStringLiteral(":/img/images/385531682_986201625808493_6478609531610401496_n.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_16->setIcon(icon13);
        pushButton_16->setIconSize(QSize(50, 100));
        browse = new QPushButton(groupBox_10);
        browse->setObjectName(QStringLiteral("browse"));
        browse->setGeometry(QRect(830, 360, 141, 61));
        tabWidget->addTab(tab_7, QString());
        tab_8 = new QWidget();
        tab_8->setObjectName(QStringLiteral("tab_8"));
        groupBox_11 = new QGroupBox(tab_8);
        groupBox_11->setObjectName(QStringLiteral("groupBox_11"));
        groupBox_11->setGeometry(QRect(20, 10, 1221, 531));
        groupBox_11->setCursor(QCursor(Qt::ArrowCursor));
        groupBox_11->setStyleSheet(QLatin1String("background-color :  transparent ; \n"
"opacity: 0.3;\n"
"background-color :  #B5C0D0; ; \n"
"border-radius : 50px ;\n"
"\n"
"\n"
"\n"
"\n"
""));
        modifier_id_audi = new QLineEdit(groupBox_11);
        modifier_id_audi->setObjectName(QStringLiteral("modifier_id_audi"));
        modifier_id_audi->setGeometry(QRect(380, 60, 321, 31));
        modifier_id_audi->setStyleSheet(QLatin1String("background-color : white ; \n"
"border-radius : 10px ; \n"
"border : 1px solid black ;"));
        pushButton_modifier_audi = new QPushButton(groupBox_11);
        pushButton_modifier_audi->setObjectName(QStringLiteral("pushButton_modifier_audi"));
        pushButton_modifier_audi->setGeometry(QRect(90, 450, 471, 61));
        pushButton_modifier_audi->setFont(font4);
        pushButton_modifier_audi->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_modifier_audi->setStyleSheet(QLatin1String("#pushButton_modifier_audi\n"
"{\n"
"background-color : #333770 ;\n"
"border-radius : 10px ;\n"
"color : white ; \n"
"padding : 10px;}\n"
"\n"
"\n"
"#pushButton_modifier_audi:hover\n"
"{\n"
"color : white ; \n"
"background-color : #26577C; }\n"
""));
        pushButton_RESET_audi_2 = new QPushButton(groupBox_11);
        pushButton_RESET_audi_2->setObjectName(QStringLiteral("pushButton_RESET_audi_2"));
        pushButton_RESET_audi_2->setGeometry(QRect(620, 450, 471, 61));
        pushButton_RESET_audi_2->setFont(font4);
        pushButton_RESET_audi_2->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_RESET_audi_2->setStyleSheet(QLatin1String("#pushButton_RESET_audi_2\n"
"{background-color : #333770 ;\n"
"border-radius : 10px ;\n"
"color : white ; \n"
"padding : 10px ; \n"
"border:none ; }\n"
"\n"
"\n"
"#pushButton_RESET_personnel_1:hover\n"
"{\n"
"color : white ; \n"
"background-color : #26577C; }"));
        label_41 = new QLabel(groupBox_11);
        label_41->setObjectName(QStringLiteral("label_41"));
        label_41->setGeometry(QRect(256, 60, 101, 21));
        label_41->setFont(font11);
        label_41->setStyleSheet(QStringLiteral("color: black;"));
        pushButton_modifier_personnel_2 = new QPushButton(groupBox_11);
        pushButton_modifier_personnel_2->setObjectName(QStringLiteral("pushButton_modifier_personnel_2"));
        pushButton_modifier_personnel_2->setGeometry(QRect(630, 550, 171, 41));
        pushButton_modifier_personnel_2->setFont(font4);
        pushButton_modifier_personnel_2->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_modifier_personnel_2->setStyleSheet(QLatin1String("#pushButton_modifier_personnel\n"
"{\n"
"background-color : #333770 ;\n"
"border-radius : 10px ;\n"
"color : white ; \n"
"padding : 10px;}\n"
"\n"
"\n"
"#pushButton_modifier_personnel:hover\n"
"{\n"
"color : white ; \n"
"background-color : #26577C; }\n"
""));
        pushButton_id_recher = new QPushButton(groupBox_11);
        pushButton_id_recher->setObjectName(QStringLiteral("pushButton_id_recher"));
        pushButton_id_recher->setGeometry(QRect(720, 40, 231, 71));
        pushButton_id_recher->setFont(font4);
        pushButton_id_recher->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_id_recher->setStyleSheet(QLatin1String("#pushButton_id_recher\n"
"{\n"
"background-color : #333770 ;\n"
"border-radius : 10px ;\n"
"color : white ; \n"
"padding : 10px;}\n"
"\n"
"\n"
"#pushButton_id_recher:hover\n"
"{\n"
"color : white ; \n"
"background-color : #26577C; }"));
        modifier_nom_audi = new QLineEdit(groupBox_11);
        modifier_nom_audi->setObjectName(QStringLiteral("modifier_nom_audi"));
        modifier_nom_audi->setGeometry(QRect(280, 160, 301, 31));
        modifier_nom_audi->setStyleSheet(QLatin1String("background-color: white ; \n"
"border-radius : 10px ; \n"
"border : 1px solid black ;"));
        label_25 = new QLabel(groupBox_11);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setGeometry(QRect(80, 370, 101, 21));
        label_25->setFont(font11);
        label_25->setStyleSheet(QLatin1String("color: black ; \n"
"border:none ; "));
        modifier_adr_audi = new QLineEdit(groupBox_11);
        modifier_adr_audi->setObjectName(QStringLiteral("modifier_adr_audi"));
        modifier_adr_audi->setGeometry(QRect(280, 360, 301, 31));
        modifier_adr_audi->setStyleSheet(QLatin1String("background-color: white ; \n"
"border-radius : 10px ; \n"
"border : 1px solid black ;"));
        label_42 = new QLabel(groupBox_11);
        label_42->setObjectName(QStringLiteral("label_42"));
        label_42->setGeometry(QRect(80, 160, 61, 21));
        label_42->setFont(font11);
        label_42->setStyleSheet(QLatin1String("color: black ; \n"
"border:none ; "));
        modifier_mail_audi = new QLineEdit(groupBox_11);
        modifier_mail_audi->setObjectName(QStringLiteral("modifier_mail_audi"));
        modifier_mail_audi->setGeometry(QRect(780, 370, 331, 31));
        modifier_mail_audi->setStyleSheet(QLatin1String("background-color: white ; \n"
"border-radius : 10px ; \n"
"border : 1px solid black ;"));
        modifier_prenom_audi = new QLineEdit(groupBox_11);
        modifier_prenom_audi->setObjectName(QStringLiteral("modifier_prenom_audi"));
        modifier_prenom_audi->setGeometry(QRect(780, 160, 331, 31));
        modifier_prenom_audi->setStyleSheet(QLatin1String("background-color: white ; \n"
"border-radius : 10px ; \n"
"border : 1px solid black ;"));
        label_43 = new QLabel(groupBox_11);
        label_43->setObjectName(QStringLiteral("label_43"));
        label_43->setGeometry(QRect(630, 370, 91, 21));
        label_43->setFont(font11);
        label_43->setStyleSheet(QLatin1String("color: black ; \n"
"border:none ; "));
        label_44 = new QLabel(groupBox_11);
        label_44->setObjectName(QStringLiteral("label_44"));
        label_44->setGeometry(QRect(630, 270, 191, 31));
        label_44->setFont(font11);
        label_44->setStyleSheet(QLatin1String("color: black ; \n"
"border:none ; "));
        label_45 = new QLabel(groupBox_11);
        label_45->setObjectName(QStringLiteral("label_45"));
        label_45->setGeometry(QRect(70, 270, 201, 31));
        label_45->setFont(font11);
        label_45->setStyleSheet(QLatin1String("color: black ; \n"
"border:none ; "));
        label_46 = new QLabel(groupBox_11);
        label_46->setObjectName(QStringLiteral("label_46"));
        label_46->setGeometry(QRect(620, 160, 91, 31));
        label_46->setFont(font11);
        label_46->setStyleSheet(QLatin1String("color: black ; \n"
"border:none ; "));
        modifier_tele_audi = new QLineEdit(groupBox_11);
        modifier_tele_audi->setObjectName(QStringLiteral("modifier_tele_audi"));
        modifier_tele_audi->setGeometry(QRect(780, 270, 331, 31));
        modifier_tele_audi->setStyleSheet(QLatin1String("background-color: white ; \n"
"border-radius : 10px ; \n"
"border : 1px solid black ;"));
        label_47 = new QLabel(tab_8);
        label_47->setObjectName(QStringLiteral("label_47"));
        label_47->setGeometry(QRect(730, 560, 91, 21));
        label_47->setFont(font11);
        label_47->setStyleSheet(QStringLiteral("color: black ; "));
        modifier_ddn_audi = new QDateEdit(tab_8);
        modifier_ddn_audi->setObjectName(QStringLiteral("modifier_ddn_audi"));
        modifier_ddn_audi->setGeometry(QRect(300, 280, 301, 31));
        modifier_ddn_audi->setStyleSheet(QLatin1String("background-color: white ; \n"
"border-radius : 10px ; \n"
"border : 1px solid black ;"));
        tabWidget->addTab(tab_8, QString());
        tab_9 = new QWidget();
        tab_9->setObjectName(QStringLiteral("tab_9"));
        groupBox_12 = new QGroupBox(tab_9);
        groupBox_12->setObjectName(QStringLiteral("groupBox_12"));
        groupBox_12->setGeometry(QRect(0, 10, 1231, 521));
        groupBox_12->setCursor(QCursor(Qt::ArrowCursor));
        groupBox_12->setStyleSheet(QLatin1String("background-color: white;\n"
"background-color :  #B5C0D0; \n"
"border-radius : 50px ;"));
        supprimer_id_audi = new QLineEdit(groupBox_12);
        supprimer_id_audi->setObjectName(QStringLiteral("supprimer_id_audi"));
        supprimer_id_audi->setGeometry(QRect(460, 150, 331, 41));
        supprimer_id_audi->setStyleSheet(QLatin1String("background-color : white ; \n"
"border-radius : 10px ; \n"
"border : 1px solid black ;"));
        pushButton_supprimer_audi = new QPushButton(groupBox_12);
        pushButton_supprimer_audi->setObjectName(QStringLiteral("pushButton_supprimer_audi"));
        pushButton_supprimer_audi->setGeometry(QRect(460, 280, 171, 41));
        pushButton_supprimer_audi->setFont(font4);
        pushButton_supprimer_audi->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_supprimer_audi->setStyleSheet(QLatin1String("#pushButton_supprimer_audi\n"
"{\n"
"background-color : #333770 ;\n"
"border-radius : 10px ;\n"
"color : white ; \n"
"padding : 10px ;}\n"
"\n"
"#pushButton_supprimer_audi:hover{\n"
"color : white ; \n"
"background-color : #26577C;}"));
        pushButton_RESET_audi_3 = new QPushButton(groupBox_12);
        pushButton_RESET_audi_3->setObjectName(QStringLiteral("pushButton_RESET_audi_3"));
        pushButton_RESET_audi_3->setGeometry(QRect(640, 280, 171, 41));
        pushButton_RESET_audi_3->setFont(font4);
        pushButton_RESET_audi_3->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_RESET_audi_3->setStyleSheet(QLatin1String("#pushButton_RESET_audi_3\n"
"{background-color : #333770 ;\n"
"border-radius : 10px ;\n"
"color : white ; \n"
"padding : 10px ; \n"
"border:none ; }\n"
"\n"
"\n"
"#pushButton_RESET_audi_3:hover\n"
"{\n"
"color : white ; \n"
"background-color : #26577C; }"));
        label_48 = new QLabel(groupBox_12);
        label_48->setObjectName(QStringLiteral("label_48"));
        label_48->setGeometry(QRect(380, 160, 47, 21));
        label_48->setFont(font11);
        label_48->setStyleSheet(QStringLiteral("color: black;"));
        tabWidget->addTab(tab_9, QString());
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        groupBox_14 = new QGroupBox(tab);
        groupBox_14->setObjectName(QStringLiteral("groupBox_14"));
        groupBox_14->setGeometry(QRect(30, 20, 1241, 531));
        groupBox_14->setCursor(QCursor(Qt::ArrowCursor));
        groupBox_14->setStyleSheet(QLatin1String("background-color :  #B5C0D0; \n"
"border-radius : 50px ;\n"
"\n"
"\n"
"\n"
"\n"
"\n"
""));
        pushButton_14 = new QPushButton(groupBox_14);
        pushButton_14->setObjectName(QStringLiteral("pushButton_14"));
        pushButton_14->setGeometry(QRect(50, 30, 321, 71));
        sizePolicy1.setHeightForWidth(pushButton_14->sizePolicy().hasHeightForWidth());
        pushButton_14->setSizePolicy(sizePolicy1);
        pushButton_14->setFont(font6);
        pushButton_14->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color: rgb(226, 226, 226);\n"
"	background-image: url();\n"
"\n"
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
"}"));
        pushButton_14->setIconSize(QSize(30, 30));
        pushButton_13 = new QPushButton(groupBox_14);
        pushButton_13->setObjectName(QStringLiteral("pushButton_13"));
        pushButton_13->setGeometry(QRect(680, 30, 81, 71));
        sizePolicy1.setHeightForWidth(pushButton_13->sizePolicy().hasHeightForWidth());
        pushButton_13->setSizePolicy(sizePolicy1);
        pushButton_13->setFont(font6);
        pushButton_13->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color: rgb(226, 226, 226);\n"
"	background-image: url();\n"
"\n"
"    font-family: Neue Haas Grotesk Text Pro Thin; \n"
"    font-weight: bold; \n"
"    font-size: 20px; \n"
"border : none ; \n"
"border-radius : 0 px ;\n"
"color : #4D53A8 ; \n"
"}\n"
""));
        pushButton_13->setIconSize(QSize(30, 30));
        pushButton_20 = new QPushButton(groupBox_14);
        pushButton_20->setObjectName(QStringLiteral("pushButton_20"));
        pushButton_20->setGeometry(QRect(440, 30, 321, 71));
        sizePolicy1.setHeightForWidth(pushButton_20->sizePolicy().hasHeightForWidth());
        pushButton_20->setSizePolicy(sizePolicy1);
        pushButton_20->setFont(font6);
        pushButton_20->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color: rgb(226, 226, 226);\n"
"	background-image: url();\n"
"\n"
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
"}"));
        pushButton_20->setIconSize(QSize(30, 30));
        widget_Camera_View = new QCameraViewfinder(groupBox_14);
        widget_Camera_View->setObjectName(QStringLiteral("widget_Camera_View"));
        widget_Camera_View->setGeometry(QRect(110, 110, 981, 381));
        pushButton_15 = new QPushButton(groupBox_14);
        pushButton_15->setObjectName(QStringLiteral("pushButton_15"));
        pushButton_15->setGeometry(QRect(890, 30, 281, 71));
        sizePolicy1.setHeightForWidth(pushButton_15->sizePolicy().hasHeightForWidth());
        pushButton_15->setSizePolicy(sizePolicy1);
        pushButton_15->setFont(font6);
        pushButton_15->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color: rgb(226, 226, 226);\n"
"	background-image: url();\n"
"\n"
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
"}"));
        pushButton_15->setIconSize(QSize(30, 30));
        pushButton_20->raise();
        pushButton_14->raise();
        pushButton_13->raise();
        widget_Camera_View->raise();
        pushButton_15->raise();
        tabWidget->addTab(tab, QString());

        retranslateUi(auditeur);
        QObject::connect(pushButton_29, SIGNAL(clicked()), auditeur, SLOT(close()));

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(auditeur);
    } // setupUi

    void retranslateUi(QDialog *auditeur)
    {
        auditeur->setWindowTitle(QApplication::translate("auditeur", "Dialog", Q_NULLPTR));
        groupBox_2->setTitle(QString());
        pushButton_23->setText(QString());
        pushButton_24->setText(QString());
        pushButton_25->setText(QString());
        pushButton_26->setText(QString());
        pushButton_27->setText(QString());
        pushButton_28->setText(QString());
        pushButton_29->setText(QApplication::translate("auditeur", "Quitter", Q_NULLPTR));
        label->setText(QApplication::translate("auditeur", "Tv'Ease", Q_NULLPTR));
        label_34->setText(QApplication::translate("auditeur", "Auditeurs", Q_NULLPTR));
        label_26->setText(QApplication::translate("auditeur", "Personnel", Q_NULLPTR));
        label_33->setText(QApplication::translate("auditeur", "Publicite", Q_NULLPTR));
        label_35->setText(QApplication::translate("auditeur", "Abonnement", Q_NULLPTR));
        label_32->setText(QApplication::translate("auditeur", "Programme", Q_NULLPTR));
        label_36->setText(QApplication::translate("auditeur", "Studios", Q_NULLPTR));
        groupBox_7->setTitle(QString());
        label_30->setText(QApplication::translate("auditeur", "Vendredi 22  Fevrier 2024", Q_NULLPTR));
        label_31->setText(QApplication::translate("auditeur", "13\302\260", Q_NULLPTR));
        pushButton_parametre_compte->setText(QString());
        pushButton_22->setText(QApplication::translate("auditeur", "Alarme", Q_NULLPTR));
        pushButton_17->setText(QApplication::translate("auditeur", "stat", Q_NULLPTR));
        groupBox_8->setTitle(QString());
        groupBox_9->setTitle(QString());
        lineEdit_recherche_audi->setPlaceholderText(QApplication::translate("auditeur", "Entrez un terme de recherche...", Q_NULLPTR));
        pushButton_9->setText(QString());
        pushButton_pdf_audi->setText(QApplication::translate("auditeur", "Imprimer en PDF", Q_NULLPTR));
        label_40->setText(QApplication::translate("auditeur", "Trier Tableau :", Q_NULLPTR));
        pushButto_recherche_audi->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_6), QApplication::translate("auditeur", "Afficher", Q_NULLPTR));
        groupBox_10->setTitle(QString());
        label_19->setText(QApplication::translate("auditeur", "Nom :", Q_NULLPTR));
        label_20->setText(QApplication::translate("auditeur", "Prenom :", Q_NULLPTR));
        label_21->setText(QApplication::translate("auditeur", "telephone :", Q_NULLPTR));
        label_22->setText(QApplication::translate("auditeur", "E_mail :", Q_NULLPTR));
        label_23->setText(QApplication::translate("auditeur", "Adresse :", Q_NULLPTR));
        label_24->setText(QApplication::translate("auditeur", "Date de Naissance :", Q_NULLPTR));
        pushButton_ajouter_audi->setText(QApplication::translate("auditeur", "Ajouter", Q_NULLPTR));
        pushButton_RESET_audi->setText(QApplication::translate("auditeur", "Annuler", Q_NULLPTR));
        label_27->setText(QApplication::translate("auditeur", "Id:", Q_NULLPTR));
        imagebrowser->setText(QString());
        pushButton_16->setText(QApplication::translate("auditeur", "add photo", Q_NULLPTR));
        browse->setText(QApplication::translate("auditeur", "telecharger", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_7), QApplication::translate("auditeur", "Ajouter", Q_NULLPTR));
        groupBox_11->setTitle(QString());
        pushButton_modifier_audi->setText(QApplication::translate("auditeur", "Modifier", Q_NULLPTR));
        pushButton_RESET_audi_2->setText(QApplication::translate("auditeur", "Annuler", Q_NULLPTR));
        label_41->setText(QApplication::translate("auditeur", "Entrer ID :", Q_NULLPTR));
        pushButton_modifier_personnel_2->setText(QApplication::translate("auditeur", "Modifier", Q_NULLPTR));
        pushButton_id_recher->setText(QApplication::translate("auditeur", "Chercher Auditeur", Q_NULLPTR));
        label_25->setText(QApplication::translate("auditeur", "Adresse :", Q_NULLPTR));
        label_42->setText(QApplication::translate("auditeur", "Nom :", Q_NULLPTR));
        label_43->setText(QApplication::translate("auditeur", "E_mail :", Q_NULLPTR));
        label_44->setText(QApplication::translate("auditeur", "telephone :", Q_NULLPTR));
        label_45->setText(QApplication::translate("auditeur", "Date de Naissance :", Q_NULLPTR));
        label_46->setText(QApplication::translate("auditeur", "Prenom :", Q_NULLPTR));
        label_47->setText(QApplication::translate("auditeur", "Salaire", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_8), QApplication::translate("auditeur", "Modifier", Q_NULLPTR));
        groupBox_12->setTitle(QString());
        pushButton_supprimer_audi->setText(QApplication::translate("auditeur", "Supprimer", Q_NULLPTR));
        pushButton_RESET_audi_3->setText(QApplication::translate("auditeur", "Annuler", Q_NULLPTR));
        label_48->setText(QApplication::translate("auditeur", "ID :", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_9), QApplication::translate("auditeur", "Supprimer", Q_NULLPTR));
        groupBox_14->setTitle(QString());
        pushButton_14->setText(QApplication::translate("auditeur", " Start Camera", Q_NULLPTR));
        pushButton_13->setText(QString());
        pushButton_20->setText(QApplication::translate("auditeur", "Capture Image", Q_NULLPTR));
        pushButton_15->setText(QApplication::translate("auditeur", "Stop Camera", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("auditeur", "Page", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class auditeur: public Ui_auditeur {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUDITEUR_H
