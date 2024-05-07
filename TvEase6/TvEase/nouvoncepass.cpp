#include "nouvoncepass.h"
#include "ui_nouvoncepass.h"

#include <iostream>
#include <string>
using namespace std;

#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>
#include<QDebug>
#include<string.h>

#include<QMessageBox>
#include<QProcess>

#include <iostream>
#include <fstream>
#include <string>

#include<personnelle.h>
#include<programme.h>
#include<auditeur.h>

// bich na5ou les information mil file

nouvOncePass::nouvOncePass(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::nouvOncePass)
{
    ui->setupUi(this);
}

nouvOncePass::~nouvOncePass()
{
    delete ui;
}
//
/////////////////////////////////////////////////////////////////////////////////////////
void modifierMotDePasseonce(const QString& cin, const QString& nouveauMotDePasse, const QString& ONCE) {
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
        query.prepare("UPDATE personelles SET password_personelle = :nouveauMotDePasse, ONCE = :ONCE WHERE cin_personelle = :cin");
        query.bindValue(":nouveauMotDePasse", nouveauMotDePasse);
        query.bindValue(":ONCE", ONCE);
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
///////////
std::string hashPasswordonce(const std::string& password) {
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


/// taba3 il fichier bich na5ou il information


/// itraja3 cin 1er ligne
std::string getCINFromFileonce(const std::string& filePath) {
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
/// itraja3 il role 2eme ligne
std::string getROLEFromFileonce(const std::string& filePath) {
    // Open the file for reading
    std::ifstream inFile(filePath);

    // Check if the file is successfully opened
    if (inFile.is_open()) {
        std::string line; // Variable to store each line

        // Read and discard the first line
        std::getline(inFile, line);

        // Read the second line and store it in the variable
        if (std::getline(inFile, line)) {
            // Close the file
            inFile.close();
            return line;
        } else {
            // Handle the case where the file does not have a second line
            std::cerr << "File does not have a second line." << std::endl;
        }
    } else {
        // Handle the case where the file cannot be opened
        std::cerr << "Error opening file for reading." << std::endl;
    }

    // Return an empty string if there was an error
    return "";
}

///itraja3 il ism 3eme ligne
std::string getNomFromFileonce(const std::string& filePath) {
    // Open the file for reading
    std::ifstream inFile(filePath);

    // Check if the file is successfully opened
    if (inFile.is_open()) {
        std::string line;
        std::string role; // Variable to store the third line

        // Read and discard the first two lines
        std::getline(inFile, line); // First line
        std::getline(inFile, line); // Second line

        // Read the third line and store it in the variable
        if (std::getline(inFile, role)) {
            // Close the file
            inFile.close();
            return role;
        } else {
            // Handle the case where the file does not have a third line
            std::cerr << "File does not have a third line." << std::endl;
        }
    } else {
        // Handle the case where the file cannot be opened
        std::cerr << "Error opening file for reading." << std::endl;
    }

    // Return an empty string if there was an error
    return "";
}
/// itraja3 4eme ligne il la9ab
std::string getPrenomFromFileonce(const std::string& filePath) {
    // Open the file for reading
    std::ifstream inFile(filePath);

    // Check if the file is successfully opened
    if (inFile.is_open()) {
        std::string line;
        std::string role; // Variable to store the fourth line

        // Read and discard the first three lines
        std::getline(inFile, line); // First line
        std::getline(inFile, line); // Second line
        std::getline(inFile, line); // Third line

        // Read the fourth line and store it in the variable
        if (std::getline(inFile, role)) {
            // Close the file
            inFile.close();
            return role;
        } else {
            // Handle the case where the file does not have a fourth line
            std::cerr << "File does not have a fourth line." << std::endl;
        }
    } else {
        // Handle the case where the file cannot be opened
        std::cerr << "Error opening file for reading." << std::endl;
    }

    // Return an empty string if there was an error
    return "";
}


///Na5ou il mail
QString getEmailFromCIN(const QString& cin) {
    QSqlQuery query;
    query.prepare("SELECT adresse_mail_personelle FROM personelles WHERE cin_personelle = :cin");
    query.bindValue(":cin", cin);

    if (!query.exec()) {
        QMessageBox::critical(nullptr, "Erreur de requête", "Erreur lors de la recherche du CIN dans la base de données.");
        return "";
    }

    if (query.next()) {
        QString email = query.value(0).toString();
        return email;
    } else {
        QMessageBox::warning(nullptr, "CIN introuvable", "Le CIN spécifié n'a pas été trouvé dans notre système. Veuillez vérifier les informations fournies et réessayer. Si vous pensez qu'il s'agit d'une erreur, veuillez contacter le support technique pour obtenir de l'aide.");
        return "";
    }
}



//////////////////////////////////////////////////////////////////////////
void nouvOncePass::on_pushButton_clicked()
{


        QString nouvmot1 = ui->lineEdit_oncepass1->text();
         QString nouvmot2 = ui->lineEdit_oncepass2->text();

         /// il condition imta3 il mot de passe
         QRegularExpression regex("^(?=.*[0-9])(?=.*[a-zA-Z])(?=.*[@$!%*?&])[0-9a-zA-Z@$!%*?&]{6,}$");

         /// kan il mot de passe itaba3 fil condition ?
         if (!regex.match(nouvmot1).hasMatch())
         {

             QMessageBox::warning(this, "Erreur", "Le mot de passe doit contenir au moins 6 caractères, incluant au moins une lettre, un chiffre et un caractère spécial ( !$@%).");

             ui->lineEdit_oncepass1->clear();
             ui->lineEdit_oncepass2->clear();
         }
         else if (nouvmot1 != nouvmot2)
         {
             // kan il nouvmot1 itaba3 fil condition ama nouvmot2 mahouch kima il nouv movmot1
             QMessageBox::warning(this, "Erreur", "Les mots de passe ne correspondent pas.");
             // Clear the password fields
             ui->lineEdit_oncepass1->clear();
             ui->lineEdit_oncepass2->clear();
         }
         else
         {

             ////// NA5OU LES INFORMATION
              // MIL FICHIER CIN NOM PRENOM
             std::string filePath = "C:\\Users\\CHAIMA\\Documents\\Esprit 2eme\\semestre 2\\projet c++\\TvEase6\\TvEase\\role\\role.txt";
             std::string cin = getCINFromFileonce(filePath);
             QString cinqt = QString::fromStdString(cin);

             std::string nom = getNomFromFileonce(filePath);
             QString nomqt = QString::fromStdString(nom);

             std::string prenom = getPrenomFromFileonce(filePath);
             QString prenomqt = QString::fromStdString(prenom);


             std::string role = getROLEFromFileonce(filePath);
             QString roleqt = QString::fromStdString(role);


             // NA5OU IL MAIL
             QString mail = getEmailFromCIN(cinqt) ;

             std::cout <<" fil once : " <<cin <<nom <<prenom <<mail.toStdString() <<role;


             ////////////////////////////////////////////////

             //kan les 2 nouvmot1 et nouvmot2 kifkif wa zeda itab3ou fil condition

            /// in7awlouh il string
             std::string nouvmot1_string = nouvmot1.toStdString();


             std::string hashed_password_modifie = hashPasswordonce(nouvmot1_string); /// cryptage du nouveau mot de passe
             QString hashed_password_modifie_qsrting = QString::fromStdString(hashed_password_modifie); /// nouveau mot de passe crypte en qstring

             std::cout <<"hashed fil once " <<hashed_password_modifie ;


             modifierMotDePasseonce(cinqt, hashed_password_modifie_qsrting,"1");


               ///////mailing securite
             QString contenuMail = "Sujet :Bienvenue\n\n"
                                   "Cher(e) " + prenomqt + " " + nomqt + ",\n\n"
                                   "Nous avons le plaisir de vous informer que votre mot de passe d'accès au système a été modifié avec succès.\n\n"
                                   "Cette notification est également l'occasion de vous souhaiter la bienvenue parmi nous ! Nous sommes ravis de vous compter parmi les membres de notre équipe.\n\n"
                                   "Voici vos nouvelles informations de connexion :\n\n"
                                   "Email : " + mail + "\n"
                                   "Mot de passe : ****************\n\n"
                                   "Nous vous rappelons de ne jamais partager vos informations de connexion avec quiconque et de les garder en sécurité.\n\n"
                                   "Cordialement,\n"
                                   "L'équipe de support de [TvEase]";


                             QString executablePath = "C:/Users/CHAIMA/Documents/Esprit 2eme/semestre 2/projet c++/TvEase6/TvEase/email2/mail.exe";

                              // Arguments à passer au fichier exécutable
                              QStringList arguments;
                              arguments << mail << "Bienvenue" << contenuMail;

                              // Lancer le fichier exécutable avec les arguments
                              QProcess process;
                              process.start(executablePath, arguments);
                              process.waitForFinished(-1); // Attendre la fin de l'exécution

                              // Récupérer la sortie de la console
                              QByteArray output = process.readAllStandardOutput();
                              qDebug() << "Output:" << output;

                  ///////////////////////////////
                              if(role=="Admin principal")
                                {
                                  hide() ;
                                  personnelle personnelle ;
                                  personnelle.setModal(true) ;
                                  personnelle.exec() ;
                                }
                               else if (role=="Responsable clientele")
                               {
                                  hide() ;
                                   auditeur auditeur ;
                                   auditeur.setModal(true) ;
                                   auditeur.exec() ;
                               }
                               else if (role=="Responsable interne")
                               {
                                   hide() ;
                                   programme programme ;
                                   programme.setModal(true) ;
                                   programme.exec() ;
                               }

}


}

void nouvOncePass::on_pushButton_2_clicked()
{
    if (ui->lineEdit_oncepass1->echoMode() == QLineEdit::Normal)
        {
          ui->lineEdit_oncepass1->setEchoMode(QLineEdit::Password);
          ui->lineEdit_oncepass2->setEchoMode(QLineEdit::Password);
          ui->pushButton_2->setIcon(QIcon(":/img/images/hidepass.png"));
         }
     else
         {
          ui->lineEdit_oncepass1->setEchoMode(QLineEdit::Normal);
          ui->lineEdit_oncepass2->setEchoMode(QLineEdit::Normal);
          ui->pushButton_2->setIcon(QIcon(":/img/images/eyepass.png"));

         }
}
