/********************************************************************************
** Form generated from reading UI file 'publicite.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PUBLICITE_H
#define UI_PUBLICITE_H

#include <QtCore/QDate>
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
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_publicite
{
public:
    QGroupBox *groupBox_2;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton_16;
    QPushButton *pushButton_17;
    QPushButton *pushButton_18;
    QPushButton *pushButton_19;
    QPushButton *pushButton_20;
    QPushButton *pushButton_21;
    QPushButton *pushButton_22;
    QLabel *label;
    QLabel *label_34;
    QLabel *label_26;
    QLabel *label_33;
    QLabel *label_35;
    QLabel *label_32;
    QLabel *label_36;
    QGroupBox *groupBox_8;
    QGroupBox *groupBox_7;
    QLineEdit *lineEdit_role;
    QLineEdit *lineEdit_nomprenom;
    QPushButton *pushButton_parametre_compte;
    QPushButton *chatbot;
    QLabel *label_24;
    QLabel *label_27;
    QLabel *label_28;
    QPushButton *ard;
    QLabel *label_25;
    QPushButton *ard_2;
    QLabel *label_29;
    QPushButton *ard_3;
    QLabel *label_30;
    QPushButton *Notif;
    QPushButton *pushButton_7;
    QPushButton *pushButton_5;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGroupBox *groupBox_5;
    QTableView *tableaupub;
    QPushButton *pushButton;
    QLineEdit *recherche;
    QPushButton *rechbutton;
    QComboBox *comboBox;
    QLabel *label_71;
    QLabel *label_2;
    QLabel *label_75;
    QWidget *tab_3;
    QGroupBox *groupBox;
    QLabel *label_53;
    QLabel *label_54;
    QLabel *label_55;
    QLineEdit *ajoutnom_6;
    QLineEdit *ajoutnumero_6;
    QLineEdit *ajoutadr_6;
    QDateEdit *dateajout_6;
    QLabel *label_57;
    QTimeEdit *tempsajout_6;
    QLabel *label_58;
    QLineEdit *prixajout_6;
    QLabel *label_59;
    QLabel *label_60;
    QTimeEdit *dureeajout_6;
    QPushButton *BoutonAjouter_6;
    QLineEdit *ajoutID_6;
    QLabel *label_61;
    QPushButton *random;
    QComboBox *comboBoxSocietes;
    QLabel *label_72;
    QLabel *label_73;
    QComboBox *ProgID;
    QLabel *label_5;
    QLabel *label_20;
    QLabel *label_21;
    QLabel *label_22;
    QPushButton *pushButton_6;
    QWidget *tab_4;
    QGroupBox *groupBox_3;
    QLabel *label_62;
    QLineEdit *enterid;
    QLabel *label_63;
    QLabel *label_64;
    QLabel *label_65;
    QLabel *label_66;
    QLabel *label_67;
    QLineEdit *modifnom;
    QLineEdit *adressmodif;
    QLabel *label_68;
    QDateEdit *datemodif;
    QTimeEdit *tempsmodif;
    QTimeEdit *dureemodif;
    QLineEdit *prixmodif;
    QPushButton *modifier;
    QLabel *label_69;
    QLineEdit *modifnum;
    QPushButton *lookforid;
    QComboBox *societe;
    QLabel *label_74;
    QLabel *label_76;
    QLabel *label_77;
    QLabel *label_23;
    QPushButton *BoutonSupprimer;
    QLabel *label_70;
    QLineEdit *idsupprimer;
    QWidget *tab_2;
    QGroupBox *groupBox_4;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_6;
    QPushButton *ajoutersociete;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLineEdit *nomsociete;
    QLineEdit *email;
    QLineEdit *industrie;
    QLineEdit *adresse;
    QLabel *label_12;
    QLineEdit *lineEdit_5;
    QLabel *label_13;
    QLineEdit *lineEdit_6;
    QLabel *label_14;
    QLineEdit *lineEdit_7;
    QLabel *label_15;
    QLineEdit *suppr;
    QTableView *tableView;
    QLineEdit *pers;
    QLineEdit *numero;
    QLabel *label_16;
    QLabel *label_11;
    QLineEdit *siteweb;
    QLabel *label_17;
    QLineEdit *IDSOC;
    QLabel *label_18;
    QLabel *label_19;
    QPushButton *pushButton_2;
    QWidget *tab_5;
    QGroupBox *groupBox_6;
    QFrame *frame;
    QFrame *frame_2;
    QPushButton *raf;

    void setupUi(QDialog *publicite)
    {
        if (publicite->objectName().isEmpty())
            publicite->setObjectName(QStringLiteral("publicite"));
        publicite->resize(1500, 800);
        publicite->setStyleSheet(QStringLiteral("background-color: #F0F0F0; "));
        groupBox_2 = new QGroupBox(publicite);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(0, 0, 181, 801));
        groupBox_2->setStyleSheet(QStringLiteral("background-image: url(:/img/images/background.jpg);"));
        verticalLayoutWidget_2 = new QWidget(groupBox_2);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(0, 70, 181, 740));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(verticalLayoutWidget_2->sizePolicy().hasHeightForWidth());
        verticalLayoutWidget_2->setSizePolicy(sizePolicy);
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton_16 = new QPushButton(verticalLayoutWidget_2);
        pushButton_16->setObjectName(QStringLiteral("pushButton_16"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_16->sizePolicy().hasHeightForWidth());
        pushButton_16->setSizePolicy(sizePolicy1);
        pushButton_16->setStyleSheet(QLatin1String("QPushButton{\n"
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
        icon.addFile(QStringLiteral(":/img/images/perso.png"), QSize(), QIcon::Disabled, QIcon::On);
        pushButton_16->setIcon(icon);
        pushButton_16->setIconSize(QSize(30, 30));

        verticalLayout_2->addWidget(pushButton_16);

        pushButton_17 = new QPushButton(verticalLayoutWidget_2);
        pushButton_17->setObjectName(QStringLiteral("pushButton_17"));
        sizePolicy1.setHeightForWidth(pushButton_17->sizePolicy().hasHeightForWidth());
        pushButton_17->setSizePolicy(sizePolicy1);
        pushButton_17->setStyleSheet(QLatin1String("QPushButton{\n"
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
        pushButton_17->setIcon(icon1);
        pushButton_17->setIconSize(QSize(30, 30));

        verticalLayout_2->addWidget(pushButton_17);

        pushButton_18 = new QPushButton(verticalLayoutWidget_2);
        pushButton_18->setObjectName(QStringLiteral("pushButton_18"));
        sizePolicy1.setHeightForWidth(pushButton_18->sizePolicy().hasHeightForWidth());
        pushButton_18->setSizePolicy(sizePolicy1);
        pushButton_18->setStyleSheet(QLatin1String("background-color: #E3E4F2;\n"
"	background-image: url();\n"
"\n"
"  font-family: Neue Haas Grotesk Text Pro Thin, sans-serif; \n"
"  font-weight: bold; \n"
"    font-size: 20px; \n"
"border : none ; \n"
"border-radius : 0 px ;\n"
"color : #4D53A8 ; "));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/img/images/pub.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_18->setIcon(icon2);
        pushButton_18->setIconSize(QSize(30, 30));

        verticalLayout_2->addWidget(pushButton_18);

        pushButton_19 = new QPushButton(verticalLayoutWidget_2);
        pushButton_19->setObjectName(QStringLiteral("pushButton_19"));
        sizePolicy1.setHeightForWidth(pushButton_19->sizePolicy().hasHeightForWidth());
        pushButton_19->setSizePolicy(sizePolicy1);
        pushButton_19->setStyleSheet(QLatin1String("QPushButton{\n"
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
        pushButton_19->setIcon(icon3);
        pushButton_19->setIconSize(QSize(30, 30));

        verticalLayout_2->addWidget(pushButton_19);

        pushButton_20 = new QPushButton(verticalLayoutWidget_2);
        pushButton_20->setObjectName(QStringLiteral("pushButton_20"));
        sizePolicy1.setHeightForWidth(pushButton_20->sizePolicy().hasHeightForWidth());
        pushButton_20->setSizePolicy(sizePolicy1);
        pushButton_20->setStyleSheet(QLatin1String("QPushButton{\n"
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
        pushButton_20->setIcon(icon4);
        pushButton_20->setIconSize(QSize(30, 30));

        verticalLayout_2->addWidget(pushButton_20);

        pushButton_21 = new QPushButton(verticalLayoutWidget_2);
        pushButton_21->setObjectName(QStringLiteral("pushButton_21"));
        sizePolicy1.setHeightForWidth(pushButton_21->sizePolicy().hasHeightForWidth());
        pushButton_21->setSizePolicy(sizePolicy1);
        pushButton_21->setStyleSheet(QLatin1String("QPushButton{\n"
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
        pushButton_21->setIcon(icon5);
        pushButton_21->setIconSize(QSize(30, 30));

        verticalLayout_2->addWidget(pushButton_21);

        pushButton_22 = new QPushButton(verticalLayoutWidget_2);
        pushButton_22->setObjectName(QStringLiteral("pushButton_22"));
        sizePolicy1.setHeightForWidth(pushButton_22->sizePolicy().hasHeightForWidth());
        pushButton_22->setSizePolicy(sizePolicy1);
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
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/img/images/quit.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_22->setIcon(icon6);
        pushButton_22->setIconSize(QSize(50, 100));

        verticalLayout_2->addWidget(pushButton_22);

        label = new QLabel(groupBox_2);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 20, 141, 31));
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
"\n"
"    "));
        label_34 = new QLabel(groupBox_2);
        label_34->setObjectName(QStringLiteral("label_34"));
        label_34->setGeometry(QRect(60, 460, 71, 16));
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
        label_26->setGeometry(QRect(60, 140, 81, 16));
        label_26->setFont(font1);
        label_26->setStyleSheet(QLatin1String("background-color: none;\n"
"background-image: url();"));
        label_33 = new QLabel(groupBox_2);
        label_33->setObjectName(QStringLiteral("label_33"));
        label_33->setGeometry(QRect(60, 350, 61, 16));
        label_33->setFont(font1);
        label_33->setStyleSheet(QLatin1String("background-color: none;\n"
"background-image: url();"));
        label_35 = new QLabel(groupBox_2);
        label_35->setObjectName(QStringLiteral("label_35"));
        label_35->setGeometry(QRect(50, 560, 91, 16));
        label_35->setFont(font1);
        label_35->setStyleSheet(QLatin1String("background-color: none;\n"
"background-image: url();"));
        label_32 = new QLabel(groupBox_2);
        label_32->setObjectName(QStringLiteral("label_32"));
        label_32->setGeometry(QRect(50, 240, 81, 21));
        label_32->setFont(font1);
        label_32->setStyleSheet(QLatin1String("background-color: none;\n"
"background-image: url();"));
        label_36 = new QLabel(groupBox_2);
        label_36->setObjectName(QStringLiteral("label_36"));
        label_36->setGeometry(QRect(70, 670, 61, 16));
        label_36->setFont(font1);
        label_36->setStyleSheet(QLatin1String("background-color: none;\n"
"background-image: url();"));
        groupBox_8 = new QGroupBox(publicite);
        groupBox_8->setObjectName(QStringLiteral("groupBox_8"));
        groupBox_8->setGeometry(QRect(180, 750, 1361, 101));
        groupBox_8->setStyleSheet(QString::fromUtf8("border-top-right-radius : 40px ; \n"
"background-image: url(:/img/images/background.jpg);\n"
"/*border-top-left-radius: 20px; /*Coin arrondi en haut \303\240 gauche \n"
"    border-bottom-left-radius: 20px; /* Coin arrondi en bas \303\240 gauche \n"
"    border-top-right-radius: 20px; /* Coin arrondi en haut \303\240 droite \n"
"    border-bottom-right-radius: 20px; /* Coin arrondi en bas \303\240 droite */"));
        groupBox_7 = new QGroupBox(publicite);
        groupBox_7->setObjectName(QStringLiteral("groupBox_7"));
        groupBox_7->setGeometry(QRect(210, 0, 1261, 91));
        QFont font2;
        font2.setPointSize(14);
        groupBox_7->setFont(font2);
        groupBox_7->setStyleSheet(QString::fromUtf8("border-top-right-radius : 40px ; \n"
"background-image: url(:/img/images/background.jpg);\n"
"border-top-left-radius: 20px; /* Coin arrondi en haut \303\240 gauche */\n"
"    border-bottom-left-radius: 20px; /* Coin arrondi en bas \303\240 gauche */\n"
"    border-top-right-radius: 20px; /* Coin arrondi en haut \303\240 droite */\n"
"    border-bottom-right-radius: 20px; /* Coin arrondi en bas \303\240 droite */"));
        lineEdit_role = new QLineEdit(groupBox_7);
        lineEdit_role->setObjectName(QStringLiteral("lineEdit_role"));
        lineEdit_role->setGeometry(QRect(30, 50, 181, 21));
        QFont font3;
        font3.setFamily(QStringLiteral("Neue Haas Grotesk Text Pro Extr"));
        font3.setPointSize(10);
        font3.setBold(true);
        font3.setWeight(75);
        lineEdit_role->setFont(font3);
        lineEdit_role->setStyleSheet(QLatin1String("background-color: transparent ; \n"
"border : none ;\n"
"color : #333770 ;\n"
"background-image : url();"));
        lineEdit_role->setReadOnly(true);
        lineEdit_nomprenom = new QLineEdit(groupBox_7);
        lineEdit_nomprenom->setObjectName(QStringLiteral("lineEdit_nomprenom"));
        lineEdit_nomprenom->setGeometry(QRect(30, 20, 391, 21));
        QFont font4;
        font4.setFamily(QStringLiteral("Neue Haas Grotesk Text Pro Extr"));
        font4.setPointSize(14);
        font4.setBold(true);
        font4.setWeight(75);
        lineEdit_nomprenom->setFont(font4);
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
        chatbot = new QPushButton(groupBox_7);
        chatbot->setObjectName(QStringLiteral("chatbot"));
        chatbot->setGeometry(QRect(840, 30, 81, 41));
        chatbot->setStyleSheet(QLatin1String("QPushButton {\n"
"    background: #B5C0D0;\n"
"    border: none;\n"
"    border-radius: 0px;\n"
"    color: #4D53A8;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background: #E3E4F2;\n"
"    border: none;\n"
"    border-radius: 0px;\n"
"    color: #4D53A8;\n"
"}\n"
""));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/img/images/pngtree-chatbot-icon-chat-bot-robot-png-image_4841963.png"), QSize(), QIcon::Normal, QIcon::Off);
        chatbot->setIcon(icon8);
        chatbot->setIconSize(QSize(100, 52));
        label_24 = new QLabel(groupBox_7);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setGeometry(QRect(860, 10, 81, 21));
        QFont font5;
        font5.setFamily(QStringLiteral("Neue Haas Grotesk Text Pro Ligh"));
        label_24->setFont(font5);
        label_24->setStyleSheet(QLatin1String("border : none ;\n"
"background-color: none;\n"
"color : #333770 ;\n"
"background-image: url();\n"
"\n"
"    "));
        label_27 = new QLabel(groupBox_7);
        label_27->setObjectName(QStringLiteral("label_27"));
        label_27->setGeometry(QRect(970, 10, 101, 20));
        label_27->setFont(font5);
        label_27->setStyleSheet(QLatin1String("border : none ;\n"
"background-color: none;\n"
"color : #333770 ;\n"
"background-image: url();\n"
"\n"
"    "));
        label_28 = new QLabel(groupBox_7);
        label_28->setObjectName(QStringLiteral("label_28"));
        label_28->setGeometry(QRect(1080, 10, 81, 20));
        label_28->setFont(font5);
        label_28->setStyleSheet(QLatin1String("border : none ;\n"
"background-color: none;\n"
"color : #333770 ;\n"
"background-image: url();\n"
"\n"
"    "));
        ard = new QPushButton(groupBox_7);
        ard->setObjectName(QStringLiteral("ard"));
        ard->setGeometry(QRect(630, 30, 81, 41));
        ard->setStyleSheet(QLatin1String("QPushButton {\n"
"    background: #B5C0D0;\n"
"    border: none;\n"
"    border-radius: 0px;\n"
"    color: #4D53A8;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background: #E3E4F2;\n"
"    border: none;\n"
"    border-radius: 0px;\n"
"    color: #4D53A8;\n"
"}\n"
""));
        ard->setIcon(icon8);
        ard->setIconSize(QSize(100, 52));
        label_25 = new QLabel(groupBox_7);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setGeometry(QRect(650, 10, 81, 21));
        label_25->setFont(font5);
        label_25->setStyleSheet(QLatin1String("border : none ;\n"
"background-color: none;\n"
"color : #333770 ;\n"
"background-image: url();\n"
"\n"
"    "));
        ard_2 = new QPushButton(groupBox_7);
        ard_2->setObjectName(QStringLiteral("ard_2"));
        ard_2->setGeometry(QRect(510, 30, 81, 41));
        ard_2->setStyleSheet(QLatin1String("QPushButton {\n"
"    background: #B5C0D0;\n"
"    border: none;\n"
"    border-radius: 0px;\n"
"    color: #4D53A8;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background: #E3E4F2;\n"
"    border: none;\n"
"    border-radius: 0px;\n"
"    color: #4D53A8;\n"
"}\n"
""));
        ard_2->setIcon(icon8);
        ard_2->setIconSize(QSize(100, 52));
        label_29 = new QLabel(groupBox_7);
        label_29->setObjectName(QStringLiteral("label_29"));
        label_29->setGeometry(QRect(530, 10, 81, 21));
        label_29->setFont(font5);
        label_29->setStyleSheet(QLatin1String("border : none ;\n"
"background-color: none;\n"
"color : #333770 ;\n"
"background-image: url();\n"
"\n"
"    "));
        ard_3 = new QPushButton(groupBox_7);
        ard_3->setObjectName(QStringLiteral("ard_3"));
        ard_3->setGeometry(QRect(330, 30, 81, 41));
        ard_3->setStyleSheet(QLatin1String("QPushButton {\n"
"    background: #B5C0D0;\n"
"    border: none;\n"
"    border-radius: 0px;\n"
"    color: #4D53A8;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background: #E3E4F2;\n"
"    border: none;\n"
"    border-radius: 0px;\n"
"    color: #4D53A8;\n"
"}\n"
""));
        ard_3->setIcon(icon8);
        ard_3->setIconSize(QSize(100, 52));
        label_30 = new QLabel(groupBox_7);
        label_30->setObjectName(QStringLiteral("label_30"));
        label_30->setGeometry(QRect(330, 10, 81, 21));
        label_30->setFont(font5);
        label_30->setStyleSheet(QLatin1String("border : none ;\n"
"background-color: none;\n"
"color : #333770 ;\n"
"background-image: url();\n"
"\n"
"    "));
        Notif = new QPushButton(publicite);
        Notif->setObjectName(QStringLiteral("Notif"));
        Notif->setGeometry(QRect(1170, 30, 81, 41));
        Notif->setStyleSheet(QLatin1String("QPushButton {\n"
"    background: #B5C0D0;\n"
"    border: none;\n"
"    border-radius: 0px;\n"
"    color: #4D53A8;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background: #E3E4F2;\n"
"    border: none;\n"
"    border-radius: 0px;\n"
"    color: #4D53A8;\n"
"}\n"
""));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/img/images/865771.png"), QSize(), QIcon::Normal, QIcon::Off);
        Notif->setIcon(icon9);
        Notif->setIconSize(QSize(90, 30));
        pushButton_7 = new QPushButton(publicite);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(1280, 30, 93, 41));
        pushButton_7->setStyleSheet(QLatin1String("QPushButton {\n"
"    background: #B5C0D0;\n"
"    border: none;\n"
"    border-radius: 0px;\n"
"    color: #4D53A8;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background: #E3E4F2;\n"
"    border: none;\n"
"    border-radius: 0px;\n"
"    color: #4D53A8;\n"
"}\n"
""));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/img/images/5062110-200.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_7->setIcon(icon10);
        pushButton_7->setIconSize(QSize(35, 40));
        pushButton_5 = new QPushButton(publicite);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(200, 230, 61, 41));
        pushButton_5->setStyleSheet(QLatin1String("QPushButton{\n"
"	\n"
"	\n"
"	image: url(:/img/images/416638327_926199295369604_8163174007800803743_n.png);\n"
"\n"
"background-color :  #B5C0D0; \n"
"border : none ; \n"
"border-radius : 0 px ;\n"
"color : #4D53A8 ; \n"
"}\n"
"QPushButton:hover{\n"
"background-color: #E3E4F2;\n"
" \n"
"}"));
        tabWidget = new QTabWidget(publicite);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(280, 100, 1201, 641));
        QFont font6;
        font6.setFamily(QStringLiteral("Neue Haas Grotesk Text Pro Extr"));
        font6.setPointSize(11);
        font6.setBold(false);
        font6.setWeight(50);
        tabWidget->setFont(font6);
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
"    background-color: #EEE6D8 ;/* #DD7373;*/   /*#40A2E3;*/\n"
"    /* Background color of tabs */\n"
"    color:  black;  /*#E4E5E0;*/\n"
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
""
                        "    border-radius: 50%; /* Circular border */\n"
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
        tab->setStyleSheet(QStringLiteral("background-image:url();"));
        groupBox_5 = new QGroupBox(tab);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        groupBox_5->setGeometry(QRect(0, 20, 1191, 561));
        QFont font7;
        font7.setPointSize(13);
        groupBox_5->setFont(font7);
        groupBox_5->setStyleSheet(QLatin1String("background-image:url();\n"
"background-color : rgb(221, 221, 221);\n"
"border-radius : 20px ;"));
        tableaupub = new QTableView(groupBox_5);
        tableaupub->setObjectName(QStringLiteral("tableaupub"));
        tableaupub->setGeometry(QRect(80, 60, 1021, 431));
        tableaupub->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"\n"
