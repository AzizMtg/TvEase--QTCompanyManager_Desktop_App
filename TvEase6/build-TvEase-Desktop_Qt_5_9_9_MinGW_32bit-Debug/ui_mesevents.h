/********************************************************************************
** Form generated from reading UI file 'mesevents.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MESEVENTS_H
#define UI_MESEVENTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_mesevents
{
public:
    QGroupBox *groupBox;
    QTableView *mesevent;
    QTableView *participant;
    QPushButton *retourner;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QDialog *mesevents)
    {
        if (mesevents->objectName().isEmpty())
            mesevents->setObjectName(QStringLiteral("mesevents"));
        mesevents->resize(569, 766);
        groupBox = new QGroupBox(mesevents);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(0, 0, 571, 781));
        groupBox->setStyleSheet(QStringLiteral("background-image: url(:/img/images/GettyImages-530686103-56a2b3775f9b58b7d0cd87d9.jpg);"));
        mesevent = new QTableView(groupBox);
        mesevent->setObjectName(QStringLiteral("mesevent"));
        mesevent->setGeometry(QRect(80, 50, 401, 341));
        mesevent->setStyleSheet(QLatin1String("border : none ;\n"
"background-color: rgb(220, 220, 220);\n"
"color : #333770 ;\n"
"background-image : url();\n"
"    \n"
""));
        participant = new QTableView(groupBox);
        participant->setObjectName(QStringLiteral("participant"));
        participant->setGeometry(QRect(90, 430, 391, 271));
        participant->setStyleSheet(QLatin1String("border : none ;\n"
"background-color: rgb(220, 220, 220);\n"
"color : #333770 ;\n"
"background-image : url();\n"
"    \n"
""));
        retourner = new QPushButton(groupBox);
        retourner->setObjectName(QStringLiteral("retourner"));
        retourner->setGeometry(QRect(420, 710, 121, 41));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(190, 10, 271, 41));
        QFont font;
        font.setFamily(QStringLiteral("Neue Haas Grotesk Text Pro Ligh"));
        font.setPointSize(13);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setStyleSheet(QLatin1String("border : none ;\n"
"background-color: none;\n"
"color : #333770 ;\n"
"background-image : url();\n"
"    \n"
""));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(180, 410, 221, 21));
        QFont font1;
        font1.setFamily(QStringLiteral("Neue Haas Grotesk Text Pro Ligh"));
        font1.setPointSize(11);
        font1.setBold(true);
        font1.setWeight(75);
        label_2->setFont(font1);
        label_2->setStyleSheet(QLatin1String("border : none ;\n"
"background-color: none;\n"
"color : #333770 ;\n"
"background-image : url();\n"
"    \n"
""));

        retranslateUi(mesevents);

        QMetaObject::connectSlotsByName(mesevents);
    } // setupUi

    void retranslateUi(QDialog *mesevents)
    {
        mesevents->setWindowTitle(QApplication::translate("mesevents", "Dialog", Q_NULLPTR));
        groupBox->setTitle(QString());
        retourner->setText(QApplication::translate("mesevents", "Retourner", Q_NULLPTR));
        label->setText(QApplication::translate("mesevents", "Mes Evenements", Q_NULLPTR));
        label_2->setText(QApplication::translate("mesevents", "Touts Les Participants", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class mesevents: public Ui_mesevents {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MESEVENTS_H
