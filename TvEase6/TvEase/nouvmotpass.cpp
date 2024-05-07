#include "nouvmotpass.h"
#include "ui_nouvmotpass.h"

#include <iostream>
#include <string>
using namespace std;

#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>
#include<QDebug>

#include<QMessageBox>

#include"forgetmotpass.h"
#include"codempass.h"

#include<QProcess>


nouvmotpass::nouvmotpass(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::nouvmotpass)
{
    ui->setupUi(this);
}

nouvmotpass::~nouvmotpass()
{
    delete ui;
}
////////////////////FONCTION CRYPTAGE DU MOT DE PASSE
std::string hashPassword2(const std::string& password) {
    // Tableau de hachage
    std::vector<int> hash;
    int seed = 131; // Un nombre premier
    int hashValue = 0;

    // Calcul du hachage
    for (char c : password) {
        hashValue = (hashValue * seed) + c;
    }

    // Conversion du hachage en une chaîne de caractères hexadécimaux
    std::string hashedPassword;
    while (hashValue != 0) {
        int digit = hashValue % 16;
        char hexDigit = (digit < 10) ? (digit + '0') : (digit - 10 + 'a');
        hashedPassword = hexDigit + hashedPassword;
        hashValue /= 16;
    }

    return hashedPassword;
}
////////////// FONCTION MODIFIER IL MOT DE PASSE PAR CIN

void modifierMotDePasse(const QString& cin, const QString& nouveauMotDePasse) {
    // Vérifier si le CIN existe dans la table personelles
    QSqlQuery query;
    query.prepare("SELECT * FROM personelles WHERE cin_personelle = :cin");
    query.bindValue(":cin", cin);
    if (!query.exec()) {
        QMessageBox::critical(nullptr, "Erreur de requête", "Erreur lors de la recherche du CIN dans la base de données.");
        return;
    }

    if (query.next()) {
        // Le CIN existe, mettre à jour le mot de passe
        query.prepare("UPDATE personelles SET password_personelle = :nouveauMotDePasse WHERE cin_personelle = :cin");
        query.bindValue(":nouveauMotDePasse", nouveauMotDePasse);
        query.bindValue(":cin", cin);
        if (!query.exec()) {
            QMessageBox::critical(nullptr, "Erreur de mise à jour du mot de passe", "Une erreur s'est produite lors de la tentative de mise à jour du mot de passe. Veuillez réessayer ultérieurement. Si le problème persiste, veuillez contacter le support technique pour obtenir de l'aide.");
            return;
        }

        // Afficher un message de succès
        QMessageBox::information(nullptr, "Mise à jour réussie", "Le mot de passe a été modifié avec succès dans notre système. Votre accès a été sécurisé. Veuillez utiliser le nouveau mot de passe lors de votre prochaine connexion.");

    } else {
        // Le CIN n'existe pas
        QMessageBox::warning(nullptr, "CIN introuvable", "Le CIN spécifié n'a pas été trouvé dans notre système. Veuillez vérifier les informations fournies et réessayer. Si vous pensez qu'il s'agit d'une erreur, veuillez contacter le support technique pour obtenir de l'aide.");
    }
}
/////////////////////// IT5AREJLIK IL INFORMATION IMTA3 IL CIN
QString getEmailByCin(const QString& cin)
{
    QSqlQuery query;
    query.prepare("SELECT adresse_mail_personelle FROM personelles WHERE cin_personelle = :cin");
    query.bindValue(":cin", cin);

    if (!query.exec()) {
        qDebug() << "Error executing query:" << query.lastError().text();
        return ""; // Return empty string to indicate error
    }

    if (query.next()) {
        return query.value(0).toString(); // Return the email if found
    } else {
        qDebug() << "No record found for CIN:" << cin;
        return "";
    }
}