"\n"
""));
        pushButton = new QPushButton(groupBox_5);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(80, 500, 241, 51));
        pushButton->setStyleSheet(QLatin1String("background-color: #333770;\n"
"color: rgb(255, 255, 255);"));
        QIcon icon11;
        icon11.addFile(QStringLiteral(":/img/images/pdf2.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon11);
        pushButton->setIconSize(QSize(40, 40));
        recherche = new QLineEdit(groupBox_5);
        recherche->setObjectName(QStringLiteral("recherche"));
        recherche->setGeometry(QRect(82, 10, 251, 31));
        QFont font8;
        font8.setPointSize(9);
        recherche->setFont(font8);
        recherche->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        rechbutton = new QPushButton(groupBox_5);
        rechbutton->setObjectName(QStringLiteral("rechbutton"));
        rechbutton->setGeometry(QRect(340, 10, 31, 31));
        QFont font9;
        font9.setPointSize(8);
        rechbutton->setFont(font9);
        rechbutton->setStyleSheet(QStringLiteral("background-color:  #DD7373;"));
        QIcon icon12;
        icon12.addFile(QStringLiteral(":/img/images/search.png"), QSize(), QIcon::Normal, QIcon::Off);
        rechbutton->setIcon(icon12);
        comboBox = new QComboBox(groupBox_5);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(990, 20, 101, 21));
        comboBox->setFont(font9);
        comboBox->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        label_71 = new QLabel(groupBox_5);
        label_71->setObjectName(QStringLiteral("label_71"));
        label_71->setGeometry(QRect(840, 20, 141, 20));
        label_71->setFont(font8);
        label_2 = new QLabel(groupBox_5);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(1100, 20, 41, 20));
        label_2->setStyleSheet(QStringLiteral("image: url(:/img/images/filtrage.png);"));
        label_75 = new QLabel(groupBox_5);
        label_75->setObjectName(QStringLiteral("label_75"));
        label_75->setGeometry(QRect(390, 10, 271, 31));
        label_75->setFont(font8);
        tabWidget->addTab(tab, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        groupBox = new QGroupBox(tab_3);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(20, 20, 1151, 561));
        groupBox->setStyleSheet(QLatin1String("background-image:url();\n"
"background-color : rgb(221, 221, 221);\n"
"border-radius : 20px ;"));
        label_53 = new QLabel(groupBox);
        label_53->setObjectName(QStringLiteral("label_53"));
        label_53->setGeometry(QRect(180, 50, 131, 41));
        QFont font10;
        font10.setFamily(QStringLiteral("Neue Haas Grotesk Text Pro Ligh"));
        font10.setPointSize(13);
        font10.setBold(false);
        font10.setWeight(50);
        label_53->setFont(font10);
        label_54 = new QLabel(groupBox);
        label_54->setObjectName(QStringLiteral("label_54"));
        label_54->setGeometry(QRect(610, 210, 121, 21));
        label_54->setFont(font10);
        label_55 = new QLabel(groupBox);
        label_55->setObjectName(QStringLiteral("label_55"));
        label_55->setGeometry(QRect(180, 100, 101, 41));
        label_55->setFont(font10);
        ajoutnom_6 = new QLineEdit(groupBox);
        ajoutnom_6->setObjectName(QStringLiteral("ajoutnom_6"));
        ajoutnom_6->setGeometry(QRect(340, 60, 150, 26));
        ajoutnom_6->setStyleSheet(QLatin1String("QLineEdit {\n"
"                border: 2px solid blue;\n"
"                border-radius: 10px;\n"
"                padding: 5px;\n"
"background-color: rgb(255, 255, 255);\n"
"\n"
"            }\n"
""));
        ajoutnumero_6 = new QLineEdit(groupBox);
        ajoutnumero_6->setObjectName(QStringLiteral("ajoutnumero_6"));
        ajoutnumero_6->setGeometry(QRect(740, 200, 321, 101));
        ajoutnumero_6->setStyleSheet(QLatin1String("QLineEdit {\n"
"                border: 2px solid blue;\n"
"                border-radius: 10px;\n"
"                padding: 5px;\n"
"background-color: rgb(255, 255, 255);\n"
"\n"
"            }"));
        ajoutnumero_6->setMaxLength(100);
        ajoutadr_6 = new QLineEdit(groupBox);
        ajoutadr_6->setObjectName(QStringLiteral("ajoutadr_6"));
        ajoutadr_6->setGeometry(QRect(340, 110, 150, 26));
        ajoutadr_6->setStyleSheet(QLatin1String("QLineEdit {\n"
"                border: 2px solid blue;\n"
"                border-radius: 10px;\n"
"                padding: 5px;\n"
"background-color: rgb(255, 255, 255);\n"
"\n"
"            }"));
        dateajout_6 = new QDateEdit(groupBox);
        dateajout_6->setObjectName(QStringLiteral("dateajout_6"));
        dateajout_6->setGeometry(QRect(330, 270, 131, 31));
        QFont font11;
        font11.setPointSize(9);
        font11.setBold(false);
        font11.setItalic(false);
        font11.setWeight(50);
        dateajout_6->setFont(font11);
        dateajout_6->setStyleSheet(QLatin1String("QDateEdit {\n"
"        border: 2px solid blue;\n"
"        border-radius: 10px;\n"
"        padding: 5px;\n"
"    }"));
        dateajout_6->setMinimumDateTime(QDateTime(QDate(2024, 1, 1), QTime(0, 0, 0)));
        dateajout_6->setMaximumDate(QDate(2024, 12, 1));
        label_57 = new QLabel(groupBox);
        label_57->setObjectName(QStringLiteral("label_57"));
        label_57->setGeometry(QRect(140, 300, 201, 51));
        QFont font12;
        font12.setFamily(QStringLiteral("Neue Haas Grotesk Text Pro Ligh"));
        font12.setPointSize(12);
        font12.setBold(false);
        font12.setWeight(50);
        label_57->setFont(font12);
        tempsajout_6 = new QTimeEdit(groupBox);
        tempsajout_6->setObjectName(QStringLiteral("tempsajout_6"));
        tempsajout_6->setGeometry(QRect(340, 310, 118, 22));
        tempsajout_6->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
