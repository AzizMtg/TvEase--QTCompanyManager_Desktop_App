/********************************************************************************
** Form generated from reading UI file 'pubarduino.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PUBARDUINO_H
#define UI_PUBARDUINO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_pubarduino
{
public:
    QLineEdit *lineEdit;
    QPushButton *envoyer;
    QPushButton *clear;
    QPushButton *eff;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_2;
    QLabel *label;
    QLabel *label_3;

    void setupUi(QDialog *pubarduino)
    {
        if (pubarduino->objectName().isEmpty())
            pubarduino->setObjectName(QStringLiteral("pubarduino"));
        pubarduino->resize(441, 448);
        lineEdit = new QLineEdit(pubarduino);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(52, 140, 311, 61));
        QFont font;
        font.setPointSize(14);
        lineEdit->setFont(font);
        envoyer = new QPushButton(pubarduino);
        envoyer->setObjectName(QStringLiteral("envoyer"));
        envoyer->setGeometry(QRect(440, 270, 93, 28));
        clear = new QPushButton(pubarduino);
        clear->setObjectName(QStringLiteral("clear"));
        clear->setGeometry(QRect(440, 320, 93, 28));
        eff = new QPushButton(pubarduino);
        eff->setObjectName(QStringLiteral("eff"));
        eff->setGeometry(QRect(450, 370, 93, 28));
        label_5 = new QLabel(pubarduino);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(40, 280, 371, 41));
        QFont font1;
        font1.setFamily(QStringLiteral("Neue Haas Grotesk Text Pro Medi"));
        font1.setPointSize(10);
        label_5->setFont(font1);
        label_5->setStyleSheet(QStringLiteral("color: rgb(182, 60, 0);"));
        label_6 = new QLabel(pubarduino);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(100, 250, 371, 41));
        label_6->setFont(font1);
        label_6->setStyleSheet(QStringLiteral("color: rgb(182, 60, 0);"));
        label_2 = new QLabel(pubarduino);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(100, 220, 281, 41));
        label_2->setFont(font1);
        label_2->setStyleSheet(QStringLiteral("color: rgb(110, 190, 113);"));
        label = new QLabel(pubarduino);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(100, 110, 261, 16));
        QFont font2;
        font2.setFamily(QStringLiteral("Neue Haas Grotesk Text Pro Medi"));
        font2.setPointSize(11);
        label->setFont(font2);
        label_3 = new QLabel(pubarduino);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(90, 10, 371, 31));
        QFont font3;
        font3.setFamily(QStringLiteral("Neue Haas Grotesk Text Pro"));
        font3.setPointSize(13);
        font3.setBold(true);
        font3.setWeight(75);
        label_3->setFont(font3);
        label_3->setStyleSheet(QStringLiteral("color: rgb(255, 0, 0);"));

        retranslateUi(pubarduino);

        QMetaObject::connectSlotsByName(pubarduino);
    } // setupUi

    void retranslateUi(QDialog *pubarduino)
    {
        pubarduino->setWindowTitle(QApplication::translate("pubarduino", "Dialog", Q_NULLPTR));
        envoyer->setText(QApplication::translate("pubarduino", "PushButton", Q_NULLPTR));
        clear->setText(QApplication::translate("pubarduino", "PushButton", Q_NULLPTR));
        eff->setText(QApplication::translate("pubarduino", "PushButton", Q_NULLPTR));
        label_5->setText(QApplication::translate("pubarduino", "appuier sur 'A' pour effacer la totalit\303\251 du text", Q_NULLPTR));
        label_6->setText(QApplication::translate("pubarduino", "appuier sur 'B' pour effacer", Q_NULLPTR));
        label_2->setText(QApplication::translate("pubarduino", "appuier sur '#' pour Envoyer", Q_NULLPTR));
        label->setText(QApplication::translate("pubarduino", "Veuiller taper sur le Keypad ", Q_NULLPTR));
        label_3->setText(QApplication::translate("pubarduino", "En Utilisant la carte Arduino", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class pubarduino: public Ui_pubarduino {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PUBARDUINO_H
