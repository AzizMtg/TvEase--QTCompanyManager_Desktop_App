/********************************************************************************
** Form generated from reading UI file 'singin.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SINGIN_H
#define UI_SINGIN_H

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

class Ui_SingIn
{
public:
    QGroupBox *groupBox;
    QLineEdit *lineEdit_email_sign_in;
    QLineEdit *lineEdit_password_sign_in;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton;
    QPushButton *pushButton_4;
    QGroupBox *groupBox_2;
    QLabel *label_2;

    void setupUi(QDialog *SingIn)
    {
        if (SingIn->objectName().isEmpty())
            SingIn->setObjectName(QStringLiteral("SingIn"));
        SingIn->resize(778, 594);
        SingIn->setStyleSheet(QLatin1String("border-top-right-radius : 0px;\n"
"background-image: url(:/img/images/background.jpg);\n"
""));
        groupBox = new QGroupBox(SingIn);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(300, 10, 461, 561));
        groupBox->setStyleSheet(QLatin1String("/*border : 5px double #333670 ; */\n"
"background-image: url();\n"
"background-color : #B5C0D0 ; \n"
"border-radius : 0 ; \n"
"background-color: white ;   /*#E3E4F2;*/\n"
"\n"
""));
        lineEdit_email_sign_in = new QLineEdit(groupBox);
        lineEdit_email_sign_in->setObjectName(QStringLiteral("lineEdit_email_sign_in"));
        lineEdit_email_sign_in->setGeometry(QRect(70, 210, 311, 91));
        lineEdit_email_sign_in->setStyleSheet(QLatin1String("background-color : transparent ; \n"
"border : none ; \n"
"border-bottom: 2px solid #333670 ; \n"
"\n"
"\n"
"\n"
""));
        lineEdit_password_sign_in = new QLineEdit(groupBox);
        lineEdit_password_sign_in->setObjectName(QStringLiteral("lineEdit_password_sign_in"));
        lineEdit_password_sign_in->setGeometry(QRect(70, 320, 321, 41));
        lineEdit_password_sign_in->setStyleSheet(QLatin1String("background-color : transparent ; \n"
"border : none ; \n"
"border-bottom: 2px solid #333670 ; \n"
""));
        lineEdit_password_sign_in->setEchoMode(QLineEdit::Password);
        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(140, 420, 131, 31));
        pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_2->setStyleSheet(QLatin1String("#pushButton_2 {border :none ;\n"
"background-color : #192655 ; \n"
"widht : 400px ; \n"
"border-radius : 10px ;\n"
"color : white;}\n"
"\n"
"\n"
"#pushButton_2:hover {\n"
"color : white ; \n"
"/*background-color : #26577C; */\n"
"}\n"
""));
        pushButton_3 = new QPushButton(groupBox);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(280, 500, 131, 21));
        pushButton_3->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_3->setStyleSheet(QLatin1String("#pushButton_3{\n"
"border : none ;\n"
"color : blue ; \n"
"border-bottom: 1px solid blue; }\n"
"\n"
"#pushButton_3:hover {\n"
"color : #3A3F7E ; \n"
"border-bottom: 1px solid #3A3F7E; }\n"
"\n"
""));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(340, 333, 61, 20));
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon;
        icon.addFile(QStringLiteral(":/img/images/hidepass.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);
        pushButton->setIconSize(QSize(23, 30));
        pushButton_4 = new QPushButton(groupBox);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(100, 10, 221, 221));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/img/images/connormal.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_4->setIcon(icon1);
        pushButton_4->setIconSize(QSize(200, 200));
        groupBox_2 = new QGroupBox(SingIn);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(20, 10, 281, 561));
        groupBox_2->setStyleSheet(QLatin1String("background-image: url();\n"
"/*background-image: url(:/img/images/per.png);*/\n"
"background-color : #40A2E3 ;\n"
"background-repeat : norepeat ; \n"
"    background-position: center center;\n"
""));
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 20, 261, 61));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        font.setItalic(true);
        font.setUnderline(true);
        font.setWeight(75);
        label_2->setFont(font);
        label_2->setStyleSheet(QLatin1String("border  : none ; \n"
"background-image: url();\n"
"color : #192655 ; \n"
""));

        retranslateUi(SingIn);

        QMetaObject::connectSlotsByName(SingIn);
    } // setupUi

    void retranslateUi(QDialog *SingIn)
    {
        SingIn->setWindowTitle(QApplication::translate("SingIn", "Dialog", Q_NULLPTR));
        groupBox->setTitle(QString());
        lineEdit_email_sign_in->setText(QString());
        lineEdit_email_sign_in->setPlaceholderText(QApplication::translate("SingIn", "Entrer votre email", Q_NULLPTR));
        lineEdit_password_sign_in->setPlaceholderText(QApplication::translate("SingIn", "Mot de passe", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("SingIn", "connexion", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("SingIn", "mot de passe oublier", Q_NULLPTR));
        pushButton->setText(QString());
        pushButton_4->setText(QString());
        groupBox_2->setTitle(QString());
        label_2->setText(QApplication::translate("SingIn", " SE CONNECTER", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SingIn: public Ui_SingIn {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SINGIN_H
