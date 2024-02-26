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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SingIn
{
public:
    QGroupBox *groupBox;
    QLineEdit *lineEdit_email_sign_in;
    QLineEdit *lineEdit_password_sign_in;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QLabel *label;
    QWidget *widget;

    void setupUi(QDialog *SingIn)
    {
        if (SingIn->objectName().isEmpty())
            SingIn->setObjectName(QStringLiteral("SingIn"));
        SingIn->resize(778, 594);
        SingIn->setStyleSheet(QStringLiteral("background-color :   #ABADD8 ; "));
        groupBox = new QGroupBox(SingIn);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(130, 10, 611, 551));
        groupBox->setStyleSheet(QLatin1String("border : 3px dashed #333670 ; \n"
"background-color: #E3E4F2;\n"
"\n"
"\n"
""));
        lineEdit_email_sign_in = new QLineEdit(groupBox);
        lineEdit_email_sign_in->setObjectName(QStringLiteral("lineEdit_email_sign_in"));
        lineEdit_email_sign_in->setGeometry(QRect(160, 150, 311, 91));
        lineEdit_email_sign_in->setStyleSheet(QLatin1String("background-color : transparent ; \n"
"border : none ; \n"
"border-bottom: 5px solid #333670 ; \n"
"\n"
"\n"
"\n"
""));
        lineEdit_password_sign_in = new QLineEdit(groupBox);
        lineEdit_password_sign_in->setObjectName(QStringLiteral("lineEdit_password_sign_in"));
        lineEdit_password_sign_in->setGeometry(QRect(160, 290, 321, 41));
        lineEdit_password_sign_in->setStyleSheet(QLatin1String("background-color : transparent ; \n"
"border : none ; \n"
"border-bottom: 5px solid #333670 ; \n"
""));
        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(280, 380, 81, 31));
        pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_2->setStyleSheet(QLatin1String("#pushButton_2 {border :none ;\n"
"background-color : #8186C5 ; \n"
"widht : 400px ; \n"
"border-radius : 10px ;\n"
"color : #E3E4F2;}\n"
"\n"
"\n"
"#pushButton_2:hover {\n"
"color : #3A3F7E ; \n"
"background-color : #ABAFD8; \n"
"}\n"
""));
        pushButton_3 = new QPushButton(groupBox);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(420, 470, 131, 21));
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
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(170, 40, 291, 81));
        QFont font;
        font.setPointSize(25);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setStyleSheet(QLatin1String("border  : none ; \n"
"color : #333670 ; \n"
""));
        widget = new QWidget(SingIn);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(-40, 210, 321, 471));
        widget->setStyleSheet(QLatin1String("background-image: url(:/img/images/tv.png);\n"
"\n"
"background-size: cover; \n"
"  background-repeat: no-repeat; \n"
"  background-position: center;\n"
"background-color : transparent ; "));

        retranslateUi(SingIn);

        QMetaObject::connectSlotsByName(SingIn);
    } // setupUi

    void retranslateUi(QDialog *SingIn)
    {
        SingIn->setWindowTitle(QApplication::translate("SingIn", "Dialog", Q_NULLPTR));
        groupBox->setTitle(QString());
        lineEdit_email_sign_in->setPlaceholderText(QApplication::translate("SingIn", "email", Q_NULLPTR));
        lineEdit_password_sign_in->setPlaceholderText(QApplication::translate("SingIn", "mot de passe", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("SingIn", "connexion", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("SingIn", "mot de passe oublier", Q_NULLPTR));
        label->setText(QApplication::translate("SingIn", " SE CONNECTER", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SingIn: public Ui_SingIn {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SINGIN_H
