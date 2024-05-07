/********************************************************************************
** Form generated from reading UI file 'statstudio.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STATSTUDIO_H
#define UI_STATSTUDIO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_statstudio
{
public:
    QFrame *frametype;

    void setupUi(QDialog *statstudio)
    {
        if (statstudio->objectName().isEmpty())
            statstudio->setObjectName(QStringLiteral("statstudio"));
        statstudio->resize(944, 626);
        frametype = new QFrame(statstudio);
        frametype->setObjectName(QStringLiteral("frametype"));
        frametype->setGeometry(QRect(0, 0, 941, 621));
        frametype->setFrameShape(QFrame::StyledPanel);
        frametype->setFrameShadow(QFrame::Raised);

        retranslateUi(statstudio);

        QMetaObject::connectSlotsByName(statstudio);
    } // setupUi

    void retranslateUi(QDialog *statstudio)
    {
        statstudio->setWindowTitle(QApplication::translate("statstudio", "Dialog", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class statstudio: public Ui_statstudio {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STATSTUDIO_H