""));
        label_58 = new QLabel(groupBox);
        label_58->setObjectName(QStringLiteral("label_58"));
        label_58->setGeometry(QRect(100, 150, 211, 41));
        label_58->setFont(font10);
        prixajout_6 = new QLineEdit(groupBox);
        prixajout_6->setObjectName(QStringLiteral("prixajout_6"));
        prixajout_6->setGeometry(QRect(330, 150, 181, 31));
        prixajout_6->setStyleSheet(QLatin1String("QLineEdit {\n"
"                border: 2px solid blue;\n"
"                border-radius: 10px;\n"
"                padding: 5px;\n"
"background-color: rgb(255, 255, 255);\n"
"\n"
"            }"));
        label_59 = new QLabel(groupBox);
        label_59->setObjectName(QStringLiteral("label_59"));
        label_59->setGeometry(QRect(250, 280, 71, 20));
        label_59->setFont(font10);
        label_60 = new QLabel(groupBox);
        label_60->setObjectName(QStringLiteral("label_60"));
        label_60->setGeometry(QRect(260, 350, 71, 31));
        label_60->setFont(font12);
        dureeajout_6 = new QTimeEdit(groupBox);
        dureeajout_6->setObjectName(QStringLiteral("dureeajout_6"));
        dureeajout_6->setGeometry(QRect(340, 350, 118, 22));
        dureeajout_6->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
