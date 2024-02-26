/********************************************************************************
** Form generated from reading UI file 'publicite.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PUBLICITE_H
#define UI_PUBLICITE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_publicite
{
public:
    QGroupBox *groupBox_2;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton_16;
    QPushButton *pushButton_17;
    QPushButton *pushButton_18;
    QPushButton *pushButton_19;
    QPushButton *pushButton_20;
    QPushButton *pushButton_21;
    QPushButton *pushButton_22;
    QLabel *label;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *tab_3;
    QWidget *tab_4;
    QWidget *tab_2;

    void setupUi(QDialog *publicite)
    {
        if (publicite->objectName().isEmpty())
            publicite->setObjectName(QStringLiteral("publicite"));
        publicite->resize(1500, 800);
        publicite->setStyleSheet(QStringLiteral("background-color: #E3E4F2;"));
        groupBox_2 = new QGroupBox(publicite);
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
        pushButton_16 = new QPushButton(verticalLayoutWidget_2);
        pushButton_16->setObjectName(QStringLiteral("pushButton_16"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_16->sizePolicy().hasHeightForWidth());
        pushButton_16->setSizePolicy(sizePolicy1);
        pushButton_16->setStyleSheet(QLatin1String("QPushButton{\n"
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
        pushButton_16->setIcon(icon);
        pushButton_16->setIconSize(QSize(50, 100));

        verticalLayout_2->addWidget(pushButton_16);

        pushButton_17 = new QPushButton(verticalLayoutWidget_2);
        pushButton_17->setObjectName(QStringLiteral("pushButton_17"));
        sizePolicy1.setHeightForWidth(pushButton_17->sizePolicy().hasHeightForWidth());
        pushButton_17->setSizePolicy(sizePolicy1);
        pushButton_17->setStyleSheet(QLatin1String("QPushButton{\n"
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
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/img/images/programme.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_17->setIcon(icon1);
        pushButton_17->setIconSize(QSize(50, 100));

        verticalLayout_2->addWidget(pushButton_17);

        pushButton_18 = new QPushButton(verticalLayoutWidget_2);
        pushButton_18->setObjectName(QStringLiteral("pushButton_18"));
        sizePolicy1.setHeightForWidth(pushButton_18->sizePolicy().hasHeightForWidth());
        pushButton_18->setSizePolicy(sizePolicy1);
        pushButton_18->setStyleSheet(QLatin1String("\n"
"\n"
"background-color: #E3E4F2;\n"
"  font-family: Arial, sans-serif; \n"
"  font-weight: bold; \n"
"    font-size: 20px; \n"
"border : none ; \n"
"border-radius : 0 px ;\n"
"color : #4D53A8 ; \n"
"\n"
""));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/img/images/ad.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_18->setIcon(icon2);
        pushButton_18->setIconSize(QSize(50, 100));

        verticalLayout_2->addWidget(pushButton_18);

        pushButton_19 = new QPushButton(verticalLayoutWidget_2);
        pushButton_19->setObjectName(QStringLiteral("pushButton_19"));
        sizePolicy1.setHeightForWidth(pushButton_19->sizePolicy().hasHeightForWidth());
        pushButton_19->setSizePolicy(sizePolicy1);
        pushButton_19->setStyleSheet(QLatin1String("QPushButton{\n"
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
        pushButton_19->setIcon(icon3);
        pushButton_19->setIconSize(QSize(50, 100));

        verticalLayout_2->addWidget(pushButton_19);

        pushButton_20 = new QPushButton(verticalLayoutWidget_2);
        pushButton_20->setObjectName(QStringLiteral("pushButton_20"));
        sizePolicy1.setHeightForWidth(pushButton_20->sizePolicy().hasHeightForWidth());
        pushButton_20->setSizePolicy(sizePolicy1);
        pushButton_20->setStyleSheet(QLatin1String("QPushButton{\n"
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
        pushButton_20->setIcon(icon4);
        pushButton_20->setIconSize(QSize(50, 100));

        verticalLayout_2->addWidget(pushButton_20);

        pushButton_21 = new QPushButton(verticalLayoutWidget_2);
        pushButton_21->setObjectName(QStringLiteral("pushButton_21"));
        sizePolicy1.setHeightForWidth(pushButton_21->sizePolicy().hasHeightForWidth());
        pushButton_21->setSizePolicy(sizePolicy1);
        pushButton_21->setStyleSheet(QLatin1String("QPushButton{\n"
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
        pushButton_21->setIcon(icon5);
        pushButton_21->setIconSize(QSize(50, 100));

        verticalLayout_2->addWidget(pushButton_21);

        pushButton_22 = new QPushButton(verticalLayoutWidget_2);
        pushButton_22->setObjectName(QStringLiteral("pushButton_22"));
        sizePolicy1.setHeightForWidth(pushButton_22->sizePolicy().hasHeightForWidth());
        pushButton_22->setSizePolicy(sizePolicy1);
        pushButton_22->setStyleSheet(QLatin1String("QPushButton{\n"
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
        pushButton_22->setIcon(icon6);
        pushButton_22->setIconSize(QSize(50, 100));

        verticalLayout_2->addWidget(pushButton_22);

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
        tabWidget = new QTabWidget(publicite);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(300, 50, 1251, 641));
        tabWidget->setStyleSheet(QLatin1String("QTabWidget::pane {\n"
"    border-top: 2px solid #C2C7CB; /* Top border color */\n"
"    position: absolute;\n"
"    top: -0.5em;\n"
"border:none ; \n"
"\n"
"}\n"
"\n"
"QTabWidget::tab-bar {\n"
"    alignment: center;\n"
"\n"
"}\n"
"\n"
"QTabBar::tab {\n"
"    background-color: #ABADD8 ;  /* Background color of tabs */\n"
"    color: #000000; /* Text color of tabs */\n"
"    padding: 15px; /* Padding of tabs */\n"
"    border-top-left-radius: 4px; /* Rounded corners */\n"
"    border-top-right-radius: 4px;\n"
" margin-right : 75px ; \n"
"width:200px;\n"
"border-radius : 10px;\n"
"}\n"
"\n"
"QTabBar::tab:selected {\n"
"    background-color: #333770 ;  /* Background color of selected tab */\n"
"    color: #FFFFFF; /* Text color of selected tab */\n"
"}\n"
"\n"
"QTabBar::tab:hover {\n"
"}\n"
"\n"
"QPushButton {\n"
"    background-color: #4CAF50; /* Background color of button */\n"
"    color: #FFFFFF; /* Text color of button */\n"
"    padding: 8px; /* Padding of button */\n"
"    border: none; /* No border */\n"
""
                        "    border-radius: 4px; /* Rounded corners *\n"
