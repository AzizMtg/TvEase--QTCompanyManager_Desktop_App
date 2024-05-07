/********************************************************************************
** Form generated from reading UI file 'alarme.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALARME_H
#define UI_ALARME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTimeEdit>

QT_BEGIN_NAMESPACE

class Ui_alarme
{
public:
    QGroupBox *groupBox;
    QCheckBox *checkBox_6;
    QCheckBox *checkBox_4;
    QLabel *label_9;
    QTimeEdit *alarmTime_3;
    QLineEdit *dd_5;
    QTimeEdit *alarmTime_8;
    QLineEdit *dd_7;
    QLabel *label_7;
    QCheckBox *checkBox_3;
    QLineEdit *dd;
    QCheckBox *checkBox_8;
    QCheckBox *checkBox;
    QCheckBox *checkBox_7;
    QLabel *label_4;
    QCheckBox *checkBox_9;
    QLineEdit *dd_9;
    QLineEdit *dd_8;
    QTimeEdit *alarmTime_5;
    QLineEdit *dd_4;
    QLineEdit *dd_6;
    QTimeEdit *alarmTime;
    QLineEdit *dd_3;
    QTimeEdit *alarmTime_9;
    QCheckBox *checkBox_2;
    QLabel *label_6;
    QLabel *label_2;
    QTimeEdit *alarmTime_4;
    QLabel *label_5;
    QLabel *label_3;
    QTimeEdit *alarmTime_2;
    QCheckBox *checkBox_5;
    QTimeEdit *alarmTime_7;
    QLineEdit *dd_2;
    QTimeEdit *alarmTime_6;
    QLabel *label_10;
    QLabel *label;
    QLabel *label_8;
    QLabel *timeLabel;
    QPushButton *pushButton;

    void setupUi(QDialog *alarme)
    {
        if (alarme->objectName().isEmpty())
            alarme->setObjectName(QStringLiteral("alarme"));
        alarme->resize(1176, 724);
        groupBox = new QGroupBox(alarme);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(80, 30, 881, 681));
        groupBox->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        checkBox_6 = new QCheckBox(groupBox);
        checkBox_6->setObjectName(QStringLiteral("checkBox_6"));
        checkBox_6->setGeometry(QRect(650, 410, 201, 20));
        checkBox_4 = new QCheckBox(groupBox);
        checkBox_4->setObjectName(QStringLiteral("checkBox_4"));
        checkBox_4->setGeometry(QRect(650, 310, 201, 20));
        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(75, 570, 71, 21));
        QFont font;
        font.setFamily(QStringLiteral("NSimSun"));
        font.setPointSize(10);
        label_9->setFont(font);
        alarmTime_3 = new QTimeEdit(groupBox);
        alarmTime_3->setObjectName(QStringLiteral("alarmTime_3"));
        alarmTime_3->setGeometry(QRect(490, 260, 118, 22));
        dd_5 = new QLineEdit(groupBox);
        dd_5->setObjectName(QStringLiteral("dd_5"));
        dd_5->setGeometry(QRect(150, 350, 301, 41));
        alarmTime_8 = new QTimeEdit(groupBox);
        alarmTime_8->setObjectName(QStringLiteral("alarmTime_8"));
        alarmTime_8->setGeometry(QRect(490, 520, 118, 22));
        dd_7 = new QLineEdit(groupBox);
        dd_7->setObjectName(QStringLiteral("dd_7"));
        dd_7->setGeometry(QRect(150, 450, 301, 41));
        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(75, 460, 71, 21));
        label_7->setFont(font);
        checkBox_3 = new QCheckBox(groupBox);
        checkBox_3->setObjectName(QStringLiteral("checkBox_3"));
        checkBox_3->setGeometry(QRect(650, 260, 191, 20));
        dd = new QLineEdit(groupBox);
        dd->setObjectName(QStringLiteral("dd"));
        dd->setGeometry(QRect(150, 150, 301, 41));
        checkBox_8 = new QCheckBox(groupBox);
        checkBox_8->setObjectName(QStringLiteral("checkBox_8"));
        checkBox_8->setGeometry(QRect(650, 520, 181, 20));
        checkBox = new QCheckBox(groupBox);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(650, 160, 181, 20));
        checkBox_7 = new QCheckBox(groupBox);
        checkBox_7->setObjectName(QStringLiteral("checkBox_7"));
        checkBox_7->setGeometry(QRect(650, 460, 201, 20));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(75, 310, 71, 21));
        label_4->setFont(font);
        checkBox_9 = new QCheckBox(groupBox);
        checkBox_9->setObjectName(QStringLiteral("checkBox_9"));
        checkBox_9->setGeometry(QRect(650, 570, 171, 20));
        dd_9 = new QLineEdit(groupBox);
        dd_9->setObjectName(QStringLiteral("dd_9"));
        dd_9->setGeometry(QRect(150, 560, 301, 41));
        dd_8 = new QLineEdit(groupBox);
        dd_8->setObjectName(QStringLiteral("dd_8"));
        dd_8->setGeometry(QRect(150, 510, 301, 41));
        alarmTime_5 = new QTimeEdit(groupBox);
        alarmTime_5->setObjectName(QStringLiteral("alarmTime_5"));
        alarmTime_5->setGeometry(QRect(490, 360, 118, 22));
        dd_4 = new QLineEdit(groupBox);
        dd_4->setObjectName(QStringLiteral("dd_4"));
        dd_4->setGeometry(QRect(150, 300, 301, 41));
        dd_6 = new QLineEdit(groupBox);
        dd_6->setObjectName(QStringLiteral("dd_6"));
        dd_6->setGeometry(QRect(150, 400, 301, 41));
        alarmTime = new QTimeEdit(groupBox);
        alarmTime->setObjectName(QStringLiteral("alarmTime"));
        alarmTime->setGeometry(QRect(490, 160, 118, 22));
        dd_3 = new QLineEdit(groupBox);
        dd_3->setObjectName(QStringLiteral("dd_3"));
        dd_3->setGeometry(QRect(150, 250, 301, 41));
        alarmTime_9 = new QTimeEdit(groupBox);
        alarmTime_9->setObjectName(QStringLiteral("alarmTime_9"));
        alarmTime_9->setGeometry(QRect(490, 570, 118, 22));
        checkBox_2 = new QCheckBox(groupBox);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));
        checkBox_2->setGeometry(QRect(650, 210, 201, 20));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(75, 410, 71, 21));
        label_6->setFont(font);
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(75, 210, 71, 21));
        label_2->setFont(font);
        alarmTime_4 = new QTimeEdit(groupBox);
        alarmTime_4->setObjectName(QStringLiteral("alarmTime_4"));
        alarmTime_4->setGeometry(QRect(490, 310, 118, 22));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(75, 360, 71, 21));
        label_5->setFont(font);
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(75, 260, 71, 21));
        label_3->setFont(font);
        alarmTime_2 = new QTimeEdit(groupBox);
        alarmTime_2->setObjectName(QStringLiteral("alarmTime_2"));
        alarmTime_2->setGeometry(QRect(490, 210, 118, 22));
        checkBox_5 = new QCheckBox(groupBox);
        checkBox_5->setObjectName(QStringLiteral("checkBox_5"));
        checkBox_5->setGeometry(QRect(650, 360, 181, 20));
        alarmTime_7 = new QTimeEdit(groupBox);
        alarmTime_7->setObjectName(QStringLiteral("alarmTime_7"));
        alarmTime_7->setGeometry(QRect(490, 460, 118, 22));
        dd_2 = new QLineEdit(groupBox);
        dd_2->setObjectName(QStringLiteral("dd_2"));
        dd_2->setGeometry(QRect(150, 200, 301, 41));
        alarmTime_6 = new QTimeEdit(groupBox);
        alarmTime_6->setObjectName(QStringLiteral("alarmTime_6"));
        alarmTime_6->setGeometry(QRect(490, 410, 118, 22));
        label_10 = new QLabel(groupBox);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(40, 70, 201, 41));
        QFont font1;
        font1.setFamily(QStringLiteral("SimSun-ExtB"));
        font1.setPointSize(28);
        label_10->setFont(font1);
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(75, 160, 71, 21));
        label->setFont(font);
        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(75, 520, 71, 21));
        label_8->setFont(font);
        timeLabel = new QLabel(groupBox);
        timeLabel->setObjectName(QStringLiteral("timeLabel"));
        timeLabel->setGeometry(QRect(320, 50, 351, 71));
        QFont font2;
        font2.setFamily(QStringLiteral("Palatino Linotype"));
        font2.setPointSize(48);
        timeLabel->setFont(font2);
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(240, 630, 361, 31));

        retranslateUi(alarme);

        QMetaObject::connectSlotsByName(alarme);
    } // setupUi

    void retranslateUi(QDialog *alarme)
    {
        alarme->setWindowTitle(QApplication::translate("alarme", "Dialog", Q_NULLPTR));
        groupBox->setTitle(QString());
        checkBox_6->setText(QApplication::translate("alarme", "set alarm 6", Q_NULLPTR));
        checkBox_4->setText(QApplication::translate("alarme", "set alarm 4", Q_NULLPTR));
        label_9->setText(QApplication::translate("alarme", "Alarme :", Q_NULLPTR));
        dd_5->setText(QApplication::translate("alarme", "SS", Q_NULLPTR));
        dd_7->setText(QApplication::translate("alarme", "Saa", Q_NULLPTR));
        label_7->setText(QApplication::translate("alarme", "Alarme :", Q_NULLPTR));
        checkBox_3->setText(QApplication::translate("alarme", "set alarm 3", Q_NULLPTR));
        dd->setText(QApplication::translate("alarme", "CHECK WORK", Q_NULLPTR));
        checkBox_8->setText(QApplication::translate("alarme", "set alarm 8", Q_NULLPTR));
        checkBox->setText(QApplication::translate("alarme", "set alarm 1", Q_NULLPTR));
        checkBox_7->setText(QApplication::translate("alarme", "set alarm 7", Q_NULLPTR));
        label_4->setText(QApplication::translate("alarme", "Alarme :", Q_NULLPTR));
        checkBox_9->setText(QApplication::translate("alarme", "set alarm 9", Q_NULLPTR));
        dd_9->setText(QApplication::translate("alarme", "dqs", Q_NULLPTR));
        dd_8->setText(QApplication::translate("alarme", "dqd", Q_NULLPTR));
        dd_4->setText(QApplication::translate("alarme", "FAS", Q_NULLPTR));
        dd_6->setText(QApplication::translate("alarme", "ZZ", Q_NULLPTR));
        dd_3->setText(QApplication::translate("alarme", "DDD", Q_NULLPTR));
        checkBox_2->setText(QApplication::translate("alarme", "set alarm 2", Q_NULLPTR));
        label_6->setText(QApplication::translate("alarme", "Alarme :", Q_NULLPTR));
        label_2->setText(QApplication::translate("alarme", "Alarme :", Q_NULLPTR));
        label_5->setText(QApplication::translate("alarme", "Alarme :", Q_NULLPTR));
        label_3->setText(QApplication::translate("alarme", "Alarme :", Q_NULLPTR));
        checkBox_5->setText(QApplication::translate("alarme", "set alarm 5", Q_NULLPTR));
        dd_2->setText(QApplication::translate("alarme", "POUSE", Q_NULLPTR));
        label_10->setText(QApplication::translate("alarme", "Alarme :", Q_NULLPTR));
        label->setText(QApplication::translate("alarme", "Alarme :", Q_NULLPTR));
        label_8->setText(QApplication::translate("alarme", "Alarme :", Q_NULLPTR));
        timeLabel->setText(QString());
        pushButton->setText(QApplication::translate("alarme", "return", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class alarme: public Ui_alarme {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALARME_H
