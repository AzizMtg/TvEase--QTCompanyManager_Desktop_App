/********************************************************************************
** Form generated from reading UI file 'travailler.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRAVAILLER_H
#define UI_TRAVAILLER_H

#include <QtCore/QVariant>
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
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_travailler
{
public:
    QTableView *tableView_jointure;
    QLabel *label_3;
    QComboBox *comboBox_trie_jointure;
    QLabel *label_5;
    QLineEdit *lineEdit_recher_jointure;
    QPushButton *pushButton_recher_jointure;
    QGroupBox *groupBox;
    QComboBox *comboBox_cin_jointure;
    QComboBox *comboBox_studio_jointure;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton_afficher_jointure;
    QPushButton *pushButton_supp_jointure;
    QLabel *label_11;
    QLineEdit *lineEdit_code_acces;
    QLabel *label_6;
    QPushButton *pushButton__telechargement_jointure;
    QGroupBox *groupBox_2;
    QComboBox *comboBox_modifier_cin_jointure;
    QComboBox *comboBox_modifier_studio_jointure;
    QLabel *label_4;
    QLabel *label_7;
    QPushButton *pushButton_modifier_jointure;
    QComboBox *comboBox_modifier_idskol_jointure;
    QLabel *label_9;
    QLabel *label_10;
    QLineEdit *lineEdit_code_acces_modif;
    QLabel *label_8;

    void setupUi(QDialog *travailler)
    {
        if (travailler->objectName().isEmpty())
            travailler->setObjectName(QStringLiteral("travailler"));
        travailler->resize(993, 733);
        travailler->setStyleSheet(QLatin1String("background-color : #BBD2E1	 ;/* #B5C0D0; */\n"
