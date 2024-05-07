#include "confirmmotpass.h"
#include "ui_confirmmotpass.h"

#include<QSqlQuery>
#include<QSqlQueryModel>
#include<QSqlRecord>
#include<QSqlQueryModel>
#include<QSqlError>
#include<QDebug>

#include<QMessageBox>

#include<iostream>


#include<string.h>
#include <iostream>
#include <fstream>
#include <string>


#include<QProcess>

confirmMotPass::confirmMotPass(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::confirmMotPass)
{
    ui->setupUi(this);
}

confirmMotPass::~confirmMotPass()
{
    delete ui;
}
/////////////////// MODIFICATION MOT DE PASSE //////////////
#include"nouvmotpass.h"


std::string getCINFromFileAB(const std::string& filePath) {
    // Open the file for reading
    std::ifstream inFile(filePath);

    // Check if the file is successfully opened
    if (inFile.is_open()) {
        std::string role; // Variable to store the first line

        // Read the first line and store it in the variable
        if (std::getline(inFile, role)) {
            // Close the file
            inFile.close();
            return role;
        } else {
            // Handle the case where the file is empty
            std::cerr << "File is empty." << std::endl;
        }
    } else {
        // Handle the case where the file cannot be opened
        std::cerr << "Error opening file for reading." << std::endl;
    }

    // Return an empty string if there was an error
    return "";
}
///////////////////////////// confirmation du mot de passe
///Fonction return mot de passe
QString obtenir_mot_de_passe(QString condition) {
    QSqlQuery query;
    query.prepare("SELECT password_personelle  FROM personelles WHERE cin_personelle = :condition");
    query.bindValue(":condition", condition);
    query.exec();

    if (query.next()) {
        return query.value(0).toString(); // Renvoie la valeur de la première colonne (mot_de_passe_personelle)
    } else {
        // Si aucun enregistrement n'est trouvé, retourner une chaîne vide ou une indication d'erreur selon votre cas d'utilisation.
        return QString(); // ou return "Aucun enregistrement trouvé";
    }
}

/////////////////////// HASHPASSWORD
std::string hashPasswordconf(const std::string& password) {
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
/////// obtenir l adresse mail
QString obtenir_adresse_mail(QString condition) {
    QSqlQuery query;
    query.prepare("SELECT adresse_mail_personelle FROM personelles WHERE cin_personelle = :condition");
    query.bindValue(":condition", condition);
    query.exec();

    if (query.next()) {
        return query.value(0).toString(); // Renvoie la valeur de la première colonne (adresse_mail_personelle)
    } else {
        // Si aucun enregistrement n'est trouvé, retourner une chaîne vide ou une indication d'erreur selon votre cas d'utilisation.
        return QString(); // ou return "Aucun enregistrement trouvé";
    }
}

///


void confirmMotPass::on_pushButton_suivant_clicked()
{
    /// get the cin from file
     std::string filePath = "C:\\Users\\CHAIMA\\Documents\\Esprit 2eme\\semestre 2\\projet c++\\TvEase6\\TvEase\\role\\role.txt";
      std::string cin = getCINFromFileAB(filePath);
      QString cinqt= QString::fromStdString(cin);



      /// get the hashed password  from the bases de donne
      QString  password = obtenir_mot_de_passe(cinqt);
      std::cout <<"password fi confirmation = " <<password.toStdString()<< std::endl;


      //// get the password from the linedit
      QString pass_to_confirm = ui->lineEdit_confirmpass->text();
        // hash the pass_to_confirm
      std::string pass_to_confirm_string = pass_to_confirm.toStdString();
      std::string pass_to_confirm_hashed_st = hashPasswordconf(pass_to_confirm_string);

      QString pass_to_confirm_hashed_qt = QString::fromStdString(pass_to_confirm_hashed_st); // inbadlouh min string il Qstring
      std::cout <<"password ili iktibneh wa bich na3mloulou  confirmation = " <<pass_to_confirm_hashed_qt.toStdString()<< std::endl;

     /// get email
      QString  email= obtenir_adresse_mail(cinqt);
      std::cout <<"password fi confirmation = " <<email.toStdString()<< std::endl;


      if (password ==pass_to_confirm_hashed_qt )
       {
         hide() ;
          nouvmotpass nouvmotpass ;
          nouvmotpass.setCIN2(cinqt);
          nouvmotpass.setModal(true) ;
          nouvmotpass.exec() ;
      }
      else
      {
          QMessageBox::critical(nullptr, "Erreur ", "Mot de passe invalide !!");

        /// mailing
          QString contenuMail =  "Sujet : Tentative de modification de votre mot de passe\n\n"
                                 "Cher(e) ,\n\n"
                                 "Nous avons récemment reçu une demande de modification de votre mot de passe pour accéder aux systèmes et services internes de l'entreprise.\n\n"
                                 "Si cette demande a été initiée par vous, veuillez ignorer cet e-mail.\n\n"
                                 "Si vous n'avez pas demandé de changement de mot de passe, veuillez contacter immédiatement le service informatique pour signaler cette activité suspecte.\n\n"
                                 "Merci de votre vigilance.\n\n"
                                 "Si vous avez des questions ou des préoccupations, n'hésitez pas à nous contacter à tout moment.\n\n"
                                 "Bien cordialement,\n"
                                 "[TvEase]";


               QString executablePath = "C:/Users/CHAIMA/Documents/Esprit 2eme/semestre 2/projet c++/TvEase6/TvEase/email2/mail.exe";

                   // Arguments à passer au fichier exécutable
                   QStringList arguments;
                   arguments << email << "Tentative de modification de votre mot de passe" << contenuMail;

                   // Lancer le fichier exécutable avec les arguments
                   QProcess process;
                   process.start(executablePath, arguments);
                   process.waitForFinished(-1); // Attendre la fin de l'exécution

                   // Récupérer la sortie de la console
                   QByteArray output = process.readAllStandardOutput();
                   qDebug() << "Output:" << output;



            /// fermer la fenetre
              this->close();

      }



}

void confirmMotPass::on_pushButton_eye_clicked()
{
    if (ui->lineEdit_confirmpass->echoMode() == QLineEdit::Normal)
        {
          ui->lineEdit_confirmpass->setEchoMode(QLineEdit::Password);
          ui->pushButton_eye->setIcon(QIcon(":/img/images/hidepass.png"));
         }
     else
         {
          ui->lineEdit_confirmpass->setEchoMode(QLineEdit::Normal);
          ui->pushButton_eye->setIcon(QIcon(":/img/images/eyepass.png"));

         }
}
