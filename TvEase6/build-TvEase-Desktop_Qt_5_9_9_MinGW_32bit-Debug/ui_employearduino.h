/********************************************************************************
** Form generated from reading UI file 'employearduino.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EMPLOYEARDUINO_H
#define UI_EMPLOYEARDUINO_H

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

class Ui_employearduino
{
public:
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *clear;
    QLabel *label_5;
    QLabel *label_6;
    QPushButton *eff;
    QLineEdit *lineEdit_2;

    void setupUi(QDialog *employearduino)
    {
        if (employearduino->objectName().isEmpty())
            employearduino->setObjectName(QStringLiteral("employearduino"));
        employearduino->resize(450, 446);
        lineEdit = new QLineEdit(employearduino);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(60, 210, 331, 61));
        QFont font;
        font.setFamily(QStringLiteral("Neue Haas Grotesk Text Pro Medi"));
        font.setPointSize(14);
        lineEdit->setFont(font);
        lineEdit->setReadOnly(true);
        pushButton = new QPushButton(employearduino);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(550, 330, 93, 31));
        label = new QLabel(employearduino);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(100, 180, 261, 16));
        QFont font1;
        font1.setFamily(QStringLiteral("Neue Haas Grotesk Text Pro Medi"));
        font1.setPointSize(11);
        label->setFont(font1);
        label_2 = new QLabel(employearduino);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(110, 290, 281, 41));
        QFont font2;
        font2.setFamily(QStringLiteral("Neue Haas Grotesk Text Pro Medi"));
        font2.setPointSize(10);
        label_2->setFont(font2);
        label_2->setStyleSheet(QStringLiteral("color: rgb(110, 190, 113);"));
        label_3 = new QLabel(employearduino);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(90, 80, 371, 31));
        QFont font3;
        font3.setFamily(QStringLiteral("Neue Haas Grotesk Text Pro"));
        font3.setPointSize(13);
        font3.setBold(true);
        font3.setWeight(75);
        label_3->setFont(font3);
        label_3->setStyleSheet(QStringLiteral("color: rgb(255, 0, 0);"));
        clear = new QPushButton(employearduino);
        clear->setObjectName(QStringLiteral("clear"));
        clear->setGeometry(QRect(580, 370, 93, 28));
        label_5 = new QLabel(employearduino);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(50, 350, 371, 41));
        label_5->setFont(font2);
        label_5->setStyleSheet(QStringLiteral("color: rgb(182, 60, 0);"));
        label_6 = new QLabel(employearduino);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(110, 320, 371, 41));
        label_6->setFont(font2);
        label_6->setStyleSheet(QStringLiteral("color: rgb(182, 60, 0);"));
        eff = new QPushButton(employearduino);
        eff->setObjectName(QStringLiteral("eff"));
        eff->setGeometry(QRect(530, 310, 93, 28));
        lineEdit_2 = new QLineEdit(employearduino);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(42, 30, 351, 22));

        retranslateUi(employearduino);

        QMetaObject::connectSlotsByName(employearduino);
    } // setupUi

    void retranslateUi(QDialog *employearduino)
    {
        employearduino->setWindowTitle(QApplication::translate("employearduino", "ARDUINO ET PERSONNEL", Q_NULLPTR));
        lineEdit->setPlaceholderText(QApplication::translate("employearduino", "CIN Personnel a chercher", Q_NULLPTR));
        pushButton->setText(QApplication::translate("employearduino", "PushButton", Q_NULLPTR));
        label->setText(QApplication::translate("employearduino", "Veuiller taper sur le Keypad ", Q_NULLPTR));
        label_2->setText(QApplication::translate("employearduino", "appuier sur '#' pour Envoyer", Q_NULLPTR));
        label_3->setText(QApplication::translate("employearduino", "En Utilisant la carte Arduino", Q_NULLPTR));
        clear->setText(QApplication::translate("employearduino", "PushButton", Q_NULLPTR));
        label_5->setText(QApplication::translate("employearduino", "appuier sur 'A' pour effacer la totalit\303\251 du text", Q_NULLPTR));
        label_6->setText(QApplication::translate("employearduino", "appuier sur 'B' pour effacer", Q_NULLPTR));
        eff->setText(QApplication::translate("employearduino", "PushButton", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class employearduino: public Ui_employearduino {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EMPLOYEARDUINO_H
