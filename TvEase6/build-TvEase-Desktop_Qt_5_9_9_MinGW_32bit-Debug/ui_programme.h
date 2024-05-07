/********************************************************************************
** Form generated from reading UI file 'programme.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROGRAMME_H
#define UI_PROGRAMME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCalendarWidget>
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

class Ui_programme
{
public:
    QGroupBox *groupBox_2;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QPushButton *pushButton_11;
    QPushButton *pushButton_12;
    QPushButton *pushButton_13;
    QPushButton *pushButton_14;
    QPushButton *pushButton_15;
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
    QLineEdit *lineEdit_nomprenom;
    QLineEdit *lineEdit_role;
    QPushButton *pushButton_parametre_compte;
    QGroupBox *groupBox_8;
    QTabWidget *tabWidget;
    QWidget *tab_2;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *label_animation1;
    QCalendarWidget *calendarWidget1;
    QWidget *tab;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLineEdit *lineEdit_NOMBRE;
    QLineEdit *lineEdit_NOM;
    QLineEdit *lineEdit_ID;
    QComboBox *comboBox_TYPE;
    QLabel *label_9;
    QLineEdit *lineEdit_DUREE;
    QPushButton *pushButton_AJOUT;
    QTableView *tabprog;
    QPushButton *pushButton_lister;
    QFrame *frame_2;
    QComboBox *comboBox_SECTION;
    QPushButton *pushButton_refraichir;
    QDateEdit *QEdit_DATE;
    QComboBox *comboBox_cin;
    QLabel *label_11;
    QPushButton *browse;
    QLabel *imagebrowser;
    QLabel *label_2;
    QLineEdit *lineEdit_recherche;
    QLabel *label_18;
    QPushButton *recherche;
    QComboBox *comboBox;
    QPushButton *pushButton_3;
    QPushButton *pushButton_maj_2;
    QPushButton *imprimer;
    QPushButton *pushButton_7;
    QLabel *imagebrowser_2;
    QLabel *label_animation;
    QWidget *tab_3;
    QLabel *label_15;
    QPushButton *pushButton_stat;

    void setupUi(QDialog *programme)
    {
        if (programme->objectName().isEmpty())
            programme->setObjectName(QStringLiteral("programme"));
        programme->resize(1500, 800);
        programme->setStyleSheet(QStringLiteral("background-color: #F0F0F0; "));
        groupBox_2 = new QGroupBox(programme);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(0, 0, 181, 801));
        groupBox_2->setStyleSheet(QLatin1String("background-image: url(:/img/images/background.jpg);\n"
""));
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
        pushButton_9 = new QPushButton(verticalLayoutWidget_2);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_9->sizePolicy().hasHeightForWidth());
        pushButton_9->setSizePolicy(sizePolicy1);
        pushButton_9->setStyleSheet(QLatin1String("QPushButton{\n"
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
        pushButton_9->setIcon(icon);
        pushButton_9->setIconSize(QSize(30, 30));

        verticalLayout_2->addWidget(pushButton_9);

        pushButton_10 = new QPushButton(verticalLayoutWidget_2);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        sizePolicy1.setHeightForWidth(pushButton_10->sizePolicy().hasHeightForWidth());
        pushButton_10->setSizePolicy(sizePolicy1);
        pushButton_10->setStyleSheet(QLatin1String("background-color: #E3E4F2;\n"
"	background-image: url();\n"
"\n"
"  font-family: Neue Haas Grotesk Text Pro Thin, sans-serif; \n"
"  font-weight: bold; \n"
"    font-size: 20px; \n"
"border : none ; \n"
"border-radius : 0 px ;\n"
"color : #4D53A8 ; "));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/img/images/program.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_10->setIcon(icon1);
        pushButton_10->setIconSize(QSize(30, 30));

        verticalLayout_2->addWidget(pushButton_10);

        pushButton_11 = new QPushButton(verticalLayoutWidget_2);
        pushButton_11->setObjectName(QStringLiteral("pushButton_11"));
        sizePolicy1.setHeightForWidth(pushButton_11->sizePolicy().hasHeightForWidth());
        pushButton_11->setSizePolicy(sizePolicy1);
        pushButton_11->setStyleSheet(QLatin1String("QPushButton{\n"
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
        pushButton_11->setIcon(icon2);
        pushButton_11->setIconSize(QSize(30, 30));

        verticalLayout_2->addWidget(pushButton_11);

        pushButton_12 = new QPushButton(verticalLayoutWidget_2);
        pushButton_12->setObjectName(QStringLiteral("pushButton_12"));
        sizePolicy1.setHeightForWidth(pushButton_12->sizePolicy().hasHeightForWidth());
        pushButton_12->setSizePolicy(sizePolicy1);
        pushButton_12->setStyleSheet(QLatin1String("QPushButton{\n"
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
        pushButton_12->setIcon(icon3);
        pushButton_12->setIconSize(QSize(30, 30));

        verticalLayout_2->addWidget(pushButton_12);

        pushButton_13 = new QPushButton(verticalLayoutWidget_2);
        pushButton_13->setObjectName(QStringLiteral("pushButton_13"));
        sizePolicy1.setHeightForWidth(pushButton_13->sizePolicy().hasHeightForWidth());
        pushButton_13->setSizePolicy(sizePolicy1);
        pushButton_13->setStyleSheet(QLatin1String("QPushButton{\n"
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
        pushButton_13->setIcon(icon4);
        pushButton_13->setIconSize(QSize(30, 30));

        verticalLayout_2->addWidget(pushButton_13);

        pushButton_14 = new QPushButton(verticalLayoutWidget_2);
        pushButton_14->setObjectName(QStringLiteral("pushButton_14"));
        sizePolicy1.setHeightForWidth(pushButton_14->sizePolicy().hasHeightForWidth());
        pushButton_14->setSizePolicy(sizePolicy1);
        pushButton_14->setStyleSheet(QLatin1String("QPushButton{\n"
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
        pushButton_14->setIcon(icon5);
        pushButton_14->setIconSize(QSize(30, 30));

        verticalLayout_2->addWidget(pushButton_14);

        pushButton_15 = new QPushButton(verticalLayoutWidget_2);
        pushButton_15->setObjectName(QStringLiteral("pushButton_15"));
        sizePolicy1.setHeightForWidth(pushButton_15->sizePolicy().hasHeightForWidth());
        pushButton_15->setSizePolicy(sizePolicy1);
        pushButton_15->setStyleSheet(QLatin1String("QPushButton{\n"
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
        pushButton_15->setIcon(icon6);
        pushButton_15->setIconSize(QSize(50, 100));

        verticalLayout_2->addWidget(pushButton_15);

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
"\n"
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
"background-image: url();\n"
""));
        label_26 = new QLabel(groupBox_2);
        label_26->setObjectName(QStringLiteral("label_26"));
        label_26->setGeometry(QRect(60, 150, 81, 16));
        label_26->setFont(font1);
        label_26->setStyleSheet(QLatin1String("background-color: none;\n"
"background-image: url();\n"
""));
        label_33 = new QLabel(groupBox_2);
        label_33->setObjectName(QStringLiteral("label_33"));
        label_33->setGeometry(QRect(60, 360, 61, 16));
        label_33->setFont(font1);
        label_33->setStyleSheet(QLatin1String("background-color: none;\n"
"background-image: url();\n"
""));
        label_35 = new QLabel(groupBox_2);
        label_35->setObjectName(QStringLiteral("label_35"));
        label_35->setGeometry(QRect(50, 570, 91, 16));
        label_35->setFont(font1);
        label_35->setStyleSheet(QLatin1String("background-color: none;\n"
"background-image: url();\n"
""));
        label_32 = new QLabel(groupBox_2);
        label_32->setObjectName(QStringLiteral("label_32"));
        label_32->setGeometry(QRect(50, 250, 81, 21));
        label_32->setFont(font1);
        label_32->setStyleSheet(QLatin1String("background-color: none;\n"
"background-image: url();\n"
""));
        label_36 = new QLabel(groupBox_2);
        label_36->setObjectName(QStringLiteral("label_36"));
        label_36->setGeometry(QRect(70, 680, 61, 16));
        label_36->setFont(font1);
        label_36->setStyleSheet(QLatin1String("background-color: none;\n"
"background-image: url();\n"
""));
        groupBox_7 = new QGroupBox(programme);
        groupBox_7->setObjectName(QStringLiteral("groupBox_7"));
        groupBox_7->setGeometry(QRect(210, 0, 1261, 71));
        groupBox_7->setStyleSheet(QString::fromUtf8("border-top-right-radius : 40px ; \n"
"background-image: url(:/img/images/background.jpg);\n"
"border-top-left-radius: 20px; /* Coin arrondi en haut \303\240 gauche */\n"
"    border-bottom-left-radius: 20px; /* Coin arrondi en bas \303\240 gauche */\n"
"    border-top-right-radius: 20px; /* Coin arrondi en haut \303\240 droite */\n"
"    border-bottom-right-radius: 20px; /* Coin arrondi en bas \303\240 droite */"));
        label_30 = new QLabel(groupBox_7);
        label_30->setObjectName(QStringLiteral("label_30"));
        label_30->setGeometry(QRect(950, 10, 231, 31));
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
        label_31->setGeometry(QRect(1060, 30, 51, 31));
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
        lineEdit_nomprenom = new QLineEdit(groupBox_7);
        lineEdit_nomprenom->setObjectName(QStringLiteral("lineEdit_nomprenom"));
        lineEdit_nomprenom->setGeometry(QRect(20, 10, 251, 21));
        QFont font4;
        font4.setPointSize(14);
        font4.setBold(true);
        font4.setWeight(75);
        lineEdit_nomprenom->setFont(font4);
        lineEdit_nomprenom->setStyleSheet(QLatin1String("background-color: transparent ; \n"
"border : none ;\n"
"color : #333770 ;\n"
"background-image : url();"));
        lineEdit_nomprenom->setReadOnly(true);
        lineEdit_role = new QLineEdit(groupBox_7);
        lineEdit_role->setObjectName(QStringLiteral("lineEdit_role"));
        lineEdit_role->setGeometry(QRect(50, 30, 181, 20));
        QFont font5;
        font5.setPointSize(10);
        font5.setBold(true);
        font5.setWeight(75);
        lineEdit_role->setFont(font5);
        lineEdit_role->setStyleSheet(QLatin1String("background-color: transparent ; \n"
"border : none ;\n"
"color : #333770 ;\n"
"background-image : url();"));
        lineEdit_role->setReadOnly(true);
        pushButton_parametre_compte = new QPushButton(groupBox_7);
        pushButton_parametre_compte->setObjectName(QStringLiteral("pushButton_parametre_compte"));
        pushButton_parametre_compte->setGeometry(QRect(1160, 0, 91, 61));
        pushButton_parametre_compte->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_parametre_compte->setStyleSheet(QLatin1String("background-color: transparent ; \n"
"border : none ;\n"
"color : #333770 ;\n"
"background-image : url();"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/img/images/motpas.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_parametre_compte->setIcon(icon7);
        pushButton_parametre_compte->setIconSize(QSize(50, 50));
        groupBox_8 = new QGroupBox(programme);
        groupBox_8->setObjectName(QStringLiteral("groupBox_8"));
        groupBox_8->setGeometry(QRect(180, 780, 1361, 81));
        groupBox_8->setStyleSheet(QString::fromUtf8("border-top-right-radius : 40px ; \n"
"background-image: url(:/img/images/background.jpg);\n"
"/*border-top-left-radius: 20px; /*Coin arrondi en haut \303\240 gauche \n"
"    border-bottom-left-radius: 20px; /* Coin arrondi en bas \303\240 gauche \n"
"    border-top-right-radius: 20px; /* Coin arrondi en haut \303\240 droite \n"
"    border-bottom-right-radius: 20px; /* Coin arrondi en bas \303\240 droite */"));
        tabWidget = new QTabWidget(programme);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(190, 80, 1311, 761));
        tabWidget->setStyleSheet(QString::fromUtf8("QTabWidget::pane {\n"
"    border-top: 5px solid #C2C7CB; /* Couleur de la bordure sup\303\251rieure */\n"
"    top: -0.7em;\n"
"    border: none;\n"
"}\n"
"\n"
"QTabWidget::tab-bar {\n"
"    alignment: center;\n"
"}\n"
"\n"
"QTabBar::tab {\n"
"    background-color: #7FACD6; /* Couleur de fond des onglets */\n"
"    color: #E4E5E0; /* Couleur du texte des onglets */\n"
"    font: 12pt Arial, sans-serif;\n"
"    padding: 17px; /* Espacement des onglets */\n"
"    width: 240px;\n"
"}\n"
"\n"
"QTabBar::tab:selected {\n"
"    /* Couleur de fond de l'onglet s\303\251lectionn\303\251 */\n"
"    background-color: #333770;\n"
"    color: white; /* Couleur du texte de l'onglet s\303\251lectionn\303\251 */\n"
"}\n"
"\n"
"QTabBar::tab:hover {\n"
"}\n"
"\n"
"/* Appliquer une bordure circulaire au conteneur QPushButton */\n"
"#buttonContainer {\n"
"    border: 2px solid #C2C7CB; /* Couleur et largeur de la bordure */\n"
"    border-radius: 50%; /* Bordure circulaire */\n"
"    padding: 4px; /* Ajuster le rembourrage si n\303"
                        "\251cessaire */\n"
"    width: 100%; /* Occupera toute la largeur disponible */\n"
"}\n"
"\n"
"QPushButton {\n"
"    background-color: #E7E7E7; /* Couleur de fond du bouton */\n"
"    color: #FFFFFF; /* Couleur du texte du bouton */\n"
"    padding: 20px; /* Espacement du bouton */\n"
"    border: none; /* Pas de bordure */\n"
"    border-radius: 7px; /* Coins arrondis */\n"
"}\n"
""));
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        verticalLayoutWidget = new QWidget(tab_2);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(30, 20, 1211, 721));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_animation1 = new QPushButton(verticalLayoutWidget);
        label_animation1->setObjectName(QStringLiteral("label_animation1"));
        label_animation1->setStyleSheet(QLatin1String("background-color:#FFdd94;\n"
"font: 12pt \"Poor Richard\"  ;\n"
"color:black;\n"
""));

        verticalLayout->addWidget(label_animation1);

        calendarWidget1 = new QCalendarWidget(verticalLayoutWidget);
        calendarWidget1->setObjectName(QStringLiteral("calendarWidget1"));
        calendarWidget1->setStyleSheet(QLatin1String("QCalendarWidget QToolButton\n"
"{\n"
"	height:60px;\n"
"	width:150px;\n"
"	color:white;\n"
"	font-size:30px;\n"
"	icon-size:50px 50px;\n"
"	background-color:rgb(52,50,64);\n"
"}\n"
"QCalendarWidget QWidget#qt_calendar_navigationbar\n"
"{\n"
"	background-color:rgb(52,50,64);\n"
"}\n"
"\n"
"/* MenuBar Code */\n"
"\n"
"QCalendarWidget QMenu\n"
"{\n"
"	width:150px;\n"
"	left:20px;\n"
"	color:white;\n"
"	font-size:18px;\n"
"	background-color:rgb(52,50,64);\n"
"}\n"
"\n"
"/* SpinBox Code */\n"
"\n"
"QCalendarWidget QSpinBox\n"
"{\n"
"	width:150px;\n"
"	height:60px;\n"
"	font-size:24px;\n"
"	color:white;\n"
"	background-color:rgb(52,50,64);	\n"
"}\n"
"QCalendarWidget QSpinBox::up-button\n"
"{\n"
"	subcontrol-origin: border;\n"
"	subcontrol-position:left;\n"
"	width:65px;\n"
"	height:60px;\n"
"}\n"
"QCalendarWidget QSpinBox::down-button\n"
"{\n"
"	subcontrol-origin: border;\n"
"	subcontrol-position:right;\n"
"	width:65px;\n"
"	height:60px;\n"
"}\n"
"\n"
"/* Calendar View Code */\n"
"QCalendarWidget QWidget\n"
"{\n"
"	"
                        "alternate-background-color:#333770;\n"
"}\n"
"QCalendarWidget QAbstractItemView:enabled\n"
"{\n"
"	font-size:24px;\n"
"	color:white;\n"
"	background-color:rgb(52,50,64);	\n"
"	selection-background-color:rgb(241,92,34);\n"
"	selection-color:white;\n"
"}\n"
"QCalendarWidget QAbstractItemView:disabled\n"
"{\n"
"	color:rgb(100,100,100);\n"
"}\n"
"\n"
""));

        verticalLayout->addWidget(calendarWidget1);

        tabWidget->addTab(tab_2, QString());
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        label_3 = new QLabel(tab);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 190, 171, 31));
        label_3->setStyleSheet(QLatin1String("background-color:none;\n"
"font: 10pt \"MS Shell Dlg 2\";"));
        label_4 = new QLabel(tab);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(30, 250, 91, 21));
        label_4->setStyleSheet(QLatin1String("background-color:none;\n"
"font: 10pt \"MS Shell Dlg 2\";"));
        label_5 = new QLabel(tab);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(30, 320, 56, 21));
        label_5->setStyleSheet(QLatin1String("background-color:none;\n"
"font: 10pt \"MS Shell Dlg 2\";"));
        label_6 = new QLabel(tab);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(30, 380, 141, 31));
        label_6->setStyleSheet(QLatin1String("background-color:none;\n"
"font: 10pt \"MS Shell Dlg 2\";"));
        label_7 = new QLabel(tab);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(40, 130, 171, 31));
        label_7->setStyleSheet(QLatin1String("background-color:none;\n"
"font: 10pt \"MS Shell Dlg 2\";"));
        label_8 = new QLabel(tab);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(30, 510, 171, 16));
        label_8->setStyleSheet(QLatin1String("background-color:none;\n"
"font: 10pt \"MS Shell Dlg 2\";"));
        lineEdit_NOMBRE = new QLineEdit(tab);
        lineEdit_NOMBRE->setObjectName(QStringLiteral("lineEdit_NOMBRE"));
        lineEdit_NOMBRE->setGeometry(QRect(30, 530, 221, 31));
        lineEdit_NOMBRE->setStyleSheet(QLatin1String("background-color: rgb(185, 185, 185) ; \n"
"border-radius : 10px ; \n"
"border : 1px solid black ;"));
        lineEdit_NOM = new QLineEdit(tab);
        lineEdit_NOM->setObjectName(QStringLiteral("lineEdit_NOM"));
        lineEdit_NOM->setGeometry(QRect(30, 220, 221, 31));
        lineEdit_NOM->setStyleSheet(QLatin1String("background-color: rgb(185, 185, 185) ; \n"
"border-radius : 10px ; \n"
"border : 1px solid black ;"));
        lineEdit_ID = new QLineEdit(tab);
        lineEdit_ID->setObjectName(QStringLiteral("lineEdit_ID"));
        lineEdit_ID->setGeometry(QRect(30, 160, 221, 31));
        lineEdit_ID->setStyleSheet(QLatin1String("background-color: rgb(185, 185, 185) ; \n"
"border-radius : 10px ; \n"
"border : 1px solid black ;"));
        comboBox_TYPE = new QComboBox(tab);
        comboBox_TYPE->setObjectName(QStringLiteral("comboBox_TYPE"));
        comboBox_TYPE->setGeometry(QRect(30, 350, 221, 31));
        comboBox_TYPE->setStyleSheet(QLatin1String("background-color: rgb(185, 185, 185) ; \n"
"border-radius : 10px ; \n"
"border : 1px solid black ;"));
        label_9 = new QLabel(tab);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(30, 450, 56, 16));
        label_9->setStyleSheet(QLatin1String("background-color:none;\n"
"font: 10pt \"MS Shell Dlg 2\";"));
        lineEdit_DUREE = new QLineEdit(tab);
        lineEdit_DUREE->setObjectName(QStringLiteral("lineEdit_DUREE"));
        lineEdit_DUREE->setGeometry(QRect(30, 470, 221, 31));
        lineEdit_DUREE->setStyleSheet(QLatin1String("background-color: rgb(185, 185, 185) ; \n"
"border-radius : 10px ; \n"
"border : 1px solid black ;"));
        pushButton_AJOUT = new QPushButton(tab);
        pushButton_AJOUT->setObjectName(QStringLiteral("pushButton_AJOUT"));
        pushButton_AJOUT->setGeometry(QRect(280, 180, 71, 41));
        pushButton_AJOUT->setStyleSheet(QLatin1String("QPushButton{\n"
"background:none;\n"
"    font-family: Arial, sans-serif; \n"
"    font-weight: bold; \n"
"    font-size: 20px; \n"
"border : none ; \n"
"border-radius : 0 px ;\n"
"color : black ; \n"
"padding:2px;\n"
"background-color:  #32936F;\n"
"border-radius: 20px;\n"
"\n"
"\n"
"}\n"
"QPushButton:hover{\n"
"background-color:  #0b6a3c;\n"
"border:none ; \n"
"border-radius: 20px;\n"
"\n"
" \n"
"}\n"
""));
        tabprog = new QTableView(tab);
        tabprog->setObjectName(QStringLiteral("tabprog"));
        tabprog->setGeometry(QRect(370, 120, 721, 561));
        tabprog->setStyleSheet(QStringLiteral("background-color:#FFdd94;"));
        pushButton_lister = new QPushButton(tab);
        pushButton_lister->setObjectName(QStringLiteral("pushButton_lister"));
        pushButton_lister->setGeometry(QRect(320, 100, 121, 41));
        pushButton_lister->setStyleSheet(QLatin1String("background-color:none;\n"
""));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/img/images/bouton-actualiser.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_lister->setIcon(icon8);
        pushButton_lister->setIconSize(QSize(40, 30));
        frame_2 = new QFrame(tab);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setGeometry(QRect(20, 90, 331, 631));
        frame_2->setStyleSheet(QLatin1String("background-color:white;\n"
"border-radius: 30px;\n"
""));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        comboBox_SECTION = new QComboBox(frame_2);
        comboBox_SECTION->setObjectName(QStringLiteral("comboBox_SECTION"));
        comboBox_SECTION->setGeometry(QRect(10, 190, 221, 31));
        comboBox_SECTION->setStyleSheet(QLatin1String("background-color: rgb(185, 185, 185) ; \n"
"border-radius : 10px ; \n"
"border : 1px solid black ;"));
        pushButton_refraichir = new QPushButton(frame_2);
        pushButton_refraichir->setObjectName(QStringLiteral("pushButton_refraichir"));
        pushButton_refraichir->setGeometry(QRect(10, 10, 41, 31));
        pushButton_refraichir->setStyleSheet(QLatin1String("background-color:none;\n"
""));
        pushButton_refraichir->setIcon(icon8);
        pushButton_refraichir->setIconSize(QSize(20, 20));
        QEdit_DATE = new QDateEdit(frame_2);
        QEdit_DATE->setObjectName(QStringLiteral("QEdit_DATE"));
        QEdit_DATE->setGeometry(QRect(10, 320, 221, 31));
        QEdit_DATE->setStyleSheet(QLatin1String("background-color: rgb(185, 185, 185) ; \n"
"border-radius : 10px ; \n"
"border : 1px solid black ;"));
        comboBox_cin = new QComboBox(frame_2);
        comboBox_cin->setObjectName(QStringLiteral("comboBox_cin"));
        comboBox_cin->setGeometry(QRect(10, 510, 221, 41));
        comboBox_cin->setStyleSheet(QLatin1String("background-color: rgb(185, 185, 185) ; \n"
"border-radius : 10px ; \n"
"border : 1px solid black ;"));
        label_11 = new QLabel(frame_2);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(10, 480, 221, 21));
        label_11->setStyleSheet(QLatin1String("background-color:none;\n"
"font: 10pt \"MS Shell Dlg 2\";"));
        browse = new QPushButton(frame_2);
        browse->setObjectName(QStringLiteral("browse"));
        browse->setGeometry(QRect(80, 590, 61, 21));
        browse->setStyleSheet(QLatin1String("background-color: black ; \n"
"font: 6pt \"MS Shell Dlg 2\";\n"
"\n"
"padding:1px;"));
        browse->setIconSize(QSize(13, 16));
        imagebrowser = new QLabel(frame_2);
        imagebrowser->setObjectName(QStringLiteral("imagebrowser"));
        imagebrowser->setGeometry(QRect(170, 560, 91, 71));
        imagebrowser->setStyleSheet(QLatin1String("border-radius : 10px ; \n"
"image: url(:/img/images/telecharger.png);\n"
"border : 1px solid black ;"));
        imagebrowser->setFrameShape(QFrame::WinPanel);
        imagebrowser->setScaledContents(true);
        label_2 = new QLabel(tab);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(90, 110, 211, 31));
        label_2->setStyleSheet(QLatin1String("background-color:none;\n"
"font: 15pt \"MS Shell Dlg 2\" bold;\n"
"color:#32936F;"));
        lineEdit_recherche = new QLineEdit(tab);
        lineEdit_recherche->setObjectName(QStringLiteral("lineEdit_recherche"));
        lineEdit_recherche->setGeometry(QRect(130, 30, 541, 41));
        lineEdit_recherche->setStyleSheet(QLatin1String("border-radius : 10px ; \n"
"border : 1px solid black ;"));
        label_18 = new QLabel(tab);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(10, 40, 111, 20));
        label_18->setStyleSheet(QLatin1String("background-color:none;\n"
"font: 13pt \"MS Shell Dlg 2\" bold;\n"
"color:#32936F;"));
        recherche = new QPushButton(tab);
        recherche->setObjectName(QStringLiteral("recherche"));
        recherche->setGeometry(QRect(680, 30, 91, 41));
        recherche->setStyleSheet(QLatin1String("QPushButton{\n"
"background:none;\n"
"    font-family: Arial, sans-serif; \n"
"    font-weight: bold; \n"
"    font-size: 20px; \n"
"border : none ; \n"
"border-radius : 0 px ;\n"
"color : black ; \n"
"padding:2px;\n"
"background-color:  #32936F;\n"
"border-radius: 20px;\n"
"\n"
"\n"
"}\n"
"QPushButton:hover{\n"
"background-color:  #0b6a3c;\n"
"border:none ; \n"
"border-radius: 20px;\n"
"\n"
" \n"
"}\n"
""));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/img/images/385529678_211836881972185_2463027834182630932_n.png"), QSize(), QIcon::Normal, QIcon::Off);
        recherche->setIcon(icon9);
        recherche->setIconSize(QSize(18, 20));
        comboBox = new QComboBox(tab);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(780, 30, 121, 41));
        comboBox->setStyleSheet(QLatin1String("background-color: rgb(185, 185, 185) ; \n"
"border : 1px solid black ;"));
        pushButton_3 = new QPushButton(tab);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(880, 30, 93, 41));
        pushButton_3->setStyleSheet(QStringLiteral("background:none;"));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/img/images/429333860_331684199293783_5245463704783326312_n.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon10);
        pushButton_3->setIconSize(QSize(30, 30));
        pushButton_maj_2 = new QPushButton(tab);
        pushButton_maj_2->setObjectName(QStringLiteral("pushButton_maj_2"));
        pushButton_maj_2->setGeometry(QRect(280, 230, 81, 41));
        pushButton_maj_2->setStyleSheet(QLatin1String("QPushButton{\n"
"background:none;\n"
"    font-family: Arial, sans-serif; \n"
"    font-weight: bold; \n"
"    font-size: 13px; \n"
"border : none ; \n"
"border-radius : 0 px ;\n"
"color : black ; \n"
"padding:1px;\n"
"background-color:  #FFEB3B;\n"
"border-radius: 20px;\n"
"\n"
"\n"
"}\n"
"QPushButton:hover{\n"
"background-color:  #FFF176;\n"
"border:none ; \n"
"border-radius: 20px;\n"
"\n"
" \n"
"}\n"
""));
        imprimer = new QPushButton(tab);
        imprimer->setObjectName(QStringLiteral("imprimer"));
        imprimer->setGeometry(QRect(990, 30, 141, 28));
        imprimer->setStyleSheet(QLatin1String("\n"
"QPushButton {\n"
"    background-color: transparent;\n"
"    font: 16pt \"MS Shell Dlg 2\" bold;\n"
"    color: #32936F;\n"
"    padding: 1px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
" color:#0b6a3c;\n"
"}\n"
""));
        QIcon icon11;
        icon11.addFile(QStringLiteral(":/img/images/429118701_2576203879220077_3396466223318114852_n.png"), QSize(), QIcon::Normal, QIcon::Off);
        imprimer->setIcon(icon11);
        imprimer->setIconSize(QSize(20, 20));
        pushButton_7 = new QPushButton(tab);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(280, 280, 81, 41));
        QFont font6;
        font6.setFamily(QStringLiteral("Arial"));
        font6.setBold(true);
        font6.setWeight(75);
        pushButton_7->setFont(font6);
        pushButton_7->setStyleSheet(QLatin1String("QPushButton{\n"
"background:none;\n"
"    font-family: Arial, sans-serif; \n"
"    font-weight: bold; \n"
"    font-size: 20px; \n"
"border : none ; \n"
"border-radius : 0 px ;\n"
"color : black ; \n"
"padding:1px;\n"
"background-color:  #DC2B37;\n"
"border-radius: 20px;\n"
"\n"
"\n"
"}\n"
"QPushButton:hover{\n"
"background-color:  #EE4A43;\n"
"border:none ; \n"
"border-radius: 20px;\n"
"\n"
" \n"
"}\n"
""));
        imagebrowser_2 = new QLabel(tab);
        imagebrowser_2->setObjectName(QStringLiteral("imagebrowser_2"));
        imagebrowser_2->setGeometry(QRect(1100, 120, 201, 331));
        imagebrowser_2->setStyleSheet(QLatin1String("background-color: rgb(185, 185, 185) ; \n"
"image: url(:/img/images/telecharger.png);\n"
"border-radius : 10px ; \n"
"border : 1px solid black ;"));
        imagebrowser_2->setFrameShape(QFrame::WinPanel);
        imagebrowser_2->setScaledContents(true);
        label_animation = new QLabel(tab);
        label_animation->setObjectName(QStringLiteral("label_animation"));
        label_animation->setGeometry(QRect(1110, 500, 191, 171));
        label_animation->setFrameShape(QFrame::NoFrame);
        tabWidget->addTab(tab, QString());
        frame_2->raise();
        label_3->raise();
        label_4->raise();
        label_5->raise();
        label_6->raise();
        label_7->raise();
        label_8->raise();
        lineEdit_NOMBRE->raise();
        lineEdit_NOM->raise();
        lineEdit_ID->raise();
        comboBox_TYPE->raise();
        label_9->raise();
        lineEdit_DUREE->raise();
        tabprog->raise();
        pushButton_lister->raise();
        pushButton_AJOUT->raise();
        label_2->raise();
        lineEdit_recherche->raise();
        label_18->raise();
        recherche->raise();
        comboBox->raise();
        pushButton_3->raise();
        pushButton_maj_2->raise();
        imprimer->raise();
        pushButton_7->raise();
        imagebrowser_2->raise();
        label_animation->raise();
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        label_15 = new QLabel(tab_3);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(-90, 40, 51, 51));
        tabWidget->addTab(tab_3, QString());
        pushButton_stat = new QPushButton(programme);
        pushButton_stat->setObjectName(QStringLiteral("pushButton_stat"));
        pushButton_stat->setGeometry(QRect(310, 80, 202, 50));
        pushButton_stat->setStyleSheet(QLatin1String("QPushButton{\n"
"background:none;\n"
"    font-family: Arial, sans-serif; \n"
"    font-weight: bold; \n"
"    font-size: 20px; \n"
"border : none ; \n"
"border-radius : 0 px ;\n"
"color : black ; \n"
"padding:2px;\n"
"background-color:  #7FACD6;\n"
"\n"
"\n"
"}\n"
"QPushButton:selected{\n"
"background-color:  #333770;\n"
"border:none ; \n"
"\n"
" \n"
"}\n"
""));
        QIcon icon12;
        icon12.addFile(QStringLiteral(":/img/images/tableau-de-bord.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_stat->setIcon(icon12);
        pushButton_stat->setIconSize(QSize(50, 50));

        retranslateUi(programme);
        QObject::connect(pushButton_15, SIGNAL(clicked()), programme, SLOT(close()));

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(programme);
    } // setupUi

    void retranslateUi(QDialog *programme)
    {
        programme->setWindowTitle(QApplication::translate("programme", "Dialog", Q_NULLPTR));
        groupBox_2->setTitle(QString());
        pushButton_9->setText(QString());
        pushButton_10->setText(QString());
        pushButton_11->setText(QString());
        pushButton_12->setText(QString());
        pushButton_13->setText(QString());
        pushButton_14->setText(QString());
        pushButton_15->setText(QApplication::translate("programme", "Quitter", Q_NULLPTR));
        label->setText(QApplication::translate("programme", "Tv'Ease", Q_NULLPTR));
        label_34->setText(QApplication::translate("programme", "Auditeurs", Q_NULLPTR));
        label_26->setText(QApplication::translate("programme", "Personnel", Q_NULLPTR));
        label_33->setText(QApplication::translate("programme", "Publicite", Q_NULLPTR));
        label_35->setText(QApplication::translate("programme", "Abonnement", Q_NULLPTR));
        label_32->setText(QApplication::translate("programme", "Programme", Q_NULLPTR));
        label_36->setText(QApplication::translate("programme", "Studios", Q_NULLPTR));
        groupBox_7->setTitle(QString());
        label_30->setText(QApplication::translate("programme", "Vendredi 22  Fevrier 2024", Q_NULLPTR));
        label_31->setText(QApplication::translate("programme", "13\302\260", Q_NULLPTR));
        pushButton_parametre_compte->setText(QString());
        groupBox_8->setTitle(QString());
        label_animation1->setText(QApplication::translate("programme", "DATE    DE   COMMENCEMENT   DE   DIFFUSION ", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("programme", "        Calendrier", Q_NULLPTR));
        label_3->setText(QApplication::translate("programme", "NOM du programme :", Q_NULLPTR));
        label_4->setText(QApplication::translate("programme", "section :", Q_NULLPTR));
        label_5->setText(QApplication::translate("programme", "type :", Q_NULLPTR));
        label_6->setText(QApplication::translate("programme", "Date de diffusion", Q_NULLPTR));
        label_7->setText(QApplication::translate("programme", "ID Programme :", Q_NULLPTR));
        label_8->setText(QApplication::translate("programme", "Total d'episodes", Q_NULLPTR));
        lineEdit_NOM->setText(QString());
        comboBox_TYPE->clear();
        comboBox_TYPE->insertItems(0, QStringList()
         << QApplication::translate("programme", "HORREUR", Q_NULLPTR)
         << QApplication::translate("programme", "SUSPENCE", Q_NULLPTR)
         << QApplication::translate("programme", "DIVERTISSEMENT", Q_NULLPTR)
         << QApplication::translate("programme", "ROM-COM", Q_NULLPTR)
         << QApplication::translate("programme", "ROMANTIQUE", Q_NULLPTR)
         << QApplication::translate("programme", "COMEDIE", Q_NULLPTR)
         << QApplication::translate("programme", "POLICIER", Q_NULLPTR)
        );
        label_9->setText(QApplication::translate("programme", "Duree", Q_NULLPTR));
        pushButton_AJOUT->setText(QApplication::translate("programme", "+", Q_NULLPTR));
        pushButton_lister->setText(QString());
        comboBox_SECTION->clear();
        comboBox_SECTION->insertItems(0, QStringList()
         << QApplication::translate("programme", "FILM", Q_NULLPTR)
         << QApplication::translate("programme", "SERIE", Q_NULLPTR)
         << QApplication::translate("programme", "DOCUMENTAIRE", Q_NULLPTR)
         << QApplication::translate("programme", "PROGRAMME TELEVISE", Q_NULLPTR)
        );
        pushButton_refraichir->setText(QString());
        comboBox_cin->clear();
        comboBox_cin->insertItems(0, QStringList()
         << QApplication::translate("programme", "choisir", Q_NULLPTR)
        );
        label_11->setText(QApplication::translate("programme", "CIN personnel responsable ", Q_NULLPTR));
        browse->setText(QApplication::translate("programme", "t\303\251lecharger", Q_NULLPTR));
        imagebrowser->setText(QString());
        label_2->setText(QApplication::translate("programme", " Fiche Programme", Q_NULLPTR));
        label_18->setText(QApplication::translate("programme", "Recherche", Q_NULLPTR));
        recherche->setText(QString());
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("programme", "ID PROGRAMME", Q_NULLPTR)
         << QApplication::translate("programme", "DATE DIFFUSION", Q_NULLPTR)
         << QApplication::translate("programme", "NOM", Q_NULLPTR)
         << QApplication::translate("programme", "SECTION", Q_NULLPTR)
         << QApplication::translate("programme", "TYPE", Q_NULLPTR)
        );
        pushButton_3->setText(QString());
        pushButton_maj_2->setText(QApplication::translate("programme", "mise \303\240 jour", Q_NULLPTR));
        imprimer->setText(QApplication::translate("programme", "Imprimer", Q_NULLPTR));
        pushButton_7->setText(QApplication::translate("programme", "-", Q_NULLPTR));
        imagebrowser_2->setText(QString());
        label_animation->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("programme", "Fiche programme", Q_NULLPTR));
        label_15->setText(QApplication::translate("programme", "TextLabel", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("programme", "Arduino", Q_NULLPTR));
        pushButton_stat->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class programme: public Ui_programme {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROGRAMME_H
