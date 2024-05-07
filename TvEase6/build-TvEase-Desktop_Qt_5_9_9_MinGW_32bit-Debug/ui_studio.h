/********************************************************************************
** Form generated from reading UI file 'studio.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDIO_H
#define UI_STUDIO_H

#include <QtCore/QVariant>
#include <QtQuickWidgets/QQuickWidget>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
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

QT_BEGIN_NAMESPACE

class Ui_studio
{
public:
    QGroupBox *groupBox;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_37;
    QPushButton *pushButton_38;
    QPushButton *pushButton_39;
    QPushButton *pushButton_40;
    QPushButton *pushButton_41;
    QPushButton *pushButton_42;
    QPushButton *pushButton_43;
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
    QPushButton *pushButton_11;
    QPushButton *pushButton_12;
    QGroupBox *groupBox_8;
    QTabWidget *tabWidget;
    QWidget *tab_3;
    QGroupBox *groupBox_2;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *ids;
    QLineEdit *loc;
    QLineEdit *capacite;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QComboBox *type;
    QComboBox *etat;
    QPushButton *pushButton_4;
    QGroupBox *groupBox_9;
    QTableView *afficheraj;
    QLineEdit *rechtab;
    QComboBox *trie;
    QLabel *label_7;
    QPushButton *Imprimer;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *recherche;
    QQuickWidget *quickWidget;
    QPushButton *pushButton_9;
    QWidget *tab_4;
    QTableView *tableView_lister;
    QPushButton *imprimerpdf;
    QGroupBox *groupBox_3;
    QLabel *label_8;
    QLineEdit *idsup;
    QPushButton *deleteb;
    QPushButton *pushButton_7;
    QPushButton *refresh1;
    QGroupBox *groupBox_4;
    QComboBox *etatmd;
    QPushButton *pushButton_2;
    QLabel *label_9;
    QLineEdit *idmd;
    QLineEdit *capmd;
    QLabel *label_11;
    QComboBox *typemd;
    QLabel *label_12;
    QLabel *label_10;
    QLineEdit *locmd;
    QLabel *label_13;
    QPushButton *pushButton_8;
    QWidget *tab;
    QQuickWidget *quickWidget_2;
    QWidget *tab_2;

    void setupUi(QDialog *studio)
    {
        if (studio->objectName().isEmpty())
            studio->setObjectName(QStringLiteral("studio"));
        studio->resize(1500, 800);
        studio->setStyleSheet(QStringLiteral("background-color: #F0F0F0; "));
        groupBox = new QGroupBox(studio);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(0, 0, 181, 801));
        groupBox->setStyleSheet(QLatin1String("background-image: url(:/img/images/background.jpg);\n"
""));
        verticalLayoutWidget = new QWidget(groupBox);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 70, 181, 738));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(verticalLayoutWidget->sizePolicy().hasHeightForWidth());
        verticalLayoutWidget->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_37 = new QPushButton(verticalLayoutWidget);
        pushButton_37->setObjectName(QStringLiteral("pushButton_37"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_37->sizePolicy().hasHeightForWidth());
        pushButton_37->setSizePolicy(sizePolicy1);
        pushButton_37->setStyleSheet(QLatin1String("QPushButton{\n"
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
        pushButton_37->setIcon(icon);
        pushButton_37->setIconSize(QSize(30, 30));

        verticalLayout->addWidget(pushButton_37);

        pushButton_38 = new QPushButton(verticalLayoutWidget);
        pushButton_38->setObjectName(QStringLiteral("pushButton_38"));
        sizePolicy1.setHeightForWidth(pushButton_38->sizePolicy().hasHeightForWidth());
        pushButton_38->setSizePolicy(sizePolicy1);
        pushButton_38->setStyleSheet(QLatin1String("QPushButton{\n"
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
        pushButton_38->setIcon(icon1);
        pushButton_38->setIconSize(QSize(30, 30));

        verticalLayout->addWidget(pushButton_38);

        pushButton_39 = new QPushButton(verticalLayoutWidget);
        pushButton_39->setObjectName(QStringLiteral("pushButton_39"));
        sizePolicy1.setHeightForWidth(pushButton_39->sizePolicy().hasHeightForWidth());
        pushButton_39->setSizePolicy(sizePolicy1);
        pushButton_39->setStyleSheet(QLatin1String("QPushButton{\n"
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
        pushButton_39->setIcon(icon2);
        pushButton_39->setIconSize(QSize(30, 30));

        verticalLayout->addWidget(pushButton_39);

        pushButton_40 = new QPushButton(verticalLayoutWidget);
        pushButton_40->setObjectName(QStringLiteral("pushButton_40"));
        sizePolicy1.setHeightForWidth(pushButton_40->sizePolicy().hasHeightForWidth());
        pushButton_40->setSizePolicy(sizePolicy1);
        pushButton_40->setStyleSheet(QLatin1String("QPushButton{\n"
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
        pushButton_40->setIcon(icon3);
        pushButton_40->setIconSize(QSize(30, 30));

        verticalLayout->addWidget(pushButton_40);

        pushButton_41 = new QPushButton(verticalLayoutWidget);
        pushButton_41->setObjectName(QStringLiteral("pushButton_41"));
        sizePolicy1.setHeightForWidth(pushButton_41->sizePolicy().hasHeightForWidth());
        pushButton_41->setSizePolicy(sizePolicy1);
        pushButton_41->setStyleSheet(QLatin1String("QPushButton{\n"
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
        pushButton_41->setIcon(icon4);
        pushButton_41->setIconSize(QSize(30, 30));

        verticalLayout->addWidget(pushButton_41);

        pushButton_42 = new QPushButton(verticalLayoutWidget);
        pushButton_42->setObjectName(QStringLiteral("pushButton_42"));
        sizePolicy1.setHeightForWidth(pushButton_42->sizePolicy().hasHeightForWidth());
        pushButton_42->setSizePolicy(sizePolicy1);
        pushButton_42->setStyleSheet(QLatin1String("background-color: #E3E4F2;\n"
"	background-image: url();\n"
"\n"
"  font-family: Neue Haas Grotesk Text Pro Thin, sans-serif; \n"
"  font-weight: bold; \n"
"    font-size: 20px; \n"
"border : none ; \n"
"border-radius : 0 px ;\n"
"color : #4D53A8 ; "));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/img/images/stu.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_42->setIcon(icon5);
        pushButton_42->setIconSize(QSize(30, 30));

        verticalLayout->addWidget(pushButton_42);

        pushButton_43 = new QPushButton(verticalLayoutWidget);
        pushButton_43->setObjectName(QStringLiteral("pushButton_43"));
        sizePolicy1.setHeightForWidth(pushButton_43->sizePolicy().hasHeightForWidth());
        pushButton_43->setSizePolicy(sizePolicy1);
        pushButton_43->setStyleSheet(QLatin1String("QPushButton{\n"
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
        pushButton_43->setIcon(icon6);
        pushButton_43->setIconSize(QSize(50, 100));

        verticalLayout->addWidget(pushButton_43);

        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 20, 121, 31));
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
        label_34->setGeometry(QRect(60, 460, 71, 16));
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
        label_26->setGeometry(QRect(60, 140, 81, 16));
        label_26->setFont(font1);
        label_26->setStyleSheet(QLatin1String("background-color: none;\n"
"background-image: url();\n"
""));
        label_33 = new QLabel(groupBox);
        label_33->setObjectName(QStringLiteral("label_33"));
        label_33->setGeometry(QRect(60, 350, 61, 16));
        label_33->setFont(font1);
        label_33->setStyleSheet(QLatin1String("background-color: none;\n"
"background-image: url();\n"
""));
        label_35 = new QLabel(groupBox);
        label_35->setObjectName(QStringLiteral("label_35"));
        label_35->setGeometry(QRect(50, 560, 91, 16));
        label_35->setFont(font1);
        label_35->setStyleSheet(QLatin1String("background-color: none;\n"
"background-image: url();\n"
""));
        label_32 = new QLabel(groupBox);
        label_32->setObjectName(QStringLiteral("label_32"));
        label_32->setGeometry(QRect(50, 240, 81, 21));
        label_32->setFont(font1);
        label_32->setStyleSheet(QLatin1String("background-color: none;\n"
"background-image: url();\n"
""));
        label_36 = new QLabel(groupBox);
        label_36->setObjectName(QStringLiteral("label_36"));
        label_36->setGeometry(QRect(70, 670, 61, 16));
        label_36->setFont(font1);
        label_36->setStyleSheet(QLatin1String("background-color: none;\n"
"background-image: url();\n"
""));
        groupBox_7 = new QGroupBox(studio);
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
        label_30->setGeometry(QRect(940, 20, 231, 31));
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
        lineEdit_role->setGeometry(QRect(40, 40, 181, 21));
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
        lineEdit_nomprenom->setGeometry(QRect(30, 20, 241, 21));
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
        pushButton_parametre_compte->setGeometry(QRect(1160, 20, 91, 61));
        pushButton_parametre_compte->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_parametre_compte->setStyleSheet(QLatin1String("background-color: transparent ; \n"
"border : none ;\n"
"color : #333770 ;\n"
"background-image : url();"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/img/images/motpas.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_parametre_compte->setIcon(icon7);
        pushButton_parametre_compte->setIconSize(QSize(50, 50));
        pushButton_11 = new QPushButton(groupBox_7);
        pushButton_11->setObjectName(QStringLiteral("pushButton_11"));
        pushButton_11->setGeometry(QRect(760, 30, 93, 41));
        pushButton_11->setStyleSheet(QStringLiteral("image: url(:/Downloads/calculator.png);"));
        pushButton_12 = new QPushButton(groupBox_7);
        pushButton_12->setObjectName(QStringLiteral("pushButton_12"));
        pushButton_12->setGeometry(QRect(620, 30, 93, 41));
        pushButton_12->setStyleSheet(QStringLiteral("image: url(:/Downloads/calculator.png);"));
        groupBox_8 = new QGroupBox(studio);
        groupBox_8->setObjectName(QStringLiteral("groupBox_8"));
        groupBox_8->setGeometry(QRect(180, 750, 1361, 101));
        groupBox_8->setStyleSheet(QString::fromUtf8("border-top-right-radius : 40px ; \n"
"background-image: url(:/img/images/background.jpg);\n"
"/*border-top-left-radius: 20px; /*Coin arrondi en haut \303\240 gauche \n"
"    border-bottom-left-radius: 20px; /* Coin arrondi en bas \303\240 gauche \n"
"    border-top-right-radius: 20px; /* Coin arrondi en haut \303\240 droite \n"
"    border-bottom-right-radius: 20px; /* Coin arrondi en bas \303\240 droite */"));
        tabWidget = new QTabWidget(studio);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(210, 100, 1251, 631));
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
"    width: 200px;\n"
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
"}"));
        tabWidget->setIconSize(QSize(30, 30));
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        groupBox_2 = new QGroupBox(tab_3);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 80, 331, 491));
        groupBox_2->setStyleSheet(QLatin1String("background-color:white;\n"
"border-radius: 30px;"));
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 120, 161, 16));
        QFont font6;
        font6.setFamily(QStringLiteral("MS Shell Dlg 2"));
        font6.setPointSize(12);
        font6.setBold(false);
        font6.setItalic(false);
        font6.setWeight(50);
        label_2->setFont(font6);
        label_2->setStyleSheet(QLatin1String("background-color:none;\n"
"font: 12pt \"MS Shell Dlg 2\";"));
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 190, 131, 20));
        label_3->setFont(font6);
        label_3->setStyleSheet(QLatin1String("background-color:none;\n"
"font: 12pt \"MS Shell Dlg 2\";"));
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 270, 71, 16));
        label_4->setFont(font6);
        label_4->setStyleSheet(QLatin1String("background-color:none;\n"
"font: 12pt \"MS Shell Dlg 2\";"));
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 320, 81, 16));
        label_5->setFont(font6);
        label_5->setStyleSheet(QLatin1String("background-color:none;\n"
"font: 12pt \"MS Shell Dlg 2\";"));
        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(20, 380, 101, 16));
        label_6->setFont(font6);
        label_6->setStyleSheet(QLatin1String("background-color:none;\n"
"font: 12pt \"MS Shell Dlg 2\";"));
        ids = new QLineEdit(groupBox_2);
        ids->setObjectName(QStringLiteral("ids"));
        ids->setGeometry(QRect(10, 150, 301, 41));
        ids->setStyleSheet(QLatin1String("background-color: rgb(185, 185, 185) ; \n"
"border-radius : 10px ; \n"
"border : 1px solid black ;"));
        loc = new QLineEdit(groupBox_2);
        loc->setObjectName(QStringLiteral("loc"));
        loc->setGeometry(QRect(10, 220, 301, 41));
        loc->setStyleSheet(QLatin1String("background-color: rgb(185, 185, 185) ; \n"
"border-radius : 10px ; \n"
"border : 1px solid black ;"));
        capacite = new QLineEdit(groupBox_2);
        capacite->setObjectName(QStringLiteral("capacite"));
        capacite->setGeometry(QRect(10, 410, 301, 41));
        capacite->setStyleSheet(QLatin1String("background-color: rgb(185, 185, 185) ; \n"
"border-radius : 10px ; \n"
"border : 1px solid black ;"));
        pushButton = new QPushButton(groupBox_2);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(40, 450, 93, 28));
        pushButton->setStyleSheet(QLatin1String("QPushButton {\n"
"    font: 16pt \"MS Shell Dlg 2\" bold;\n"
"background- color:#333770;\n"
"color:black;\n"
"\n"
"   \n"
"    padding: 1px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
" background-color: #7FACD6;\n"
"color:black;\n"
"}"));
        pushButton_3 = new QPushButton(groupBox_2);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(180, -70, 51, 16));
        type = new QComboBox(groupBox_2);
        type->setObjectName(QStringLiteral("type"));
        type->setGeometry(QRect(10, 290, 301, 31));
        type->setStyleSheet(QLatin1String("QComboBox {\n"
"    background-color: rgb(185, 185, 185); /* Grey background */\n"
"    border: 1px solid black; /* Black border */\n"
"    border-radius: 3px; /* Rounded corners */\n"
"    padding: 2px 10px; /* Padding */\n"
"    min-width: 100px; /* Minimum width */\n"
"}\n"
"\n"
"QComboBox::drop-down {\n"
"    border: none; /* No border for the drop-down arrow */\n"
"}\n"
"\n"
"QComboBox::down-arrow {\n"
"    image: url(down_arrow.png); /* Custom image for the drop-down arrow */\n"
"    width: 10px; /* Width of the arrow */\n"
"    height: 10px; /* Height of the arrow */\n"
"}\n"
""));
        etat = new QComboBox(groupBox_2);
        etat->setObjectName(QStringLiteral("etat"));
        etat->setGeometry(QRect(10, 350, 301, 31));
        etat->setStyleSheet(QLatin1String("QComboBox {\n"
"    background-color: rgb(185, 185, 185); /* Grey background */\n"
"    border: 1px solid black; /* Black border */\n"
"    border-radius: 3px; /* Rounded corners */\n"
"    padding: 2px 10px; /* Padding */\n"
"    min-width: 100px; /* Minimum width */\n"
"}\n"
"\n"
"QComboBox::drop-down {\n"
"    border: none; /* No border for the drop-down arrow */\n"
"}\n"
"\n"
"QComboBox::down-arrow {\n"
"    image: url(down_arrow.png); /* Custom image for the drop-down arrow */\n"
"    width: 10px; /* Width of the arrow */\n"
"    height: 10px; /* Height of the arrow */\n"
"}\n"
""));
        pushButton_4 = new QPushButton(groupBox_2);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(20, 20, 91, 71));
        pushButton_4->setStyleSheet(QStringLiteral("background-color:none;"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/img/images/camera.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_4->setIcon(icon8);
        pushButton_4->setIconSize(QSize(70, 100));
        groupBox_9 = new QGroupBox(tab_3);
        groupBox_9->setObjectName(QStringLiteral("groupBox_9"));
        groupBox_9->setGeometry(QRect(-20, 610, 1361, 31));
        groupBox_9->setStyleSheet(QString::fromUtf8("border-top-right-radius : 40px ; \n"
"background-image: url(:/img/images/426694398_1819521791842194_7581453756899691749_n.jpg);\n"
"border-top-left-radius: 20px; /* Coin arrondi en haut \303\240 gauche */\n"
"    border-bottom-left-radius: 20px; /* Coin arrondi en bas \303\240 gauche */\n"
"    border-top-right-radius: 20px; /* Coin arrondi en haut \303\240 droite */\n"
"    border-bottom-right-radius: 20px; /* Coin arrondi en bas \303\240 droite */"));
        afficheraj = new QTableView(tab_3);
        afficheraj->setObjectName(QStringLiteral("afficheraj"));
        afficheraj->setGeometry(QRect(710, 80, 541, 501));
        rechtab = new QLineEdit(tab_3);
        rechtab->setObjectName(QStringLiteral("rechtab"));
        rechtab->setGeometry(QRect(230, 21, 561, 41));
        rechtab->setStyleSheet(QLatin1String("background-color: #E3E4F2 ; \n"
"border-radius : 10px ; \n"
"border : 1px solid black ;"));
        trie = new QComboBox(tab_3);
        trie->setObjectName(QStringLiteral("trie"));
        trie->setGeometry(QRect(960, 20, 91, 31));
        trie->setStyleSheet(QLatin1String("background-color: #E3E4F2 ; \n"
"border : 1px solid black ;"));
        label_7 = new QLabel(tab_3);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(140, 30, 71, 20));
        Imprimer = new QPushButton(tab_3);
        Imprimer->setObjectName(QStringLiteral("Imprimer"));
        Imprimer->setGeometry(QRect(1090, 20, 191, 28));
        Imprimer->setStyleSheet(QLatin1String("QPushButton {\n"
"    font: 16pt \"MS Shell Dlg 2\" bold;\n"
" color:#333770;\n"
"background-color:none;\n"
"\n"
"   \n"
"    padding: 1px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
" color: #7FACD6;\n"
"}"));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/img/images/429118701_2576203879220077_3396466223318114852_n.png"), QSize(), QIcon::Normal, QIcon::Off);
        Imprimer->setIcon(icon9);
        pushButton_5 = new QPushButton(tab_3);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(690, 60, 93, 51));
        pushButton_5->setStyleSheet(QLatin1String("QPushButton {\n"
"    font: 16pt \"MS Shell Dlg 2\" bold;\n"
" color:#333770;\n"
"background-color:none;\n"
"\n"
"   \n"
"    padding: 1px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
" color: #7FACD6;\n"
"}"));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/img/images/refresh.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_5->setIcon(icon10);
        pushButton_5->setIconSize(QSize(34, 47));
        pushButton_6 = new QPushButton(tab_3);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(880, 20, 111, 31));
        pushButton_6->setStyleSheet(QStringLiteral("background-color:none;"));
        QIcon icon11;
        icon11.addFile(QStringLiteral(":/img/images/429333860_331684199293783_5245463704783326312_n.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_6->setIcon(icon11);
        pushButton_6->setIconSize(QSize(20, 20));
        recherche = new QPushButton(tab_3);
        recherche->setObjectName(QStringLiteral("recherche"));
        recherche->setGeometry(QRect(790, 27, 51, 21));
        QIcon icon12;
        icon12.addFile(QStringLiteral(":/img/images/385529678_211836881972185_2463027834182630932_n.png"), QSize(), QIcon::Normal, QIcon::Off);
        recherche->setIcon(icon12);
        quickWidget = new QQuickWidget(tab_3);
        quickWidget->setObjectName(QStringLiteral("quickWidget"));
        quickWidget->setGeometry(QRect(350, 90, 351, 481));
        quickWidget->setStyleSheet(QStringLiteral("background-color: lightblue; border: 1px solid black;"));
        quickWidget->setResizeMode(QQuickWidget::SizeRootObjectToView);
        pushButton_9 = new QPushButton(tab_3);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setGeometry(QRect(10, 30, 93, 28));
        QIcon icon13;
        icon13.addFile(QStringLiteral(":/img/images/tableau-de-bord.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_9->setIcon(icon13);
        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        tableView_lister = new QTableView(tab_4);
        tableView_lister->setObjectName(QStringLiteral("tableView_lister"));
        tableView_lister->setGeometry(QRect(470, 50, 671, 381));
        tableView_lister->setStyleSheet(QLatin1String("/* Apply styles to QTableView */\n"
"QTableView {\n"
"    border: 1px solid #dcdcdc; /* Add a border around the table */\n"
"    selection-background-color: #cce5ff; /* Set background color for selected rows */\n"
"    alternate-background-color: #f2f2f2; /* Set alternate row background color */\n"
"    gridline-color: #dcdcdc; /* Set color for grid lines */\n"
"}\n"
"\n"
"/* Apply styles to table headers */\n"
"QHeaderView::section {\n"
"    background-color: #f5f5f5; /* Set background color for header */\n"
"    border: 1px solid #dcdcdc; /* Add border around header */\n"
"    padding: 4px; /* Add padding to header text */\n"
"}\n"
"\n"
"/* Apply styles to alternate rows */\n"
"QTableView::item {\n"
"    background-color: #ffffff; /* Set background color for table rows */\n"
"}\n"
"\n"
"QTableView::item:selected {\n"
"    background-color: #cce5ff; /* Set background color for selected rows */\n"
"}\n"
"\n"
"/* Apply hover effect */\n"
"QTableView::item:hover {\n"
"    background-color: #eaf2ff; /* Set backgr"
                        "ound color for hovered rows */\n"
"}\n"
"\n"
"/* Apply styles to scroll bar */\n"
"QScrollBar:vertical {\n"
"    border: none;\n"
"    background: #f5f5f5;\n"
"    width: 10px; /* Set width of vertical scroll bar */\n"
"    margin: 0px 0px 0px 0px;\n"
"}\n"
"\n"
"QScrollBar::handle:vertical {\n"
"    background: #dcdcdc;\n"
"    min-height: 20px; /* Set minimum height of scroll bar handle */\n"
"}\n"
"\n"
"QScrollBar::add-line:vertical,\n"
"QScrollBar::sub-line:vertical {\n"
"    background: none;\n"
"}\n"
"\n"
"QScrollBar::add-page:vertical,\n"
"QScrollBar::sub-page:vertical {\n"
"    background: none;\n"
"}\n"
""));
        imprimerpdf = new QPushButton(tab_4);
        imprimerpdf->setObjectName(QStringLiteral("imprimerpdf"));
        imprimerpdf->setGeometry(QRect(720, 460, 111, 28));
        imprimerpdf->setStyleSheet(QLatin1String("QPushButton {\n"
"	background-color: rgb(6, 222, 255);\n"
"\n"
"    color: #FFFFFF; /* Text color of button */\n"
"    padding: 8px; /* Padding of button */\n"
"    border: none; /* No border */\n"
"    border-radius: 4px; /* Rounded corners *\n"
"}"));
        groupBox_3 = new QGroupBox(tab_4);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(20, 450, 451, 121));
        label_8 = new QLabel(groupBox_3);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(20, 30, 171, 21));
        QFont font7;
        font7.setBold(true);
        font7.setWeight(75);
        label_8->setFont(font7);
        label_8->setStyleSheet(QLatin1String("/* Apply styles to QLabel */\n"
"QLabel {\n"
"    color: #333333; /* Set text color */\n"
"    font-size: 12px; /* Set font size */\n"
"    font-weight: bold; /* Set font weight */\n"
"}\n"
"\n"
"/* Apply styles to QLabel with specific object name */\n"
"QLabel#titleLabel {\n"
"    font-size: 16px; /* Set larger font size for title label */\n"
"    font-weight: bold; /* Set font weight */\n"
"}\n"
"\n"
"/* Apply styles to QLabel with specific object name */\n"
"QLabel#descriptionLabel {\n"
"    color: #666666; /* Set color for description label */\n"
"}\n"
"\n"
"/* Apply styles to QLabel with specific object name */\n"
"QLabel#errorLabel {\n"
"    color: #ff0000; /* Set color for error messages */\n"
"}\n"
"\n"
"/* Apply styles to QLabel with specific object name */\n"
"QLabel#successLabel {\n"
"    color: #00cc00; /* Set color for success messages */\n"
"}\n"
""));
        idsup = new QLineEdit(groupBox_3);
        idsup->setObjectName(QStringLiteral("idsup"));
        idsup->setGeometry(QRect(200, 30, 231, 22));
        idsup->setStyleSheet(QLatin1String("background-color: rgb(185, 185, 185) ; \n"
"border-radius : 10px ; \n"
"border : 1px solid black ;"));
        deleteb = new QPushButton(groupBox_3);
        deleteb->setObjectName(QStringLiteral("deleteb"));
        deleteb->setGeometry(QRect(490, 240, 93, 28));
        pushButton_7 = new QPushButton(groupBox_3);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(320, 70, 93, 41));
        QIcon icon14;
        icon14.addFile(QStringLiteral(":/img/images/trash.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_7->setIcon(icon14);
        pushButton_7->setIconSize(QSize(34, 47));
        refresh1 = new QPushButton(tab_4);
        refresh1->setObjectName(QStringLiteral("refresh1"));
        refresh1->setGeometry(QRect(430, 40, 93, 41));
        refresh1->setIcon(icon10);
        refresh1->setIconSize(QSize(34, 47));
        groupBox_4 = new QGroupBox(tab_4);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(20, 70, 431, 371));
        etatmd = new QComboBox(groupBox_4);
        etatmd->setObjectName(QStringLiteral("etatmd"));
        etatmd->setGeometry(QRect(195, 200, 221, 22));
        etatmd->setStyleSheet(QLatin1String("QComboBox {\n"
"    background-color: rgb(185, 185, 185); /* Grey background */\n"
"    border: 1px solid black; /* Black border */\n"
"    border-radius: 3px; /* Rounded corners */\n"
"    padding: 2px 10px; /* Padding */\n"
"    min-width: 100px; /* Minimum width */\n"
"}\n"
"\n"
"QComboBox::drop-down {\n"
"    border: none; /* No border for the drop-down arrow */\n"
"}\n"
"\n"
"QComboBox::down-arrow {\n"
"    image: url(down_arrow.png); /* Custom image for the drop-down arrow */\n"
"    width: 10px; /* Width of the arrow */\n"
"    height: 10px; /* Height of the arrow */\n"
"}\n"
""));
        pushButton_2 = new QPushButton(groupBox_4);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(10, 280, 93, 28));
        label_9 = new QLabel(groupBox_4);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(30, 120, 101, 20));
        label_9->setFont(font7);
        idmd = new QLineEdit(groupBox_4);
        idmd->setObjectName(QStringLiteral("idmd"));
        idmd->setGeometry(QRect(195, 80, 221, 22));
        idmd->setStyleSheet(QLatin1String("background-color: rgb(185, 185, 185) ; \n"
"border-radius : 10px ; \n"
"border : 1px solid black ;"));
        capmd = new QLineEdit(groupBox_4);
        capmd->setObjectName(QStringLiteral("capmd"));
        capmd->setGeometry(QRect(195, 230, 221, 22));
        capmd->setStyleSheet(QLatin1String("background-color: rgb(185, 185, 185) ; \n"
"border-radius : 10px ; \n"
"border : 1px solid black ;"));
        label_11 = new QLabel(groupBox_4);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(65, 200, 56, 16));
        label_11->setFont(font7);
        typemd = new QComboBox(groupBox_4);
        typemd->setObjectName(QStringLiteral("typemd"));
        typemd->setGeometry(QRect(195, 160, 221, 22));
        typemd->setStyleSheet(QLatin1String("QComboBox {\n"
"    background-color: rgb(185, 185, 185); /* Grey background */\n"
"    border: 1px solid black; /* Black border */\n"
"    border-radius: 3px; /* Rounded corners */\n"
"    padding: 2px 10px; /* Padding */\n"
"    min-width: 100px; /* Minimum width */\n"
"}\n"
"\n"
"QComboBox::drop-down {\n"
"    border: none; /* No border for the drop-down arrow */\n"
"}\n"
"\n"
"QComboBox::down-arrow {\n"
"    image: url(down_arrow.png); /* Custom image for the drop-down arrow */\n"
"    width: 10px; /* Width of the arrow */\n"
"    height: 10px; /* Height of the arrow */\n"
"}\n"
""));
        label_12 = new QLabel(groupBox_4);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(50, 230, 71, 20));
        label_12->setFont(font7);
        label_10 = new QLabel(groupBox_4);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(65, 160, 71, 20));
        label_10->setFont(font7);
        locmd = new QLineEdit(groupBox_4);
        locmd->setObjectName(QStringLiteral("locmd"));
        locmd->setGeometry(QRect(195, 120, 221, 22));
        locmd->setStyleSheet(QLatin1String("background-color: rgb(185, 185, 185) ; \n"
"border-radius : 10px ; \n"
"border : 1px solid black ;"));
        label_13 = new QLabel(groupBox_4);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(10, 80, 151, 20));
        label_13->setFont(font7);
        pushButton_8 = new QPushButton(tab_4);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(-10, 60, 93, 28));
        QIcon icon15;
        icon15.addFile(QStringLiteral(":/img/images/edit.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_8->setIcon(icon15);
        pushButton_8->setIconSize(QSize(34, 47));
        tabWidget->addTab(tab_4, QString());
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        quickWidget_2 = new QQuickWidget(tab);
        quickWidget_2->setObjectName(QStringLiteral("quickWidget_2"));
        quickWidget_2->setGeometry(QRect(30, 70, 1061, 521));
        quickWidget_2->setResizeMode(QQuickWidget::SizeRootObjectToView);
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tabWidget->addTab(tab_2, QString());

        retranslateUi(studio);
        QObject::connect(pushButton_43, SIGNAL(clicked()), studio, SLOT(close()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(studio);
    } // setupUi

    void retranslateUi(QDialog *studio)
    {
        studio->setWindowTitle(QApplication::translate("studio", "Dialog", Q_NULLPTR));
        groupBox->setTitle(QString());
        pushButton_37->setText(QString());
        pushButton_38->setText(QString());
        pushButton_39->setText(QString());
        pushButton_40->setText(QString());
        pushButton_41->setText(QString());
        pushButton_42->setText(QString());
        pushButton_43->setText(QApplication::translate("studio", "Quitter", Q_NULLPTR));
        label->setText(QApplication::translate("studio", "Tv'Ease", Q_NULLPTR));
        label_34->setText(QApplication::translate("studio", "Auditeurs", Q_NULLPTR));
        label_26->setText(QApplication::translate("studio", "Personnel", Q_NULLPTR));
        label_33->setText(QApplication::translate("studio", "Publicite", Q_NULLPTR));
        label_35->setText(QApplication::translate("studio", "Abonnement", Q_NULLPTR));
        label_32->setText(QApplication::translate("studio", "Programme", Q_NULLPTR));
        label_36->setText(QApplication::translate("studio", "Studios", Q_NULLPTR));
        groupBox_7->setTitle(QString());
        label_30->setText(QApplication::translate("studio", "Vendredi 22  Fevrier 2024", Q_NULLPTR));
        label_31->setText(QApplication::translate("studio", "13\302\260", Q_NULLPTR));
        pushButton_parametre_compte->setText(QString());
        pushButton_11->setText(QApplication::translate("studio", "game", Q_NULLPTR));
        pushButton_12->setText(QApplication::translate("studio", "parkings", Q_NULLPTR));
        groupBox_8->setTitle(QString());
        groupBox_2->setTitle(QString());
        label_2->setText(QApplication::translate("studio", "id studio", Q_NULLPTR));
        label_3->setText(QApplication::translate("studio", "localisation", Q_NULLPTR));
        label_4->setText(QApplication::translate("studio", "type", Q_NULLPTR));
        label_5->setText(QApplication::translate("studio", "etat", Q_NULLPTR));
        label_6->setText(QApplication::translate("studio", "capacite :", Q_NULLPTR));
        pushButton->setText(QApplication::translate("studio", "Ajouter", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("studio", "PushButton", Q_NULLPTR));
        pushButton_4->setText(QString());
        groupBox_9->setTitle(QString());
        trie->clear();
        trie->insertItems(0, QStringList()
         << QApplication::translate("studio", "capacite", Q_NULLPTR)
         << QApplication::translate("studio", "type", Q_NULLPTR)
         << QApplication::translate("studio", "etat", Q_NULLPTR)
        );
        label_7->setText(QApplication::translate("studio", "Recherche", Q_NULLPTR));
        Imprimer->setText(QApplication::translate("studio", "IMPRIMER", Q_NULLPTR));
        pushButton_5->setText(QString());
        pushButton_6->setText(QString());
        recherche->setText(QString());
        pushButton_9->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("studio", "Ajouter", Q_NULLPTR));
        imprimerpdf->setText(QApplication::translate("studio", "imprimer pdf", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("studio", "supprimer", Q_NULLPTR));
        label_8->setText(QApplication::translate("studio", "id studio pour supprimer", Q_NULLPTR));
        deleteb->setText(QApplication::translate("studio", "delete", Q_NULLPTR));
        pushButton_7->setText(QString());
        refresh1->setText(QString());
        pushButton_2->setText(QApplication::translate("studio", "modifier", Q_NULLPTR));
        label_9->setText(QApplication::translate("studio", "localisation", Q_NULLPTR));
        label_11->setText(QApplication::translate("studio", "etat", Q_NULLPTR));
        label_12->setText(QApplication::translate("studio", "capacitee", Q_NULLPTR));
        label_10->setText(QApplication::translate("studio", "type", Q_NULLPTR));
        label_13->setText(QApplication::translate("studio", "id studio a modifier", Q_NULLPTR));
        pushButton_8->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("studio", "Modifier", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("studio", "Afficher", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("studio", "statistique", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class studio: public Ui_studio {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDIO_H
