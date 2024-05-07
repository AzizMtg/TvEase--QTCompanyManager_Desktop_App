#include "chat.h"
#include "ui_chat.h"

chat::chat(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::chat)
{
    ui->setupUi(this);

    // Initialize network manager
    networkManager = new QNetworkAccessManager(this);

    // Connect signals and slots
    connect(ui->SendButton, &QPushButton::clicked, this, &chat::sendMessage);
}

chat::~chat()
{
    delete ui;
}

void chat::sendMessage()
{
    QString message = ui->messageTextEdit->toPlainText();
    message = message.trimmed();
    if (message.isEmpty())
    {
        ui->messageTextEdit->clear();
        return;
    }
    ui->chatDisplayTextEdit->append("Utilisateur : " + message);
    ui->messageTextEdit->clear();

    QString reply = generateChatbotReply(message);
    if (!reply.isEmpty())
    {
        ui->chatDisplayTextEdit->append("Chatbot : " + reply);
    }
}

void chat::on_SendButton_clicked()
{
    sendMessage();
}

void chat::fetchTriviaQuestion(const QString& apiUrl)
{
    QNetworkRequest request;
    request.setUrl(QUrl(apiUrl));

    QNetworkReply* reply = networkManager->get(request);
    connect(reply, &QNetworkReply::finished, [=]() {
        if (reply->error() == QNetworkReply::NoError) {
            QByteArray response = reply->readAll();
            QJsonDocument jsonDoc(QJsonDocument::fromJson(response));
            QJsonObject jsonObject = jsonDoc.object();
            QJsonArray results = jsonObject["results"].toArray();
            if (!results.isEmpty()) {
                QJsonObject triviaQuestion = results[0].toObject();
                m_currentQuestion.question = triviaQuestion["question"].toString();
                m_currentQuestion.correctAnswer = triviaQuestion["correct_answer"].toString();
                QJsonArray incorrectAnswers = triviaQuestion["incorrect_answers"].toArray();
                for (const QJsonValue& value : incorrectAnswers)
                {
                    m_currentQuestion.options.append(value.toString());
                }

                // Add the correct answer to the options list
                m_currentQuestion.options.append(m_currentQuestion.correctAnswer);

                // Shuffle the options to randomize their order
                std::random_device rd;
                std::mt19937 gen(rd());
                std::shuffle(m_currentQuestion.options.begin(), m_currentQuestion.options.end(), gen);

                // Remove HTML entities from the question and options
                m_currentQuestion.question = decodeHtmlEntities(m_currentQuestion.question);
                for (QString& option : m_currentQuestion.options)
                {
                    option = decodeHtmlEntities(option);
                }

                ui->chatDisplayTextEdit->append("Chatbot: " + m_currentQuestion.question);

                for (int i = 0; i < m_currentQuestion.options.size(); ++i)
                {
                    QString optionNumber = QString::number(i + 1);
                    QString optionText = m_currentQuestion.options[i];
                    ui->chatDisplayTextEdit->append(optionNumber + ". " + optionText);
                }

                m_currentQuestion.isValid = true;
            }
            else {
                ui->chatDisplayTextEdit->append("Chatbot: Sorry, I couldn't fetch a trivia question.");
            }
        } else {
            QString error = reply->errorString();
            qDebug() << "Network error:" << error;
            ui->chatDisplayTextEdit->append("Chatbot: Sorry, I couldn't fetch a trivia question. Error: " + error);
        }
        reply->deleteLater();
    });
}

