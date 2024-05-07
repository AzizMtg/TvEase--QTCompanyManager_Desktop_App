/********************************************************************************
** Form generated from reading UI file 'personnelle.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PERSONNELLE_H
#define UI_PERSONNELLE_H

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

QT_BEGIN_NAMESPACE

class Ui_personnelle
{
public:
    QGroupBox *groupBox;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_8;
    QPushButton *pushButton_6;
    QPushButton *pushButton_5;
    QPushButton *pushButton_4;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGroupBox *groupBox_2;
    QTableView *tableView_lister;
    QLineEdit *lineEdit_recherche;
    QComboBox *comboBox_trie;
    QPushButton *pushButton_7;
    QLabel *label_27;
    QPushButton *pushButton_recherche;
    QWidget *tab_3;
    QGroupBox *groupBox_3;
    QLabel *label_2;
    QLineEdit *lineEdit_ajouter_nom;
    QLabel *label_3;
    QLineEdit *lineEdit_ajouter_prenom;
    QLabel *label_4;
    QLineEdit *lineEdit_ajouter_num_tele;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QDateEdit *dateEdit_date_naissance;
    QLineEdit *lineEdit_ajouter_adresse;
    QLineEdit *lineEdit_ajouter_cin;
    QLineEdit *lineEdit_ajouter_salaire;
    QLineEdit *lineEdit_ajouter_mail;
    QPushButton *pushButton_ajouter_personnel;
    QComboBox *comboBox_ajouter_contrat;
    QComboBox *comboBox_ajouter_role;
    QPushButton *pushButton_RESET_personnel_;
    QLineEdit *lineEdit_3;
    QLabel *label_15;
    QLabel *label_24;
    QLabel *label_40;
    QComboBox *comboBox_ajouter_etat_civil;
    QLineEdit *lineEdit_ajouter_code_park;
    QLabel *label_28;
    QWidget *tab_4;
    QGroupBox *groupBox_4;
    QLineEdit *lineEdit_modifier_nom;
    QLineEdit *lineEdit_modifier_prenom;
    QLineEdit *lineEdit_modifier_num_tele;
    QDateEdit *dateEdit_modifier_date_naissance;
    QLineEdit *lineEdit_modifier_adresse;
    QLineEdit *lineEdit_modifier_salaire;
    QLineEdit *lineEdit_modifier_mail;
    QPushButton *pushButton_modifier_personnel;
    QComboBox *comboBox_modifier_role;
    QComboBox *comboBox_modifier_contrat;
    QPushButton *pushButton_RESET_personnel_1;
    QLabel *label_37;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_17;
    QLabel *label_20;
    QLabel *label_22;
    QLabel *label_16;
    QLabel *label_18;
    QLabel *label_21;
    QLabel *label_19;
    QLabel *label_23;
    QComboBox *comboBox_modifier_perso;
    QLineEdit *lineEdit;
    QLabel *label_25;
    QLabel *label_38;
    QComboBox *comboBox_modifier_etat_civil;
    QLineEdit *lineEdit_modifier_code_park_2;
    QLabel *label_69;
    QWidget *tab_2;
    QGroupBox *groupBox_6;
    QPushButton *pushButton_supprimer_perso;
    QPushButton *pushButton_RESET;
    QLabel *label_39;
    QComboBox *comboBox_supprimer_perso;
    QLineEdit *lineEdit_2;
    QLabel *label;
    QGroupBox *groupBox_7;
    QLabel *label_30;
    QLabel *label_31;
    QLineEdit *lineEdit_role;
    QLineEdit *lineEdit_nomprenom;
    QPushButton *pushButton_parametre_compte;
    QGroupBox *groupBox_8;
    QLabel *label_26;
    QLabel *label_32;
    QLabel *label_33;
    QLabel *label_34;
    QLabel *label_35;
    QLabel *label_36;
    QPushButton *pushButton_travailler_jointure;
    QPushButton *pushButton_stat;
    QPushButton *pushButton_9;

    void setupUi(QDialog *personnelle)
    {
        if (personnelle->objectName().isEmpty())
            personnelle->setObjectName(QStringLiteral("personnelle"));
        personnelle->resize(1500, 800);
        personnelle->setStyleSheet(QStringLiteral("background-color: #F0F0F0; "));
        groupBox = new QGroupBox(personnelle);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(0, 0, 181, 851));
        groupBox->setStyleSheet(QStringLiteral("background-image: url(:/img/images/background.jpg);"));
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
        pushButton_8 = new QPushButton(verticalLayoutWidget);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_8->sizePolicy().hasHeightForWidth());
        pushButton_8->setSizePolicy(sizePolicy1);
        QFont font;
        font.setFamily(QStringLiteral("Neue Haas Grotesk 58 Pro Thin"));
        font.setBold(true);
        font.setWeight(75);
        pushButton_8->setFont(font);
        pushButton_8->setStyleSheet(QLatin1String("background-color: #E3E4F2;\n"
"	background-image: url();\n"
"\n"
"  font-family: Neue Haas Grotesk Text Pro Thin, sans-serif; \n"
"  font-weight: bold; \n"
"    font-size: 20px; \n"
"border : none ; \n"
"border-radius : 0 px ;\n"
"color : #4D53A8 ; "));
        QIcon icon;
        icon.addFile(QStringLiteral(":/img/images/perso.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_8->setIcon(icon);
        pushButton_8->setIconSize(QSize(30, 30));

        verticalLayout->addWidget(pushButton_8);

        pushButton_6 = new QPushButton(verticalLayoutWidget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        sizePolicy1.setHeightForWidth(pushButton_6->sizePolicy().hasHeightForWidth());
        pushButton_6->setSizePolicy(sizePolicy1);
        pushButton_6->setFont(font);
        pushButton_6->setStyleSheet(QLatin1String("QPushButton{\n"
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
        pushButton_6->setIcon(icon1);
        pushButton_6->setIconSize(QSize(30, 30));

        verticalLayout->addWidget(pushButton_6);

        pushButton_5 = new QPushButton(verticalLayoutWidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        sizePolicy1.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy1);
        pushButton_5->setFont(font);
        pushButton_5->setStyleSheet(QLatin1String("QPushButton{\n"
"background-color: transparent;\n"
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
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/img/images/pub.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_5->setIcon(icon2);
        pushButton_5->setIconSize(QSize(30, 30));

        verticalLayout->addWidget(pushButton_5);

        pushButton_4 = new QPushButton(verticalLayoutWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        sizePolicy1.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy1);
        pushButton_4->setFont(font);
        pushButton_4->setStyleSheet(QLatin1String("QPushButton{\n"
"background-color: transparent;\n"
"	background-image: url();\n"
"\n"
"    font-family: Neue Haas Grotesk Text Pro Thin; \n"
"    font-weight: bold; \n"
"    font-size: 20px; \n"
"border : none ; \n"
"border-radius : 0px ;\n"
"color : #4D53A8 ; \n"
"}\n"
"QPushButton:hover{\n"
"background-color: #E3E4F2;\n"
" \n"
"}"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/img/images/audi.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_4->setIcon(icon3);
        pushButton_4->setIconSize(QSize(30, 30));

        verticalLayout->addWidget(pushButton_4);

        pushButton_3 = new QPushButton(verticalLayoutWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        sizePolicy1.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy1);
        pushButton_3->setFont(font);
        pushButton_3->setStyleSheet(QLatin1String("QPushButton{\n"
"background-color: transparent;\n"
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
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/img/images/abonementtt.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon4);
        pushButton_3->setIconSize(QSize(30, 30));

        verticalLayout->addWidget(pushButton_3);

        pushButton_2 = new QPushButton(verticalLayoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        sizePolicy1.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy1);
        pushButton_2->setFont(font);
        pushButton_2->setStyleSheet(QLatin1String("QPushButton{\n"
"background-color: transparent;\n"
"	background-image: url();\n"
"\n"
"    font-family: Neue Haas Grotesk Text Pro Thin;\n"
"    font-weight: bold; \n"
"    font-size: 20px; \n"
"border : none ; \n"
"border-radius : 0 px ;\n"
"color : #4D53A8 ; \n"
"background-image:url();\n"
"}\n"
"QPushButton:hover{\n"
"background-color: #E3E4F2;\n"
" \n"
"}"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/img/images/stu.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon5);
        pushButton_2->setIconSize(QSize(30, 30));

        verticalLayout->addWidget(pushButton_2);

        pushButton = new QPushButton(verticalLayoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        sizePolicy1.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy1);
        QFont font1;
        font1.setFamily(QStringLiteral("Arial"));
        font1.setBold(true);
        font1.setWeight(75);
        pushButton->setFont(font1);
        pushButton->setStyleSheet(QLatin1String("QPushButton{\n"
"background-color: transparent;\n"
"	background-image: url();\n"
"    font-family: Arial, sans-serif; \n"
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
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/img/images/quit.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon6);
        pushButton->setIconSize(QSize(50, 50));

        verticalLayout->addWidget(pushButton);

        tabWidget = new QTabWidget(personnelle);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(280, 90, 1201, 631));
        QFont font2;
        font2.setFamily(QStringLiteral("Neue Haas Grotesk Text Pro Blac"));
        font2.setPointSize(10);
        font2.setBold(true);
        font2.setWeight(75);
        tabWidget->setFont(font2);
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
        groupBox_2 = new QGroupBox(tab);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 10, 1181, 571));
        groupBox_2->setStyleSheet(QLatin1String("/*background-color :  #B5C0D0; */\n"
