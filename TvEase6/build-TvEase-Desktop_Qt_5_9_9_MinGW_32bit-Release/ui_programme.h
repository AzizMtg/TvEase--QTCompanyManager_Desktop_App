/********************************************************************************
** Form generated from reading UI file 'programme.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROGRAMME_H
#define UI_PROGRAMME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_programme
{
public:
    QGroupBox *groupBox_2;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QPushButton *pushButton_11;
    QPushButton *pushButton_12;
    QPushButton *pushButton_13;
    QPushButton *pushButton_14;
    QPushButton *pushButton_15;
    QLabel *label;

    void setupUi(QDialog *programme)
    {
        if (programme->objectName().isEmpty())
            programme->setObjectName(QStringLiteral("programme"));
        programme->resize(1500, 800);
        programme->setStyleSheet(QStringLiteral("background-color: #E3E4F2;"));
        groupBox_2 = new QGroupBox(programme);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(0, 0, 261, 801));
        groupBox_2->setStyleSheet(QLatin1String("background-color :#ABADD8 ; \n"
"border-top-right-radius : 40px ; \n"
""));
        verticalLayoutWidget_2 = new QWidget(groupBox_2);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(0, 80, 261, 740));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(verticalLayoutWidget_2->sizePolicy().hasHeightForWidth());
        verticalLayoutWidget_2->setSizePolicy(sizePolicy);
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton_9 = new QPushButton(verticalLayoutWidget_2);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_9->sizePolicy().hasHeightForWidth());
        pushButton_9->setSizePolicy(sizePolicy1);
        pushButton_9->setStyleSheet(QLatin1String("QPushButton{\n"
"background-color: transparent;\n"
"    font-family: Arial, sans-serif; \n"
"    font-weight: bold; \n"
"    font-size: 20px; \n"
"border : none ; \n"
"border-radius : 0 px ;\n"
"color : #4D53A8 ; \n"
"\n"
"}\n"
"QPushButton:hover{\n"
"background-color: #E3E4F2;\n"
"border:none ; \n"
" \n"
"}\n"
""));
        QIcon icon;
        icon.addFile(QStringLiteral(":/img/images/personnel.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_9->setIcon(icon);
        pushButton_9->setIconSize(QSize(50, 100));

        verticalLayout_2->addWidget(pushButton_9);

        pushButton_10 = new QPushButton(verticalLayoutWidget_2);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        sizePolicy1.setHeightForWidth(pushButton_10->sizePolicy().hasHeightForWidth());
        pushButton_10->setSizePolicy(sizePolicy1);
        pushButton_10->setStyleSheet(QLatin1String("\n"
"background-color: #E3E4F2;\n"
"  font-family: Arial, sans-serif; \n"
"  font-weight: bold; \n"
"    font-size: 20px; \n"
"border : none ; \n"
"border-radius : 0 px ;\n"
"color : #4D53A8 ; \n"
"\n"
""));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/img/images/programme.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_10->setIcon(icon1);
        pushButton_10->setIconSize(QSize(50, 100));

        verticalLayout_2->addWidget(pushButton_10);

        pushButton_11 = new QPushButton(verticalLayoutWidget_2);
        pushButton_11->setObjectName(QStringLiteral("pushButton_11"));
        sizePolicy1.setHeightForWidth(pushButton_11->sizePolicy().hasHeightForWidth());
        pushButton_11->setSizePolicy(sizePolicy1);
        pushButton_11->setStyleSheet(QLatin1String("QPushButton{\n"
"background-color: transparent;\n"
"    font-family: Arial, sans-serif; \n"
"    font-weight: bold; \n"
"    font-size: 20px; \n"
"border : none ; \n"
"border-radius : 0 px ;\n"
"color : #4D53A8 ; \n"
"}\n"
"QPushButton:hover{\n"
"background-color: #E3E4F2;\n"
" \n"
"}"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/img/images/ad.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_11->setIcon(icon2);
        pushButton_11->setIconSize(QSize(50, 100));

        verticalLayout_2->addWidget(pushButton_11);

        pushButton_12 = new QPushButton(verticalLayoutWidget_2);
        pushButton_12->setObjectName(QStringLiteral("pushButton_12"));
        sizePolicy1.setHeightForWidth(pushButton_12->sizePolicy().hasHeightForWidth());
        pushButton_12->setSizePolicy(sizePolicy1);
        pushButton_12->setStyleSheet(QLatin1String("QPushButton{\n"
"background-color: transparent;\n"
"    font-family: Arial, sans-serif; \n"
"    font-weight: bold; \n"
"    font-size: 20px; \n"
"border : none ; \n"
"border-radius : 0px ;\n"
"color : #4D53A8 ; \n"
"}\n"
"QPushButton:hover{\n"
"background-color: #E3E4F2;\n"
" \n"
"}"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/img/images/people.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_12->setIcon(icon3);
        pushButton_12->setIconSize(QSize(50, 100));

        verticalLayout_2->addWidget(pushButton_12);

        pushButton_13 = new QPushButton(verticalLayoutWidget_2);
        pushButton_13->setObjectName(QStringLiteral("pushButton_13"));
        sizePolicy1.setHeightForWidth(pushButton_13->sizePolicy().hasHeightForWidth());
        pushButton_13->setSizePolicy(sizePolicy1);
        pushButton_13->setStyleSheet(QLatin1String("QPushButton{\n"
"background-color: transparent;\n"
"    font-family: Arial, sans-serif; \n"
"    font-weight: bold; \n"
"    font-size: 20px; \n"
"border : none ; \n"
"border-radius : 0 px ;\n"
"color : #4D53A8 ; \n"
"}\n"
"QPushButton:hover{\n"
"background-color: #E3E4F2;\n"
" \n"
"}"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/img/images/subscribe.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_13->setIcon(icon4);
        pushButton_13->setIconSize(QSize(50, 100));

        verticalLayout_2->addWidget(pushButton_13);

        pushButton_14 = new QPushButton(verticalLayoutWidget_2);
        pushButton_14->setObjectName(QStringLiteral("pushButton_14"));
        sizePolicy1.setHeightForWidth(pushButton_14->sizePolicy().hasHeightForWidth());
        pushButton_14->setSizePolicy(sizePolicy1);
        pushButton_14->setStyleSheet(QLatin1String("QPushButton{\n"
"background-color: transparent;\n"
"    font-family: Arial, sans-serif; \n"
"    font-weight: bold; \n"
"    font-size: 20px; \n"
"border : none ; \n"
"border-radius : 0 px ;\n"
"color : #4D53A8 ; \n"
"}\n"
"QPushButton:hover{\n"
"background-color: #E3E4F2;\n"
" \n"
"}"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/img/images/studio.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_14->setIcon(icon5);
        pushButton_14->setIconSize(QSize(50, 100));

        verticalLayout_2->addWidget(pushButton_14);

        pushButton_15 = new QPushButton(verticalLayoutWidget_2);
        pushButton_15->setObjectName(QStringLiteral("pushButton_15"));
        sizePolicy1.setHeightForWidth(pushButton_15->sizePolicy().hasHeightForWidth());
        pushButton_15->setSizePolicy(sizePolicy1);
        pushButton_15->setStyleSheet(QLatin1String("QPushButton{\n"
"background-color: transparent;\n"
"    font-family: Arial, sans-serif; \n"
"    font-weight: bold; \n"
"    font-size: 20px; \n"
"border : none ; \n"
"border-radius : 0 px ;\n"
"color : #4D53A8 ; \n"
"}\n"
"QPushButton:hover{\n"
"background-color: #E3E4F2;\n"
" \n"
"}"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/img/images/button.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_15->setIcon(icon6);
        pushButton_15->setIconSize(QSize(50, 100));

        verticalLayout_2->addWidget(pushButton_15);

        label = new QLabel(groupBox_2);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 20, 171, 31));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        label->setFont(font);
        label->setStyleSheet(QLatin1String("border : none ;\n"
"color : #333770 ;\n"
"border:none ; \n"
"    "));

        retranslateUi(programme);
        QObject::connect(pushButton_15, SIGNAL(clicked()), programme, SLOT(close()));

        QMetaObject::connectSlotsByName(programme);
    } // setupUi

    void retranslateUi(QDialog *programme)
    {
        programme->setWindowTitle(QApplication::translate("programme", "Dialog", Q_NULLPTR));
        groupBox_2->setTitle(QString());
        pushButton_9->setText(QApplication::translate("programme", " Personnels", Q_NULLPTR));
        pushButton_10->setText(QApplication::translate("programme", "Programmes", Q_NULLPTR));
        pushButton_11->setText(QApplication::translate("programme", " Publicit\303\251s ", Q_NULLPTR));
        pushButton_12->setText(QApplication::translate("programme", " Auditeurs ", Q_NULLPTR));
        pushButton_13->setText(QApplication::translate("programme", "Abonnements ", Q_NULLPTR));
        pushButton_14->setText(QApplication::translate("programme", "Studios", Q_NULLPTR));
        pushButton_15->setText(QApplication::translate("programme", "Quitter", Q_NULLPTR));
        label->setText(QApplication::translate("programme", "Dashboard", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class programme: public Ui_programme {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROGRAMME_H