"}"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        tabWidget->addTab(tab, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        tabWidget->addTab(tab_4, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tabWidget->addTab(tab_2, QString());

        retranslateUi(publicite);
        QObject::connect(pushButton_22, SIGNAL(clicked()), publicite, SLOT(close()));

        tabWidget->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(publicite);
    } // setupUi

    void retranslateUi(QDialog *publicite)
    {
        publicite->setWindowTitle(QApplication::translate("publicite", "Dialog", Q_NULLPTR));
        groupBox_2->setTitle(QString());
        pushButton_16->setText(QApplication::translate("publicite", " Personnels", Q_NULLPTR));
        pushButton_17->setText(QApplication::translate("publicite", "Programmes", Q_NULLPTR));
        pushButton_18->setText(QApplication::translate("publicite", " Publicit\303\251s ", Q_NULLPTR));
        pushButton_19->setText(QApplication::translate("publicite", " Auditeurs ", Q_NULLPTR));
        pushButton_20->setText(QApplication::translate("publicite", "Abonnements ", Q_NULLPTR));
        pushButton_21->setText(QApplication::translate("publicite", "Studios", Q_NULLPTR));
        pushButton_22->setText(QApplication::translate("publicite", "Quitter", Q_NULLPTR));
        label->setText(QApplication::translate("publicite", "Dashboard", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("publicite", "Afficher", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("publicite", "Ajouter", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("publicite", "Modifier", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("publicite", "Supprimer", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class publicite: public Ui_publicite {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PUBLICITE_H
