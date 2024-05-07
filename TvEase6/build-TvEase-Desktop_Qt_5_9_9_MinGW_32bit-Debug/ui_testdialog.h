/********************************************************************************
** Form generated from reading UI file 'testdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTDIALOG_H
#define UI_TESTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_TestDialog
{
public:
    QPushButton *pushButtonSpeak;
    QLineEdit *lineEditText;

    void setupUi(QDialog *TestDialog)
    {
        if (TestDialog->objectName().isEmpty())
            TestDialog->setObjectName(QStringLiteral("TestDialog"));
        TestDialog->resize(407, 355);
        pushButtonSpeak = new QPushButton(TestDialog);
        pushButtonSpeak->setObjectName(QStringLiteral("pushButtonSpeak"));
        pushButtonSpeak->setGeometry(QRect(160, 230, 93, 28));
        lineEditText = new QLineEdit(TestDialog);
        lineEditText->setObjectName(QStringLiteral("lineEditText"));
        lineEditText->setGeometry(QRect(52, 120, 311, 51));

        retranslateUi(TestDialog);

        QMetaObject::connectSlotsByName(TestDialog);
    } // setupUi

    void retranslateUi(QDialog *TestDialog)
    {
        TestDialog->setWindowTitle(QApplication::translate("TestDialog", "Dialog", Q_NULLPTR));
        pushButtonSpeak->setText(QApplication::translate("TestDialog", "PushButton", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TestDialog: public Ui_TestDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTDIALOG_H