"border-radius : 50px ;"));
        tableView_lister = new QTableView(groupBox_2);
        tableView_lister->setObjectName(QStringLiteral("tableView_lister"));
        tableView_lister->setGeometry(QRect(30, 80, 1131, 381));
        tableView_lister->viewport()->setProperty("cursor", QVariant(QCursor(Qt::PointingHandCursor)));
        tableView_lister->setStyleSheet(QLatin1String("background-color:white ; \n"
"border-radius : 0px ; "));
        lineEdit_recherche = new QLineEdit(groupBox_2);
        lineEdit_recherche->setObjectName(QStringLiteral("lineEdit_recherche"));
        lineEdit_recherche->setGeometry(QRect(40, 30, 271, 31));
        lineEdit_recherche->setStyleSheet(QLatin1String("background-color: white;\n"
"border : none ; \n"
"border-bottom : 3px solid black  ; \n"
"\n"
"\n"
""));
        comboBox_trie = new QComboBox(groupBox_2);
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/img/images/table.png"), QSize(), QIcon::Normal, QIcon::Off);
        comboBox_trie->addItem(icon7, QString());
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/img/images/decroissant.png"), QSize(), QIcon::Normal, QIcon::Off);
        comboBox_trie->addItem(icon8, QString());
        comboBox_trie->addItem(icon8, QString());
        comboBox_trie->addItem(icon8, QString());
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/img/images/croissant.png"), QSize(), QIcon::Normal, QIcon::Off);
        comboBox_trie->addItem(icon9, QString());
        comboBox_trie->addItem(icon9, QString());
        comboBox_trie->addItem(icon9, QString());
        comboBox_trie->setObjectName(QStringLiteral("comboBox_trie"));
        comboBox_trie->setGeometry(QRect(930, 40, 221, 21));
        comboBox_trie->setStyleSheet(QLatin1String("background-color: #E5E4E4 ;\n"
""));
        pushButton_7 = new QPushButton(groupBox_2);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(530, 490, 181, 31));
        QFont font3;
        font3.setFamily(QStringLiteral("Neue Haas Grotesk Text Pro"));
        font3.setPointSize(10);
        font3.setBold(true);
        font3.setItalic(false);
        font3.setUnderline(false);
        font3.setWeight(75);
        pushButton_7->setFont(font3);
        pushButton_7->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_7->setStyleSheet(QLatin1String("\n"
"#pushButton_7{\n"
"background-image: url();\n"
"color : white; \n"
"border-radius : 3px ;\n"
"padding : 10px ; \n"
"background-color:#333770;\n"
"color : white ; \n"
"}\n"
"\n"
"\n"
"#pushButton_7:hover {\n"
"color : white ; \n"
"/*background-color : #D46F4D; */\n"
"}"));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/img/images/pd.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_7->setIcon(icon10);
        pushButton_7->setIconSize(QSize(30, 50));
        label_27 = new QLabel(groupBox_2);
        label_27->setObjectName(QStringLiteral("label_27"));
        label_27->setGeometry(QRect(760, 40, 161, 21));
        QFont font4;
        font4.setFamily(QStringLiteral("Neue Haas Grotesk Text Pro Extr"));
        font4.setPointSize(10);
        font4.setBold(true);
        font4.setWeight(75);
        label_27->setFont(font4);
        label_27->setStyleSheet(QStringLiteral("color: #306069;"));
        pushButton_recherche = new QPushButton(groupBox_2);
        pushButton_recherche->setObjectName(QStringLiteral("pushButton_recherche"));
        pushButton_recherche->setGeometry(QRect(320, 30, 31, 31));
        pushButton_recherche->setStyleSheet(QLatin1String("background-color : white ; \n"
"color : black ; "));
        QIcon icon11;
        icon11.addFile(QStringLiteral(":/img/images/search.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_recherche->setIcon(icon11);
        pushButton_recherche->setIconSize(QSize(20, 20));
        tabWidget->addTab(tab, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        groupBox_3 = new QGroupBox(tab_3);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(10, 10, 1171, 591));
        groupBox_3->setCursor(QCursor(Qt::ArrowCursor));
        groupBox_3->setStyleSheet(QLatin1String("/*background-color :  #B5C0D0; */\n"
"border-radius : 50px ;\n"
"\n"
"\n"
"\n"
"\n"
"\n"
""));
        label_2 = new QLabel(groupBox_3);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(120, 170, 61, 21));
        QFont font5;
        font5.setFamily(QStringLiteral("Neue Haas Grotesk Text Pro Extr"));
        font5.setPointSize(12);
        font5.setBold(true);
        font5.setWeight(75);
        label_2->setFont(font5);
        label_2->setStyleSheet(QLatin1String("color: #306069 ; \n"
"border:none ; "));
        lineEdit_ajouter_nom = new QLineEdit(groupBox_3);
        lineEdit_ajouter_nom->setObjectName(QStringLiteral("lineEdit_ajouter_nom"));
        lineEdit_ajouter_nom->setGeometry(QRect(250, 170, 301, 31));
        lineEdit_ajouter_nom->setStyleSheet(QLatin1String("background-color: transparent ; \n"
"border-radius : 10px ; \n"
"border : 1px solid #7396A0 ;"));
        label_3 = new QLabel(groupBox_3);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(120, 220, 91, 31));
        label_3->setFont(font5);
        label_3->setStyleSheet(QLatin1String("color: #306069 ; \n"
"border:none ; "));
        lineEdit_ajouter_prenom = new QLineEdit(groupBox_3);
        lineEdit_ajouter_prenom->setObjectName(QStringLiteral("lineEdit_ajouter_prenom"));
        lineEdit_ajouter_prenom->setGeometry(QRect(250, 230, 301, 31));
        lineEdit_ajouter_prenom->setStyleSheet(QLatin1String("background-color: transparent ; \n"
"border-radius : 10px ; \n"
"border : 1px solid #7396A0 ;"));
        label_4 = new QLabel(groupBox_3);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(400, 410, 131, 31));
        label_4->setFont(font5);
        label_4->setStyleSheet(QLatin1String("color: #306069 ; \n"
"border:none ; "));
        lineEdit_ajouter_num_tele = new QLineEdit(groupBox_3);
        lineEdit_ajouter_num_tele->setObjectName(QStringLiteral("lineEdit_ajouter_num_tele"));
        lineEdit_ajouter_num_tele->setGeometry(QRect(250, 290, 301, 31));
        lineEdit_ajouter_num_tele->setStyleSheet(QLatin1String("background-color: transparent ; \n"
"border-radius : 10px ; \n"
"border : 1px solid #7396A0 ;"));
        label_5 = new QLabel(groupBox_3);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(400, 360, 51, 21));
        label_5->setFont(font5);
        label_5->setStyleSheet(QLatin1String("color: #306069 ; \n"
"border:none ; "));
        label_6 = new QLabel(groupBox_3);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(120, 290, 121, 21));
        label_6->setFont(font5);
        label_6->setStyleSheet(QLatin1String("color: #306069 ;  \n"
"border:none ; "));
        label_7 = new QLabel(groupBox_3);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(620, 230, 131, 21));
        label_7->setFont(font5);
        label_7->setStyleSheet(QLatin1String("color: #306069 ; \n"
"border:none ; "));
        label_8 = new QLabel(groupBox_3);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(400, 470, 61, 21));
        label_8->setFont(font5);
        label_8->setStyleSheet(QLatin1String("color: #306069 ; \n"
"border:none ; "));
        label_9 = new QLabel(groupBox_3);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(620, 100, 101, 21));
        label_9->setFont(font5);
        label_9->setStyleSheet(QLatin1String("color: #306069 ; \n"
"border:none ; "));
        label_10 = new QLabel(groupBox_3);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(620, 280, 61, 31));
        label_10->setFont(font5);
        label_10->setStyleSheet(QLatin1String("color: #306069 ; \n"
"border:none ; "));
        label_11 = new QLabel(groupBox_3);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(620, 170, 91, 21));
        label_11->setFont(font5);
        label_11->setStyleSheet(QLatin1String("color: #306069 ; \n"
"border:none ; "));
        dateEdit_date_naissance = new QDateEdit(groupBox_3);
        dateEdit_date_naissance->setObjectName(QStringLiteral("dateEdit_date_naissance"));
        dateEdit_date_naissance->setGeometry(QRect(760, 230, 311, 31));
        dateEdit_date_naissance->setStyleSheet(QLatin1String("background-color: transparent ; \n"
"border-radius : 10px ; \n"
"border : 1px solid #7396A0 ;"));
        lineEdit_ajouter_adresse = new QLineEdit(groupBox_3);
        lineEdit_ajouter_adresse->setObjectName(QStringLiteral("lineEdit_ajouter_adresse"));
        lineEdit_ajouter_adresse->setGeometry(QRect(760, 110, 301, 31));
        lineEdit_ajouter_adresse->setStyleSheet(QLatin1String("background-color: transparent ; \n"
"border-radius : 10px ; \n"
"border : 1px solid #7396A0 ;"));
        lineEdit_ajouter_cin = new QLineEdit(groupBox_3);
        lineEdit_ajouter_cin->setObjectName(QStringLiteral("lineEdit_ajouter_cin"));
        lineEdit_ajouter_cin->setGeometry(QRect(250, 110, 301, 31));
        lineEdit_ajouter_cin->setStyleSheet(QLatin1String("background-color: transparent ; \n"
"border-radius : 10px ; \n"
"border : 1px solid #7396A0 ;"));
        lineEdit_ajouter_salaire = new QLineEdit(groupBox_3);
        lineEdit_ajouter_salaire->setObjectName(QStringLiteral("lineEdit_ajouter_salaire"));
        lineEdit_ajouter_salaire->setGeometry(QRect(540, 460, 301, 31));
        lineEdit_ajouter_salaire->setStyleSheet(QLatin1String("background-color: transparent ; \n"
"border-radius : 10px ; \n"
"border : 1px solid #7396A0 ;"));
        lineEdit_ajouter_mail = new QLineEdit(groupBox_3);
        lineEdit_ajouter_mail->setObjectName(QStringLiteral("lineEdit_ajouter_mail"));
        lineEdit_ajouter_mail->setGeometry(QRect(760, 280, 311, 31));
        lineEdit_ajouter_mail->setStyleSheet(QLatin1String("background-color: transparent ; \n"
"border-radius : 10px ; \n"
"border : 1px solid #7396A0 ;"));
        pushButton_ajouter_personnel = new QPushButton(groupBox_3);
        pushButton_ajouter_personnel->setObjectName(QStringLiteral("pushButton_ajouter_personnel"));
        pushButton_ajouter_personnel->setGeometry(QRect(550, 530, 111, 31));
        QFont font6;
        font6.setPointSize(10);
        font6.setBold(true);
        font6.setWeight(75);
        pushButton_ajouter_personnel->setFont(font6);
        pushButton_ajouter_personnel->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_ajouter_personnel->setStyleSheet(QLatin1String("#pushButton_ajouter_personnel\n"
"{background-color : #333770 ;\n"
"border-radius : 10px ;\n"
"color : white ; \n"
"padding:10px ;\n"
"border:none ; \n"
"}\n"
"\n"
"#pushButton_ajouter_personnel:hover\n"
"{\n"
"\n"
"}"));
        comboBox_ajouter_contrat = new QComboBox(groupBox_3);
        comboBox_ajouter_contrat->setObjectName(QStringLiteral("comboBox_ajouter_contrat"));
        comboBox_ajouter_contrat->setGeometry(QRect(540, 410, 301, 31));
        comboBox_ajouter_contrat->setStyleSheet(QLatin1String("background-color: white ; \n"
"border-radius : 10px ; \n"
"border : 1px solid #7396A0 ;"));
        comboBox_ajouter_role = new QComboBox(groupBox_3);
        comboBox_ajouter_role->setObjectName(QStringLiteral("comboBox_ajouter_role"));
        comboBox_ajouter_role->setGeometry(QRect(540, 360, 301, 31));
        comboBox_ajouter_role->setStyleSheet(QLatin1String("background-color: white ; \n"
"border-radius : 10px ; \n"
"border : 1px solid #7396A0 ;"));
        pushButton_RESET_personnel_ = new QPushButton(groupBox_3);
        pushButton_RESET_personnel_->setObjectName(QStringLiteral("pushButton_RESET_personnel_"));
        pushButton_RESET_personnel_->setGeometry(QRect(670, 530, 121, 31));
        pushButton_RESET_personnel_->setFont(font6);
        pushButton_RESET_personnel_->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_RESET_personnel_->setStyleSheet(QLatin1String("#pushButton_RESET_personnel_\n"
"{background-color : #333770 ;\n"
"border-radius : 10px ;\n"
"color : white ; \n"
"padding : 10px ; \n"
"border:none ; }\n"
"\n"
"\n"
"#pushButton_RESET_personnel_:hover\n"
"{\n"
" }\n"
""));
        lineEdit_3 = new QLineEdit(groupBox_3);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(350, 20, 421, 31));
        QFont font7;
        font7.setFamily(QStringLiteral("Segoe Print"));
        font7.setPointSize(18);
        font7.setBold(true);
        font7.setUnderline(true);
        font7.setWeight(75);
        lineEdit_3->setFont(font7);
        lineEdit_3->setStyleSheet(QLatin1String("padding-top : 100px ;\n"
"padding-bottom : 100px ;\n"
"color : #7396A0 ;"));
        label_15 = new QLabel(groupBox_3);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(100, 70, 291, 21));
        QFont font8;
        font8.setFamily(QStringLiteral("Microsoft YaHei"));
        font8.setPointSize(15);
        font8.setBold(false);
        font8.setUnderline(true);
        font8.setWeight(50);
        label_15->setFont(font8);
        label_15->setStyleSheet(QStringLiteral("color : #516B73;"));
        label_24 = new QLabel(groupBox_3);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setGeometry(QRect(100, 330, 321, 21));
        label_24->setFont(font8);
        label_24->setStyleSheet(QStringLiteral("color : #516B73;"));
        label_40 = new QLabel(groupBox_3);
        label_40->setObjectName(QStringLiteral("label_40"));
        label_40->setGeometry(QRect(120, 120, 47, 21));
        label_40->setFont(font5);
        label_40->setStyleSheet(QStringLiteral("color: #306069;"));
        comboBox_ajouter_etat_civil = new QComboBox(groupBox_3);
        comboBox_ajouter_etat_civil->setObjectName(QStringLiteral("comboBox_ajouter_etat_civil"));
        comboBox_ajouter_etat_civil->setGeometry(QRect(760, 170, 311, 31));
        comboBox_ajouter_etat_civil->setStyleSheet(QLatin1String("background-color: white ; \n"
"border-radius : 10px ; \n"
"border : 1px solid #7396A0 ;"));
        lineEdit_ajouter_code_park = new QLineEdit(groupBox_3);
        lineEdit_ajouter_code_park->setObjectName(QStringLiteral("lineEdit_ajouter_code_park"));
        lineEdit_ajouter_code_park->setGeometry(QRect(850, 520, 301, 31));
        lineEdit_ajouter_code_park->setStyleSheet(QLatin1String("background-color: transparent ; \n"
"border-radius : 10px ; \n"
"border : 1px solid #7396A0 ;"));
        label_28 = new QLabel(groupBox_3);
        label_28->setObjectName(QStringLiteral("label_28"));
        label_28->setGeometry(QRect(890, 480, 251, 21));
        label_28->setFont(font8);
        label_28->setStyleSheet(QStringLiteral("color : #516B73;"));
        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        groupBox_4 = new QGroupBox(tab_4);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(20, 10, 1161, 581));
        groupBox_4->setCursor(QCursor(Qt::ArrowCursor));
        groupBox_4->setStyleSheet(QLatin1String("opacity: 0.3;\n"
"/*background-color :  #B5C0D0; ; */\n"
"border-radius : 50px ;\n"
"border-radius : 50px ;\n"
"\n"
"\n"
""));
        lineEdit_modifier_nom = new QLineEdit(groupBox_4);
        lineEdit_modifier_nom->setObjectName(QStringLiteral("lineEdit_modifier_nom"));
        lineEdit_modifier_nom->setGeometry(QRect(200, 150, 261, 31));
        lineEdit_modifier_nom->setStyleSheet(QLatin1String("background-color: transparent ; \n"
"border-radius : 10px ; \n"
"border : 1px solid #7396A0 ;"));
        lineEdit_modifier_prenom = new QLineEdit(groupBox_4);
        lineEdit_modifier_prenom->setObjectName(QStringLiteral("lineEdit_modifier_prenom"));
        lineEdit_modifier_prenom->setGeometry(QRect(200, 200, 261, 31));
        lineEdit_modifier_prenom->setStyleSheet(QLatin1String("background-color: transparent ; \n"
"border-radius : 10px ; \n"
"border : 1px solid #7396A0 ;"));
        lineEdit_modifier_num_tele = new QLineEdit(groupBox_4);
        lineEdit_modifier_num_tele->setObjectName(QStringLiteral("lineEdit_modifier_num_tele"));
        lineEdit_modifier_num_tele->setGeometry(QRect(200, 250, 261, 31));
        lineEdit_modifier_num_tele->setStyleSheet(QLatin1String("background-color: transparent ; \n"
"border-radius : 10px ; \n"
"border : 1px solid #7396A0 ;"));
        dateEdit_modifier_date_naissance = new QDateEdit(groupBox_4);
        dateEdit_modifier_date_naissance->setObjectName(QStringLiteral("dateEdit_modifier_date_naissance"));
        dateEdit_modifier_date_naissance->setGeometry(QRect(710, 210, 301, 31));
        dateEdit_modifier_date_naissance->setStyleSheet(QLatin1String("background-color: transparent ; \n"
"border-radius : 10px ; \n"
"border : 1px solid #7396A0 ;"));
        lineEdit_modifier_adresse = new QLineEdit(groupBox_4);
        lineEdit_modifier_adresse->setObjectName(QStringLiteral("lineEdit_modifier_adresse"));
        lineEdit_modifier_adresse->setGeometry(QRect(200, 300, 261, 31));
        lineEdit_modifier_adresse->setStyleSheet(QLatin1String("background-color: transparent ; \n"
"border-radius : 10px ; \n"
"border : 1px solid #7396A0 ;"));
        lineEdit_modifier_salaire = new QLineEdit(groupBox_4);
        lineEdit_modifier_salaire->setObjectName(QStringLiteral("lineEdit_modifier_salaire"));
        lineEdit_modifier_salaire->setGeometry(QRect(520, 480, 271, 31));
        lineEdit_modifier_salaire->setStyleSheet(QLatin1String("background-color: transparent ; \n"
"border-radius : 10px ; \n"
"border : 1px solid #7396A0 ;"));
        lineEdit_modifier_mail = new QLineEdit(groupBox_4);
        lineEdit_modifier_mail->setObjectName(QStringLiteral("lineEdit_modifier_mail"));
        lineEdit_modifier_mail->setGeometry(QRect(710, 260, 301, 31));
        lineEdit_modifier_mail->setStyleSheet(QLatin1String("background-color: transparent ; \n"
"border-radius : 10px ; \n"
"border : 1px solid #7396A0 ;"));
        pushButton_modifier_personnel = new QPushButton(groupBox_4);
        pushButton_modifier_personnel->setObjectName(QStringLiteral("pushButton_modifier_personnel"));
        pushButton_modifier_personnel->setGeometry(QRect(470, 530, 131, 31));
        pushButton_modifier_personnel->setFont(font6);
        pushButton_modifier_personnel->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_modifier_personnel->setStyleSheet(QLatin1String("#pushButton_modifier_personnel\n"
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
"/*background-color : #26577C;*/\n"
" }\n"
""));
        comboBox_modifier_role = new QComboBox(groupBox_4);
        comboBox_modifier_role->setObjectName(QStringLiteral("comboBox_modifier_role"));
        comboBox_modifier_role->setGeometry(QRect(520, 380, 271, 31));
        comboBox_modifier_role->setStyleSheet(QLatin1String("background-color: white ; \n"
"border-radius : 10px ; \n"
"border : 1px solid #7396A0 ;"));
        comboBox_modifier_contrat = new QComboBox(groupBox_4);
        comboBox_modifier_contrat->setObjectName(QStringLiteral("comboBox_modifier_contrat"));
        comboBox_modifier_contrat->setGeometry(QRect(520, 430, 271, 31));
        comboBox_modifier_contrat->setStyleSheet(QLatin1String("background-color: white ; \n"
"border-radius : 10px ; \n"
"border : 1px solid #7396A0 ;"));
        pushButton_RESET_personnel_1 = new QPushButton(groupBox_4);
        pushButton_RESET_personnel_1->setObjectName(QStringLiteral("pushButton_RESET_personnel_1"));
        pushButton_RESET_personnel_1->setGeometry(QRect(610, 530, 131, 31));
        pushButton_RESET_personnel_1->setFont(font6);
        pushButton_RESET_personnel_1->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_RESET_personnel_1->setStyleSheet(QLatin1String("#pushButton_RESET_personnel_1\n"
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
"/*background-color : #26577C;*/\n"
" }"));
        label_37 = new QLabel(groupBox_4);
        label_37->setObjectName(QStringLiteral("label_37"));
        label_37->setGeometry(QRect(400, 60, 47, 21));
        label_37->setFont(font5);
        label_37->setStyleSheet(QStringLiteral("color: #306069;"));
        label_13 = new QLabel(groupBox_4);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(80, 150, 41, 21));
        label_13->setFont(font5);
        label_13->setStyleSheet(QStringLiteral("color: #306069; ; "));
        label_14 = new QLabel(groupBox_4);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(80, 200, 91, 31));
        label_14->setFont(font5);
        label_14->setStyleSheet(QStringLiteral("color:  #306069; ; "));
        label_17 = new QLabel(groupBox_4);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(80, 250, 91, 21));
        label_17->setFont(font5);
        label_17->setStyleSheet(QStringLiteral("color: #306069;"));
        label_20 = new QLabel(groupBox_4);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(80, 300, 101, 21));
        label_20->setFont(font5);
        label_20->setStyleSheet(QStringLiteral("color: #306069;"));
        label_22 = new QLabel(groupBox_4);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setGeometry(QRect(550, 160, 121, 21));
        label_22->setFont(font5);
        label_22->setStyleSheet(QStringLiteral("color: #306069;"));
        label_16 = new QLabel(groupBox_4);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(550, 260, 61, 31));
        label_16->setFont(font5);
        label_16->setStyleSheet(QStringLiteral("color: #306069;"));
        label_18 = new QLabel(groupBox_4);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(390, 390, 61, 21));
        label_18->setFont(font5);
        label_18->setStyleSheet(QStringLiteral("color: #306069;"));
        label_21 = new QLabel(groupBox_4);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(390, 430, 111, 31));
        label_21->setFont(font5);
        label_21->setStyleSheet(QStringLiteral("color: #306069;"));
        label_19 = new QLabel(groupBox_4);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(390, 490, 91, 21));
        label_19->setFont(font5);
        label_19->setStyleSheet(QStringLiteral("color: #306069;"));
        label_23 = new QLabel(groupBox_4);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setGeometry(QRect(550, 220, 141, 21));
        label_23->setFont(font5);
        label_23->setStyleSheet(QStringLiteral("color: #306069;"));
        comboBox_modifier_perso = new QComboBox(groupBox_4);
        comboBox_modifier_perso->setObjectName(QStringLiteral("comboBox_modifier_perso"));
        comboBox_modifier_perso->setGeometry(QRect(470, 60, 251, 31));
        comboBox_modifier_perso->setStyleSheet(QLatin1String("background-color : white ; \n"
"border-radius : 20px;"));
        lineEdit = new QLineEdit(groupBox_4);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(400, 20, 401, 21));
        QFont font9;
        font9.setFamily(QStringLiteral("Segoe Print"));
        font9.setPointSize(15);
        font9.setBold(true);
        font9.setUnderline(true);
        font9.setWeight(75);
        lineEdit->setFont(font9);
        lineEdit->setStyleSheet(QLatin1String("padding-top : 100px ;\n"
"padding-bottom : 100px ;\n"
"color : #7396A0 ;"));
        label_25 = new QLabel(groupBox_4);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setGeometry(QRect(70, 110, 431, 20));
        label_25->setFont(font8);
        label_25->setStyleSheet(QStringLiteral("color : #516B73;"));
        label_38 = new QLabel(groupBox_4);
        label_38->setObjectName(QStringLiteral("label_38"));
        label_38->setGeometry(QRect(70, 350, 441, 31));
        QFont font10;
        font10.setFamily(QStringLiteral("Microsoft YaHei"));
        font10.setPointSize(15);
        font10.setBold(false);
        font10.setItalic(false);
        font10.setUnderline(true);
        font10.setWeight(50);
        label_38->setFont(font10);
        label_38->setStyleSheet(QLatin1String("padding-top:100px;\n"
"padding-bottom:100px;\n"
"color : #516B73;"));
        comboBox_modifier_etat_civil = new QComboBox(groupBox_4);
        comboBox_modifier_etat_civil->setObjectName(QStringLiteral("comboBox_modifier_etat_civil"));
        comboBox_modifier_etat_civil->setGeometry(QRect(710, 150, 301, 31));
        comboBox_modifier_etat_civil->setStyleSheet(QLatin1String("background-color: white ; \n"
"border-radius : 10px ; \n"
"border : 1px solid #7396A0 ;"));
        lineEdit_modifier_code_park_2 = new QLineEdit(groupBox_4);
        lineEdit_modifier_code_park_2->setObjectName(QStringLiteral("lineEdit_modifier_code_park_2"));
        lineEdit_modifier_code_park_2->setGeometry(QRect(830, 500, 301, 31));
        lineEdit_modifier_code_park_2->setStyleSheet(QLatin1String("background-color: transparent ; \n"
"border-radius : 10px ; \n"
"border : 1px solid #7396A0 ;"));
        label_69 = new QLabel(groupBox_4);
        label_69->setObjectName(QStringLiteral("label_69"));
        label_69->setGeometry(QRect(870, 460, 251, 21));
        label_69->setFont(font8);
        label_69->setStyleSheet(QStringLiteral("color : #516B73;"));
        tabWidget->addTab(tab_4, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        groupBox_6 = new QGroupBox(tab_2);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        groupBox_6->setGeometry(QRect(10, 10, 1171, 501));
        groupBox_6->setCursor(QCursor(Qt::ArrowCursor));
        groupBox_6->setStyleSheet(QLatin1String("/*background-color: white;*/\n"
"/*background-color :  #B5C0D0; */\n"
"border-radius : 50px ;"));
        pushButton_supprimer_perso = new QPushButton(groupBox_6);
        pushButton_supprimer_perso->setObjectName(QStringLiteral("pushButton_supprimer_perso"));
        pushButton_supprimer_perso->setGeometry(QRect(560, 320, 131, 31));
        pushButton_supprimer_perso->setFont(font6);
        pushButton_supprimer_perso->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_supprimer_perso->setStyleSheet(QLatin1String("#pushButton_supprimer_perso{\n"
"background-color : #333770 ;\n"
"border-radius : 10px ;\n"
"color : white ; \n"
"padding : 10px ;}\n"
"\n"
"#pushButton_supprimer_perso:hover{\n"
"color : white ; \n"
"background-color : #26577C;}"));
        pushButton_RESET = new QPushButton(groupBox_6);
        pushButton_RESET->setObjectName(QStringLiteral("pushButton_RESET"));
        pushButton_RESET->setGeometry(QRect(550, 390, 171, 41));
        pushButton_RESET->setFont(font6);
        pushButton_RESET->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_RESET->setStyleSheet(QLatin1String("/*#pushButton_RESET\n"
"{background-color : #333770 ;\n"
"border-radius : 10px ;\n"
"color : white ; \n"
"padding : 10px ; \n"
"border:none ; }\n"
"\n"
"\n"
"#pushButton_RESET:hover\n"
"{\n"
"color : white ; \n"
"background-color : #26577C; }*/\n"
"background-color : none ; "));
        label_39 = new QLabel(groupBox_6);
        label_39->setObjectName(QStringLiteral("label_39"));
        label_39->setGeometry(QRect(360, 230, 47, 21));
        label_39->setFont(font5);
        label_39->setStyleSheet(QStringLiteral("color: #306069;"));
        comboBox_supprimer_perso = new QComboBox(groupBox_6);
        comboBox_supprimer_perso->setObjectName(QStringLiteral("comboBox_supprimer_perso"));
        comboBox_supprimer_perso->setGeometry(QRect(430, 220, 401, 31));
        comboBox_supprimer_perso->setStyleSheet(QStringLiteral("background-color : white ; "));
        lineEdit_2 = new QLineEdit(groupBox_6);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(420, 120, 431, 31));
        QFont font11;
        font11.setFamily(QStringLiteral("Segoe Print"));
        font11.setPointSize(15);
        font11.setBold(false);
        font11.setWeight(50);
        lineEdit_2->setFont(font11);
        lineEdit_2->setStyleSheet(QLatin1String("padding-top : 100px ;\n"
"padding-bottom : 100px ;\n"
"color : #7396A0 ;"));
        tabWidget->addTab(tab_2, QString());
        label = new QLabel(personnelle);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 20, 141, 31));
        QFont font12;
        font12.setFamily(QStringLiteral("Neue Haas Grotesk Text Pro Extr"));
        font12.setPointSize(20);
        font12.setBold(true);
        font12.setItalic(true);
        font12.setWeight(75);
        label->setFont(font12);
        label->setStyleSheet(QLatin1String("border : none ;\n"
"background-color: none;\n"
"color : #333770 ;\n"
"    "));
        groupBox_7 = new QGroupBox(personnelle);
        groupBox_7->setObjectName(QStringLiteral("groupBox_7"));
        groupBox_7->setGeometry(QRect(210, -10, 1261, 91));
        groupBox_7->setStyleSheet(QString::fromUtf8("border-top-right-radius : 40px ; \n"
"background-image: url(:/img/images/background.jpg);\n"
"border-top-left-radius: 20px; /* Coin arrondi en haut \303\240 gauche */\n"
"    border-bottom-left-radius: 20px; /* Coin arrondi en bas \303\240 gauche */\n"
"    border-top-right-radius: 20px; /* Coin arrondi en haut \303\240 droite */\n"
"    border-bottom-right-radius: 20px; /* Coin arrondi en bas \303\240 droite */"));
        label_30 = new QLabel(groupBox_7);
        label_30->setObjectName(QStringLiteral("label_30"));
        label_30->setGeometry(QRect(940, 20, 231, 31));
        QFont font13;
        font13.setFamily(QStringLiteral("Neue Haas Grotesk Text Pro Extr"));
        font13.setPointSize(13);
        font13.setBold(true);
        font13.setItalic(false);
        font13.setWeight(75);
        label_30->setFont(font13);
        label_30->setStyleSheet(QLatin1String("border : none ;\n"
"background-color: none;\n"
"color : #333770 ;\n"
"    background-image : url();\n"
""));
        label_31 = new QLabel(groupBox_7);
        label_31->setObjectName(QStringLiteral("label_31"));
        label_31->setGeometry(QRect(1020, 50, 51, 31));
        QFont font14;
        font14.setFamily(QStringLiteral("Neue Haas Grotesk Text Pro Extr"));
        font14.setPointSize(15);
        font14.setBold(true);
        font14.setItalic(false);
        font14.setWeight(75);
        label_31->setFont(font14);
        label_31->setStyleSheet(QLatin1String("border : none ;\n"
"background-color: none;\n"
"color : #333770 ;\n"
"    background-image : url();\n"
""));
        lineEdit_role = new QLineEdit(groupBox_7);
        lineEdit_role->setObjectName(QStringLiteral("lineEdit_role"));
        lineEdit_role->setGeometry(QRect(50, 50, 181, 21));
        lineEdit_role->setFont(font6);
        lineEdit_role->setStyleSheet(QLatin1String("background-color: transparent ; \n"
"border : none ;\n"
"color : #333770 ;\n"
"background-image : url();"));
        lineEdit_role->setReadOnly(true);
        lineEdit_nomprenom = new QLineEdit(groupBox_7);
        lineEdit_nomprenom->setObjectName(QStringLiteral("lineEdit_nomprenom"));
        lineEdit_nomprenom->setGeometry(QRect(30, 30, 281, 21));
        QFont font15;
        font15.setPointSize(14);
        font15.setBold(true);
        font15.setWeight(75);
        lineEdit_nomprenom->setFont(font15);
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
        QIcon icon12;
        icon12.addFile(QStringLiteral(":/img/images/motpas.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_parametre_compte->setIcon(icon12);
        pushButton_parametre_compte->setIconSize(QSize(50, 50));
        groupBox_8 = new QGroupBox(personnelle);
        groupBox_8->setObjectName(QStringLiteral("groupBox_8"));
        groupBox_8->setGeometry(QRect(180, 750, 1361, 101));
        groupBox_8->setStyleSheet(QString::fromUtf8("border-top-right-radius : 40px ; \n"
"background-image: url(:/img/images/background.jpg);\n"
"/*border-top-left-radius: 20px; /*Coin arrondi en haut \303\240 gauche \n"
"    border-bottom-left-radius: 20px; /* Coin arrondi en bas \303\240 gauche \n"
"    border-top-right-radius: 20px; /* Coin arrondi en haut \303\240 droite \n"
"    border-bottom-right-radius: 20px; /* Coin arrondi en bas \303\240 droite */"));
        label_26 = new QLabel(personnelle);
        label_26->setObjectName(QStringLiteral("label_26"));
        label_26->setGeometry(QRect(60, 140, 81, 16));
        QFont font16;
        font16.setFamily(QStringLiteral("Neue Haas Grotesk Text Pro Medi"));
        font16.setPointSize(10);
        font16.setBold(true);
        font16.setWeight(75);
        label_26->setFont(font16);
        label_26->setStyleSheet(QStringLiteral("background-color: none;"));
        label_32 = new QLabel(personnelle);
        label_32->setObjectName(QStringLiteral("label_32"));
        label_32->setGeometry(QRect(50, 240, 81, 21));
        label_32->setFont(font16);
        label_32->setStyleSheet(QStringLiteral("background-color: none;"));
        label_33 = new QLabel(personnelle);
        label_33->setObjectName(QStringLiteral("label_33"));
        label_33->setGeometry(QRect(60, 350, 61, 16));
        label_33->setFont(font16);
        label_33->setStyleSheet(QStringLiteral("background-color: none;"));
        label_34 = new QLabel(personnelle);
        label_34->setObjectName(QStringLiteral("label_34"));
        label_34->setGeometry(QRect(60, 460, 71, 16));
        label_34->setFont(font16);
        label_34->setStyleSheet(QStringLiteral("background-color: none;"));
        label_35 = new QLabel(personnelle);
        label_35->setObjectName(QStringLiteral("label_35"));
        label_35->setGeometry(QRect(50, 560, 91, 16));
        label_35->setFont(font16);
        label_35->setStyleSheet(QStringLiteral("background-color: none;"));
        label_36 = new QLabel(personnelle);
        label_36->setObjectName(QStringLiteral("label_36"));
        label_36->setGeometry(QRect(70, 670, 61, 16));
        label_36->setFont(font16);
        label_36->setStyleSheet(QStringLiteral("background-color: none;"));
        pushButton_travailler_jointure = new QPushButton(personnelle);
        pushButton_travailler_jointure->setObjectName(QStringLiteral("pushButton_travailler_jointure"));
        pushButton_travailler_jointure->setGeometry(QRect(200, 390, 81, 71));
        QFont font17;
        font17.setUnderline(false);
        pushButton_travailler_jointure->setFont(font17);
        pushButton_travailler_jointure->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_travailler_jointure->setStyleSheet(QLatin1String("\n"
"\n"
"#pushButton_travailler_jointure\n"
"{/*background-color : #DD7373; ; */\n"
"color : black ; \n"
"border-radius : 20px ; \n"
"border-bottom : solid 1px black ; \n"
"}\n"
"\n"
"#pushButton_travailler_jointure:hover\n"
"{\n"
"\n"
"}"));
        QIcon icon13;
        icon13.addFile(QStringLiteral(":/img/images/travailler.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_travailler_jointure->setIcon(icon13);
        pushButton_travailler_jointure->setIconSize(QSize(75, 100));
        pushButton_travailler_jointure->setAutoRepeatDelay(300);
        pushButton_stat = new QPushButton(personnelle);
        pushButton_stat->setObjectName(QStringLiteral("pushButton_stat"));
        pushButton_stat->setGeometry(QRect(200, 660, 81, 71));
        pushButton_stat->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_stat->setStyleSheet(QLatin1String("\n"
"\n"
"#pushButton_stat\n"
"{/*background-color : #DD7373; ; */\n"
"color : black ; \n"
"border-radius : 20px ; \n"
"border-bottom : solid 1px black ; \n"
"}\n"
"\n"
"#pushButton_stat:hover\n"
"{\n"
"\n"
"}"));
        QIcon icon14;
        icon14.addFile(QStringLiteral(":/img/images/stat.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_stat->setIcon(icon14);
        pushButton_stat->setIconSize(QSize(75, 100));
        pushButton_9 = new QPushButton(personnelle);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setGeometry(QRect(200, 510, 71, 91));
        pushButton_9->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_9->setStyleSheet(QLatin1String("\n"
"\n"
"#pushButton_9\n"
"{/*background-color : #DD7373; ; */\n"
"color : black ; \n"
"border-radius : 20px ; \n"
"border-bottom : solid 1px black ; \n"
"}\n"
"\n"
""));
        QIcon icon15;
        icon15.addFile(QStringLiteral(":/img/images/accestudio.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_9->setIcon(icon15);
        pushButton_9->setIconSize(QSize(50, 50));

        retranslateUi(personnelle);
        QObject::connect(pushButton, SIGNAL(clicked()), personnelle, SLOT(close()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(personnelle);
    } // setupUi

    void retranslateUi(QDialog *personnelle)
    {
        personnelle->setWindowTitle(QApplication::translate("personnelle", "Dialog", Q_NULLPTR));
        groupBox->setTitle(QString());
        pushButton_8->setText(QString());
        pushButton_6->setText(QString());
        pushButton_5->setText(QString());
        pushButton_4->setText(QString());
        pushButton_3->setText(QString());
        pushButton_2->setText(QString());
        pushButton->setText(QApplication::translate("personnelle", " Quitter", Q_NULLPTR));
        groupBox_2->setTitle(QString());
        lineEdit_recherche->setPlaceholderText(QApplication::translate("personnelle", "Entrez un terme de recherche...", Q_NULLPTR));
        comboBox_trie->setItemText(0, QString());
        comboBox_trie->setItemText(1, QApplication::translate("personnelle", "trie dans l'ordre decroissant par Date", Q_NULLPTR));
        comboBox_trie->setItemText(2, QApplication::translate("personnelle", "trie dans l'ordre decroissant par cin", Q_NULLPTR));
        comboBox_trie->setItemText(3, QApplication::translate("personnelle", "trie dans l'ordre decroissant par salaire", Q_NULLPTR));
        comboBox_trie->setItemText(4, QApplication::translate("personnelle", "trie dans l'ordre croissant par Date", Q_NULLPTR));
        comboBox_trie->setItemText(5, QApplication::translate("personnelle", "trie dans l'ordre croissant par cin", Q_NULLPTR));
        comboBox_trie->setItemText(6, QApplication::translate("personnelle", "trie dans l'ordre croissant par salaire", Q_NULLPTR));

        pushButton_7->setText(QApplication::translate("personnelle", "Imprimer en PDF", Q_NULLPTR));
        label_27->setText(QApplication::translate("personnelle", "S\303\251lectionnez un r\303\264le...", Q_NULLPTR));
        pushButton_recherche->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("personnelle", "Afficher", Q_NULLPTR));
        groupBox_3->setTitle(QString());
        label_2->setText(QApplication::translate("personnelle", "Nom", Q_NULLPTR));
        label_3->setText(QApplication::translate("personnelle", "Prenom", Q_NULLPTR));
        label_4->setText(QApplication::translate("personnelle", "Type contrat", Q_NULLPTR));
        label_5->setText(QApplication::translate("personnelle", "Role", Q_NULLPTR));
        label_6->setText(QApplication::translate("personnelle", "Telephone", Q_NULLPTR));
        label_7->setText(QApplication::translate("personnelle", "Date naissance", Q_NULLPTR));
        label_8->setText(QApplication::translate("personnelle", "Salaire", Q_NULLPTR));
        label_9->setText(QApplication::translate("personnelle", "Adresse", Q_NULLPTR));
        label_10->setText(QApplication::translate("personnelle", "Emaill", Q_NULLPTR));
        label_11->setText(QApplication::translate("personnelle", "Etat civile", Q_NULLPTR));
        pushButton_ajouter_personnel->setText(QApplication::translate("personnelle", "Ajouter", Q_NULLPTR));
        comboBox_ajouter_contrat->clear();
        comboBox_ajouter_contrat->insertItems(0, QStringList()
         << QApplication::translate("personnelle", "Contrat a duree indeterminee (CDI)", Q_NULLPTR)
         << QApplication::translate("personnelle", "Contrat a duree determinee (CDD)", Q_NULLPTR)
         << QApplication::translate("personnelle", "Contrat de travail temporaire", Q_NULLPTR)
        );
        comboBox_ajouter_role->clear();
        comboBox_ajouter_role->insertItems(0, QStringList()
         << QApplication::translate("personnelle", "Admin principal", Q_NULLPTR)
         << QApplication::translate("personnelle", "Responsable clientele", Q_NULLPTR)
         << QApplication::translate("personnelle", "Responsable interne", Q_NULLPTR)
        );
        pushButton_RESET_personnel_->setText(QApplication::translate("personnelle", "Effacer", Q_NULLPTR));
        lineEdit_3->setText(QApplication::translate("personnelle", "Ajouter des donn\303\251es d'employ\303\251 :", Q_NULLPTR));
        label_15->setText(QApplication::translate("personnelle", "Informations Personnelles : \n"
"\n"
"", Q_NULLPTR));
        label_24->setText(QApplication::translate("personnelle", "Informations Professionnelles :\n"
"\n"
"", Q_NULLPTR));
        label_40->setText(QApplication::translate("personnelle", "CIN", Q_NULLPTR));
        comboBox_ajouter_etat_civil->clear();
        comboBox_ajouter_etat_civil->insertItems(0, QStringList()
         << QApplication::translate("personnelle", "Celibataire", Q_NULLPTR)
         << QApplication::translate("personnelle", "Divorce", Q_NULLPTR)
         << QApplication::translate("personnelle", "Marie", Q_NULLPTR)
         << QApplication::translate("personnelle", "Veuf", Q_NULLPTR)
        );
        label_28->setText(QApplication::translate("personnelle", "Donne le Code d ACCES :\n"
"\n"
"", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("personnelle", "Ajouter", Q_NULLPTR));
        groupBox_4->setTitle(QString());
        pushButton_modifier_personnel->setText(QApplication::translate("personnelle", "Modifier", Q_NULLPTR));
        comboBox_modifier_role->clear();
        comboBox_modifier_role->insertItems(0, QStringList()
         << QApplication::translate("personnelle", "Admin principal", Q_NULLPTR)
         << QApplication::translate("personnelle", "Responsable clientele", Q_NULLPTR)
         << QApplication::translate("personnelle", "Responsable interne", Q_NULLPTR)
        );
        comboBox_modifier_contrat->clear();
        comboBox_modifier_contrat->insertItems(0, QStringList()
         << QApplication::translate("personnelle", "Contrat a duree indeterminee (CDI)", Q_NULLPTR)
         << QApplication::translate("personnelle", "Contrat a duree determinee (CDD)", Q_NULLPTR)
         << QApplication::translate("personnelle", "Contrat de travail temporaire", Q_NULLPTR)
        );
        pushButton_RESET_personnel_1->setText(QApplication::translate("personnelle", "Effacer", Q_NULLPTR));
        label_37->setText(QApplication::translate("personnelle", "CIN", Q_NULLPTR));
        label_13->setText(QApplication::translate("personnelle", "Nom", Q_NULLPTR));
        label_14->setText(QApplication::translate("personnelle", "Prenom", Q_NULLPTR));
        label_17->setText(QApplication::translate("personnelle", "Telephone", Q_NULLPTR));
        label_20->setText(QApplication::translate("personnelle", "Adresse", Q_NULLPTR));
        label_22->setText(QApplication::translate("personnelle", "Etat civile", Q_NULLPTR));
        label_16->setText(QApplication::translate("personnelle", "Emaill", Q_NULLPTR));
        label_18->setText(QApplication::translate("personnelle", "Role", Q_NULLPTR));
        label_21->setText(QApplication::translate("personnelle", "Type contrat", Q_NULLPTR));
        label_19->setText(QApplication::translate("personnelle", "Salaire", Q_NULLPTR));
        label_23->setText(QApplication::translate("personnelle", "Date naissance", Q_NULLPTR));
        comboBox_modifier_perso->clear();
        comboBox_modifier_perso->insertItems(0, QStringList()
         << QString()
         << QString()
        );
        lineEdit->setText(QApplication::translate("personnelle", "Choisir le CIN du personnel a modifier :", Q_NULLPTR));
        label_25->setText(QApplication::translate("personnelle", "Modifier les informations Personnelles : \n"
"\n"
"", Q_NULLPTR));
        label_38->setText(QApplication::translate("personnelle", "Modifier les informations professionelles : ", Q_NULLPTR));
        comboBox_modifier_etat_civil->clear();
        comboBox_modifier_etat_civil->insertItems(0, QStringList()
         << QApplication::translate("personnelle", "Celibataire", Q_NULLPTR)
         << QApplication::translate("personnelle", "Divorce", Q_NULLPTR)
         << QApplication::translate("personnelle", "Marie", Q_NULLPTR)
         << QApplication::translate("personnelle", "Veuf", Q_NULLPTR)
        );
        lineEdit_modifier_code_park_2->setText(QString());
        label_69->setText(QApplication::translate("personnelle", "Donne le Code d ACCES :\n"
"\n"
"", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("personnelle", "Modifier", Q_NULLPTR));
        groupBox_6->setTitle(QString());
        pushButton_supprimer_perso->setText(QApplication::translate("personnelle", "Supprimer", Q_NULLPTR));
        pushButton_RESET->setText(QString());
        label_39->setText(QApplication::translate("personnelle", "CIN", Q_NULLPTR));
        lineEdit_2->setText(QApplication::translate("personnelle", "Choisir le CIN du personnel a supprimer :", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("personnelle", "Supprimer", Q_NULLPTR));
        label->setText(QApplication::translate("personnelle", "Tv'Ease", Q_NULLPTR));
        groupBox_7->setTitle(QString());
        label_30->setText(QApplication::translate("personnelle", "Vendredi 22  Fevrier 2024", Q_NULLPTR));
        label_31->setText(QApplication::translate("personnelle", "13\302\260", Q_NULLPTR));
        pushButton_parametre_compte->setText(QString());
        groupBox_8->setTitle(QString());
        label_26->setText(QApplication::translate("personnelle", "Personnel", Q_NULLPTR));
        label_32->setText(QApplication::translate("personnelle", "Programme", Q_NULLPTR));
        label_33->setText(QApplication::translate("personnelle", "Publicite", Q_NULLPTR));
        label_34->setText(QApplication::translate("personnelle", "Auditeurs", Q_NULLPTR));
        label_35->setText(QApplication::translate("personnelle", "Abonnement", Q_NULLPTR));
        label_36->setText(QApplication::translate("personnelle", "Studios", Q_NULLPTR));
        pushButton_travailler_jointure->setText(QString());
        pushButton_stat->setText(QString());
        pushButton_9->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class personnelle: public Ui_personnelle {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PERSONNELLE_H