QString chat::generateChatbotReply(const QString& message)
{
    QString reply;
    QString lowercaseMessage = message.toLower();

    if (lowercaseMessage.contains("bonjour") || lowercaseMessage.contains("salut"))
    {
        reply = "Bonjour ! En quoi puis-je vous aider aujourd'hui ?";
    }
    else if (lowercaseMessage.contains("ça va") || lowercaseMessage.contains("comment ça va"))
    {
        reply = "Je vais bien, merci ! Et vous ?";
    }
    else if (lowercaseMessage.contains("statistiques") || lowercaseMessage.contains("stats"))
    {
        reply = "Pour accéder aux statistiques, vous pouvez cliquer sur l'onglet 'Statistiques' dans le menu principal de l'application.";
    }
    else if (lowercaseMessage.contains("personnel") || lowercaseMessage.contains("employé"))
    {
        reply = "Pour ajouter du personnel, vous devez accéder à la section 'Personnel' de l'application et cliquer sur le bouton 'Ajouter'. Ensuite, saisissez les informations requises sur l'employé.";
    }
    else if (lowercaseMessage.contains("publicité") || lowercaseMessage.contains("pub"))
    {
        reply = "Pour modifier une publicité existante, rendez-vous dans la section 'Publicité' de l'application, recherchez la publicité que vous souhaitez modifier, puis cliquez sur le bouton 'Modifier'.";
    }
    else if (lowercaseMessage.contains("événement") || lowercaseMessage.contains("event"))
    {
        reply = "Pour supprimer un événement, accédez à la section 'Événements' de l'application, recherchez l'événement que vous souhaitez supprimer, puis cliquez sur le bouton 'Supprimer'.";
    }
    else if (lowercaseMessage.contains("exporter"))
    {
        reply = "Pour exporter des données, vous pouvez accéder à la fonctionnalité d'exportation disponible dans chaque section de l'application. Recherchez l'option 'Exporter' dans le menu ou les paramètres de la section respective.";
    }
    else if (lowercaseMessage.contains("support") || lowercaseMessage.contains("aide"))
    {
        reply = "Pour contacter le support technique, veuillez envoyer un e-mail à support@tvease.com ou appelez notre numéro de support au +123456789.";
    }
    else if (lowercaseMessage.contains("ajouter"))
    {
        reply = "Si vous êtes responsable des publicités, vous pouvez ajouter une publicité dans la barre 'ajouter' dans 'publicité'. Vous devriez saisir les informations pub d'abord.";
    }
    else if (lowercaseMessage.contains("société") || lowercaseMessage.contains("sponsor"))
    {
        reply = "Si vous êtes responsable des sponsors, vous pouvez ajouter une société dans la barre 'sociétés' dans 'publicité'. Vous devriez saisir les informations de la société d'abord.";
    }
    else if (lowercaseMessage.contains("administrateur") || lowercaseMessage.contains("admin"))
    {
        reply = "Si vous êtes l'un des admins, vous pouvez ajouter un événement en cliquant sur l'icône event, et puis l'icône +.";
    }
    else if (lowercaseMessage.contains("réglages") || lowercaseMessage.contains("paramètres"))
    {
        reply = "Pour accéder aux paramètres de l'application, recherchez l'option 'Réglages' ou 'Paramètres' dans le menu principal.";
    }
    else if (lowercaseMessage.contains("informations") || lowercaseMessage.contains("détails"))
    {
        reply = "Pour obtenir des informations supplémentaires, veuillez consulter la section 'Aide' ou 'FAQ' dans le menu de l'application.";
    }
    else if (lowercaseMessage.contains("connexion") || lowercaseMessage.contains("login"))
    {
        reply = "Pour vous connecter à votre compte, cliquez sur l'option 'Connexion' dans le coin supérieur droit de l'application.";
    }
    else if (lowercaseMessage.contains("inscription") || lowercaseMessage.contains("signup"))
    {
        reply = "Pour vous inscrire à un compte, cliquez sur l'option 'Inscription' ou 'S'inscrire' dans la page de connexion.";
    }
    else if (lowercaseMessage.contains("notifications") || lowercaseMessage.contains("alertes"))
    {
        reply = "Pour activer ou désactiver les notifications, accédez à la section 'Notifications' dans les paramètres de l'application.";
    }
    else if (lowercaseMessage.contains("mot de passe") || lowercaseMessage.contains("password"))
    {
        reply = "Pour changer votre mot de passe, connectez-vous à votre compte, accédez à la section 'Paramètres' ou 'Profil', puis recherchez l'option 'Changer le mot de passe'.";
    }

    else if (lowercaseMessage.contains("comment allez-vous") || lowercaseMessage.contains("comment vas-tu"))
    {
        reply = "Je suis juste un programme informatique, mais je suis toujours prêt à vous aider !";
    }
    else if (lowercaseMessage.contains("bien") || lowercaseMessage.contains("super"))
    {
        reply = "C'est génial à entendre !";
    }
    else if (lowercaseMessage.contains("historique") || lowercaseMessage.contains("logs"))
    {
        reply = "Pour consulter l'historique des activités, accédez à la section 'Historique' ou 'Logs' dans les paramètres de l'application.";
    }
    else if (lowercaseMessage.contains("favoris") || lowercaseMessage.contains("bookmarks"))
    {
        reply = "Pour ajouter une page aux favoris, cliquez sur l'icône de marque-page ou l'étoile à côté de l'adresse URL de la page.";
    }
    else if (lowercaseMessage.contains("recherche") || lowercaseMessage.contains("search"))
    {
        reply = "Pour effectuer une recherche, utilisez la barre de recherche située en haut de l'écran ou appuyez sur la touche de raccourci 'Ctrl + F'.";
    }
    else if (lowercaseMessage.contains("supprimer") || lowercaseMessage.contains("delete"))
    {
        reply = "Pour supprimer un élément, sélectionnez-le, puis appuyez sur la touche 'Supprimer' de votre clavier ou cliquez avec le bouton droit de la souris et choisissez l'option 'Supprimer'.";
    }
    else if (lowercaseMessage.contains("compte") || lowercaseMessage.contains("account"))
    {
        reply = "Pour gérer votre compte, accédez à la section 'Compte' ou 'Profil' dans les paramètres de l'application.";
    }
    else if (lowercaseMessage.contains("paramètres avancés") || lowercaseMessage.contains("advanced settings"))
    {
        reply = "Pour accéder aux paramètres avancés, recherchez l'option 'Paramètres avancés' dans les paramètres de l'application.";
    }
    else if (lowercaseMessage.contains("mode sombre") || lowercaseMessage.contains("dark mode"))
    {
        reply = "Pour activer le mode sombre, accédez aux paramètres de l'application et recherchez l'option 'Mode sombre' ou 'Thème sombre'.";
    }
    else if (lowercaseMessage.contains("notifications") || lowercaseMessage.contains("alerts"))
    {
        reply = "Pour gérer les notifications, accédez aux paramètres de l'application et recherchez l'option 'Notifications' ou 'Alertes'.";
    }
    else if (lowercaseMessage.contains("partager") || lowercaseMessage.contains("share"))
    {
        reply = "Pour partager du contenu, utilisez l'option 'Partager' ou l'icône de partage présente dans le coin supérieur droit.";
    }
    else if (lowercaseMessage.contains("imprimer") || lowercaseMessage.contains("print"))
    {
        reply = "Pour imprimer un document ou une page, utilisez la commande 'Imprimer' dans le menu du navigateur ou appuyez sur 'Ctrl + P'.";
    }
    else if (lowercaseMessage.contains("enregistrer") || lowercaseMessage.contains("save"))
    {
        reply = "Pour enregistrer des données, utilisez l'option 'Enregistrer' dans le menu de l'application ou l'icône de disquette.";
    }
    else if (lowercaseMessage.contains("mettre à jour") || lowercaseMessage.contains("update"))
    {
        reply = "Pour mettre à jour l'application, accédez à la section 'Mise à jour' dans les paramètres ou suivez les instructions de mise à jour automatique.";
    }
    else if (lowercaseMessage.contains("rechercher") || lowercaseMessage.contains("find"))
    {
        reply = "Pour rechercher du contenu spécifique, utilisez la fonction de recherche intégrée ou appuyez sur 'Ctrl + F' pour ouvrir la boîte de recherche.";
    }
    else if (lowercaseMessage.contains("quitter") || lowercaseMessage.contains("exit"))
    {
        reply = "Pour quitter l'application, utilisez l'option 'Quitter' dans le menu principal ou fermez la fenêtre principale.";
    }
    else if (lowercaseMessage.contains("profil") || lowercaseMessage.contains("profile"))
    {
        reply = "Pour afficher ou modifier votre profil, accédez à la section 'Profil' ou 'Compte' dans les paramètres de l'application.";
    }
    else if (lowercaseMessage.contains("récupérer") || lowercaseMessage.contains("recover"))
    {
        reply = "Pour récupérer des données perdues, utilisez l'option de récupération intégrée ou contactez le support technique pour obtenir de l'aide.";
    }


    else if (lowercaseMessage.contains("mal") || lowercaseMessage.contains("pas bien"))
    {
        reply = "Je suis désolé d'entendre ça. Puis-je vous aider d'une manière ou d'une autre ?";
    }
    else if (lowercaseMessage.contains("programme") || lowercaseMessage.contains("émission"))
    {
        reply = "Il y a 'Choufli Hal' vers 20h.";
    }
    else if (lowercaseMessage.contains("publicite") || lowercaseMessage.contains("annonce"))
    {
        reply = "Boga Menthe ! Seulement 2dt.";
    }
    else if (lowercaseMessage.contains("chaîne") || lowercaseMessage.contains("télévision"))
    {
        reply = "La chaîne 1 diffuse actuellement un documentaire sur la faune africaine.";
    }
    else if (lowercaseMessage.contains("émissions") || lowercaseMessage.contains("série"))
    {
        reply = "Ne manquez pas le prochain épisode de 'Breaking Bad' sur Netflix !";
    }
    else if (lowercaseMessage.contains("management") || lowercaseMessage.contains("gestion de chaînes"))
    {
        reply = "Le directeur des programmes travaille sur de nouvelles stratégies pour augmenter l'audience.";
    }
    else if (lowercaseMessage.contains("blague"))
    {
        reply = "D'accord, voici une blague pour vous : Pourquoi les poissons détestent-ils les ordinateurs ? Parce qu'ils ont peur du net !";
    }
    else if (lowercaseMessage.contains("triste"))
    {
        reply = "Ne soyez pas triste. La vie est belle ! Puis-je vous aider à trouver quelque chose pour vous divertir ?";
    }
    else if (lowercaseMessage.contains("heureux"))
    {
        reply = "C'est merveilleux ! La vie est meilleure quand on est heureux.";
    }
    else if (lowercaseMessage.contains("merci"))
    {
        reply = "Je vous en prie ! Si vous avez besoin de plus d'aide, n'hésitez pas à demander.";
    }
    else if (lowercaseMessage.contains("imen"))
    {
        reply = "Oh Madame Imen! meilleur prof de projet C++!";
    }
    else if (lowercaseMessage.contains("tvease"))
    {
        reply = "C'est une application TV channel management assez innovante avec plusieurs fonctionnalités et je ne dis pas ça seulement parce que je suis l'une de ces fonctionnalités :D";
    }
    else if (lowercaseMessage.contains("salem"))
    {
        reply = "Salem! Labes ? Je suis TvEaseBot.";
    }
    else if (lowercaseMessage.contains("ajouter") && lowercaseMessage.contains("publicite"))
    {
        reply = "Si vous êtes responsable des publicités, vous pouvez ajouter une publicité dans la barre 'ajouter' dans 'publicité'. Vous devriez saisir les informations pub d'abord.";
    }
    else if (lowercaseMessage.contains("ajouter") && lowercaseMessage.contains("sponsor"))
    {
        reply = "Si vous êtes responsable des sponsors, vous pouvez ajouter une société dans la barre 'sociétés' dans 'publicité'. Vous devriez saisir les informations de la société d'abord.";
    }
    else if (lowercaseMessage.contains("ajouter") && lowercaseMessage.contains("evenement"))
    {
        reply = "Si vous êtes l'un des admins, vous pouvez ajouter un événement en cliquant sur l'icône event, et puis l'icône +.";
    }
    else
    {
        reply = "Désolé, je n'ai pas compris. Pouvez-vous reformuler votre question ?";
    }

    return reply;
}



QString chat::getRandomJoke()
{
    QStringList jokes;
    jokes << "Pourquoi les poissons détestent-ils les ordinateurs ? Parce qu'ils ont peur du net !"
          << "Quel est le comble pour un électricien ? De prendre une décharge en se levant !"
          << "Comment appelle-t-on un chien magicien ? Un labracadabrador !"
          << "Qu'est-ce qu'un chat dit lorsqu'il est surpris ? Miaou-ment !"
          << "Pourquoi les plongeurs plongent-ils toujours en arrière et jamais en avant ? Parce que sinon ils tombent dans le bateau !";

    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> dist(0, jokes.size() - 1);
    int index = dist(gen);
    return jokes[index];
}

QString chat::decodeHtmlEntities(const QString& text)
{
    QString decodedText = text;
    decodedText.replace("&quot;", "\"");
    decodedText.replace("&amp;", "&");
    decodedText.replace("&lt;", "<");
    decodedText.replace("&gt;", ">");
    decodedText.replace("&#039;", "'");
    return decodedText;
}