QString getNomByCin(const QString& cin)
{
    QSqlQuery query;
    query.prepare("SELECT nom_personelle FROM personelles WHERE cin_personelle = :cin");
    query.bindValue(":cin", cin);

    if (!query.exec()) {
        qDebug() << "Erreur lors de l'exécution de la requête :" << query.lastError().text();
        return ""; // Retourne une chaîne vide pour indiquer une erreur
    }

    if (query.next()) {
        return query.value(0).toString(); // Retourne le nom si trouvé
    } else {
        qDebug() << "Aucun enregistrement trouvé pour le CIN :" << cin;
        return ""; // Retourne une chaîne vide si aucun enregistrement n'est trouvé
    }
}
QString getPrenomByCin(const QString& cin)
{
    QSqlQuery query;
    query.prepare("SELECT prenom_personelle FROM personelles WHERE cin_personelle = :cin");
    query.bindValue(":cin", cin);

    if (!query.exec()) {
        qDebug() << "Erreur lors de l'exécution de la requête :" << query.lastError().text();
        return ""; // Retourne une chaîne vide pour indiquer une erreur
    }

    if (query.next()) {
        return query.value(0).toString(); // Retourne le prénom si trouvé
    } else {
        qDebug() << "Aucun enregistrement trouvé pour le CIN :" << cin;
        return ""; // Retourne une chaîne vide si aucun enregistrement n'est trouvé
    }
}


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void nouvmotpass::on_pushButton_clicked()
{

      QString nouvmot1 = ui->lineEdit_nouvmotpass->text();
      QString nouvmot2 = ui->lineEdit_nouvmotpass2->text();

      /// il condition imta3 il mot de passe
      QRegularExpression regex("^(?=.*[0-9])(?=.*[a-zA-Z])(?=.*[@$!%*?&])[0-9a-zA-Z@$!%*?&]{6,}$");

      /// kan il mot de passe itaba3 fil condition ?
      if (!regex.match(nouvmot1).hasMatch())
      {

          QMessageBox::warning(this, "Erreur", "Le mot de passe doit contenir au moins 6 caractères, incluant au moins une lettre, un chiffre et un caractère spécial ( !$@%).");

          ui->lineEdit_nouvmotpass->clear();
          ui->lineEdit_nouvmotpass2->clear();
      }
      else if (nouvmot1 != nouvmot2)
      {
          // kan il nouvmot1 itaba3 fil condition ama nouvmot2 mahouch kima il nouv movmot1
          QMessageBox::warning(this, "Erreur", "Les mots de passe ne correspondent pas.");
          // Clear the password fields
          ui->lineEdit_nouvmotpass->clear();
          ui->lineEdit_nouvmotpass2->clear();
      }
      else
      {
          //kan les 2 nouvmot1 et nouvmot2 kifkif wa zeda itab3ou fil condition

          /// in7awlouh il string
          std::string nouvmot1_string = nouvmot1.toStdString();


          std::string hashed_password_modifie = hashPassword2(nouvmot1_string); /// cryptage du nouveau mot de passe
          QString hashed_password_modifie_qsrting = QString::fromStdString(hashed_password_modifie); /// nouveau mot de passe crypte en qstring

         // std::cout <<"hashed" <<hashed_password_modifie ;

          //std::cout <<"cin fi nouveau = " <<cin.toStdString()<< std::endl;  //itba3fit bil shih min  codempass il nouveaumodpass

          modifierMotDePasse(cin, hashed_password_modifie_qsrting);


            /////////////////// mailing securite
                  QString email= getEmailByCin(cin) ;
                  QString nom = getNomByCin(cin) ;
                  QString prenom = getPrenomByCin(cin);
                  std::cout <<"nit2akad mil information mail  = " <<email.toStdString()<<nom.toStdString()<<prenom.toStdString()<< std::endl;  //itba3fit bil shih min  codempass il nouveaumodpass


                  QString contenuMail =  "Sujet : Notification de modification du mot de passe\n\n"
                                         "Cher(e) " + prenom + " " + nom + ",\n\n"
                                         "Nous vous informons que votre mot de passe d'accès au système a été modifié avec succès.\n\n"
                                         "Voici vos nouvelles informations de connexion :\n\n"
                                         "Email : " + email + "\n"
                                         "Mot de passe : ****************\n\n"
                                         "Nous vous rappelons de ne jamais partager vos informations de connexion avec quiconque et de les garder en sécurité.\n\n"
                                         "Si vous n'avez pas demandé cette modification ou si vous rencontrez des problèmes d'accès à votre compte, veuillez nous contacter immédiatement.\n\n"
                                         "Cordialement,\n"
                                         "L'équipe de support de [TvEase]";



                          QString executablePath = "C:/Users/CHAIMA/Documents/Esprit 2eme/semestre 2/projet c++/TvEase6/TvEase/email2/mail.exe";

                           // Arguments à passer au fichier exécutable
                           QStringList arguments;
                           arguments << email << "Notification de modification du mot de passe" << contenuMail;

                           // Lancer le fichier exécutable avec les arguments
                           QProcess process;
                           process.start(executablePath, arguments);
                           process.waitForFinished(-1); // Attendre la fin de l'exécution

                           // Récupérer la sortie de la console
                           QByteArray output = process.readAllStandardOutput();
                           qDebug() << "Output:" << output;

               ///////////////////////////////


           this->close(); // Ferme la fenêtre actuelle





      }





}

void nouvmotpass::on_pushButton_2_clicked()
{
    if (ui->lineEdit_nouvmotpass->echoMode() == QLineEdit::Normal)
        {
          ui->lineEdit_nouvmotpass->setEchoMode(QLineEdit::Password);
          ui->lineEdit_nouvmotpass2->setEchoMode(QLineEdit::Password);
          ui->pushButton_2->setIcon(QIcon(":/img/images/hidepass.png"));
         }
     else
         {
          ui->lineEdit_nouvmotpass->setEchoMode(QLineEdit::Normal);
          ui->lineEdit_nouvmotpass2->setEchoMode(QLineEdit::Normal);
          ui->pushButton_2->setIcon(QIcon(":/img/images/eyepass.png"));

         }
}
