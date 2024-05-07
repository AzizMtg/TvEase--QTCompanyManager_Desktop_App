/********************************************************************************
** Form generated from reading UI file 'chat.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHAT_H
#define UI_CHAT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_chat
{
public:
    QWidget *widget;
    QTextEdit *messageTextEdit;
    QPushButton *SendButton;
    QTextEdit *chatDisplayTextEdit;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;

    void setupUi(QDialog *chat)
    {
        if (chat->objectName().isEmpty())
            chat->setObjectName(QStringLiteral("chat"));
        chat->resize(729, 619);
        chat->setStyleSheet(QStringLiteral(""));
        widget = new QWidget(chat);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(0, 0, 751, 731));
        widget->setStyleSheet(QStringLiteral("background-image: url(:/img/images/background.jpg);"));
        messageTextEdit = new QTextEdit(widget);
        messageTextEdit->setObjectName(QStringLiteral("messageTextEdit"));
        messageTextEdit->setGeometry(QRect(80, 560, 441, 41));
        messageTextEdit->setStyleSheet(QLatin1String("QTextEdit{\n"
"	font: 9pt  \"neue haas grotesk text pro extr\";\n"
"}"));
        SendButton = new QPushButton(widget);
        SendButton->setObjectName(QStringLiteral("SendButton"));
        SendButton->setGeometry(QRect(540, 560, 101, 41));
        QFont font;
        font.setFamily(QStringLiteral("neue haas grotesk text pro extr"));
        font.setPointSize(11);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        SendButton->setFont(font);
        SendButton->setStyleSheet(QLatin1String("QPushButton{\n"
"	font: 11pt \"neue haas grotesk text pro extr\";\n"
"  background-color: rgb(170, 0, 127);\n"
"}"));
        chatDisplayTextEdit = new QTextEdit(widget);
        chatDisplayTextEdit->setObjectName(QStringLiteral("chatDisplayTextEdit"));
        chatDisplayTextEdit->setGeometry(QRect(50, 90, 611, 421));
        chatDisplayTextEdit->setStyleSheet(QLatin1String("QTextEdit{\n"
"	font: 13pt \"neue haas grotesk text pro extr\";\n"
"	background-image: url();\n"
"   \n"
"}\n"
""));
        chatDisplayTextEdit->setReadOnly(true);
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(110, 30, 311, 31));
        QFont font1;
        font1.setFamily(QStringLiteral("Neue Haas Grotesk Text Pro Extr"));
        font1.setPointSize(19);
        label->setFont(font1);
        label->setStyleSheet(QLatin1String("border : none ;\n"
"background-color: none;\n"
"color : #333770 ;\n"
"background-image : url();\n"
"    \n"
""));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(40, 10, 71, 71));
        label_2->setStyleSheet(QLatin1String("image: url(:/img/images/pngtree-chatbot-icon-chat-bot-robot-png-image_4841963.png);\n"
"border : none ;\n"
"background-color: none;\n"
"color : #333770 ;\n"
"background-image : url();\n"
"    \n"
""));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(80, 530, 551, 20));
        QFont font2;
        font2.setFamily(QStringLiteral("Neue Haas Grotesk Text Pro Extr"));
        font2.setPointSize(10);
        label_3->setFont(font2);
        label_3->setStyleSheet(QLatin1String("border : none ;\n"
"background-color: none;\n"
"color : #333770 ;\n"
"background-image : url();\n"
"    \n"
"\n"
""));
        label_4 = new QLabel(widget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(50, 60, 371, 31));
        label_4->setFont(font2);
        label_4->setStyleSheet(QLatin1String("border : none ;\n"
"background-color: none;\n"
"color : #333770 ;\n"
"background-image : url();\n"
"    \n"
""));

        retranslateUi(chat);

        QMetaObject::connectSlotsByName(chat);
    } // setupUi

    void retranslateUi(QDialog *chat)
    {
        chat->setWindowTitle(QApplication::translate("chat", "TvEase Chatbot", Q_NULLPTR));
        SendButton->setText(QApplication::translate("chat", "Envoyer", Q_NULLPTR));
        label->setText(QApplication::translate("chat", "TvEaseBot!", Q_NULLPTR));
        label_2->setText(QString());
        label_3->setText(QApplication::translate("chat", "Veuillez \303\251crire ici et appuyer sur envoyer pour ajouter votre message.", Q_NULLPTR));
        label_4->setText(QApplication::translate("chat", "Votre assistant virtuel pour une gestion efficace !", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class chat: public Ui_chat {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHAT_H
