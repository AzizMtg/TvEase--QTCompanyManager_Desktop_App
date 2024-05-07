/********************************************************************************
** Form generated from reading UI file 'ajtevent.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AJTEVENT_H
#define UI_AJTEVENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTimeEdit>

QT_BEGIN_NAMESPACE

class Ui_ajtevent
{
public:
    QGroupBox *groupBox;
    QLineEdit *nom;
    QComboBox *typeajt;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLineEdit *lieu;
    QTimeEdit *tempdeb;
    QTimeEdit *tempfin;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QComboBox *etat;
    QLabel *label_6;
    QTableView *tableView;
    QLineEdit *nomrech;
    QCheckBox *present;
    QCheckBox *nonpres;
    QPushButton *ajouter;
    QPushButton *effectuer;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QPushButton *pushButton;
    QLabel *label_12;
    QLabel *label_13;

    void setupUi(QDialog *ajtevent)
    {
        if (ajtevent->objectName().isEmpty())
            ajtevent->setObjectName(QStringLiteral("ajtevent"));
        ajtevent->resize(1170, 642);
        groupBox = new QGroupBox(ajtevent);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(-1, -1, 1171, 651));
        groupBox->setStyleSheet(QStringLiteral("background-image: url(:/img/images/18589ddef0ecfabc1767286cf98a15dc.jpg);"));
        nom = new QLineEdit(groupBox);
        nom->setObjectName(QStringLiteral("nom"));
        nom->setGeometry(QRect(140, 190, 161, 31));
        nom->setStyleSheet(QLatin1String("border : none ;\n"
"background-color: none;\n"
"color : #333770 ;\n"
"background-image : url();\n"
"    "));
        typeajt = new QComboBox(groupBox);
        typeajt->setObjectName(QStringLiteral("typeajt"));
        typeajt->setGeometry(QRect(130, 130, 131, 31));
        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(40, 130, 61, 31));
        QFont font;
        font.setFamily(QStringLiteral("Neue Haas Grotesk Text Pro Extr"));
        font.setPointSize(14);
        label_7->setFont(font);
        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(40, 190, 51, 31));
        label_8->setFont(font);
        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(40, 260, 51, 31));
        label_9->setFont(font);
        label_10 = new QLabel(groupBox);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(30, 340, 121, 31));
        label_10->setFont(font);
        label_11 = new QLabel(groupBox);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(30, 410, 111, 31));
        label_11->setFont(font);
        lieu = new QLineEdit(groupBox);
        lieu->setObjectName(QStringLiteral("lieu"));
        lieu->setGeometry(QRect(140, 250, 161, 31));
        lieu->setStyleSheet(QLatin1String("border : none ;\n"
"background-color: none;\n"
"color : #333770 ;\n"
"background-image : url();\n"
"    "));
        tempdeb = new QTimeEdit(groupBox);
        tempdeb->setObjectName(QStringLiteral("tempdeb"));
        tempdeb->setGeometry(QRect(170, 340, 111, 31));
        tempfin = new QTimeEdit(groupBox);
        tempfin->setObjectName(QStringLiteral("tempfin"));
        tempfin->setGeometry(QRect(170, 410, 111, 31));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 70, 261, 31));
        QFont font1;
        font1.setFamily(QStringLiteral("Neue Haas Grotesk Text Pro Extr"));
        font1.setPointSize(17);
        font1.setBold(true);
        font1.setWeight(75);
        label_2->setFont(font1);
        label_2->setStyleSheet(QLatin1String("border : none ;\n"
"background-color: none;\n"
"color : #333770 ;\n"
"background-image : url();\n"
"    "));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(400, 70, 261, 31));
        label_3->setFont(font1);
        label_3->setStyleSheet(QLatin1String("border : none ;\n"
"background-color: none;\n"
"color : #333770 ;\n"
"background-image : url();\n"
"    "));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(400, 160, 51, 31));
        label_4->setFont(font);
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(400, 220, 51, 31));
        label_5->setFont(font);
        etat = new QComboBox(groupBox);
        etat->setObjectName(QStringLiteral("etat"));
        etat->setGeometry(QRect(480, 220, 131, 31));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(820, 50, 261, 31));
        label_6->setFont(font1);
        label_6->setStyleSheet(QLatin1String("border : none ;\n"
"background-color: none;\n"
"color : #333770 ;\n"
"background-image : url();\n"
"    "));
        tableView = new QTableView(groupBox);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(740, 90, 391, 471));
        nomrech = new QLineEdit(groupBox);
        nomrech->setObjectName(QStringLiteral("nomrech"));
        nomrech->setGeometry(QRect(480, 160, 131, 31));
        nomrech->setStyleSheet(QLatin1String("border : none ;\n"
"background-color: none;\n"
"color : #333770 ;\n"
"background-image : url();\n"
"    "));
        present = new QCheckBox(groupBox);
        present->setObjectName(QStringLiteral("present"));
        present->setGeometry(QRect(40, 470, 311, 41));
        QFont font2;
        font2.setFamily(QStringLiteral("Neue Haas Grotesk Text Pro Thin"));
        font2.setPointSize(14);
        font2.setBold(true);
        font2.setWeight(75);
        present->setFont(font2);
        present->setStyleSheet(QLatin1String("border : none ;\n"
"background-color: none;\n"
"color : #333770 ;\n"
"background-image : url();\n"
"    "));
        nonpres = new QCheckBox(groupBox);
        nonpres->setObjectName(QStringLiteral("nonpres"));
        nonpres->setGeometry(QRect(40, 520, 301, 41));
        QFont font3;
        font3.setFamily(QStringLiteral("Neue Haas Grotesk Text Pro Extr"));
        font3.setPointSize(14);
        font3.setBold(true);
        font3.setWeight(75);
        nonpres->setFont(font3);
        nonpres->setStyleSheet(QLatin1String("border : none ;\n"
"background-color: none;\n"
"color : #333770 ;\n"
"background-image : url();\n"
"    "));
        ajouter = new QPushButton(groupBox);
        ajouter->setObjectName(QStringLiteral("ajouter"));
        ajouter->setGeometry(QRect(80, 580, 181, 31));
        effectuer = new QPushButton(groupBox);
        effectuer->setObjectName(QStringLiteral("effectuer"));
        effectuer->setGeometry(QRect(482, 290, 131, 28));
        label_14 = new QLabel(groupBox);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(120, 20, 61, 31));
        label_14->setStyleSheet(QLatin1String("border : none ;\n"
"background-color: none;\n"
"color : #333770 ;\n"
"image: url(:/img/images/add-circle-outline-logo-icon-png-svg.png);\n"
"background-image : url();\n"
"    \n"
""));
        label_15 = new QLabel(groupBox);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(500, 30, 61, 31));
        label_15->setStyleSheet(QLatin1String("border : none ;\n"
"background-color: none;\n"
"color : #333770 ;\n"
"image: url(:/img/images/SVG-edit_logo.svg.png);\n"
"background-image : url();\n"
"    \n"
""));
        label_16 = new QLabel(groupBox);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(910, 10, 61, 31));
        label_16->setStyleSheet(QLatin1String("border : none ;\n"
"background-color: none;\n"
"image: url(:/img/images/audi.png);\n"
"color : #333770 ;\n"
"background-image : url();\n"
"    \n"
""));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(940, 590, 221, 41));
        label_12 = new QLabel(groupBox);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(420, 380, 291, 31));
        QFont font4;
        font4.setFamily(QStringLiteral("Neue Haas Grotesk Text Pro Extr"));
        font4.setPointSize(10);
        font4.setBold(true);
        font4.setWeight(75);
        label_12->setFont(font4);
        label_12->setStyleSheet(QLatin1String("border : none ;\n"
"background-color: none;\n"
"color : #333770 ;\n"
"background-image : url();\n"
"    "));
        label_13 = new QLabel(groupBox);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(420, 400, 291, 31));
        label_13->setFont(font4);
        label_13->setStyleSheet(QLatin1String("border : none ;\n"
"background-color: none;\n"
"color : #333770 ;\n"
"background-image : url();\n"
"    "));

        retranslateUi(ajtevent);

        QMetaObject::connectSlotsByName(ajtevent);
    } // setupUi

    void retranslateUi(QDialog *ajtevent)
    {
        ajtevent->setWindowTitle(QApplication::translate("ajtevent", "Dialog", Q_NULLPTR));
        groupBox->setTitle(QString());
        label_7->setText(QApplication::translate("ajtevent", "Type", Q_NULLPTR));
        label_8->setText(QApplication::translate("ajtevent", "Nom", Q_NULLPTR));
        label_9->setText(QApplication::translate("ajtevent", "Lieu", Q_NULLPTR));
        label_10->setText(QApplication::translate("ajtevent", "Temps Deb", Q_NULLPTR));
        label_11->setText(QApplication::translate("ajtevent", "Temps Fin", Q_NULLPTR));
        label_2->setText(QApplication::translate("ajtevent", "Ajouter Evenement", Q_NULLPTR));
        label_3->setText(QApplication::translate("ajtevent", "Modifier Evenement", Q_NULLPTR));
        label_4->setText(QApplication::translate("ajtevent", "Nom", Q_NULLPTR));
        label_5->setText(QApplication::translate("ajtevent", "Etat", Q_NULLPTR));
        label_6->setText(QApplication::translate("ajtevent", "Liste Evenements", Q_NULLPTR));
        present->setText(QApplication::translate("ajtevent", "Photographe Present", Q_NULLPTR));
        nonpres->setText(QApplication::translate("ajtevent", "Pas de Photographe", Q_NULLPTR));
        ajouter->setText(QApplication::translate("ajtevent", "Ajouter", Q_NULLPTR));
        effectuer->setText(QApplication::translate("ajtevent", "Effectuer", Q_NULLPTR));
        label_14->setText(QString());
        label_15->setText(QString());
        label_16->setText(QString());
        pushButton->setText(QApplication::translate("ajtevent", "Revenir en Arriere", Q_NULLPTR));
        label_12->setText(QApplication::translate("ajtevent", "Veuiller clicker sur l'evenement", Q_NULLPTR));
        label_13->setText(QApplication::translate("ajtevent", "dont l'etat vous voulez changer", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ajtevent: public Ui_ajtevent {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AJTEVENT_H
