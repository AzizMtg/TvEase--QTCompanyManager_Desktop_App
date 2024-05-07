/********************************************************************************
** Form generated from reading UI file 'codempass.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CODEMPASS_H
#define UI_CODEMPASS_H

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

class Ui_codeMpass
{
public:
    QGroupBox *groupBox;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit_codeVerif;
    QPushButton *pushButton;
    QLabel *label_3;

    void setupUi(QDialog *codeMpass)
    {
        if (codeMpass->objectName().isEmpty())
            codeMpass->setObjectName(QStringLiteral("codeMpass"));
        codeMpass->resize(472, 346);
        codeMpass->setStyleSheet(QLatin1String("background-color : #B5C0D0 ; \n"
"background-color : white ; \n"
"\n"
""));
        groupBox = new QGroupBox(codeMpass);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(50, 70, 351, 241));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 50, 291, 41));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 90, 291, 16));
        label_2->setFont(font);
        lineEdit_codeVerif = new QLineEdit(groupBox);
        lineEdit_codeVerif->setObjectName(QStringLiteral("lineEdit_codeVerif"));
        lineEdit_codeVerif->setGeometry(QRect(40, 130, 271, 31));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(140, 180, 75, 23));
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
        label_3 = new QLabel(codeMpass);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(130, 0, 171, 111));
        label_3->setStyleSheet(QLatin1String("background-image: url(:/img/images/forgetpass.png);\n"
"background-repeat: no-repeat ; "));

        retranslateUi(codeMpass);

        QMetaObject::connectSlotsByName(codeMpass);
    } // setupUi

    void retranslateUi(QDialog *codeMpass)
    {
        codeMpass->setWindowTitle(QApplication::translate("codeMpass", "Dialog", Q_NULLPTR));
        groupBox->setTitle(QString());
        label->setText(QApplication::translate("codeMpass", "Veuillez saisir le code de confirmation pour ", Q_NULLPTR));
        label_2->setText(QApplication::translate("codeMpass", "proc\303\251der \303\240 la r\303\251g\303\251n\303\251ration du mot de passe", Q_NULLPTR));
        pushButton->setText(QApplication::translate("codeMpass", "Valider", Q_NULLPTR));
        label_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class codeMpass: public Ui_codeMpass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CODEMPASS_H
