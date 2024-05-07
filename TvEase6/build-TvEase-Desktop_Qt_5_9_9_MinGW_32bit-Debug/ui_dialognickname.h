/********************************************************************************
** Form generated from reading UI file 'dialognickname.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGNICKNAME_H
#define UI_DIALOGNICKNAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DialogNickName
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *txtName;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnOk;

    void setupUi(QDialog *DialogNickName)
    {
        if (DialogNickName->objectName().isEmpty())
            DialogNickName->setObjectName(QStringLiteral("DialogNickName"));
        DialogNickName->resize(220, 106);
        verticalLayout_2 = new QVBoxLayout(DialogNickName);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(DialogNickName);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setFamily(QStringLiteral("Neue Haas Grotesk Text Pro Extr"));
        label->setFont(font);

        verticalLayout->addWidget(label);

        txtName = new QLineEdit(DialogNickName);
        txtName->setObjectName(QStringLiteral("txtName"));

        verticalLayout->addWidget(txtName);


        verticalLayout_2->addLayout(verticalLayout);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnOk = new QPushButton(DialogNickName);
        btnOk->setObjectName(QStringLiteral("btnOk"));

        horizontalLayout->addWidget(btnOk);


        verticalLayout_2->addLayout(horizontalLayout);


        retranslateUi(DialogNickName);

        btnOk->setDefault(true);


        QMetaObject::connectSlotsByName(DialogNickName);
    } // setupUi

    void retranslateUi(QDialog *DialogNickName)
    {
        DialogNickName->setWindowTitle(QApplication::translate("DialogNickName", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("DialogNickName", "Pseudo", Q_NULLPTR));
        btnOk->setText(QApplication::translate("DialogNickName", "Ok", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DialogNickName: public Ui_DialogNickName {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGNICKNAME_H
