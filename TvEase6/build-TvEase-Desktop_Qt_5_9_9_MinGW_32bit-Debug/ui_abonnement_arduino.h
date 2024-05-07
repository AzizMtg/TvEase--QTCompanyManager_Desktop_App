/********************************************************************************
** Form generated from reading UI file 'abonnement_arduino.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABONNEMENT_ARDUINO_H
#define UI_ABONNEMENT_ARDUINO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_abonnement_arduino
{
public:
    QLineEdit *lineEdit;
    QPushButton *envoyer;
    QPushButton *clear;
    QPushButton *eff;
    QDateEdit *dateEdit;
    QPushButton *zid;
    QLineEdit *expirewale;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QDialog *abonnement_arduino)
    {
        if (abonnement_arduino->objectName().isEmpty())
            abonnement_arduino->setObjectName(QStringLiteral("abonnement_arduino"));
        abonnement_arduino->resize(616, 490);
        lineEdit = new QLineEdit(abonnement_arduino);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(170, 170, 261, 51));
        envoyer = new QPushButton(abonnement_arduino);
        envoyer->setObjectName(QStringLiteral("envoyer"));
        envoyer->setGeometry(QRect(620, 110, 93, 28));
        clear = new QPushButton(abonnement_arduino);
        clear->setObjectName(QStringLiteral("clear"));
        clear->setGeometry(QRect(620, 160, 93, 28));
        eff = new QPushButton(abonnement_arduino);
        eff->setObjectName(QStringLiteral("eff"));
        eff->setGeometry(QRect(620, 210, 93, 28));
        dateEdit = new QDateEdit(abonnement_arduino);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));
        dateEdit->setGeometry(QRect(200, 271, 201, 51));
        zid = new QPushButton(abonnement_arduino);
        zid->setObjectName(QStringLiteral("zid"));
        zid->setGeometry(QRect(620, 270, 93, 28));
        expirewale = new QLineEdit(abonnement_arduino);
        expirewale->setObjectName(QStringLiteral("expirewale"));
        expirewale->setGeometry(QRect(210, 360, 171, 41));
        label = new QLabel(abonnement_arduino);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(190, 35, 291, 31));
        QFont font;
        font.setPointSize(12);
        label->setFont(font);
        label_2 = new QLabel(abonnement_arduino);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(180, 70, 281, 41));
        label_2->setFont(font);

        retranslateUi(abonnement_arduino);

        QMetaObject::connectSlotsByName(abonnement_arduino);
    } // setupUi

    void retranslateUi(QDialog *abonnement_arduino)
    {
        abonnement_arduino->setWindowTitle(QApplication::translate("abonnement_arduino", "Dialog", Q_NULLPTR));
        envoyer->setText(QApplication::translate("abonnement_arduino", "envoyer", Q_NULLPTR));
        clear->setText(QApplication::translate("abonnement_arduino", "clear", Q_NULLPTR));
        eff->setText(QApplication::translate("abonnement_arduino", "effacer", Q_NULLPTR));
        zid->setText(QApplication::translate("abonnement_arduino", "renouveller", Q_NULLPTR));
        label->setText(QApplication::translate("abonnement_arduino", "CLICK # pour envoyer", Q_NULLPTR));
        label_2->setText(QApplication::translate("abonnement_arduino", "CLICK C pour renouveller", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class abonnement_arduino: public Ui_abonnement_arduino {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABONNEMENT_ARDUINO_H
