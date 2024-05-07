/********************************************************************************
** Form generated from reading UI file 'statprog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STATPROG_H
#define UI_STATPROG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_statProg
{
public:
    QFrame *frame_type_prog_stat;
    QFrame *frame_type_fection_prog;
    QLabel *gif1;

    void setupUi(QDialog *statProg)
    {
        if (statProg->objectName().isEmpty())
            statProg->setObjectName(QStringLiteral("statProg"));
        statProg->resize(1261, 664);
        frame_type_prog_stat = new QFrame(statProg);
        frame_type_prog_stat->setObjectName(QStringLiteral("frame_type_prog_stat"));
        frame_type_prog_stat->setGeometry(QRect(0, 60, 611, 361));
        frame_type_prog_stat->setFrameShape(QFrame::StyledPanel);
        frame_type_prog_stat->setFrameShadow(QFrame::Raised);
        frame_type_fection_prog = new QFrame(statProg);
        frame_type_fection_prog->setObjectName(QStringLiteral("frame_type_fection_prog"));
        frame_type_fection_prog->setGeometry(QRect(610, 60, 571, 551));
        frame_type_fection_prog->setFrameShape(QFrame::StyledPanel);
        frame_type_fection_prog->setFrameShadow(QFrame::Raised);
        gif1 = new QLabel(statProg);
        gif1->setObjectName(QStringLiteral("gif1"));
        gif1->setGeometry(QRect(100, 430, 441, 201));
        gif1->setStyleSheet(QStringLiteral("border-image: url(:/img/images/output-onlinegiftools.gif);"));

        retranslateUi(statProg);

        QMetaObject::connectSlotsByName(statProg);
    } // setupUi

    void retranslateUi(QDialog *statProg)
    {
        statProg->setWindowTitle(QApplication::translate("statProg", "Dialog", Q_NULLPTR));
        gif1->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class statProg: public Ui_statProg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STATPROG_H