""));
        dureeajout_6->setMaximumDateTime(QDateTime(QDate(2024, 12, 31), QTime(10, 0, 0)));
        dureeajout_6->setMinimumDateTime(QDateTime(QDate(2024, 1, 1), QTime(1, 0, 0)));
        dureeajout_6->setMaximumTime(QTime(10, 0, 0));
        dureeajout_6->setMinimumTime(QTime(1, 0, 0));
        BoutonAjouter_6 = new QPushButton(groupBox);
        BoutonAjouter_6->setObjectName(QStringLiteral("BoutonAjouter_6"));
        BoutonAjouter_6->setGeometry(QRect(440, 480, 281, 51));
        BoutonAjouter_6->setStyleSheet(QLatin1String("QPushButton {\n"
"    background-color: #DD7373; /* Set background color */\n"
"    border: none; /* Remove border */\n"
"    padding-left: 20px; /* Add left padding for the image */\n"
"    background-repeat: no-repeat; /* Prevent image from repeating */\n"
"    background-position: left center; /* Position image on the left center */\n"
"    background-size: 16px 16px; /* Set the size of the background image */\n"
"}\n"
"\n"
"QPushButton::hover {\n"
"    background-color: #CC6262; /* Change background color on hover */\n"
"}\n"
"\n"
"QPushButton::pressed {\n"
"    background-color: #BB5151; /* Change background color when pressed */\n"
"}\n"
"\n"
"QPushButton::checked {\n"
"    background-color: #CC6262; /* Change background color when checked */\n"
"}\n"
"\n"
"QPushButton::checked:hover {\n"
"    background-color: #BB5151; /* Change background color when checked and hovered */\n"
"}\n"
"\n"
"QPushButton::checked:pressed {\n"
"    background-color: #AA4040; /* Change background color when checked and pressed"
                        " */\n"
"}\n"
"\n"
"QPushButton::unchecked {\n"
"    background-color: #DD7373; /* Reset background color when unchecked */\n"
"}\n"
"\n"
"QPushButton::unchecked:hover {\n"
"    background-color: #CC6262; /* Change background color on hover when unchecked */\n"
"}\n"
""));
        ajoutID_6 = new QLineEdit(groupBox);
        ajoutID_6->setObjectName(QStringLiteral("ajoutID_6"));
        ajoutID_6->setGeometry(QRect(500, 420, 161, 31));
        ajoutID_6->setStyleSheet(QLatin1String("QLineEdit {\n"
"                border: 2px solid blue;\n"
"                border-radius: 10px;\n"
"                padding: 5px;\n"
"background-color: rgb(255, 255, 255);\n"
"\n"
"            }"));
        ajoutID_6->setMaxLength(5);
        label_61 = new QLabel(groupBox);
        label_61->setObjectName(QStringLiteral("label_61"));
        label_61->setGeometry(QRect(310, 420, 181, 31));
        QFont font13;
        font13.setFamily(QStringLiteral("Neue Haas Grotesk Text Pro Medi"));
        font13.setPointSize(13);
        font13.setBold(false);
        font13.setWeight(50);
        label_61->setFont(font13);
        random = new QPushButton(groupBox);
        random->setObjectName(QStringLiteral("random"));
        random->setGeometry(QRect(680, 420, 93, 28));
        random->setStyleSheet(QStringLiteral("background-color: #333770;"));
        comboBoxSocietes = new QComboBox(groupBox);
        comboBoxSocietes->setObjectName(QStringLiteral("comboBoxSocietes"));
        comboBoxSocietes->setGeometry(QRect(800, 100, 181, 31));
        comboBoxSocietes->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
