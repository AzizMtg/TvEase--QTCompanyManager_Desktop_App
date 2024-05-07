/********************************************************************************
** Form generated from reading UI file 'dialogroom.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGROOM_H
#define UI_DIALOGROOM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DialogRoom
{
public:
    QVBoxLayout *verticalLayout;
    QLineEdit *txtRoom;
    QPushButton *btnJoin;

    void setupUi(QDialog *DialogRoom)
    {
        if (DialogRoom->objectName().isEmpty())
            DialogRoom->setObjectName(QStringLiteral("DialogRoom"));
        DialogRoom->resize(288, 72);
        verticalLayout = new QVBoxLayout(DialogRoom);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        txtRoom = new QLineEdit(DialogRoom);
        txtRoom->setObjectName(QStringLiteral("txtRoom"));

        verticalLayout->addWidget(txtRoom);

        btnJoin = new QPushButton(DialogRoom);
        btnJoin->setObjectName(QStringLiteral("btnJoin"));

        verticalLayout->addWidget(btnJoin);


        retranslateUi(DialogRoom);

        btnJoin->setDefault(true);


        QMetaObject::connectSlotsByName(DialogRoom);
    } // setupUi

    void retranslateUi(QDialog *DialogRoom)
    {
        DialogRoom->setWindowTitle(QApplication::translate("DialogRoom", "Dialog", Q_NULLPTR));
        btnJoin->setText(QApplication::translate("DialogRoom", "Join", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DialogRoom: public Ui_DialogRoom {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGROOM_H
