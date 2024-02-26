/********************************************************************************
** Form generated from reading UI file 'studio.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDIO_H
#define UI_STUDIO_H

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

class Ui_studio
{
public:
    QGroupBox *groupBox;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_37;
    QPushButton *pushButton_38;
    QPushButton *pushButton_39;
    QPushButton *pushButton_40;
    QPushButton *pushButton_41;
    QPushButton *pushButton_42;
    QPushButton *pushButton_43;
    QLabel *label;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *tab_3;
    QWidget *tab_4;
    QWidget *tab_2;

    void setupUi(QDialog *studio)
    {
        if (studio->objectName().isEmpty())
            studio->setObjectName(QStringLiteral("studio"));
        studio->resize(1500, 800);
        studio->setStyleSheet(QStringLiteral("background-color: #E3E4F2;"));
        groupBox = new QGroupBox(studio);
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
        pushButton_37 = new QPushButton(verticalLayoutWidget);
        pushButton_37->setObjectName(QStringLiteral("pushButton_37"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_37->sizePolicy().hasHeightForWidth());
        pushButton_37->setSizePolicy(sizePolicy1);
        pushButton_37->setStyleSheet(QLatin1String("\n"
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
        pushButton_37->setIcon(icon);
        pushButton_37->setIconSize(QSize(50, 100));

        verticalLayout->addWidget(pushButton_37);

        pushButton_38 = new QPushButton(verticalLayoutWidget);
        pushButton_38->setObjectName(QStringLiteral("pushButton_38"));
        sizePolicy1.setHeightForWidth(pushButton_38->sizePolicy().hasHeightForWidth());
        pushButton_38->setSizePolicy(sizePolicy1);
        pushButton_38->setStyleSheet(QLatin1String("QPushButton{\n"
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
        pushButton_38->setIcon(icon1);
        pushButton_38->setIconSize(QSize(50, 100));

        verticalLayout->addWidget(pushButton_38);

        pushButton_39 = new QPushButton(verticalLayoutWidget);
        pushButton_39->setObjectName(QStringLiteral("pushButton_39"));
        sizePolicy1.setHeightForWidth(pushButton_39->sizePolicy().hasHeightForWidth());
        pushButton_39->setSizePolicy(sizePolicy1);
        pushButton_39->setStyleSheet(QLatin1String("QPushButton{\n"
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
        pushButton_39->setIcon(icon2);
        pushButton_39->setIconSize(QSize(50, 100));

        verticalLayout->addWidget(pushButton_39);

        pushButton_40 = new QPushButton(verticalLayoutWidget);
        pushButton_40->setObjectName(QStringLiteral("pushButton_40"));
        sizePolicy1.setHeightForWidth(pushButton_40->sizePolicy().hasHeightForWidth());
        pushButton_40->setSizePolicy(sizePolicy1);
        pushButton_40->setStyleSheet(QLatin1String("QPushButton{\n"
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
        pushButton_40->setIcon(icon3);
        pushButton_40->setIconSize(QSize(50, 100));

        verticalLayout->addWidget(pushButton_40);

        pushButton_41 = new QPushButton(verticalLayoutWidget);
        pushButton_41->setObjectName(QStringLiteral("pushButton_41"));
        sizePolicy1.setHeightForWidth(pushButton_41->sizePolicy().hasHeightForWidth());
        pushButton_41->setSizePolicy(sizePolicy1);
        pushButton_41->setStyleSheet(QLatin1String("\n"
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
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/img/images/subscribe.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_41->setIcon(icon4);
        pushButton_41->setIconSize(QSize(50, 100));

        verticalLayout->addWidget(pushButton_41);

        pushButton_42 = new QPushButton(verticalLayoutWidget);
        pushButton_42->setObjectName(QStringLiteral("pushButton_42"));
        sizePolicy1.setHeightForWidth(pushButton_42->sizePolicy().hasHeightForWidth());
        pushButton_42->setSizePolicy(sizePolicy1);
        pushButton_42->setStyleSheet(QLatin1String("background-color: #E3E4F2;\n"
"  font-family: Arial, sans-serif; \n"
"  font-weight: bold; \n"
"    font-size: 20px; \n"
"border : none ; \n"
"border-radius : 0 px ;\n"
"color : #4D53A8 ; "));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/img/images/studio.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_42->setIcon(icon5);
        pushButton_42->setIconSize(QSize(50, 100));

        verticalLayout->addWidget(pushButton_42);

        pushButton_43 = new QPushButton(verticalLayoutWidget);
        pushButton_43->setObjectName(QStringLiteral("pushButton_43"));
        sizePolicy1.setHeightForWidth(pushButton_43->sizePolicy().hasHeightForWidth());
        pushButton_43->setSizePolicy(sizePolicy1);
        pushButton_43->setStyleSheet(QLatin1String("QPushButton{\n"
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
        pushButton_43->setIcon(icon6);
        pushButton_43->setIconSize(QSize(50, 100));

        verticalLayout->addWidget(pushButton_43);

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
        tabWidget = new QTabWidget(studio);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(270, 50, 1251, 641));
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

        retranslateUi(studio);
        QObject::connect(pushButton_43, SIGNAL(clicked()), studio, SLOT(close()));

        tabWidget->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(studio);
    } // setupUi

    void retranslateUi(QDialog *studio)
    {
        studio->setWindowTitle(QApplication::translate("studio", "Dialog", Q_NULLPTR));
        groupBox->setTitle(QString());
        pushButton_37->setText(QApplication::translate("studio", " Personnels", Q_NULLPTR));
        pushButton_38->setText(QApplication::translate("studio", "Programmes", Q_NULLPTR));
        pushButton_39->setText(QApplication::translate("studio", " Publicit\303\251s ", Q_NULLPTR));
        pushButton_40->setText(QApplication::translate("studio", " Auditeurs ", Q_NULLPTR));
        pushButton_41->setText(QApplication::translate("studio", "Abonnements ", Q_NULLPTR));
        pushButton_42->setText(QApplication::translate("studio", "Studios", Q_NULLPTR));
        pushButton_43->setText(QApplication::translate("studio", "Quitter", Q_NULLPTR));
        label->setText(QApplication::translate("studio", "Dashboard", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("studio", "Afficher", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("studio", "Ajouter", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("studio", "Modifier", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("studio", "Supprimer", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class studio: public Ui_studio {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDIO_H
