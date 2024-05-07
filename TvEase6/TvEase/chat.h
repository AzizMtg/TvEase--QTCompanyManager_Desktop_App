#ifndef CHAT_H
#define CHAT_H


#include <QDialog>
#include <QtNetwork/QNetworkAccessManager>
#include <QtNetwork/QNetworkReply>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>

QT_BEGIN_NAMESPACE
namespace Ui { class chat; }
QT_END_NAMESPACE

class chat : public QDialog
{
    Q_OBJECT

public:
    chat(QWidget *parent = nullptr);
    ~chat();

private slots:
    void sendMessage();
    void on_SendButton_clicked();
    void fetchTriviaQuestion(const QString& apiUrl);

private:
    Ui::chat *ui;
    QString generateChatbotReply(const QString& message);
    QString getRandomJoke();
    QString m_lastJoke;
    QNetworkAccessManager* networkManager;

    struct Question {
        QString question;
        QStringList options;
        QString correctAnswer;
        bool isValid;

        Question()
            : isValid(false) {}

        void clear()
        {
            question.clear();
            options.clear();
            correctAnswer.clear();
            isValid = false;
        }
    };

    Question m_currentQuestion;
    QString decodeHtmlEntities(const QString& text);
};


#endif // CHAT_H