""));
        tableView_jointure = new QTableView(travailler);
        tableView_jointure->setObjectName(QStringLiteral("tableView_jointure"));
        tableView_jointure->setGeometry(QRect(70, 360, 871, 301));
        tableView_jointure->setStyleSheet(QStringLiteral("  background-color:  white; "));
        label_3 = new QLabel(travailler);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(240, 20, 521, 31));
        QFont font;
        font.setFamily(QStringLiteral("Segoe Print"));
        font.setPointSize(20);
        font.setBold(true);
        font.setUnderline(true);
        font.setWeight(75);
        font.setStrikeOut(false);
        label_3->setFont(font);
        label_3->setStyleSheet(QLatin1String("padding-top : 100px ;\n"
"padding-bottom : 100px ;\n"
"color : #7396A0 ;"));
        comboBox_trie_jointure = new QComboBox(travailler);
        QIcon icon;
        icon.addFile(QStringLiteral(":/img/images/table.png"), QSize(), QIcon::Normal, QIcon::Off);
        comboBox_trie_jointure->addItem(icon, QString());
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/img/images/decroissant.png"), QSize(), QIcon::Normal, QIcon::Off);
        comboBox_trie_jointure->addItem(icon1, QString());
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/img/images/croissant.png"), QSize(), QIcon::Normal, QIcon::Off);
        comboBox_trie_jointure->addItem(icon2, QString());
        comboBox_trie_jointure->addItem(icon2, QString());
        comboBox_trie_jointure->setObjectName(QStringLiteral("comboBox_trie_jointure"));
        comboBox_trie_jointure->setGeometry(QRect(770, 330, 171, 22));
        comboBox_trie_jointure->setStyleSheet(QStringLiteral("background-color : white ; "));
        label_5 = new QLabel(travailler);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(690, 330, 61, 20));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        label_5->setFont(font1);
        lineEdit_recher_jointure = new QLineEdit(travailler);
        lineEdit_recher_jointure->setObjectName(QStringLiteral("lineEdit_recher_jointure"));
        lineEdit_recher_jointure->setGeometry(QRect(80, 330, 231, 21));
        lineEdit_recher_jointure->setStyleSheet(QLatin1String("background-color : white ; \n"
""));
        pushButton_recher_jointure = new QPushButton(travailler);
        pushButton_recher_jointure->setObjectName(QStringLiteral("pushButton_recher_jointure"));
        pushButton_recher_jointure->setGeometry(QRect(330, 330, 31, 21));
        pushButton_recher_jointure->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_recher_jointure->setStyleSheet(QStringLiteral("background-color: white ;"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/img/images/search.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_recher_jointure->setIcon(icon3);
        pushButton_recher_jointure->setIconSize(QSize(60, 15));
        groupBox = new QGroupBox(travailler);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(20, 80, 491, 201));
        comboBox_cin_jointure = new QComboBox(groupBox);
        comboBox_cin_jointure->setObjectName(QStringLiteral("comboBox_cin_jointure"));
        comboBox_cin_jointure->setGeometry(QRect(230, 20, 201, 21));
        comboBox_cin_jointure->setStyleSheet(QStringLiteral("  background-color:  white; "));
        comboBox_studio_jointure = new QComboBox(groupBox);
        comboBox_studio_jointure->setObjectName(QStringLiteral("comboBox_studio_jointure"));
        comboBox_studio_jointure->setGeometry(QRect(230, 70, 201, 21));
        comboBox_studio_jointure->setStyleSheet(QStringLiteral("  background-color:  white; "));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 10, 171, 41));
        QFont font2;
        font2.setFamily(QStringLiteral("Microsoft YaHei"));
        font2.setPointSize(15);
        font2.setBold(true);
        font2.setWeight(75);
        label->setFont(font2);
        label->setStyleSheet(QStringLiteral("color : #516B73;"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 70, 171, 16));
        label_2->setFont(font2);
        label_2->setStyleSheet(QStringLiteral("color : #516B73;"));
        pushButton_afficher_jointure = new QPushButton(groupBox);
        pushButton_afficher_jointure->setObjectName(QStringLiteral("pushButton_afficher_jointure"));
        pushButton_afficher_jointure->setGeometry(QRect(340, 160, 75, 23));
        pushButton_afficher_jointure->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_afficher_jointure->setStyleSheet(QLatin1String("#pushButton_afficher_jointure\n"
"{background-color : #333770 ;\n"
"border-radius : 10px ;\n"
"color : white ; \n"
"padding:100px ;\n"
"border:none ; \n"
"}\n"
"\n"
"#pushButton_afficher_jointure:hover\n"
"{\n"
"\n"
"}"));
        pushButton_supp_jointure = new QPushButton(groupBox);
        pushButton_supp_jointure->setObjectName(QStringLiteral("pushButton_supp_jointure"));
        pushButton_supp_jointure->setGeometry(QRect(250, 160, 75, 23));
        pushButton_supp_jointure->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_supp_jointure->setStyleSheet(QLatin1String("\n"
"#pushButton_supp_jointure\n"
"{background-color : #333770 ;\n"
"border-radius : 10px ;\n"
"color : white ; \n"
"padding:100px ;\n"
"border:none ; \n"
"}\n"
"\n"
"#pushButton_supp_jointure:hover\n"
"{\n"
"\n"
"}"));
        label_11 = new QLabel(groupBox);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(30, 110, 171, 16));
        label_11->setFont(font2);
        label_11->setStyleSheet(QStringLiteral("color : #516B73;"));
        lineEdit_code_acces = new QLineEdit(groupBox);
        lineEdit_code_acces->setObjectName(QStringLiteral("lineEdit_code_acces"));
        lineEdit_code_acces->setGeometry(QRect(230, 110, 201, 21));
        lineEdit_code_acces->setStyleSheet(QStringLiteral("background-color: white ; "));
        label_6 = new QLabel(travailler);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(350, 280, 381, 41));
        QFont font3;
        font3.setFamily(QStringLiteral("Papyrus"));
        font3.setPointSize(15);
        font3.setBold(true);
        font3.setUnderline(true);
        font3.setWeight(75);
        label_6->setFont(font3);
        label_6->setStyleSheet(QStringLiteral("color :#333770 ;"));
        pushButton__telechargement_jointure = new QPushButton(travailler);
        pushButton__telechargement_jointure->setObjectName(QStringLiteral("pushButton__telechargement_jointure"));
        pushButton__telechargement_jointure->setGeometry(QRect(380, 680, 231, 31));
        QFont font4;
        font4.setPointSize(10);
        font4.setBold(true);
        font4.setUnderline(true);
        font4.setWeight(75);
        pushButton__telechargement_jointure->setFont(font4);
        pushButton__telechargement_jointure->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton__telechargement_jointure->setStyleSheet(QStringLiteral("background-color: transparent ; "));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/img/images/pd.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton__telechargement_jointure->setIcon(icon4);
        pushButton__telechargement_jointure->setIconSize(QSize(50, 20));
        groupBox_2 = new QGroupBox(travailler);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(520, 80, 451, 201));
        comboBox_modifier_cin_jointure = new QComboBox(groupBox_2);
        comboBox_modifier_cin_jointure->setObjectName(QStringLiteral("comboBox_modifier_cin_jointure"));
        comboBox_modifier_cin_jointure->setGeometry(QRect(170, 50, 241, 22));
        comboBox_modifier_cin_jointure->setStyleSheet(QStringLiteral("background-color : white ; "));
        comboBox_modifier_studio_jointure = new QComboBox(groupBox_2);
        comboBox_modifier_studio_jointure->setObjectName(QStringLiteral("comboBox_modifier_studio_jointure"));
        comboBox_modifier_studio_jointure->setGeometry(QRect(10, 140, 201, 22));
        comboBox_modifier_studio_jointure->setStyleSheet(QStringLiteral("background-color : white ; "));
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(50, 0, 341, 31));
        QFont font5;
        font5.setFamily(QStringLiteral("Papyrus"));
        font5.setPointSize(16);
        font5.setBold(true);
        font5.setUnderline(true);
        font5.setWeight(75);
        label_4->setFont(font5);
        label_4->setStyleSheet(QLatin1String("padding :1px;\n"
"color : #333770 ;"));
        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(20, 110, 401, 16));
        QFont font6;
        font6.setPointSize(13);
        font6.setBold(true);
        font6.setWeight(75);
        label_7->setFont(font6);
        label_7->setStyleSheet(QStringLiteral("color : black;"));
        pushButton_modifier_jointure = new QPushButton(groupBox_2);
        pushButton_modifier_jointure->setObjectName(QStringLiteral("pushButton_modifier_jointure"));
        pushButton_modifier_jointure->setGeometry(QRect(260, 150, 75, 23));
        pushButton_modifier_jointure->setStyleSheet(QLatin1String("#pushButton_modifier_jointure\n"
"{background-color : #333770 ;\n"
"border-radius : 10px ;\n"
"color : white ; \n"
"padding:100px ;\n"
"border:none ; \n"
"}\n"
"\n"
"#pushButton_modifier_jointure:hover\n"
"{\n"
"\n"
"}"));
        comboBox_modifier_idskol_jointure = new QComboBox(groupBox_2);
        comboBox_modifier_idskol_jointure->setObjectName(QStringLiteral("comboBox_modifier_idskol_jointure"));
        comboBox_modifier_idskol_jointure->setGeometry(QRect(170, 80, 241, 22));
        comboBox_modifier_idskol_jointure->setStyleSheet(QStringLiteral("background-color : white ; "));
        label_9 = new QLabel(groupBox_2);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(40, 80, 101, 16));
        label_9->setFont(font2);
        label_9->setStyleSheet(QStringLiteral("color : #516B73;"));
        label_10 = new QLabel(groupBox_2);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(40, 40, 101, 31));
        label_10->setFont(font2);
        label_10->setStyleSheet(QStringLiteral("color : #516B73;"));
        lineEdit_code_acces_modif = new QLineEdit(groupBox_2);
        lineEdit_code_acces_modif->setObjectName(QStringLiteral("lineEdit_code_acces_modif"));
        lineEdit_code_acces_modif->setGeometry(QRect(10, 170, 201, 21));
        lineEdit_code_acces_modif->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        label_8 = new QLabel(travailler);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(60, 20, 101, 71));
        label_8->setStyleSheet(QStringLiteral("image: url(:/img/images/personnel.png);"));

        retranslateUi(travailler);

        QMetaObject::connectSlotsByName(travailler);
    } // setupUi

    void retranslateUi(QDialog *travailler)
    {
        travailler->setWindowTitle(QApplication::translate("travailler", "Dialog", Q_NULLPTR));
        label_3->setText(QApplication::translate("travailler", "Fiche affectation personnels - studios", Q_NULLPTR));
        comboBox_trie_jointure->setItemText(0, QString());
        comboBox_trie_jointure->setItemText(1, QApplication::translate("travailler", "trie dans l'ordre decroissant par cin", Q_NULLPTR));
        comboBox_trie_jointure->setItemText(2, QApplication::translate("travailler", "trie dans l'ordre croissant par cin", Q_NULLPTR));
        comboBox_trie_jointure->setItemText(3, QApplication::translate("travailler", "trie dans l'ordre croissant par localisation", Q_NULLPTR));

        label_5->setText(QApplication::translate("travailler", "Trier ...", Q_NULLPTR));
        pushButton_recher_jointure->setText(QString());
        groupBox->setTitle(QString());
        label->setText(QApplication::translate("travailler", "CIN personnel   :", Q_NULLPTR));
        label_2->setText(QApplication::translate("travailler", "Numero studio :", Q_NULLPTR));
        pushButton_afficher_jointure->setText(QApplication::translate("travailler", "Affecter", Q_NULLPTR));
        pushButton_supp_jointure->setText(QApplication::translate("travailler", "Supprimer", Q_NULLPTR));
        label_11->setText(QApplication::translate("travailler", "Code Acces  : ", Q_NULLPTR));
        label_6->setText(QApplication::translate("travailler", "Afiichage du personnels  -  studios ", Q_NULLPTR));
        pushButton__telechargement_jointure->setText(QApplication::translate("travailler", "Telechargement", Q_NULLPTR));
        groupBox_2->setTitle(QString());
        label_4->setText(QApplication::translate("travailler", "     Donner information  a modifier :", Q_NULLPTR));
        label_7->setText(QApplication::translate("travailler", "Nouveau Numero du studio et Code d accees :", Q_NULLPTR));
        pushButton_modifier_jointure->setText(QApplication::translate("travailler", "Modifier", Q_NULLPTR));
        label_9->setText(QApplication::translate("travailler", "Studio    :", Q_NULLPTR));
        label_10->setText(QApplication::translate("travailler", "Personel :", Q_NULLPTR));
        label_8->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class travailler: public Ui_travailler {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRAVAILLER_H
