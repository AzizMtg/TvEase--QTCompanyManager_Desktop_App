/********************************************************************************
** Form generated from reading UI file 'auditeur.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUDITEUR_H
#define UI_AUDITEUR_H

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

class Ui_auditeur
{
public:
    QGroupBox *groupBox_2;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton_23;
    QPushButton *pushButton_24;
    QPushButton *pushButton_25;
    QPushButton *pushButton_26;
    QPushButton *pushButton_27;
    QPushButton *pushButton_28;
    QPushButton *pushButton_29;
    QLabel *label;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *tab_3;
    QWidget *tab_4;
    QWidget *tab_2;

    void setupUi(QDialog *auditeur)
    {
        if (auditeur->objectName().isEmpty())
            auditeur->setObjectName(QStringLiteral("auditeur"));
        auditeur->resize(1500, 800);
        auditeur->setStyleSheet(QStringLiteral("background-color: #E3E4F2;"));
        groupBox_2 = new QGroupBox(auditeur);
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
        pushButton_23 = new QPushButton(verticalLayoutWidget_2);
        pushButton_23->setObjectName(QStringLiteral("pushButton_23"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_23->sizePolicy().hasHeightForWidth());
        pushButton_23->setSizePolicy(sizePolicy1);
        pushButton_23->setStyleSheet(QLatin1String("QPushButton{\n"
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
        pushButton_23->setIcon(icon);
        pushButton_23->setIconSize(QSize(50, 100));

        verticalLayout_2->addWidget(pushButton_23);

        pushButton_24 = new QPushButton(verticalLayoutWidget_2);
        pushButton_24->setObjectName(QStringLiteral("pushButton_24"));
        sizePolicy1.setHeightForWidth(pushButton_24->sizePolicy().hasHeightForWidth());
        pushButton_24->setSizePolicy(sizePolicy1);
        pushButton_24->setStyleSheet(QLatin1String("QPushButton{\n"
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
        pushButton_24->setIcon(icon1);
        pushButton_24->setIconSize(QSize(50, 100));

        verticalLayout_2->addWidget(pushButton_24);

        pushButton_25 = new QPushButton(verticalLayoutWidget_2);
        pushButton_25->setObjectName(QStringLiteral("pushButton_25"));
        sizePolicy1.setHeightForWidth(pushButton_25->sizePolicy().hasHeightForWidth());
        pushButton_25->setSizePolicy(sizePolicy1);
        pushButton_25->setStyleSheet(QLatin1String("QPushButton{\n"
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
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/img/images/ad.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_25->setIcon(icon2);
        pushButton_25->setIconSize(QSize(50, 100));

        verticalLayout_2->addWidget(pushButton_25);

        pushButton_26 = new QPushButton(verticalLayoutWidget_2);
        pushButton_26->setObjectName(QStringLiteral("pushButton_26"));
        sizePolicy1.setHeightForWidth(pushButton_26->sizePolicy().hasHeightForWidth());
        pushButton_26->setSizePolicy(sizePolicy1);
        pushButton_26->setStyleSheet(QLatin1String("\n"
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
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/img/images/people.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_26->setIcon(icon3);
        pushButton_26->setIconSize(QSize(50, 100));

        verticalLayout_2->addWidget(pushButton_26);

        pushButton_27 = new QPushButton(verticalLayoutWidget_2);
        pushButton_27->setObjectName(QStringLiteral("pushButton_27"));
        sizePolicy1.setHeightForWidth(pushButton_27->sizePolicy().hasHeightForWidth());
        pushButton_27->setSizePolicy(sizePolicy1);
        pushButton_27->setStyleSheet(QLatin1String("QPushButton{\n"
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
        pushButton_27->setIcon(icon4);
        pushButton_27->setIconSize(QSize(50, 100));

        verticalLayout_2->addWidget(pushButton_27);

        pushButton_28 = new QPushButton(verticalLayoutWidget_2);
        pushButton_28->setObjectName(QStringLiteral("pushButton_28"));
        sizePolicy1.setHeightForWidth(pushButton_28->sizePolicy().hasHeightForWidth());
        pushButton_28->setSizePolicy(sizePolicy1);
        pushButton_28->setStyleSheet(QLatin1String("QPushButton{\n"
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
        pushButton_28->setIcon(icon5);
        pushButton_28->setIconSize(QSize(50, 100));

        verticalLayout_2->addWidget(pushButton_28);

        pushButton_29 = new QPushButton(verticalLayoutWidget_2);
        pushButton_29->setObjectName(QStringLiteral("pushButton_29"));
        sizePolicy1.setHeightForWidth(pushButton_29->sizePolicy().hasHeightForWidth());
        pushButton_29->setSizePolicy(sizePolicy1);
        pushButton_29->setStyleSheet(QLatin1String("QPushButton{\n"
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
        pushButton_29->setIcon(icon6);
        pushButton_29->setIconSize(QSize(50, 100));

        verticalLayout_2->addWidget(pushButton_29);

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
        tabWidget = new QTabWidget(auditeur);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(310, 50, 1251, 641));
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

        retranslateUi(auditeur);
        QObject::connect(pushButton_29, SIGNAL(clicked()), auditeur, SLOT(close()));

        tabWidget->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(auditeur);
    } // setupUi

    void retranslateUi(QDialog *auditeur)
    {
        auditeur->setWindowTitle(QApplication::translate("auditeur", "Dialog", Q_NULLPTR));
        groupBox_2->setTitle(QString());
        pushButton_23->setText(QApplication::translate("auditeur", " Personnels", Q_NULLPTR));
        pushButton_24->setText(QApplication::translate("auditeur", "Programmes", Q_NULLPTR));
        pushButton_25->setText(QApplication::translate("auditeur", " Publicit\303\251s ", Q_NULLPTR));
        pushButton_26->setText(QApplication::translate("auditeur", " Auditeurs ", Q_NULLPTR));
        pushButton_27->setText(QApplication::translate("auditeur", "Abonnements ", Q_NULLPTR));
        pushButton_28->setText(QApplication::translate("auditeur", "Studios", Q_NULLPTR));
        pushButton_29->setText(QApplication::translate("auditeur", "Quitter", Q_NULLPTR));
        label->setText(QApplication::translate("auditeur", "Dashboard", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("auditeur", "Afficher", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("auditeur", "Ajouter", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("auditeur", "Modifier", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("auditeur", "Supprimer", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class auditeur: public Ui_auditeur {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUDITEUR_H
