/********************************************************************************
** Form generated from reading UI file 'parkings.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PARKINGS_H
#define UI_PARKINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_parkings
{
public:
    QLabel *label;
    QLabel *label_2;

    void setupUi(QDialog *parkings)
    {
        if (parkings->objectName().isEmpty())
            parkings->setObjectName(QStringLiteral("parkings"));
        parkings->resize(1033, 515);
        label = new QLabel(parkings);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 40, 441, 101));
        QFont font;
        font.setFamily(QStringLiteral("NSimSun"));
        font.setPointSize(28);
        label->setFont(font);
        label_2 = new QLabel(parkings);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(40, 150, 891, 311));
        QFont font1;
        font1.setPointSize(28);
        label_2->setFont(font1);

        retranslateUi(parkings);

        QMetaObject::connectSlotsByName(parkings);
    } // setupUi

    void retranslateUi(QDialog *parkings)
    {
        parkings->setWindowTitle(QApplication::translate("parkings", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("parkings", "TextLabel", Q_NULLPTR));
        label_2->setText(QApplication::translate("parkings", "TextLabel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class parkings: public Ui_parkings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PARKINGS_H
