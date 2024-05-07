/********************************************************************************
** Form generated from reading UI file 'staperso.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STAPERSO_H
#define UI_STAPERSO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_staPerso
{
public:
    QFrame *frame_contra_perso_stat;
    QFrame *frame_type_perso_stat;
    QLabel *label;

    void setupUi(QDialog *staPerso)
    {
        if (staPerso->objectName().isEmpty())
            staPerso->setObjectName(QStringLiteral("staPerso"));
        staPerso->resize(1235, 673);
        staPerso->setStyleSheet(QLatin1String("background-color : #BBD2E1	 ;/* #B5C0D0; */\n"
""));
        frame_contra_perso_stat = new QFrame(staPerso);
        frame_contra_perso_stat->setObjectName(QStringLiteral("frame_contra_perso_stat"));
        frame_contra_perso_stat->setGeometry(QRect(610, 70, 601, 551));
        frame_contra_perso_stat->setFrameShape(QFrame::StyledPanel);
        frame_contra_perso_stat->setFrameShadow(QFrame::Raised);
        frame_type_perso_stat = new QFrame(staPerso);
        frame_type_perso_stat->setObjectName(QStringLiteral("frame_type_perso_stat"));
        frame_type_perso_stat->setGeometry(QRect(30, 70, 571, 551));
        frame_type_perso_stat->setFrameShape(QFrame::StyledPanel);
        frame_type_perso_stat->setFrameShadow(QFrame::Raised);
        label = new QLabel(staPerso);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(520, 20, 211, 41));
        QFont font;
        font.setFamily(QStringLiteral("Segoe Print"));
        font.setPointSize(25);
        font.setBold(true);
        font.setItalic(false);
        font.setUnderline(true);
        font.setWeight(75);
        label->setFont(font);
        label->setStyleSheet(QLatin1String("padding-top : 100px ;\n"
"padding-bottom : 100px ;\n"
"color : #7396A0 ;"));

        retranslateUi(staPerso);

        QMetaObject::connectSlotsByName(staPerso);
    } // setupUi

    void retranslateUi(QDialog *staPerso)
    {
        staPerso->setWindowTitle(QApplication::translate("staPerso", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("staPerso", "Statistique", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class staPerso: public Ui_staPerso {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STAPERSO_H
