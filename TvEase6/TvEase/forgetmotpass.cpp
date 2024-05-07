#include "forgetmotpass.h"
#include "ui_forgetmotpass.h"
#include"codempass.h"

#include<QSqlQuery>
#include<QSqlQueryModel>
#include<QSqlRecord>
#include<QSqlQueryModel>
#include<QSqlError>

#include<QMessageBox>

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>


#include <QProcess>
#include <QDebug>


forgetMotpass::forgetMotpass(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::forgetMotpass)
{
    ui->setupUi(this);
}

forgetMotpass::~forgetMotpass()
{
    delete ui;
}

/**************************************/
bool emailExists(QString email) {
    QSqlQuery query;
    query.prepare("SELECT COUNT(*) FROM personelles WHERE adresse_mail_personelle = :email");
    query.bindValue(":email", email);
    query.exec();

    if (query.next()) {
        int count = query.value(0).toInt();
        return count > 0;
    } else {
        // In case of an error, return false
        return false;
    }
}
/****************************************************/
// code aleatoire
std::string generateRandomCode() {
    std::string code;
    static const char charset[] =
        "0123456789"
        "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
        "abcdefghijklmnopqrstuvwxyz";

    srand(time(nullptr)); // Initialisez la graine pour la fonction rand()

    const int codeLength = 8; // Longueur du code

    for (int i = 0; i < codeLength; ++i) {
        code += charset[rand() % (sizeof(charset) - 1)];
    }

    return code;
}
/*********************************/
/// inlawij 3al cin bil mail
QString rechercherCinParEmail(const QString& email) {
    QSqlQuery query;
    query.prepare("SELECT cin_personelle FROM personelles WHERE adresse_mail_personelle = :email");
    query.bindValue(":email", email);
    if (!query.exec()) {
        // En cas d'erreur lors de l'exécution de la requête
        qDebug() << "Erreur lors de la recherche du CIN par e-mail:" << query.lastError().text();
        return ""; // Renvoie une chaîne vide en cas d'erreur
    }

    if (query.next()) {
        // Si une ligne est trouvée, renvoyer le CIN correspondant
        return query.value(0).toString();
    } else {
        // Si aucun enregistrement n'est trouvé pour l'e-mail spécifié
        return ""; // Renvoie une chaîne vide si l'e-mail n'est pas trouvé
    }
}


//////////////////////////////
void forgetMotpass::on_pushButton_clicked()
{
    QString adresse_mail = ui->lineEdit_emailRecuperation->text();

     cin = rechercherCinParEmail(adresse_mail) ;

    if (emailExists(adresse_mail)) {


///////////////////////
        /// na3mlou code aleatoire
        std::string code = generateRandomCode();
        std::cout << code<< std::endl;

        /// evnoie lil code aleatoire
        QString contenuMail =  "Sujet : Code de récupération de mot de passe\n\n"
                               "Cher(e) utilisateur,\n\n"
                               "Vous avez demandé un code de récupération de mot de passe. Veuillez trouver ci-dessous le code de récupération temporaire :\n\n"
                               "Code de récupération : " + QString::fromStdString(code) + "\n\n"
                               "Ce code de récupération vous permettra de réinitialiser votre mot de passe dans notre système.\n\n"
                               "Si vous n'avez pas demandé ce code de récupération, veuillez ignorer ce message.\n\n"
                               "Si vous avez des questions ou des préoccupations, n'hésitez pas à nous contacter à tout moment.\n\n"
                               "Bien cordialement,\n"
                               "[TvEase]";



                QString executablePath = "C:/Users/CHAIMA/Documents/Esprit 2eme/semestre 2/projet c++/TvEase6/TvEase/email2/mail.exe";

                 // Arguments à passer au fichier exécutable
                 QStringList arguments;
                 arguments << adresse_mail << "Code de récupération de mot de passe" << contenuMail;

                 // Lancer le fichier exécutable avec les arguments
                 QProcess process;
                 process.start(executablePath, arguments);
                 process.waitForFinished(-1); // Attendre la fin de l'exécution

                 // Récupérer la sortie de la console
                 QByteArray output = process.readAllStandardOutput();
                 qDebug() << "Output:" << output;
          //////////////////////////////
                 code_confirmation = QString::fromStdString(code) ;
                 std::cout << code_confirmation.toStdString()<< std::endl;
                 //std::cout <<"cin = " <<cin.toStdString()<< std::endl;

                     //bich nib3af il code_confirmaion il codempass class
                     codeMpass codeMpassS ;
                     codeMpassS.setCodeConfirmation(code_confirmation);
                     codeMpassS.setCIN(cin); /// nib3af il cin

                     codeMpassS.setModal(true);
                     codeMpassS.exec() ;
                 ////////////////////////////////

    } else {
        QMessageBox::critical(nullptr, "Erreur", "Veuillez réessayer");
    }
}








