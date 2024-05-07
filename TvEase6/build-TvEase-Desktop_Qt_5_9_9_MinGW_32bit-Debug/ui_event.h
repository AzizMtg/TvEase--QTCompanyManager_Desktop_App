/********************************************************************************
** Form generated from reading UI file 'event.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EVENT_H
#define UI_EVENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_Event
{
public:
    QGroupBox *groupBox_2;
    QLabel *label;
    QPushButton *ajt;
    QTableView *eventdispo;
    QLineEdit *nomev;
    QLabel *label_2;
    QPushButton *particip;
    QLabel *label_3;
    QLineEdit *lieu;
    QLabel *label_4;
    QLineEdit *tempdeb;
    QLabel *label_5;
    QPushButton *pushButton;
    QLabel *label_6;

    void setupUi(QDialog *Event)
    {
        if (Event->objectName().isEmpty())
            Event->setObjectName(QStringLiteral("Event"));
        Event->resize(718, 691);
        groupBox_2 = new QGroupBox(Event);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(-20, -10, 821, 811));
        groupBox_2->setStyleSheet(QStringLiteral("background-image: url(:/img/images/yK59ikX.jpg);"));
        label = new QLabel(groupBox_2);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(100, 40, 211, 41));
        QFont font;
        font.setFamily(QStringLiteral("Neue Haas Grotesk Text Pro Ligh"));
        font.setPointSize(20);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setStyleSheet(QLatin1String("border : none ;\n"
"background-color: none;\n"
"color : #333770 ;\n"
"background-image : url();\n"
"    \n"
""));
        ajt = new QPushButton(groupBox_2);
        ajt->setObjectName(QStringLiteral("ajt"));
        ajt->setGeometry(QRect(620, 40, 71, 41));
        QIcon icon;
        icon.addFile(QStringLiteral(":/img/images/add-circle-outline-logo-icon-png-svg.png"), QSize(), QIcon::Normal, QIcon::Off);
        ajt->setIcon(icon);
        ajt->setIconSize(QSize(30, 30));
        eventdispo = new QTableView(groupBox_2);
        eventdispo->setObjectName(QStringLiteral("eventdispo"));
        eventdispo->setGeometry(QRect(110, 150, 521, 271));
        eventdispo->setStyleSheet(QLatin1String("border : none ;\n"
"background-color: none;\n"
"color : #333770 ;\n"
"background-image : url();\n"
"    \n"
""));
        nomev = new QLineEdit(groupBox_2);
        nomev->setObjectName(QStringLiteral("nomev"));
        nomev->setGeometry(QRect(310, 450, 161, 31));
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(110, 110, 641, 41));
        QFont font1;
        font1.setFamily(QStringLiteral("Neue Haas Grotesk Text Pro Ligh"));
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        label_2->setFont(font1);
        label_2->setStyleSheet(QLatin1String("border : none ;\n"
"background-color: none;\n"
"color : #333770 ;\n"
"background-image : url();\n"
"    \n"
""));
        particip = new QPushButton(groupBox_2);
        particip->setObjectName(QStringLiteral("particip"));
        particip->setGeometry(QRect(340, 580, 101, 28));
        QFont font2;
        font2.setFamily(QStringLiteral("Neue Haas Grotesk Text Pro Thin"));
        font2.setPointSize(10);
        particip->setFont(font2);
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(120, 450, 171, 31));
        label_3->setFont(font1);
        label_3->setStyleSheet(QLatin1String("border : none ;\n"
"background-color: none;\n"
"color : rgb(255, 255, 127) ;\n"
"background-image : url();\n"
"    \n"
""));
        lieu = new QLineEdit(groupBox_2);
        lieu->setObjectName(QStringLiteral("lieu"));
        lieu->setGeometry(QRect(310, 490, 161, 31));
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(120, 490, 171, 31));
        label_4->setFont(font1);
        label_4->setStyleSheet(QLatin1String("border : none ;\n"
"background-color: none;\n"
"color :rgb(255, 255, 127) ;\n"
"background-image : url();\n"
"    \n"
""));
        tempdeb = new QLineEdit(groupBox_2);
        tempdeb->setObjectName(QStringLiteral("tempdeb"));
        tempdeb->setGeometry(QRect(310, 530, 161, 31));
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(120, 530, 171, 31));
        label_5->setFont(font1);
        label_5->setStyleSheet(QLatin1String("border : none ;\n"
"background-color: none;\n"
"color :rgb(255, 255, 127) ;\n"
"background-image : url();\n"
"    \n"
""));
        pushButton = new QPushButton(groupBox_2);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(260, 650, 241, 28));
        QFont font3;
        font3.setFamily(QStringLiteral("Neue Haas Grotesk Text Pro Medi"));
        pushButton->setFont(font3);
        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(30, 30, 81, 51));
        label_6->setStyleSheet(QLatin1String("image: url(:/img/images/1714933.png);\n"
"border : none ;\n"
"background-color: none;\n"
"color : #333770 ;\n"
"background-image : url();\n"
"    \n"
""));

        retranslateUi(Event);

        QMetaObject::connectSlotsByName(Event);
    } // setupUi

    void retranslateUi(QDialog *Event)
    {
        Event->setWindowTitle(QApplication::translate("Event", "Dialog", Q_NULLPTR));
        groupBox_2->setTitle(QString());
        label->setText(QApplication::translate("Event", "Evenements", Q_NULLPTR));
        ajt->setText(QString());
        label_2->setText(QApplication::translate("Event", "Veuillez clicker sur l'un des evenements ci -dessous", Q_NULLPTR));
        particip->setText(QApplication::translate("Event", "Participer", Q_NULLPTR));
        label_3->setText(QApplication::translate("Event", "Nom Evenement :", Q_NULLPTR));
        label_4->setText(QApplication::translate("Event", "Lieu :", Q_NULLPTR));
        label_5->setText(QApplication::translate("Event", "Commence a :", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Event", "Mes Evenements", Q_NULLPTR));
        label_6->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Event: public Ui_Event {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EVENT_H
