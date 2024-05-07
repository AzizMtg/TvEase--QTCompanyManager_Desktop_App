/********************************************************************************
** Form generated from reading UI file 'pubhisto.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PUBHISTO_H
#define UI_PUBHISTO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_PubHisto
{
public:
    QGroupBox *groupBox;
    QLabel *label;
    QTableView *histotab;

    void setupUi(QDialog *PubHisto)
    {
        if (PubHisto->objectName().isEmpty())
            PubHisto->setObjectName(QStringLiteral("PubHisto"));
        PubHisto->resize(573, 646);
        PubHisto->setStyleSheet(QStringLiteral(""));
        groupBox = new QGroupBox(PubHisto);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(0, 0, 741, 691));
        groupBox->setStyleSheet(QLatin1String("/* Set the background color of child widgets to transparent */\n"
"/* Set the background image for the group box */\n"
"#groupBox {\n"
"    background-image: url(:/img/images/8e4aaa996388c571c188857db3fee3f8.jpg);\n"
"}\n"
"\n"
"/* Set transparent background for child widgets */\n"
"#groupBox QWidget {\n"
"    background-color: transparent;\n"
"}\n"
""));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(100, 80, 361, 61));
        QFont font;
        font.setFamily(QStringLiteral("Neue Haas Grotesk Text Pro Ligh"));
        font.setPointSize(18);
        label->setFont(font);
        label->setStyleSheet(QLatin1String("background-color: transparent;\n"
""));
        histotab = new QTableView(groupBox);
        histotab->setObjectName(QStringLiteral("histotab"));
        histotab->setGeometry(QRect(80, 150, 401, 431));
        histotab->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
""));
        histotab->raise();
        label->raise();

        retranslateUi(PubHisto);

        QMetaObject::connectSlotsByName(PubHisto);
    } // setupUi

    void retranslateUi(QDialog *PubHisto)
    {
        PubHisto->setWindowTitle(QApplication::translate("PubHisto", "Historique Publicite", Q_NULLPTR));
        groupBox->setTitle(QString());
        label->setText(QApplication::translate("PubHisto", "Historique Ajout Publicites", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class PubHisto: public Ui_PubHisto {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PUBHISTO_H
