/********************************************************************************
** Form generated from reading UI file 'nouvmotpass.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOUVMOTPASS_H
#define UI_NOUVMOTPASS_H

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

QT_BEGIN_NAMESPACE

class Ui_nouvmotpass
{
public:
    QGroupBox *groupBox;
    QPushButton *pushButton;
    QLineEdit *lineEdit_nouvmotpass;
    QLineEdit *lineEdit_nouvmotpass2;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QPushButton *pushButton_2;
    QLabel *label_2;

    void setupUi(QDialog *nouvmotpass)
    {
        if (nouvmotpass->objectName().isEmpty())
            nouvmotpass->setObjectName(QStringLiteral("nouvmotpass"));
        nouvmotpass->resize(469, 433);
        nouvmotpass->setStyleSheet(QLatin1String("background-color : #B5C0D0 ; \n"
"background-color : white ; \n"
"\n"
""));
        groupBox = new QGroupBox(nouvmotpass);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(30, 60, 411, 331));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(150, 270, 75, 23));
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setStyleSheet(QLatin1String("#pushButton {border :none ;\n"
"background-color : #192655 ; \n"
"widht : 400px ; \n"
"border-radius : 10px ;\n"
"color : white;}\n"
"\n"
"\n"
"#pushButton:hover {\n"
"color : white ; \n"
"/*background-color : #26577C; */\n"
"}\n"
""));
        lineEdit_nouvmotpass = new QLineEdit(groupBox);
        lineEdit_nouvmotpass->setObjectName(QStringLiteral("lineEdit_nouvmotpass"));
        lineEdit_nouvmotpass->setGeometry(QRect(80, 160, 241, 41));
        lineEdit_nouvmotpass->setEchoMode(QLineEdit::Password);
        lineEdit_nouvmotpass2 = new QLineEdit(groupBox);
        lineEdit_nouvmotpass2->setObjectName(QStringLiteral("lineEdit_nouvmotpass2"));
        lineEdit_nouvmotpass2->setGeometry(QRect(80, 210, 241, 31));
        lineEdit_nouvmotpass2->setEchoMode(QLineEdit::Password);
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(90, 30, 231, 31));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setUnderline(true);
        font.setWeight(75);
        label->setFont(font);
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(100, 70, 191, 16));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(110, 90, 161, 16));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(90, 110, 201, 16));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(110, 130, 141, 16));
        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(270, 170, 41, 21));
        pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_2->setStyleSheet(QStringLiteral("background-color : transparent ; "));
        QIcon icon;
        icon.addFile(QStringLiteral(":/img/images/hidepass.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon);
        pushButton_2->setIconSize(QSize(50, 30));
        label_2 = new QLabel(nouvmotpass);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(200, 30, 51, 61));
        label_2->setStyleSheet(QLatin1String("background-image: url(:/img/images/nouv2.png);\n"
"background-repeat : no-repeat ; \n"
"background-color : #B5C0D0 ; \n"
"background-color : white ; \n"
"\n"
""));

        retranslateUi(nouvmotpass);

        QMetaObject::connectSlotsByName(nouvmotpass);
    } // setupUi

    void retranslateUi(QDialog *nouvmotpass)
    {
        nouvmotpass->setWindowTitle(QApplication::translate("nouvmotpass", "Dialog", Q_NULLPTR));
        groupBox->setTitle(QString());
        pushButton->setText(QApplication::translate("nouvmotpass", "Confirmer", Q_NULLPTR));
        lineEdit_nouvmotpass->setText(QString());
        lineEdit_nouvmotpass->setPlaceholderText(QApplication::translate("nouvmotpass", "Nouveau mot de passe", Q_NULLPTR));
        lineEdit_nouvmotpass2->setPlaceholderText(QApplication::translate("nouvmotpass", "Confirmer le nouveau mot de passe", Q_NULLPTR));
        label->setText(QApplication::translate("nouvmotpass", "Cr\303\251ez un mot de passe fort\n"
"", Q_NULLPTR));
        label_3->setText(QApplication::translate("nouvmotpass", "Votre mot de passe doit contenir au", Q_NULLPTR));
        label_4->setText(QApplication::translate("nouvmotpass", "moins 6 caract\303\250res ainsi qu\342\200\231une ", Q_NULLPTR));
        label_5->setText(QApplication::translate("nouvmotpass", "combinaison de chiffres, de lettres et de ", Q_NULLPTR));
        label_6->setText(QApplication::translate("nouvmotpass", "caract\303\250res sp\303\251ciaux ( !$@%).", Q_NULLPTR));
        pushButton_2->setText(QString());
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class nouvmotpass: public Ui_nouvmotpass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOUVMOTPASS_H
