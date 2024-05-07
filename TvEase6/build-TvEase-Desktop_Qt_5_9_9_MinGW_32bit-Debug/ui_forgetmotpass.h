/********************************************************************************
** Form generated from reading UI file 'forgetmotpass.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORGETMOTPASS_H
#define UI_FORGETMOTPASS_H

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

class Ui_forgetMotpass
{
public:
    QGroupBox *groupBox;
    QLabel *label;
    QPushButton *pushButton;
    QLineEdit *lineEdit_emailRecuperation;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;

    void setupUi(QDialog *forgetMotpass)
    {
        if (forgetMotpass->objectName().isEmpty())
            forgetMotpass->setObjectName(QStringLiteral("forgetMotpass"));
        forgetMotpass->resize(474, 537);
        forgetMotpass->setStyleSheet(QLatin1String("/*background-color : #B5C0D0 ; */\n"
"background-color : white ; \n"
""));
        groupBox = new QGroupBox(forgetMotpass);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(50, 40, 381, 471));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(110, 30, 47, 14));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(150, 340, 75, 23));
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
        lineEdit_emailRecuperation = new QLineEdit(groupBox);
        lineEdit_emailRecuperation->setObjectName(QStringLiteral("lineEdit_emailRecuperation"));
        lineEdit_emailRecuperation->setGeometry(QRect(70, 260, 231, 31));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(80, 20, 161, 121));
        label_2->setStyleSheet(QLatin1String("background-image: url(:/img/images/forgetpass.png);\n"
"background-repeat:no-repeat ;"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(70, 150, 241, 51));
        QFont font;
        font.setPointSize(13);
        font.setBold(true);
        font.setWeight(75);
        label_3->setFont(font);
        label_3->setStyleSheet(QStringLiteral(""));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(30, 190, 311, 20));
        QFont font1;
        font1.setPointSize(10);
        label_4->setFont(font1);
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(30, 210, 331, 20));
        label_5->setFont(font1);

        retranslateUi(forgetMotpass);

        QMetaObject::connectSlotsByName(forgetMotpass);
    } // setupUi

    void retranslateUi(QDialog *forgetMotpass)
    {
        forgetMotpass->setWindowTitle(QApplication::translate("forgetMotpass", "Dialog", Q_NULLPTR));
        groupBox->setTitle(QString());
        label->setText(QString());
        pushButton->setText(QApplication::translate("forgetMotpass", "envoyer", Q_NULLPTR));
        label_2->setText(QString());
        label_3->setText(QApplication::translate("forgetMotpass", "Probl\303\250mes de connexion ?\n"
"", Q_NULLPTR));
        label_4->setText(QApplication::translate("forgetMotpass", "Entrez votre adresse e-mail et nous vous  enverrons", Q_NULLPTR));
        label_5->setText(QApplication::translate("forgetMotpass", " un code de confirmation  pour r\303\251cup\303\251rer votre compte.", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class forgetMotpass: public Ui_forgetMotpass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORGETMOTPASS_H
