/********************************************************************************
** Form generated from reading UI file 'gamehub.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMEHUB_H
#define UI_GAMEHUB_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_gamehub
{
public:
    QGroupBox *groupBox;
    QPushButton *pushButton;
    QLabel *label_2;
    QPushButton *pushButton_2;
    QLabel *label_3;
    QLabel *label;
    QLabel *label_4;

    void setupUi(QDialog *gamehub)
    {
        if (gamehub->objectName().isEmpty())
            gamehub->setObjectName(QStringLiteral("gamehub"));
        gamehub->resize(469, 490);
        groupBox = new QGroupBox(gamehub);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(-10, -10, 511, 501));
        groupBox->setStyleSheet(QStringLiteral("background-image: url(:/img/images/cca323218daf1358a95e9900af622953.jpg);"));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(180, 170, 101, 101));
        QIcon icon;
        icon.addFile(QStringLiteral(":/Downloads/calculator.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);
        pushButton->setIconSize(QSize(100, 100));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(170, 130, 131, 31));
        QFont font;
        font.setFamily(QStringLiteral("Microsoft YaHei UI"));
        font.setPointSize(14);
        font.setBold(false);
        font.setWeight(50);
        label_2->setFont(font);
        label_2->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(180, 340, 93, 91));
        pushButton_2->setStyleSheet(QStringLiteral("image: url(:/img/194951.png);"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(190, 300, 131, 31));
        label_3->setFont(font);
        label_3->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 30, 401, 41));
        QFont font1;
        font1.setFamily(QStringLiteral("Noto Sans Arabic"));
        font1.setPointSize(28);
        font1.setBold(false);
        font1.setWeight(50);
        label->setFont(font1);
        label->setStyleSheet(QStringLiteral("color: rgb(255, 249, 255);"));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(100, 90, 291, 31));
        QFont font2;
        font2.setFamily(QStringLiteral("New Gulim"));
        label_4->setFont(font2);
        label_4->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        retranslateUi(gamehub);

        QMetaObject::connectSlotsByName(gamehub);
    } // setupUi

    void retranslateUi(QDialog *gamehub)
    {
        gamehub->setWindowTitle(QApplication::translate("gamehub", "Dialog", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("gamehub", "gamehub", Q_NULLPTR));
        pushButton->setText(QString());
        label_2->setText(QApplication::translate("gamehub", "2248 Game", Q_NULLPTR));
        pushButton_2->setText(QString());
        label_3->setText(QApplication::translate("gamehub", "Snake", Q_NULLPTR));
        label->setText(QApplication::translate("gamehub", "TvEase Game Hub", Q_NULLPTR));
        label_4->setText(QApplication::translate("gamehub", "Veuiller uniquement jouer aux heures de pause", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class gamehub: public Ui_gamehub {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMEHUB_H