""));
        label_72 = new QLabel(groupBox);
        label_72->setObjectName(QStringLiteral("label_72"));
        label_72->setGeometry(QRect(690, 90, 101, 41));
        label_72->setFont(font10);
        label_73 = new QLabel(groupBox);
        label_73->setObjectName(QStringLiteral("label_73"));
        label_73->setGeometry(QRect(470, 350, 71, 31));
        QFont font14;
        font14.setFamily(QStringLiteral("Neue Haas Grotesk Text Pro Medi"));
        font14.setPointSize(9);
        font14.setBold(false);
        font14.setWeight(50);
        label_73->setFont(font14);
        ProgID = new QComboBox(groupBox);
        ProgID->setObjectName(QStringLiteral("ProgID"));
        ProgID->setGeometry(QRect(800, 60, 181, 21));
        ProgID->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
""));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(620, 49, 171, 41));
        QFont font15;
        font15.setFamily(QStringLiteral("Neue Haas Grotesk Text Pro Ligh"));
        font15.setPointSize(10);
        font15.setBold(true);
        font15.setWeight(75);
        label_5->setFont(font15);
        label_20 = new QLabel(groupBox);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(830, 340, 511, 301));
        label_20->setStyleSheet(QStringLiteral("image: url(:/img/images/add-circle-outline-logo-icon-png-svg.png);"));
        label_21 = new QLabel(groupBox);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(820, 390, 141, 101));
        label_21->setStyleSheet(QStringLiteral("image: url(:/img/images/add-circle-outline-logo-icon-png-svg.png);"));
        label_22 = new QLabel(groupBox);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setGeometry(QRect(870, 490, 81, 51));
        label_22->setStyleSheet(QStringLiteral("image: url(:/img/images/add-circle-outline-logo-icon-png-svg.png);"));
        pushButton_6 = new QPushButton(groupBox);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(990, 100, 41, 28));
        pushButton_6->setStyleSheet(QLatin1String("QPushButton {\n"
"    background-color: #DD7373; /* Set background color */\n"
"    border: none; /* Remove border */\n"
"    padding-left: 20px; /* Add left padding for the image */\n"
"    background-repeat: no-repeat; /* Prevent image from repeating */\n"
"    background-position: left center; /* Position image on the left center */\n"
"    background-size: 16px 16px; /* Set the size of the background image */\n"
"}\n"
"\n"
"QPushButton::hover {\n"
"    background-color: #CC6262; /* Change background color on hover */\n"
"}\n"
"\n"
"QPushButton::pressed {\n"
"    background-color: #BB5151; /* Change background color when pressed */\n"
"}\n"
"\n"
"QPushButton::checked {\n"
"    background-color: #CC6262; /* Change background color when checked */\n"
"}\n"
"\n"
"QPushButton::checked:hover {\n"
"    background-color: #BB5151; /* Change background color when checked and hovered */\n"
"}\n"
"\n"
"QPushButton::checked:pressed {\n"
"    background-color: #AA4040; /* Change background color when checked and pressed"
                        " */\n"
"}\n"
"\n"
"QPushButton::unchecked {\n"
"    background-color: #DD7373; /* Reset background color when unchecked */\n"
"}\n"
"\n"
"QPushButton::unchecked:hover {\n"
"    background-color: #CC6262; /* Change background color on hover when unchecked */\n"
"}\n"
""));
        QIcon icon13;
        icon13.addFile(QStringLiteral(":/img/images/nouv2.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_6->setIcon(icon13);
        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        groupBox_3 = new QGroupBox(tab_4);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(20, 20, 1161, 561));
        groupBox_3->setStyleSheet(QLatin1String("background-image:url();\n"
"background-color : rgb(221, 221, 221);\n"
"border-radius : 20px ;"));
        label_62 = new QLabel(groupBox_3);
        label_62->setObjectName(QStringLiteral("label_62"));
        label_62->setGeometry(QRect(210, 70, 141, 20));
        QFont font16;
        font16.setFamily(QStringLiteral("Neue Haas Grotesk Text Pro Ligh"));
        font16.setPointSize(14);
        font16.setItalic(false);
        label_62->setFont(font16);
        enterid = new QLineEdit(groupBox_3);
        enterid->setObjectName(QStringLiteral("enterid"));
        enterid->setGeometry(QRect(360, 70, 113, 31));
        enterid->setStyleSheet(QLatin1String("QLineEdit {\n"
"                border: 2px solid blue;\n"
"                border-radius: 10px;\n"
"                padding: 5px;\n"
"background-color: rgb(255, 255, 255);\n"
"\n"
"            }"));
        label_63 = new QLabel(groupBox_3);
        label_63->setObjectName(QStringLiteral("label_63"));
        label_63->setGeometry(QRect(140, 130, 251, 20));
        QFont font17;
        font17.setFamily(QStringLiteral("Neue Haas Grotesk Text Pro Ligh"));
        font17.setPointSize(11);
        font17.setItalic(false);
        label_63->setFont(font17);
        label_64 = new QLabel(groupBox_3);
        label_64->setObjectName(QStringLiteral("label_64"));
        label_64->setGeometry(QRect(110, 250, 241, 20));
        label_64->setFont(font17);
        label_65 = new QLabel(groupBox_3);
        label_65->setObjectName(QStringLiteral("label_65"));
        label_65->setGeometry(QRect(130, 290, 261, 21));
        label_65->setFont(font17);
        label_66 = new QLabel(groupBox_3);
        label_66->setObjectName(QStringLiteral("label_66"));
        label_66->setGeometry(QRect(110, 360, 271, 21));
        label_66->setFont(font17);
        label_67 = new QLabel(groupBox_3);
        label_67->setObjectName(QStringLiteral("label_67"));
        label_67->setGeometry(QRect(220, 460, 111, 20));
        label_67->setFont(font17);
        modifnom = new QLineEdit(groupBox_3);
        modifnom->setObjectName(QStringLiteral("modifnom"));
        modifnom->setGeometry(QRect(350, 130, 201, 31));
        modifnom->setStyleSheet(QLatin1String("QLineEdit {\n"
"                border: 2px solid blue;\n"
"                border-radius: 10px;\n"
"                padding: 5px;\n"
"background-color: rgb(255, 255, 255);\n"
"\n"
"            }"));
        adressmodif = new QLineEdit(groupBox_3);
        adressmodif->setObjectName(QStringLiteral("adressmodif"));
        adressmodif->setGeometry(QRect(350, 250, 191, 31));
        adressmodif->setStyleSheet(QLatin1String("QLineEdit {\n"
"                border: 2px solid blue;\n"
"                border-radius: 10px;\n"
"                padding: 5px;\n"
"background-color: rgb(255, 255, 255);\n"
"\n"
"            }"));
        label_68 = new QLabel(groupBox_3);
        label_68->setObjectName(QStringLiteral("label_68"));
        label_68->setGeometry(QRect(100, 320, 301, 31));
        label_68->setFont(font17);
        datemodif = new QDateEdit(groupBox_3);
        datemodif->setObjectName(QStringLiteral("datemodif"));
        datemodif->setGeometry(QRect(350, 290, 110, 22));
        datemodif->setMaximumDateTime(QDateTime(QDate(2024, 12, 31), QTime(23, 59, 59)));
        datemodif->setMinimumDateTime(QDateTime(QDate(2024, 1, 1), QTime(0, 0, 0)));
        tempsmodif = new QTimeEdit(groupBox_3);
        tempsmodif->setObjectName(QStringLiteral("tempsmodif"));
        tempsmodif->setGeometry(QRect(350, 330, 118, 22));
        dureemodif = new QTimeEdit(groupBox_3);
        dureemodif->setObjectName(QStringLiteral("dureemodif"));
        dureemodif->setGeometry(QRect(350, 370, 118, 22));
        prixmodif = new QLineEdit(groupBox_3);
        prixmodif->setObjectName(QStringLiteral("prixmodif"));
        prixmodif->setGeometry(QRect(350, 450, 113, 31));
        prixmodif->setStyleSheet(QLatin1String("QLineEdit {\n"
"                border: 2px solid blue;\n"
"                border-radius: 10px;\n"
"                padding: 5px;\n"
"background-color: rgb(255, 255, 255);\n"
"\n"
"            }"));
        modifier = new QPushButton(groupBox_3);
        modifier->setObjectName(QStringLiteral("modifier"));
        modifier->setGeometry(QRect(270, 490, 231, 51));
        modifier->setStyleSheet(QLatin1String("QPushButton {\n"
"    background-color: #DD7373; /* Set background color */\n"
"    border: none; /* Remove border */\n"
"    padding-left: 20px; /* Add left padding for the image */\n"
"    background-repeat: no-repeat; /* Prevent image from repeating */\n"
"    background-position: left center; /* Position image on the left center */\n"
"    background-size: 16px 16px; /* Set the size of the background image */\n"
"}\n"
"\n"
"QPushButton::hover {\n"
"    background-color: #CC6262; /* Change background color on hover */\n"
"}\n"
"\n"
"QPushButton::pressed {\n"
"    background-color: #BB5151; /* Change background color when pressed */\n"
"}\n"
"\n"
"QPushButton::checked {\n"
"    background-color: #CC6262; /* Change background color when checked */\n"
"}\n"
"\n"
"QPushButton::checked:hover {\n"
"    background-color: #BB5151; /* Change background color when checked and hovered */\n"
"}\n"
"\n"
"QPushButton::checked:pressed {\n"
"    background-color: #AA4040; /* Change background color when checked and pressed"
                        " */\n"
"}\n"
"\n"
"QPushButton::unchecked {\n"
"    background-color: #DD7373; /* Reset background color when unchecked */\n"
"}\n"
"\n"
"QPushButton::unchecked:hover {\n"
"    background-color: #CC6262; /* Change background color on hover when unchecked */\n"
"}\n"
""));
        label_69 = new QLabel(groupBox_3);
        label_69->setObjectName(QStringLiteral("label_69"));
        label_69->setGeometry(QRect(160, 170, 251, 20));
        label_69->setFont(font17);
        modifnum = new QLineEdit(groupBox_3);
        modifnum->setObjectName(QStringLiteral("modifnum"));
        modifnum->setGeometry(QRect(350, 170, 271, 71));
        modifnum->setStyleSheet(QLatin1String("QLineEdit {\n"
"                border: 2px solid blue;\n"
"                border-radius: 10px;\n"
"                padding: 5px;\n"
"background-color: rgb(255, 255, 255);\n"
"            }\n"
""));
        modifnum->setMaxLength(100);
        lookforid = new QPushButton(groupBox_3);
        lookforid->setObjectName(QStringLiteral("lookforid"));
        lookforid->setGeometry(QRect(490, 60, 171, 51));
        QFont font18;
        font18.setFamily(QStringLiteral("Neue Haas Grotesk Text Pro Extr"));
        font18.setPointSize(9);
        lookforid->setFont(font18);
        lookforid->setStyleSheet(QLatin1String("QPushButton {\n"
"    background-color: #DD7373; /* Set background color */\n"
"    border: none; /* Remove border */\n"
"    padding-left: 20px; /* Add left padding for the image */\n"
"    background-image: url(:/img/images/SEARCH.png);\n"
"    background-repeat: no-repeat; /* Prevent image from repeating */\n"
"    background-position: left center; /* Position image on the left center */\n"
"    background-size: 16px 16px; /* Set the size of the background image */\n"
"}\n"
"\n"
"QPushButton::hover {\n"
"    background-color: #CC6262; /* Change background color on hover */\n"
"}\n"
"\n"
"QPushButton::pressed {\n"
"    background-color: #BB5151; /* Change background color when pressed */\n"
"}\n"
"\n"
"QPushButton::checked {\n"
"    background-color: #CC6262; /* Change background color when checked */\n"
"}\n"
"\n"
"QPushButton::checked:hover {\n"
"    background-color: #BB5151; /* Change background color when checked and hovered */\n"
"}\n"
"\n"
"QPushButton::checked:pressed {\n"
"    background-color: #AA4"
                        "040; /* Change background color when checked and pressed */\n"
"}\n"
"\n"
"QPushButton::unchecked {\n"
"    background-color: #DD7373; /* Reset background color when unchecked */\n"
"}\n"
"\n"
"QPushButton::unchecked:hover {\n"
"    background-color: #CC6262; /* Change background color on hover when unchecked */\n"
"}\n"
""));
        QIcon icon14;
        icon14.addFile(QStringLiteral(":/img/images/385529678_211836881972185_2463027834182630932_n.png"), QSize(), QIcon::Normal, QIcon::Off);
        lookforid->setIcon(icon14);
        societe = new QComboBox(groupBox_3);
        societe->setObjectName(QStringLiteral("societe"));
        societe->setGeometry(QRect(350, 410, 181, 22));
        societe->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
""));
        label_74 = new QLabel(groupBox_3);
        label_74->setObjectName(QStringLiteral("label_74"));
        label_74->setGeometry(QRect(190, 410, 151, 20));
        label_74->setFont(font17);
        label_76 = new QLabel(groupBox_3);
        label_76->setObjectName(QStringLiteral("label_76"));
        label_76->setGeometry(QRect(690, 320, 401, 21));
        QFont font19;
        font19.setFamily(QStringLiteral("Neue Haas Grotesk Text Pro Medi"));
        font19.setPointSize(9);
        label_76->setFont(font19);
        label_77 = new QLabel(groupBox_3);
        label_77->setObjectName(QStringLiteral("label_77"));
        label_77->setGeometry(QRect(230, 20, 401, 21));
        label_77->setFont(font19);
        label_23 = new QLabel(groupBox_3);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setGeometry(QRect(850, -30, 341, 291));
        label_23->setPixmap(QPixmap(QString::fromUtf8(":/img/images/SVG-edit_logo.svg.png")));
        label_23->setScaledContents(true);
        BoutonSupprimer = new QPushButton(tab_4);
        BoutonSupprimer->setObjectName(QStringLiteral("BoutonSupprimer"));
        BoutonSupprimer->setGeometry(QRect(740, 460, 301, 61));
        BoutonSupprimer->setStyleSheet(QLatin1String("QPushButton {\n"
"    background-color: #DD7373; /* Set background color */\n"
"    border: none; /* Remove border */\n"
"    padding-left: 20px; /* Add left padding for the image */\n"
"    background-repeat: no-repeat; /* Prevent image from repeating */\n"
"    background-position: left center; /* Position image on the left center */\n"
"    background-size: 16px 16px; /* Set the size of the background image */\n"
"}\n"
"\n"
"QPushButton::hover {\n"
"    background-color: #CC6262; /* Change background color on hover */\n"
"}\n"
"\n"
"QPushButton::pressed {\n"
"    background-color: #BB5151; /* Change background color when pressed */\n"
"}\n"
"\n"
"QPushButton::checked {\n"
"    background-color: #CC6262; /* Change background color when checked */\n"
"}\n"
"\n"
"QPushButton::checked:hover {\n"
"    background-color: #BB5151; /* Change background color when checked and hovered */\n"
"}\n"
"\n"
"QPushButton::checked:pressed {\n"
"    background-color: #AA4040; /* Change background color when checked and pressed"
                        " */\n"
"}\n"
"\n"
"QPushButton::unchecked {\n"
"    background-color: #DD7373; /* Reset background color when unchecked */\n"
"}\n"
"\n"
"QPushButton::unchecked:hover {\n"
"    background-color: #CC6262; /* Change background color on hover when unchecked */\n"
"}\n"
""));
        label_70 = new QLabel(tab_4);
        label_70->setObjectName(QStringLiteral("label_70"));
        label_70->setGeometry(QRect(650, 380, 161, 31));
        QFont font20;
        font20.setFamily(QStringLiteral("Neue Haas Grotesk Text Pro Medi"));
        font20.setPointSize(14);
        font20.setItalic(false);
        label_70->setFont(font20);
        idsupprimer = new QLineEdit(tab_4);
        idsupprimer->setObjectName(QStringLiteral("idsupprimer"));
        idsupprimer->setGeometry(QRect(830, 380, 281, 31));
        idsupprimer->setStyleSheet(QLatin1String("QLineEdit {\n"
"                border: 2px solid blue;\n"
"                border-radius: 10px;\n"
"                padding: 5px;\n"
"            }"));
        tabWidget->addTab(tab_4, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        groupBox_4 = new QGroupBox(tab_2);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(0, 20, 1191, 561));
        QFont font21;
        font21.setFamily(QStringLiteral("Neue Haas Grotesk Text Pro Extr"));
        groupBox_4->setFont(font21);
        groupBox_4->setStyleSheet(QLatin1String("background-image:url();\n"
"background-color :  #B5C0D0; \n"
"border-radius : 20px ;"));
        label_3 = new QLabel(groupBox_4);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 10, 311, 51));
        QFont font22;
        font22.setFamily(QStringLiteral("Neue Haas Grotesk Text Pro Extr"));
        font22.setPointSize(13);
        label_3->setFont(font22);
        label_4 = new QLabel(groupBox_4);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(920, 0, 101, 51));
        QFont font23;
        font23.setFamily(QStringLiteral("Neue Haas Grotesk Text Pro Ligh"));
        font23.setPointSize(13);
        font23.setBold(true);
        font23.setItalic(true);
        font23.setWeight(75);
        label_4->setFont(font23);
        label_6 = new QLabel(groupBox_4);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(100, 410, 221, 51));
        QFont font24;
        font24.setFamily(QStringLiteral("Neue Haas Grotesk Text Pro Extr"));
        font24.setPointSize(13);
        font24.setBold(true);
        font24.setItalic(true);
        font24.setWeight(75);
        label_6->setFont(font24);
        ajoutersociete = new QPushButton(groupBox_4);
        ajoutersociete->setObjectName(QStringLiteral("ajoutersociete"));
        ajoutersociete->setGeometry(QRect(870, 320, 211, 51));
        ajoutersociete->setStyleSheet(QStringLiteral("background-color:  #DD7373;"));
        QIcon icon15;
        icon15.addFile(QStringLiteral(":/img/images/add-circle-outline-logo-icon-png-svg.png"), QSize(), QIcon::Normal, QIcon::Off);
        ajoutersociete->setIcon(icon15);
        ajoutersociete->setIconSize(QSize(30, 30));
        pushButton_3 = new QPushButton(groupBox_4);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(530, 520, 131, 28));
        pushButton_3->setStyleSheet(QStringLiteral("background-color:  #DD7373;"));
        pushButton_4 = new QPushButton(groupBox_4);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(180, 500, 101, 28));
        pushButton_4->setStyleSheet(QStringLiteral("background-color:  #DD7373;"));
        label_7 = new QLabel(groupBox_4);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(740, 70, 56, 16));
        QFont font25;
        font25.setFamily(QStringLiteral("Neue Haas Grotesk Text Pro Extr"));
        font25.setPointSize(10);
        label_7->setFont(font25);
        label_8 = new QLabel(groupBox_4);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(970, 70, 61, 16));
        label_8->setFont(font25);
        label_9 = new QLabel(groupBox_4);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(740, 170, 81, 16));
        label_9->setFont(font25);
        label_10 = new QLabel(groupBox_4);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(740, 110, 56, 16));
        label_10->setFont(font25);
        nomsociete = new QLineEdit(groupBox_4);
        nomsociete->setObjectName(QStringLiteral("nomsociete"));
        nomsociete->setGeometry(QRect(830, 70, 113, 22));
        nomsociete->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        email = new QLineEdit(groupBox_4);
        email->setObjectName(QStringLiteral("email"));
        email->setGeometry(QRect(830, 100, 113, 22));
        email->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        industrie = new QLineEdit(groupBox_4);
        industrie->setObjectName(QStringLiteral("industrie"));
        industrie->setGeometry(QRect(830, 130, 113, 22));
        industrie->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        adresse = new QLineEdit(groupBox_4);
        adresse->setObjectName(QStringLiteral("adresse"));
        adresse->setGeometry(QRect(830, 170, 113, 22));
        adresse->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        label_12 = new QLabel(groupBox_4);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(320, 420, 201, 20));
        label_12->setFont(font25);
        lineEdit_5 = new QLineEdit(groupBox_4);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(540, 420, 113, 22));
        lineEdit_5->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        label_13 = new QLabel(groupBox_4);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(360, 460, 141, 16));
        label_13->setFont(font25);
        lineEdit_6 = new QLineEdit(groupBox_4);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(510, 450, 201, 22));
        lineEdit_6->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        label_14 = new QLabel(groupBox_4);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(360, 480, 141, 16));
        label_14->setFont(font25);
        lineEdit_7 = new QLineEdit(groupBox_4);
        lineEdit_7->setObjectName(QStringLiteral("lineEdit_7"));
        lineEdit_7->setGeometry(QRect(510, 480, 201, 22));
        lineEdit_7->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        label_15 = new QLabel(groupBox_4);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(10, 470, 151, 16));
        label_15->setFont(font25);
        suppr = new QLineEdit(groupBox_4);
        suppr->setObjectName(QStringLiteral("suppr"));
        suppr->setGeometry(QRect(170, 470, 113, 22));
        suppr->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        tableView = new QTableView(groupBox_4);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(30, 60, 631, 271));
        tableView->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        pers = new QLineEdit(groupBox_4);
        pers->setObjectName(QStringLiteral("pers"));
        pers->setGeometry(QRect(830, 230, 113, 22));
        pers->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        numero = new QLineEdit(groupBox_4);
        numero->setObjectName(QStringLiteral("numero"));
        numero->setGeometry(QRect(1050, 70, 113, 22));
        numero->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        label_16 = new QLabel(groupBox_4);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(700, 230, 131, 16));
        QFont font26;
        font26.setFamily(QStringLiteral("Neue Haas Grotesk Text Pro Extr"));
        font26.setPointSize(8);
        label_16->setFont(font26);
        label_11 = new QLabel(groupBox_4);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(740, 140, 81, 16));
        label_11->setFont(font25);
        siteweb = new QLineEdit(groupBox_4);
        siteweb->setObjectName(QStringLiteral("siteweb"));
        siteweb->setGeometry(QRect(830, 270, 201, 22));
        siteweb->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        label_17 = new QLabel(groupBox_4);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(740, 270, 81, 16));
        label_17->setFont(font25);
        IDSOC = new QLineEdit(groupBox_4);
        IDSOC->setObjectName(QStringLiteral("IDSOC"));
        IDSOC->setGeometry(QRect(1050, 120, 113, 22));
        IDSOC->setStyleSheet(QStringLiteral("background-color: rgb(255, 238, 242);"));
        label_18 = new QLabel(groupBox_4);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(1000, 120, 31, 16));
        label_18->setFont(font25);
        label_19 = new QLabel(groupBox_4);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(520, 370, 221, 51));
        label_19->setFont(font24);
        pushButton_2 = new QPushButton(groupBox_4);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(602, 20, 51, 28));
        pushButton_2->setLayoutDirection(Qt::LeftToRight);
        pushButton_2->setStyleSheet(QStringLiteral("background-color: rgb(143, 143, 255);"));
        pushButton_2->setIcon(icon13);
        tabWidget->addTab(tab_2, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        groupBox_6 = new QGroupBox(tab_5);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        groupBox_6->setGeometry(QRect(0, 50, 1191, 491));
        groupBox_6->setStyleSheet(QLatin1String("background-image:url();\n"
"background-color :  #B5C0D0; \n"
"border-radius : 20px ;"));
        frame = new QFrame(groupBox_6);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(680, 20, 461, 441));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        frame_2 = new QFrame(groupBox_6);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setGeometry(QRect(40, 20, 491, 441));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        raf = new QPushButton(groupBox_6);
        raf->setObjectName(QStringLiteral("raf"));
        raf->setGeometry(QRect(550, 177, 111, 61));
        raf->setStyleSheet(QStringLiteral("background-image: url(:/img/images/426149691_801808405127200_2976933255027306355_n.png);"));
        tabWidget->addTab(tab_5, QString());

        retranslateUi(publicite);
        QObject::connect(pushButton_22, SIGNAL(clicked()), publicite, SLOT(close()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(publicite);
    } // setupUi

    void retranslateUi(QDialog *publicite)
    {
        publicite->setWindowTitle(QApplication::translate("publicite", "Dialog", Q_NULLPTR));
        groupBox_2->setTitle(QString());
        pushButton_16->setText(QString());
        pushButton_17->setText(QString());
        pushButton_18->setText(QString());
        pushButton_19->setText(QString());
        pushButton_20->setText(QString());
        pushButton_21->setText(QString());
        pushButton_22->setText(QApplication::translate("publicite", "Quitter", Q_NULLPTR));
        label->setText(QApplication::translate("publicite", "Tv'Ease", Q_NULLPTR));
        label_34->setText(QApplication::translate("publicite", "Auditeurs", Q_NULLPTR));
        label_26->setText(QApplication::translate("publicite", "Personnel", Q_NULLPTR));
        label_33->setText(QApplication::translate("publicite", "Publicite", Q_NULLPTR));
        label_35->setText(QApplication::translate("publicite", "Abonnement", Q_NULLPTR));
        label_32->setText(QApplication::translate("publicite", "Programme", Q_NULLPTR));
        label_36->setText(QApplication::translate("publicite", "Studios", Q_NULLPTR));
        groupBox_8->setTitle(QString());
        groupBox_7->setTitle(QString());
        pushButton_parametre_compte->setText(QString());
        chatbot->setText(QString());
        label_24->setText(QApplication::translate("publicite", "Chatbot", Q_NULLPTR));
        label_27->setText(QApplication::translate("publicite", "Messagerie", Q_NULLPTR));
        label_28->setText(QApplication::translate("publicite", "Evenements", Q_NULLPTR));
        ard->setText(QString());
        label_25->setText(QApplication::translate("publicite", "Arduino", Q_NULLPTR));
        ard_2->setText(QString());
        label_29->setText(QApplication::translate("publicite", "TTS", Q_NULLPTR));
        ard_3->setText(QString());
        label_30->setText(QApplication::translate("publicite", "Abonnement", Q_NULLPTR));
        Notif->setText(QString());
        pushButton_7->setText(QString());
#ifndef QT_NO_WHATSTHIS
        pushButton_5->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_ACCESSIBILITY
        pushButton_5->setAccessibleDescription(QString());
#endif // QT_NO_ACCESSIBILITY
        pushButton_5->setText(QString());
        groupBox_5->setTitle(QString());
        pushButton->setText(QApplication::translate("publicite", "Imprimer PDF", Q_NULLPTR));
        recherche->setText(QString());
        recherche->setPlaceholderText(QApplication::translate("publicite", "Entrer ce que vous chercher ici", Q_NULLPTR));
        rechbutton->setText(QString());
        label_71->setText(QApplication::translate("publicite", "Trier Tableau Selon", Q_NULLPTR));
        label_2->setText(QString());
        label_75->setText(QApplication::translate("publicite", "Cliquer ici pour rafraichir ou rechercher", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("publicite", "Consulter", Q_NULLPTR));
        groupBox->setTitle(QString());
        label_53->setText(QApplication::translate("publicite", "Nom Produit", Q_NULLPTR));
        label_54->setText(QApplication::translate("publicite", "Description", Q_NULLPTR));
        label_55->setText(QApplication::translate("publicite", "Canal", Q_NULLPTR));
        ajoutnumero_6->setPlaceholderText(QApplication::translate("publicite", "Entrer Desc. courte (ne depasse pas 100 mots)", Q_NULLPTR));
        label_57->setText(QApplication::translate("publicite", "Temps de passage: ", Q_NULLPTR));
        label_58->setText(QApplication::translate("publicite", "Budget Publicitaire :", Q_NULLPTR));
        prixajout_6->setPlaceholderText(QApplication::translate("publicite", "TND", Q_NULLPTR));
        label_59->setText(QApplication::translate("publicite", "Date:", Q_NULLPTR));
        label_60->setText(QApplication::translate("publicite", "Duree:", Q_NULLPTR));
        BoutonAjouter_6->setText(QApplication::translate("publicite", "Ajouter", Q_NULLPTR));
        label_61->setText(QApplication::translate("publicite", "Creer Code Pub :", Q_NULLPTR));
        random->setText(QApplication::translate("publicite", "Generer", Q_NULLPTR));
        label_72->setText(QApplication::translate("publicite", "Societ\303\251 :", Q_NULLPTR));
        label_73->setText(QApplication::translate("publicite", "Min", Q_NULLPTR));
        label_5->setText(QApplication::translate("publicite", "Programme Associ\303\251", Q_NULLPTR));
        label_20->setText(QString());
        label_21->setText(QString());
        label_22->setText(QString());
        pushButton_6->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("publicite", "Ajouter", Q_NULLPTR));
        groupBox_3->setTitle(QString());
        label_62->setText(QApplication::translate("publicite", "ID a Modifier", Q_NULLPTR));
        label_63->setText(QApplication::translate("publicite", "Modifier Nom Publicite:", Q_NULLPTR));
        label_64->setText(QApplication::translate("publicite", "Modifier Canal de diffusion:", Q_NULLPTR));
        label_65->setText(QApplication::translate("publicite", "Modifier Date apparition", Q_NULLPTR));
        label_66->setText(QApplication::translate("publicite", "Modifier Duree de passage", Q_NULLPTR));
        label_67->setText(QApplication::translate("publicite", "Modifier Prix", Q_NULLPTR));
        label_68->setText(QApplication::translate("publicite", "Modifier Temps d'apparition :", Q_NULLPTR));
        modifier->setText(QApplication::translate("publicite", "Modifier", Q_NULLPTR));
        label_69->setText(QApplication::translate("publicite", "Modifier Description:", Q_NULLPTR));
        modifnum->setPlaceholderText(QApplication::translate("publicite", "Entrer Nouvelle Description", Q_NULLPTR));
        lookforid->setText(QApplication::translate("publicite", "     Chercher Pub ", Q_NULLPTR));
        label_74->setText(QApplication::translate("publicite", "Modifier Societe", Q_NULLPTR));
        label_76->setText(QApplication::translate("publicite", "Veuiller saisir l'ID de la publicite a supprimer ici", Q_NULLPTR));
        label_77->setText(QApplication::translate("publicite", "Veuiller saisir l'ID de la publicite a rechercher ici", Q_NULLPTR));
        label_23->setText(QString());
        BoutonSupprimer->setText(QApplication::translate("publicite", "Supprimer", Q_NULLPTR));
        label_70->setText(QApplication::translate("publicite", "ID a supprimer", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("publicite", "Mettre a Jour", Q_NULLPTR));
        groupBox_4->setTitle(QString());
        label_3->setText(QApplication::translate("publicite", "Liste des Societes Sponsors:", Q_NULLPTR));
        label_4->setText(QApplication::translate("publicite", "Ajouter", Q_NULLPTR));
        label_6->setText(QApplication::translate("publicite", "Supprimer", Q_NULLPTR));
        ajoutersociete->setText(QApplication::translate("publicite", "Ajouter", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("publicite", "Modifier", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("publicite", "Supprimer", Q_NULLPTR));
        label_7->setText(QApplication::translate("publicite", "Nom:", Q_NULLPTR));
        label_8->setText(QApplication::translate("publicite", "Numero", Q_NULLPTR));
        label_9->setText(QApplication::translate("publicite", "Adresse", Q_NULLPTR));
        label_10->setText(QApplication::translate("publicite", "email :", Q_NULLPTR));
        email->setPlaceholderText(QApplication::translate("publicite", "Foulen@mail.com", Q_NULLPTR));
        industrie->setPlaceholderText(QApplication::translate("publicite", "exp: IT / finance...", Q_NULLPTR));
        label_12->setText(QApplication::translate("publicite", "ID Societe a Modifier", Q_NULLPTR));
        label_13->setText(QApplication::translate("publicite", "Nouveau email:", Q_NULLPTR));
        label_14->setText(QApplication::translate("publicite", "Changer Adresse", Q_NULLPTR));
        label_15->setText(QApplication::translate("publicite", "Societe a supprimer", Q_NULLPTR));
        pers->setPlaceholderText(QApplication::translate("publicite", "Nom Prenom", Q_NULLPTR));
        numero->setPlaceholderText(QApplication::translate("publicite", "+216", Q_NULLPTR));
        label_16->setText(QApplication::translate("publicite", "Personne de contact", Q_NULLPTR));
        label_11->setText(QApplication::translate("publicite", "Industrie :", Q_NULLPTR));
        siteweb->setPlaceholderText(QApplication::translate("publicite", "www.nomsite.com", Q_NULLPTR));
        label_17->setText(QApplication::translate("publicite", "Site Web", Q_NULLPTR));
        label_18->setText(QApplication::translate("publicite", "ID", Q_NULLPTR));
        label_19->setText(QApplication::translate("publicite", "Modification", Q_NULLPTR));
        pushButton_2->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("publicite", "Societ\303\251s", Q_NULLPTR));
        groupBox_6->setTitle(QString());
        raf->setText(QApplication::translate("publicite", "Rafraichir", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("publicite", "Statistiques", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class publicite: public Ui_publicite {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PUBLICITE_H
