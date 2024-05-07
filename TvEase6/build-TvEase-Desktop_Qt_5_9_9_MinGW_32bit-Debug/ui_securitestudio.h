/********************************************************************************
** Form generated from reading UI file 'securitestudio.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECURITESTUDIO_H
#define UI_SECURITESTUDIO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_securiteStudio
{
public:
    QLabel *label_3;
    QPushButton *pushButton__securite;
    QLabel *label_6;
    QTableView *tableView_securite;
    QPushButton *pushButton_recher_securite;
    QLineEdit *lineEdit_recher_securite;
    QComboBox *comboBox_trie_securite;
    QLabel *label_5;

    void setupUi(QDialog *securiteStudio)
    {
        if (securiteStudio->objectName().isEmpty())
            securiteStudio->setObjectName(QStringLiteral("securiteStudio"));
        securiteStudio->resize(1020, 579);
        securiteStudio->setStyleSheet(QStringLiteral("background-color : #9AC8CD ;"));
        label_3 = new QLabel(securiteStudio);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(280, 30, 521, 31));
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
"color : #0E46A3 ;"));
        pushButton__securite = new QPushButton(securiteStudio);
        pushButton__securite->setObjectName(QStringLiteral("pushButton__securite"));
        pushButton__securite->setGeometry(QRect(400, 490, 231, 31));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setUnderline(true);
        font1.setWeight(75);
        pushButton__securite->setFont(font1);
        pushButton__securite->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton__securite->setStyleSheet(QStringLiteral("background-color: transparent ; "));
        QIcon icon;
        icon.addFile(QStringLiteral(":/img/images/pd.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton__securite->setIcon(icon);
        pushButton__securite->setIconSize(QSize(50, 20));
        label_6 = new QLabel(securiteStudio);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(370, 90, 381, 41));
        QFont font2;
        font2.setFamily(QStringLiteral("Papyrus"));
        font2.setPointSize(15);
        font2.setBold(true);
        font2.setUnderline(true);
        font2.setWeight(75);
        label_6->setFont(font2);
        label_6->setStyleSheet(QStringLiteral("color :#333770 ;"));
        tableView_securite = new QTableView(securiteStudio);
        tableView_securite->setObjectName(QStringLiteral("tableView_securite"));
        tableView_securite->setGeometry(QRect(20, 170, 981, 301));
        tableView_securite->setStyleSheet(QStringLiteral("  background-color:  white; "));
        pushButton_recher_securite = new QPushButton(securiteStudio);
        pushButton_recher_securite->setObjectName(QStringLiteral("pushButton_recher_securite"));
        pushButton_recher_securite->setGeometry(QRect(260, 140, 31, 21));
        pushButton_recher_securite->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_recher_securite->setStyleSheet(QStringLiteral("background-color: white ;"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/img/images/search.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_recher_securite->setIcon(icon1);
        pushButton_recher_securite->setIconSize(QSize(60, 15));
        lineEdit_recher_securite = new QLineEdit(securiteStudio);
        lineEdit_recher_securite->setObjectName(QStringLiteral("lineEdit_recher_securite"));
        lineEdit_recher_securite->setGeometry(QRect(20, 140, 231, 21));
        lineEdit_recher_securite->setStyleSheet(QLatin1String("background-color : white ; \n"
""));
        comboBox_trie_securite = new QComboBox(securiteStudio);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/img/images/table.png"), QSize(), QIcon::Normal, QIcon::Off);
        comboBox_trie_securite->addItem(icon2, QString());
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/img/images/decroissant.png"), QSize(), QIcon::Normal, QIcon::Off);
        comboBox_trie_securite->addItem(icon3, QString());
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/img/images/croissant.png"), QSize(), QIcon::Normal, QIcon::Off);
        comboBox_trie_securite->addItem(icon4, QString());
        comboBox_trie_securite->setObjectName(QStringLiteral("comboBox_trie_securite"));
        comboBox_trie_securite->setGeometry(QRect(790, 140, 171, 22));
        comboBox_trie_securite->setStyleSheet(QStringLiteral("background-color : white ; "));
        label_5 = new QLabel(securiteStudio);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(710, 140, 61, 20));
        QFont font3;
        font3.setPointSize(10);
        font3.setBold(true);
        font3.setWeight(75);
        label_5->setFont(font3);

        retranslateUi(securiteStudio);

        QMetaObject::connectSlotsByName(securiteStudio);
    } // setupUi

    void retranslateUi(QDialog *securiteStudio)
    {
        securiteStudio->setWindowTitle(QApplication::translate("securiteStudio", "Dialog", Q_NULLPTR));
        label_3->setText(QApplication::translate("securiteStudio", "Fiche Accees personnels - studios", Q_NULLPTR));
        pushButton__securite->setText(QApplication::translate("securiteStudio", "Telechargement", Q_NULLPTR));
        label_6->setText(QApplication::translate("securiteStudio", "Afiichage du personnels  -  studios ", Q_NULLPTR));
        pushButton_recher_securite->setText(QString());
        comboBox_trie_securite->setItemText(0, QString());
        comboBox_trie_securite->setItemText(1, QApplication::translate("securiteStudio", "trie dans l'ordre decroissant par date acces", Q_NULLPTR));
        comboBox_trie_securite->setItemText(2, QApplication::translate("securiteStudio", "trie dans l'ordre croissant par date acces", Q_NULLPTR));

        label_5->setText(QApplication::translate("securiteStudio", "Trier ...", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class securiteStudio: public Ui_securiteStudio {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECURITESTUDIO_H
