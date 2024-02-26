/********************************************************************************
** Form generated from reading UI file 'abonnement.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABONNEMENT_H
#define UI_ABONNEMENT_H

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

class Ui_abonnement
{
public:
    QGroupBox *groupBox;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_30;
    QPushButton *pushButton_31;
    QPushButton *pushButton_32;
    QPushButton *pushButton_33;
    QPushButton *pushButton_34;
    QPushButton *pushButton_35;
    QPushButton *pushButton_36;
    QLabel *label;

    void setupUi(QDialog *abonnement)
    {
        if (abonnement->objectName().isEmpty())
            abonnement->setObjectName(QStringLiteral("abonnement"));
        abonnement->resize(1500, 800);
        abonnement->setStyleSheet(QStringLiteral("background-color: #E3E4F2;"));
        groupBox = new QGroupBox(abonnement);
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
        pushButton_30 = new QPushButton(verticalLayoutWidget);
        pushButton_30->setObjectName(QStringLiteral("pushButton_30"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_30->sizePolicy().hasHeightForWidth());
        pushButton_30->setSizePolicy(sizePolicy1);
        pushButton_30->setStyleSheet(QLatin1String("\n"
"QPushButton{\n"
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
        QIcon icon;
        icon.addFile(QStringLiteral(":/img/images/personnel.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_30->setIcon(icon);
        pushButton_30->setIconSize(QSize(50, 100));

        verticalLayout->addWidget(pushButton_30);

        pushButton_31 = new QPushButton(verticalLayoutWidget);
        pushButton_31->setObjectName(QStringLiteral("pushButton_31"));
        sizePolicy1.setHeightForWidth(pushButton_31->sizePolicy().hasHeightForWidth());
        pushButton_31->setSizePolicy(sizePolicy1);
        pushButton_31->setStyleSheet(QLatin1String("QPushButton{\n"
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
        pushButton_31->setIcon(icon1);
        pushButton_31->setIconSize(QSize(50, 100));

        verticalLayout->addWidget(pushButton_31);

        pushButton_32 = new QPushButton(verticalLayoutWidget);
        pushButton_32->setObjectName(QStringLiteral("pushButton_32"));
        sizePolicy1.setHeightForWidth(pushButton_32->sizePolicy().hasHeightForWidth());
        pushButton_32->setSizePolicy(sizePolicy1);
        pushButton_32->setStyleSheet(QLatin1String("QPushButton{\n"
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
        pushButton_32->setIcon(icon2);
        pushButton_32->setIconSize(QSize(50, 100));

        verticalLayout->addWidget(pushButton_32);

        pushButton_33 = new QPushButton(verticalLayoutWidget);
        pushButton_33->setObjectName(QStringLiteral("pushButton_33"));
        sizePolicy1.setHeightForWidth(pushButton_33->sizePolicy().hasHeightForWidth());
        pushButton_33->setSizePolicy(sizePolicy1);
        pushButton_33->setStyleSheet(QLatin1String("QPushButton{\n"
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
        pushButton_33->setIcon(icon3);
        pushButton_33->setIconSize(QSize(50, 100));

        verticalLayout->addWidget(pushButton_33);

        pushButton_34 = new QPushButton(verticalLayoutWidget);
        pushButton_34->setObjectName(QStringLiteral("pushButton_34"));
        sizePolicy1.setHeightForWidth(pushButton_34->sizePolicy().hasHeightForWidth());
        pushButton_34->setSizePolicy(sizePolicy1);
        pushButton_34->setStyleSheet(QLatin1String("background-color: #E3E4F2;\n"
"  font-family: Arial, sans-serif; \n"
"  font-weight: bold; \n"
"    font-size: 20px; \n"
"border : none ; \n"
"border-radius : 0 px ;\n"
"color : #4D53A8 ; "));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/img/images/subscribe.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_34->setIcon(icon4);
        pushButton_34->setIconSize(QSize(50, 100));

        verticalLayout->addWidget(pushButton_34);

        pushButton_35 = new QPushButton(verticalLayoutWidget);
        pushButton_35->setObjectName(QStringLiteral("pushButton_35"));
        sizePolicy1.setHeightForWidth(pushButton_35->sizePolicy().hasHeightForWidth());
        pushButton_35->setSizePolicy(sizePolicy1);
        pushButton_35->setStyleSheet(QLatin1String("QPushButton{\n"
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
        pushButton_35->setIcon(icon5);
        pushButton_35->setIconSize(QSize(50, 100));

        verticalLayout->addWidget(pushButton_35);

        pushButton_36 = new QPushButton(verticalLayoutWidget);
        pushButton_36->setObjectName(QStringLiteral("pushButton_36"));
        sizePolicy1.setHeightForWidth(pushButton_36->sizePolicy().hasHeightForWidth());
        pushButton_36->setSizePolicy(sizePolicy1);
        pushButton_36->setStyleSheet(QLatin1String("QPushButton{\n"
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
        pushButton_36->setIcon(icon6);
        pushButton_36->setIconSize(QSize(50, 100));

        verticalLayout->addWidget(pushButton_36);

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

        retranslateUi(abonnement);
        QObject::connect(pushButton_36, SIGNAL(clicked()), abonnement, SLOT(close()));

        QMetaObject::connectSlotsByName(abonnement);
    } // setupUi

    void retranslateUi(QDialog *abonnement)
    {
        abonnement->setWindowTitle(QApplication::translate("abonnement", "Dialog", Q_NULLPTR));
        groupBox->setTitle(QString());
        pushButton_30->setText(QApplication::translate("abonnement", " Personnels", Q_NULLPTR));
        pushButton_31->setText(QApplication::translate("abonnement", "Programmes", Q_NULLPTR));
        pushButton_32->setText(QApplication::translate("abonnement", " Publicit\303\251s ", Q_NULLPTR));
        pushButton_33->setText(QApplication::translate("abonnement", " Auditeurs ", Q_NULLPTR));
        pushButton_34->setText(QApplication::translate("abonnement", "Abonnements ", Q_NULLPTR));
        pushButton_35->setText(QApplication::translate("abonnement", "Studios", Q_NULLPTR));
        pushButton_36->setText(QApplication::translate("abonnement", "Quitter", Q_NULLPTR));
        label->setText(QApplication::translate("abonnement", "Dashboard", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class abonnement: public Ui_abonnement {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABONNEMENT_H
