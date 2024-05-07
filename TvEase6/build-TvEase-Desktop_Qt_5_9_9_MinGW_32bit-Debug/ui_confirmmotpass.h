/********************************************************************************
** Form generated from reading UI file 'confirmmotpass.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIRMMOTPASS_H
#define UI_CONFIRMMOTPASS_H

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

class Ui_confirmMotPass
{
public:
    QGroupBox *groupBox;
    QPushButton *pushButton_suivant;
    QLineEdit *lineEdit_confirmpass;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *pushButton_eye;
    QLabel *label_2;

    void setupUi(QDialog *confirmMotPass)
    {
        if (confirmMotPass->objectName().isEmpty())
            confirmMotPass->setObjectName(QStringLiteral("confirmMotPass"));
        confirmMotPass->resize(524, 414);
        confirmMotPass->setStyleSheet(QStringLiteral("background-color : white ; "));
        groupBox = new QGroupBox(confirmMotPass);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(60, 40, 411, 331));
        pushButton_suivant = new QPushButton(groupBox);
        pushButton_suivant->setObjectName(QStringLiteral("pushButton_suivant"));
        pushButton_suivant->setGeometry(QRect(160, 210, 75, 23));
        pushButton_suivant->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_suivant->setStyleSheet(QLatin1String("#pushButton_suivant {border :none ;\n"
"background-color : #192655 ; \n"
"widht : 400px ; \n"
"border-radius : 10px ;\n"
"color : white;}\n"
"\n"
"\n"
"#pushButton_suivant:hover {\n"
"color : white ; \n"
"/*background-color : #26577C; */\n"
"}\n"
""));
        lineEdit_confirmpass = new QLineEdit(groupBox);
        lineEdit_confirmpass->setObjectName(QStringLiteral("lineEdit_confirmpass"));
        lineEdit_confirmpass->setGeometry(QRect(80, 130, 241, 41));
        lineEdit_confirmpass->setEchoMode(QLineEdit::Password);
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(70, 30, 341, 31));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setUnderline(true);
        font.setWeight(75);
        label->setFont(font);
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(100, 70, 211, 16));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(110, 90, 161, 16));
        pushButton_eye = new QPushButton(groupBox);
        pushButton_eye->setObjectName(QStringLiteral("pushButton_eye"));
        pushButton_eye->setGeometry(QRect(270, 140, 41, 21));
        pushButton_eye->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_eye->setStyleSheet(QStringLiteral("background-color : transparent ; "));
        QIcon icon;
        icon.addFile(QStringLiteral(":/img/images/hidepass.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_eye->setIcon(icon);
        pushButton_eye->setIconSize(QSize(50, 30));
        label_2 = new QLabel(confirmMotPass);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(230, 10, 51, 51));
        label_2->setStyleSheet(QLatin1String("background-image: url(:/img/images/password (1).png);\n"
""));

        retranslateUi(confirmMotPass);

        QMetaObject::connectSlotsByName(confirmMotPass);
    } // setupUi

    void retranslateUi(QDialog *confirmMotPass)
    {
        confirmMotPass->setWindowTitle(QApplication::translate("confirmMotPass", "Dialog", Q_NULLPTR));
        groupBox->setTitle(QString());
        pushButton_suivant->setText(QApplication::translate("confirmMotPass", "Suivant", Q_NULLPTR));
        lineEdit_confirmpass->setText(QString());
        lineEdit_confirmpass->setPlaceholderText(QApplication::translate("confirmMotPass", "Ecrire votre ancien mot de passe.", Q_NULLPTR));
        label->setText(QApplication::translate("confirmMotPass", " veuillez confirmer votre identite ", Q_NULLPTR));
        label_3->setText(QApplication::translate("confirmMotPass", "Pour continuer , \303\211crivez votre mot de passe ", Q_NULLPTR));
        label_4->setText(QApplication::translate("confirmMotPass", "actuel", Q_NULLPTR));
        pushButton_eye->setText(QString());
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class confirmMotPass: public Ui_confirmMotPass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIRMMOTPASS_H
