/********************************************************************************
** Form generated from reading UI file 'personnelle.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PERSONNELLE_H
#define UI_PERSONNELLE_H

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

class Ui_personnelle
{
public:
    QGroupBox *groupBox;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_8;
    QPushButton *pushButton_6;
    QPushButton *pushButton_5;
    QPushButton *pushButton_4;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QLabel *label;

    void setupUi(QDialog *personnelle)
    {
        if (personnelle->objectName().isEmpty())
            personnelle->setObjectName(QStringLiteral("personnelle"));
        personnelle->resize(1500, 800);
        personnelle->setStyleSheet(QStringLiteral("background-color: #E3E4F2;"));
        groupBox = new QGroupBox(personnelle);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(0, 0, 261, 801));
        groupBox->setStyleSheet(QLatin1String("background-color :#ABADD8 ; \n"
"border-top-right-radius : 40px ; \n"
""));
        verticalLayoutWidget = new QWidget(groupBox);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 80, 261, 738));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(verticalLayoutWidget->sizePolicy().hasHeightForWidth());
        verticalLayoutWidget->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_8 = new QPushButton(verticalLayoutWidget);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_8->sizePolicy().hasHeightForWidth());
        pushButton_8->setSizePolicy(sizePolicy1);
        pushButton_8->setStyleSheet(QLatin1String("background-color: #E3E4F2;\n"
"  font-family: Arial, sans-serif; \n"
"  font-weight: bold; \n"
"    font-size: 20px; \n"
"border : none ; \n"
"border-radius : 0 px ;\n"
"color : #4D53A8 ; "));
        QIcon icon;
        icon.addFile(QStringLiteral(":/img/images/personnel.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_8->setIcon(icon);
        pushButton_8->setIconSize(QSize(50, 100));

        verticalLayout->addWidget(pushButton_8);

        pushButton_6 = new QPushButton(verticalLayoutWidget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        sizePolicy1.setHeightForWidth(pushButton_6->sizePolicy().hasHeightForWidth());
        pushButton_6->setSizePolicy(sizePolicy1);
        pushButton_6->setStyleSheet(QLatin1String("QPushButton{\n"
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
"}\n"
"\n"
""));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/img/images/programme.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_6->setIcon(icon1);
        pushButton_6->setIconSize(QSize(50, 100));

        verticalLayout->addWidget(pushButton_6);

        pushButton_5 = new QPushButton(verticalLayoutWidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        sizePolicy1.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy1);
        pushButton_5->setStyleSheet(QLatin1String("QPushButton{\n"
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
        pushButton_5->setIcon(icon2);
        pushButton_5->setIconSize(QSize(50, 100));

        verticalLayout->addWidget(pushButton_5);

        pushButton_4 = new QPushButton(verticalLayoutWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        sizePolicy1.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy1);
        pushButton_4->setStyleSheet(QLatin1String("QPushButton{\n"
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
        pushButton_4->setIcon(icon3);
        pushButton_4->setIconSize(QSize(50, 100));

        verticalLayout->addWidget(pushButton_4);

        pushButton_3 = new QPushButton(verticalLayoutWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        sizePolicy1.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy1);
        pushButton_3->setStyleSheet(QLatin1String("QPushButton{\n"
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
        pushButton_3->setIcon(icon4);
        pushButton_3->setIconSize(QSize(50, 100));

        verticalLayout->addWidget(pushButton_3);

        pushButton_2 = new QPushButton(verticalLayoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        sizePolicy1.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy1);
        pushButton_2->setStyleSheet(QLatin1String("QPushButton{\n"
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
        pushButton_2->setIcon(icon5);
        pushButton_2->setIconSize(QSize(50, 100));

        verticalLayout->addWidget(pushButton_2);

        pushButton = new QPushButton(verticalLayoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        sizePolicy1.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy1);
        pushButton->setStyleSheet(QLatin1String("QPushButton{\n"
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
        pushButton->setIcon(icon6);
        pushButton->setIconSize(QSize(50, 100));

        verticalLayout->addWidget(pushButton);

        label = new QLabel(groupBox);
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
"    "));

        retranslateUi(personnelle);
        QObject::connect(pushButton, SIGNAL(clicked()), personnelle, SLOT(close()));

        QMetaObject::connectSlotsByName(personnelle);
    } // setupUi

    void retranslateUi(QDialog *personnelle)
    {
        personnelle->setWindowTitle(QApplication::translate("personnelle", "Dialog", Q_NULLPTR));
        groupBox->setTitle(QString());
        pushButton_8->setText(QApplication::translate("personnelle", " Personnels", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("personnelle", "Programmes", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("personnelle", " Publicit\303\251s ", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("personnelle", " Auditeurs ", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("personnelle", "Abonnements ", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("personnelle", "Studios", Q_NULLPTR));
        pushButton->setText(QApplication::translate("personnelle", "Quitter", Q_NULLPTR));
        label->setText(QApplication::translate("personnelle", "Dashboard", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class personnelle: public Ui_personnelle {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PERSONNELLE_H
