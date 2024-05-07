#include "personnelle.h"
#include "ui_personnelle.h"
//
#include "programme.h"
#include "publicite.h"
#include "auditeur.h"
#include "abonnement.h"
#include "studio.h"

#include "QMessageBox"
#include"cpersonnel.h"

// taba3 il pdf
#include <QFileDialog>
#include <QPdfWriter>
#include <QPainter>
#include <QTableView>

#include <QTextDocument>
#include <QTextCursor>
#include <QStandardItemModel>
#include <QMessageBox>
#include <QTextDocumentWriter>
#include <QtPrintSupport/QPrinter>
#include <QtPrintSupport/QPrintDialog>
#include <QTextDocument>
#include <QFile>
#include <QFileDialog>
#include <QMessageBox>
#include <QStandardPaths>
#include <QTextTable>


//taba3 il recherche
#include <QSortFilterProxyModel>
#include <QStandardItemModel>

// taba3 il combobox modifier
#include <QSqlRecord>

// jointure
#include "travailler.h"


// lil exe
#include<windows.h>
#include <cstdlib>
#include <QProcess>
// Pour travailler avec les fichiers
#include<iostream>
#include <fstream>
using namespace std;
#include<QtDebug>
#include <QDir>
#include <QString>



#include<QTimer>

//role
#include <iostream>
#include <fstream>
#include <string>


/////////////////////////ROLE
std::string getRoleFromFilePR(const std::string& filePath) {
    // Open the file for reading
    std::ifstream inFile(filePath);

    // Check if the file is successfully opened
    if (inFile.is_open()) {
        std::string line;
        std::string role; // Variable to store the second line

        // Read and discard the first line
        std::getline(inFile, line);

        // Read the second line and store it in the variable
        if (std::getline(inFile, role)) {
            // Close the file
            inFile.close();
            return role;
        } else {
            // Handle the case where the file does not have a second line
            std::cerr << "File does not have a second line." << std::endl;
        }
    } else {
        std::cerr << "Error opening file for reading." << std::endl;
    }

    // Return an empty string if there was an error
    return "";
}

std::string getNomPrenomFromFilePR(const std::string& filePath) {
    // Open the file for reading
    std::ifstream inFile(filePath);

    // Check if the file is successfully opened
    if (inFile.is_open()) {
        std::string line;
        std::string nomPrenom; // Variable to store "nom prenom"

        // Discard the first two lines
        for (int i = 0; i < 2; ++i) {
            if (!std::getline(inFile, line)) {
                std::cerr << "File does not have enough lines." << std::endl;
                inFile.close();
                return "";
            }
        }

        // Read the third line and append it to the nomPrenom string
        if (std::getline(inFile, line)) {
            nomPrenom += line + " ";
        } else {
            std::cerr << "File does not have a third line." << std::endl;
            inFile.close();
            return "";
        }

        // Read the fourth line and append it to the nomPrenom string
        if (std::getline(inFile, line)) {
            nomPrenom += line;
        } else {
            std::cerr << "File does not have a fourth line." << std::endl;
            inFile.close();
            return "";
        }

        // Close the file
        inFile.close();

        return nomPrenom;
    } else {
        std::cerr << "Error opening file for reading." << std::endl;
    }

    // Return an empty string if there was an error
    return "";
}

///


///////////////////////////////////////////////////////////////////////////////
personnelle::personnelle(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::personnelle)
{
    ui->setupUi(this);
//////////////////////////////////ROLE ILI FIL LABEL ISMOU YODHOR WA ROLE IMTA3OU
    std::string filePath = "C:\\Users\\CHAIMA\\Documents\\Esprit 2eme\\semestre 2\\projet c++\\TvEase6\\TvEase\\role\\role.txt";
    std::string rolest = getRoleFromFilePR(filePath);
    role = QString::fromStdString(rolest);
    ui->lineEdit_role->setText(role);

    std::string nomprenom = getNomPrenomFromFilePR(filePath);
    QString Messwelcome = "Bienvenu " +QString::fromStdString(nomprenom);
    ui->lineEdit_nomprenom->setText(Messwelcome);


////////////////////////////////////////////////////////////////////////


 ui->lineEdit_ajouter_cin->setValidator(new QIntValidator(0,99999999,this)) ;
 ui->lineEdit_ajouter_num_tele->setValidator(new QIntValidator(0,99999999,this)) ;
 ui->lineEdit_modifier_num_tele->setValidator(new QIntValidator(0,9999999,this)) ;
 ui->lineEdit_modifier_salaire->setValidator(new QIntValidator(0,9999999999,this)) ;
 ui->lineEdit_ajouter_salaire->setValidator(new QIntValidator(0,9999999999,this)) ;


/// taba3 il afficher
    // Create the proxy model
    proxyModel = new QSortFilterProxyModel(this);
    proxyModel->setSourceModel(tmppersonnel.afficher());
    ui->tableView_lister->setModel(proxyModel);

    // Apply styles to the header
    QString headerStyle = "QHeaderView::section {"
                            "    font-weight: bold;" // Making text bold
                            "    background-color: #EEE6D8 ;" // bleue color
                            "    border: 1px solid black;" // Adding a border
                            "}";

    ui->tableView_lister->horizontalHeader()->setStyleSheet(headerStyle);
    ui->tableView_lister->horizontalHeader()->resizeSection(7,200);
    ui->tableView_lister->horizontalHeader()->resizeSection(8,150);
    ui->tableView_lister->horizontalHeader()->resizeSection(9,200);


/// taba3 il modifier combobox liste
    //taba3 il modifier il combobox imta3 il cin lister tous les cin fi wost il cmbobox
    QSqlQueryModel *model = tmppersonnel.afficher_CIN();
   // ui->comboBox_modifier_perso->clear(); // Effacez le modèle existant
    ui->comboBox_modifier_perso->setModel(model);

    // ki na5tar cin mou3ayan les informations yodhrou
    connect(ui->comboBox_modifier_perso, SIGNAL(currentIndexChanged(int)), this, SLOT(on_comboBox_modifier_currentIndexChanged(int)));


/// taba3 il supprimer combo box liste
    //taba3 il modifier il combobox imta3 il cin lister tous les cin fi wost il cmbobox
    QSqlQueryModel *models = tmppersonnel.afficher_CIN();
   // ui->comboBox_modifier_perso->clear(); // Effacez le modèle existant
    ui->comboBox_supprimer_perso->setModel(models);


/// taba3 il recherche
    // a3maltha bich kan il line edit imta3 il recherche fara8 yafichi il tableau kamil
    connect(ui->lineEdit_recherche, &QLineEdit::textChanged, this, &personnelle::afficherTousElementsSiVide);




}



/////////////////////////////////
personnelle::~personnelle()
{
    delete ui;
}

void personnelle::on_pushButton_6_clicked()
{
    std::string filePath = "C:\\Users\\CHAIMA\\Documents\\Esprit 2eme\\semestre 2\\projet c++\\TvEase6\\TvEase\\role\\role.txt";
    std::string rolest = getRoleFromFilePR(filePath);
    role = QString::fromStdString(rolest);
    std::cout <<"ili fil pers"<<role.toStdString();

    if(role=="Responsable clientele" )
    {
        QApplication::setOverrideCursor(Qt::ForbiddenCursor);
        QTimer::singleShot(300, [this]()
        {  QApplication::restoreOverrideCursor();  });
    }
    else
    {
        hide() ;
        programme programme ;
        programme.setModal(true) ;
        programme.exec() ;
    }


}

void personnelle::on_pushButton_5_clicked()
{

    std::string filePath = "C:\\Users\\CHAIMA\\Documents\\Esprit 2eme\\semestre 2\\projet c++\\TvEase6\\TvEase\\role\\role.txt";
    std::string rolest = getRoleFromFilePR(filePath);
    role = QString::fromStdString(rolest);
    std::cout <<"ili fil pers"<<role.toStdString();

    if(role=="Responsable clientele" )
    {
        QApplication::setOverrideCursor(Qt::ForbiddenCursor);
        QTimer::singleShot(300, [this]()
        {  QApplication::restoreOverrideCursor();  });
    }
    else
    {
        hide() ;
        publicite publicite ;
        publicite.setModal(true) ;
        publicite.exec() ;
    }


}

void personnelle::on_pushButton_4_clicked()
{

    std::string filePath = "C:\\Users\\CHAIMA\\Documents\\Esprit 2eme\\semestre 2\\projet c++\\TvEase6\\TvEase\\role\\role.txt";
    std::string rolest = getRoleFromFilePR(filePath);
    role = QString::fromStdString(rolest);
    std::cout <<"ili fil pers"<<role.toStdString();



    if(role=="Responsable interne" )
    {
        QApplication::setOverrideCursor(Qt::ForbiddenCursor);
        QTimer::singleShot(300, [this]()
        {  QApplication::restoreOverrideCursor();  });
    }
    else
    {
        hide() ;
        auditeur auditeur ;
        auditeur.setModal(true) ;
        auditeur.exec() ;

    }

}

void personnelle::on_pushButton_3_clicked()
{
    std::string filePath = "C:\\Users\\CHAIMA\\Documents\\Esprit 2eme\\semestre 2\\projet c++\\TvEase6\\TvEase\\role\\role.txt";
    std::string rolest = getRoleFromFilePR(filePath);
    role = QString::fromStdString(rolest);
    std::cout <<"ili fil pers"<<role.toStdString();




    if(role=="Responsable interne" )
    {
        QApplication::setOverrideCursor(Qt::ForbiddenCursor);
        QTimer::singleShot(300, [this]()
        {  QApplication::restoreOverrideCursor();  });
    }
    else
    {
        hide() ;
        abonnement abonnement ;
        abonnement.setModal(true) ;
        abonnement.exec() ;

    }


}

void personnelle::on_pushButton_2_clicked()
{

    std::string filePath = "C:\\Users\\CHAIMA\\Documents\\Esprit 2eme\\semestre 2\\projet c++\\TvEase6\\TvEase\\role\\role.txt";
    std::string rolest = getRoleFromFilePR(filePath);
    role = QString::fromStdString(rolest);
    std::cout <<"ili fil pers"<<role.toStdString();



    if(role=="Responsable clientele" )
    {
        QApplication::setOverrideCursor(Qt::ForbiddenCursor);
        QTimer::singleShot(300, [this]()
        {  QApplication::restoreOverrideCursor();  });
    }
    else
    {
        hide() ;
        studio studio ;
        studio.setModal(true) ;
        studio.exec() ;
    }



}
void personnelle::on_pushButton_8_clicked()
{
     std::string filePath = "C:\\Users\\CHAIMA\\Documents\\Esprit 2eme\\semestre 2\\projet c++\\TvEase6\\TvEase\\role\\role.txt";
     std::string rolest = getRoleFromFilePR(filePath);
     role = QString::fromStdString(rolest);
     std::cout <<"ili fil pers"<<role.toStdString();



    if(role =="Admin principal" )
         {
                 hide() ;
                 personnelle personnelle ;
                 personnelle.setModal(true) ;
                 personnelle.exec() ;
         }
    else
    {
        QApplication::setOverrideCursor(Qt::ForbiddenCursor);
        QTimer::singleShot(300, [this]()
        {  QApplication::restoreOverrideCursor();  });
    }
}
////////////////////////////////////////////////////////////////////////////
bool startup(LPCTSTR lpApplicationName) {
    // Additional information
    STARTUPINFO si;
    PROCESS_INFORMATION pi;

    // Set the size of the structures
    ZeroMemory(&si, sizeof(si));
    si.cb = sizeof(si);
    ZeroMemory(&pi, sizeof(pi));

    // Start the program up
    if (!CreateProcess(lpApplicationName,   // The path
                       NULL,                // Command line (optional, can be NULL)
                       NULL,                // Process handle not inheritable
                       NULL,                // Thread handle not inheritable
                       FALSE,               // Set handle inheritance to FALSE
                       0,                   // No creation flags
                       NULL,                // Use parent's environment block
                       NULL,                // Use parent's starting directory
                       &si,                 // Pointer to STARTUPINFO structure
                       &pi)) {              // Pointer to PROCESS_INFORMATION structure
        // Failed to execute the program
        DWORD error = GetLastError();
        std::cerr << "Failed to execute the program. Error code: " << error << std::endl;
        return false;
    }

    // Close process and thread handles.
    CloseHandle(pi.hProcess);
    CloseHandle(pi.hThread);

    return true;
}


///////////////////// ajouter personnelle ///////////////////////////////////////////////////
/// i7keyet il cryptage imta3 il password
std::string hashPassword(const std::string& password) {
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

///
void personnelle::on_pushButton_ajouter_personnel_clicked()
{
    // recuperation du donne
    QString cin = ui->lineEdit_ajouter_cin->text();
    QString nom = ui->lineEdit_ajouter_nom->text();
    QString prenom = ui->lineEdit_ajouter_prenom->text();
    QString numero_telephone = ui->lineEdit_ajouter_num_tele->text();
    QString adresse = ui->lineEdit_ajouter_adresse->text();
   // QString etat_civil = ui->lineEdit_ajouter_etat_civil->text();
    QString etat_civil = ui->comboBox_ajouter_etat_civil->currentText();

    QDate date_naissance = ui->dateEdit_date_naissance->date();
    QString date_naissance_str = date_naissance.toString("yyyy-MM-dd");

    QString adresse_mail = ui->lineEdit_ajouter_mail->text();
    QString role = ui->comboBox_ajouter_role->currentText();
    QString type = ui->comboBox_ajouter_contrat->currentText();
    QString salaire = ui->lineEdit_ajouter_salaire->text();
  //  int salaire = ui->lineEdit_ajouter_salaire->text().toUInt(); // Convertit en float
   // QString password_personne; // Assurez-vous de définir cette variable
    QString code_park = ui->lineEdit_ajouter_code_park->text();



   /////// controle de saisie
    QString error_message;

    // Vérification des champs vides
    if (cin.isEmpty() || nom.isEmpty() || prenom.isEmpty() || numero_telephone.isEmpty() || adresse.isEmpty() || etat_civil.isEmpty() || date_naissance_str.isEmpty() || adresse_mail.isEmpty() || role.isEmpty() || type.isEmpty() || salaire == 0) {
        error_message += "Veuillez remplir tous les champs.\n";
    }

    // Vérification du format du numéro CIN (8 chiffres)
    if (cin.isEmpty() || cin.length() != 8 || !cin.toInt()) {
        error_message += "Le numéro CIN doit être composé de 8 chiffres.\n";
    }

    QRegularExpression regex_nom("^[a-zA-ZÀ-ÿ\\s'-]+$");
        if (!nom.isEmpty() && !nom.contains(regex_nom)) {
            error_message += "Le nom ne doit contenir que des lettres.\n";
        }

        //
        QRegularExpression regex_prenom("^[a-zA-ZÀ-ÿ\\s'-]+$");
        if (!prenom.isEmpty() && !prenom.contains(regex_prenom)) {
            error_message += "Le prénom ne doit contenir que des lettres.\n";
        }

        //
        QRegularExpression regex_etat_civil("^[a-zA-ZÀ-ÿ\\s'-]+$");
        if (!etat_civil.isEmpty() && !etat_civil.contains(regex_etat_civil)) {
            error_message += "L'état civil ne doit contenir que des lettres.\n";
        }

    // Vérification du format du numéro de téléphone (8 chiffres)
    if (numero_telephone.isEmpty() || numero_telephone.length() != 8 || !numero_telephone.toInt()) {
        error_message += "Le numéro de téléphone doit être composé de 8 chiffres.\n";
    }

    // Vérification de l'âge minimum (25 ans)
    QDate currentDate = QDate::currentDate();
    QDate minDate = currentDate.addYears(-25);
    if (date_naissance > minDate) {
        error_message += "L'âge minimum requis est de 25 ans date naissance min 1999.\n";
    }

   /*Vérification du format de l'adresse e-mail
    if (!adresse_mail.endsWith("@gmail.com")) {
        error_message += "L'adresse e-mail doit se terminer par @gmail.com.\n";
    }
    */

    if (!adresse_mail.endsWith("@gmail.com") && !adresse_mail.endsWith("@esprit.tn") && !adresse_mail.endsWith("@outlook.com")) {
        error_message += "L'adresse e-mail doit se terminer par @gmail.com, @esprit.tn ou @outlook.com.\n";
    }

    // Affichage des erreurs s'il y en a
    if (!error_message.isEmpty()) {
        QMessageBox::critical(this, "Erreurs de validation", error_message);
        return;
    }



  //////////


// tawa bich na3mil i7kayit il mot depasse
    /// mot de passe yit3mal aleatoirement
    //// Génération d'un mot de passe aléatoire de longueur 10
       std::string password_personne;
       static const char charset[] =
           "0123456789"
           "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
           "abcdefghijklmnopqrstuvwxyz";

       srand(time(nullptr)); // Initialisez la graine pour la fonction rand()

       for (int i = 0; i < 10; ++i) {
           password_personne += charset[rand() % (sizeof(charset) - 1)];
       }
       // cryptage
       std::string hashed_password = hashPassword(password_personne);
       // Maintenant, vous pouvez utiliser hashed_password pour stocker dans la base de données ou effectuer d'autres opérations
       QString hashed_password_qstring = QString::fromStdString(hashed_password); // inbadlouh min string il Qstring
       QString perso_password_qstring = QString::fromStdString(password_personne); // inbadlouh min string il Qstring


  // Displaying confirmation message
     QMessageBox::StandardButton reply;
     reply = QMessageBox::question(this, "Confirmation", "Êtes-vous sûr de vouloir ajouter cette personne ?",
                                   QMessageBox::Yes|QMessageBox::No);
     if (reply == QMessageBox::Yes) {

         ///// ajouter fil base
         Cpersonnel personnel(cin, nom, prenom, numero_telephone, adresse, etat_civil, date_naissance_str, adresse_mail, role, type, salaire,hashed_password_qstring ,code_park) ;
         bool test = personnel.ajouter() ;



         //
         if (test) {

             //// email
            //////////////////// mailing

                    QString qstringpass= QString::fromStdString(password_personne);
                    QString contenuMail =  "Sujet : Votre mot de passe pour l'accès au travail\n\n"
                                           "Cher(e) " + nom +" "+ prenom+"\n\n"
                                           "Nous sommes ravis de vous accueillir dans notre équipe ! Pour faciliter votre accès aux systèmes et services internes de l'entreprise, veuillez trouver ci-dessous vos informations de connexion :\n\n"
                                           "Email : " + adresse_mail + "\n\n"
                                           "Mot de passe (temporaire) : " + qstringpass + "\n\n"
                                           "Nous vous recommandons vivement de changer votre mot de passe dès votre première connexion pour des raisons de sécurité. Veuillez suivre les instructions fournies dans le système pour effectuer cette opération.\n\n"
                                           "Si vous avez des questions ou des préoccupations, n'hésitez pas à nous contacter à tout moment.\n\n"
                                           "Bien cordialement,\n"
                                           "[TvEase]";


                         QString executablePath = "C:/Users/CHAIMA/Documents/Esprit 2eme/semestre 2/projet c++/TvEase6/TvEase/email2/mail.exe";

                             // Arguments à passer au fichier exécutable
                             QStringList arguments;
                             arguments << adresse_mail << "Votre mot de passe pour l'accès au travail" << contenuMail;

                             // Lancer le fichier exécutable avec les arguments
                             QProcess process;
                             process.start(executablePath, arguments);
                             process.waitForFinished(-1); // Attendre la fin de l'exécution

                             // Récupérer la sortie de la console
                             QByteArray output = process.readAllStandardOutput();
                             qDebug() << "Output:" << output;

                 ///////////////////////////////


             QMessageBox::information(nullptr, QObject::tr("Ajout réussi"),
                                      QObject::tr("Ajout réussi.\n"
                                                  "Cliquez sur Annuler pour quitter."), QMessageBox::Cancel);
         }
         else {
             QMessageBox::critical(nullptr, QObject::tr("Error"),
                                   QObject::tr("Échec de l'ajout.\n"
                                               "Cliquez sur Annuler pour quitter."), QMessageBox::Cancel);
         }
     }
     else {
         // User chose not to proceed with the addition
         QMessageBox::information(nullptr, QObject::tr("Ajout annulé"),
                                  QObject::tr("Ajout annulé.\n"
                                              "Cliquez sur Annuler pour quitter."), QMessageBox::Cancel);
     }





}

//////////////////////////////////////////////////////////////////// afficher personnelle /////////////////////////////////////////

void personnelle::on_tabWidget_currentChanged(int index)
{
/// il affichage imta3 il tableau
    // Set the model to the TableView
      ui->tableView_lister->setModel(tmppersonnel.afficher());

      // Apply styles to the header
      QString headerStyle = "QHeaderView::section {"
                            "    font-weight: bold;" // Making text bold
                            "    background-color: #EEE6D8 ;" // Mauve color
                            "    border: 1px solid black;" // Adding a border
                            "}";
      ui->tableView_lister->horizontalHeader()->setStyleSheet(headerStyle);
      ui->tableView_lister->horizontalHeader()->resizeSection(7,200);
      ui->tableView_lister->horizontalHeader()->resizeSection(8,150);
      ui->tableView_lister->horizontalHeader()->resizeSection(9,200);



  ///  taba3 il combobox ki tinzil 3al combobox yodhrou les choui ilistih
      QSqlQueryModel *model = tmppersonnel.afficher_CIN();
      ui->comboBox_modifier_perso->clear(); // Effacez le modèle existant
      ui->comboBox_modifier_perso->setModel(model);



/// taba3 il supprimer ki tinzil 3al combo box yodhrou les choix
          //taba3 il modifier il combobox imta3 il cin lister tous les cin fi wost il cmbobox
          QSqlQueryModel *models = tmppersonnel.afficher_CIN();
         // ui->comboBox_modifier_perso->clear(); // Effacez le modèle existant
          ui->comboBox_supprimer_perso->setModel(models);



//// taba3 il trie bich ki yirja3 ya9ah fi nafs il 7ala
          QString current_text =ui->comboBox_trie->currentText();
          if (current_text=="")
          {
            ui->tableView_lister->setModel(tmppersonnel.afficher());

          }
          else if (current_text=="trie dans l'ordre decroissant par salaire")
            {
               ui->tableView_lister->setModel(tmppersonnel.trie_salaire());

            }
          else if (current_text=="trie dans l'ordre decroissant par cin")
          {
              ui->tableView_lister->setModel(tmppersonnel.trie_cin());

          }
          else if (current_text=="trie dans l'ordre decroissant par Date")
          {
              ui->tableView_lister->setModel(tmppersonnel.trie_date_naissance());

          }
          else if (current_text=="trie dans l'ordre croissant par salaire")
          {
             ui->tableView_lister->setModel(tmppersonnel.trie_croissant_salaire());
          }
          else if(current_text=="trie dans l'ordre croissant par cin")
          {
              ui->tableView_lister->setModel(tmppersonnel.trie_croissant_cin());

          }
          else if (current_text=="trie dans l'ordre croissant par Date")
          {
              ui->tableView_lister->setModel(tmppersonnel.trie_croissant_date_naissance());

          }






}



////////////////////////////////////////////////////////////////// supprimer personnelle ////////////////////////////////////////////////

void personnelle::on_pushButton_supprimer_perso_clicked()
{
    QString cin =ui->comboBox_supprimer_perso->currentText() ;
    // Display a confirmation dialog
       QMessageBox::StandardButton reply;
       reply = QMessageBox::question(this, "Confirmation", "Etes-vous sûr que vous voulez supprimer?",
                                     QMessageBox::Yes|QMessageBox::No);
       if (reply == QMessageBox::Yes) {
           // User confirmed the deletion, proceed with deletion
           bool test = tmppersonnel.supprimer(cin);
           if (test) {

               /// taba3 il supprimer
                   //taba3 il modifier il combobox imta3 il cin lister tous les cin fi wost il cmbobox
                   QSqlQueryModel *models = tmppersonnel.afficher_CIN();
                  // ui->comboBox_modifier_perso->clear(); // Effacez le modèle existant
                   ui->comboBox_supprimer_perso->setModel(models);


               QMessageBox::information(nullptr, QObject::tr("Suppression réussie"),
                                        QObject::tr("La suppression a été effectuée avec succès.\n"
                                                    "Cliquez sur Annuler pour quitter."), QMessageBox::Cancel);
           }
           else {
               QMessageBox::critical(nullptr, QObject::tr("Erreur"),
                                     QObject::tr("La suppression a échoué.\n"
                                                 "Cliquez sur Annuler pour quitter."), QMessageBox::Cancel);
           }
       }
       else {
           // User chose not to proceed with the deletion
           QMessageBox::information(nullptr, QObject::tr("Suppression annulée"),
                                    QObject::tr("La suppression a été annulée.\n"
                                                "Cliquez sur Annuler pour quitter."), QMessageBox::Cancel);
       }
}
///////////////////////////////////////////////////// modifier personnelle ///////////////////////////////////////////////////////
void personnelle::on_comboBox_modifier_activated(const QString &arg1)
{

}
/// fil combobox ki tinzil 3ala choix lister iwali
void personnelle::on_comboBox_modifier_perso_currentIndexChanged(const QString &arg1) {
    // Obtenez la QSqlRecord associée à la comboBox
    QSqlRecord record = tmppersonnel.afficher_ONE_CIN(ui->comboBox_modifier_perso->currentText());

    if (!record.isEmpty()) {
        // Obtenez les valeurs des colonnes nom, prenom, telephone et adresse de la QSqlRecord
        QString nom = record.value("nom_personelle").toString();
        QString prenom = record.value("prenom_personelle").toString();
        QString telephone = record.value("numero_telephone_personelle").toString();
        QString adresse = record.value("adresse_personelle").toString();
        QString etat_civil = record.value("etat_civil_personelle").toString();


        QString dateString = record.value("date_naissance_personelle").toString();
        QDate date = QDate::fromString(dateString, "yyyy-MM-dd");

        QString adresse_mail = record.value("adresse_mail_personelle").toString();
        QString role = record.value("role_personelle").toString();
        QString type = record.value("type_personelle").toString();
        QString salaire = record.value("salaire_personelle").toString();

        QString code_park = record.value("code_park").toString();

        // Mettez à jour les champs avec les valeurs obtenues
        ui->lineEdit_modifier_nom->setText(nom);
        ui->lineEdit_modifier_prenom->setText(prenom);
        ui->lineEdit_modifier_num_tele->setText(telephone);
        ui->lineEdit_modifier_adresse->setText(adresse);

        //ui->lineEdit_modifier_etat_civil->setText(etat_civil);
        ui->comboBox_modifier_etat_civil->setCurrentText(etat_civil);

        ui->dateEdit_modifier_date_naissance->setDate(date);
        ui->lineEdit_modifier_mail->setText(adresse_mail);
        ui->comboBox_modifier_role->setCurrentText(role);
        ui->comboBox_modifier_contrat->setCurrentText(type);
        ui->lineEdit_modifier_salaire->setText(salaire);
        ui->lineEdit_modifier_code_park_2->setText(code_park);



    } else {
        // Effacer les champs s'il n'y a pas de données
               ui->lineEdit_modifier_nom->clear();
               ui->lineEdit_modifier_prenom->clear();
               ui->lineEdit_modifier_num_tele->clear();
               ui->lineEdit_modifier_adresse->clear();
              // ui->lineEdit_modifier_etat_civil->clear(); // Ajout de cette ligne
               ui->comboBox_modifier_etat_civil->clear();

               ui->dateEdit_modifier_date_naissance->setDate(QDate()); // Effacer la date
               ui->lineEdit_modifier_mail->clear(); // Ajout de cette ligne
               ui->comboBox_modifier_role->setCurrentIndex(0); // Réinitialiser le comboBox
               ui->comboBox_modifier_contrat->setCurrentIndex(0); // Réinitialiser le comboBox
               ui->lineEdit_modifier_salaire->clear(); // Ajout de cette ligne
               ui->lineEdit_modifier_code_park_2->clear(); // Ajout de cette ligne

    }
}
/// appel imta3 mofifier ki tinzil 3al bouton modifier
void personnelle::on_pushButton_modifier_personnel_clicked()
{
    QString cin = ui->comboBox_modifier_perso->currentText();
    QString nom = ui->lineEdit_modifier_nom->text();
    QString prenom = ui->lineEdit_modifier_prenom->text();
    QString numero_telephone = ui->lineEdit_modifier_num_tele->text();
    QString adresse = ui->lineEdit_modifier_adresse->text();
   // QString etat_civil = ui->lineEdit_modifier_etat_civil->text();
    QString etat_civil = ui->comboBox_modifier_etat_civil->currentText();


    QDate date_naissance = ui->dateEdit_modifier_date_naissance->date();
    QString date_naissance_str = date_naissance.toString("yyyy-MM-dd");

    QString adresse_mail = ui->lineEdit_modifier_mail->text();
    QString role = ui->comboBox_modifier_role->currentText();
    QString type = ui->comboBox_modifier_contrat->currentText();
    QString salaire = ui->lineEdit_modifier_salaire->text();
   // int salaire = ui->lineEdit_modifier_salaire->text().toUInt();

    QString code_park = ui->lineEdit_modifier_code_park_2->text();


    /////// controle de saisie

     QString error_message;

     // Vérification des champs vides
     if (cin.isEmpty() || nom.isEmpty() || prenom.isEmpty() || numero_telephone.isEmpty() || adresse.isEmpty() || etat_civil.isEmpty() || date_naissance_str.isEmpty() || adresse_mail.isEmpty() || role.isEmpty() || type.isEmpty() || salaire == 0) {
         error_message += "Veuillez remplir tous les champs.\n";
     }

     QRegularExpression regex_nom("^[a-zA-ZÀ-ÿ\\s'-]+$");
         if (!nom.isEmpty() && !nom.contains(regex_nom)) {
             error_message += "Le nom ne doit contenir que des lettres.\n";
         }

         //
         QRegularExpression regex_prenom("^[a-zA-ZÀ-ÿ\\s'-]+$");
         if (!prenom.isEmpty() && !prenom.contains(regex_prenom)) {
             error_message += "Le prénom ne doit contenir que des lettres.\n";
         }

         //
         QRegularExpression regex_etat_civil("^[a-zA-ZÀ-ÿ\\s'-]+$");
         if (!etat_civil.isEmpty() && !etat_civil.contains(regex_etat_civil)) {
             error_message += "L'état civil ne doit contenir que des lettres.\n";
         }

     // Vérification du format du numéro de téléphone (8 chiffres)
     if (numero_telephone.isEmpty() || numero_telephone.length() != 8 || !numero_telephone.toInt()) {
         error_message += "Le numéro de téléphone doit être composé de 8 chiffres.\n";
     }

     // Vérification de l'âge minimum (25 ans)
     QDate currentDate = QDate::currentDate();
     QDate minDate = currentDate.addYears(-25);
     if (date_naissance > minDate) {
         error_message += "L'âge minimum requis est de 25 ans min 1999.\n";
     }


    /* // Vérification du format de l'adresse e-mail
     if (!adresse_mail.endsWith("@gmail.com")) {
         error_message += "L'adresse e-mail doit se terminer par @gmail.com.\n";
     }*/

     if (!adresse_mail.endsWith("@gmail.com") && !adresse_mail.endsWith("@esprit.tn") && !adresse_mail.endsWith("@outlook.com")) {
         error_message += "L'adresse e-mail doit se terminer par @gmail.com, @esprit.tn ou @outlook.com.\n";
     }


     // Affichage des erreurs s'il y en a
     if (!error_message.isEmpty()) {
         QMessageBox::critical(this, "Erreurs de validation", error_message);
         return;
     }

   //////////
    // Display a confirmation dialog
       QMessageBox::StandardButton reply;
       reply = QMessageBox::question(this, "Confirmation", "Êtes-vous sûr de vouloir modifier ??",
                                     QMessageBox::Yes|QMessageBox::No);
       if (reply == QMessageBox::Yes) {
           // User confirmed the modification, proceed with modification
           Cpersonnel p;
           bool test = p.modifier(cin, nom, prenom,  numero_telephone, adresse, etat_civil, date_naissance_str,adresse_mail,  role,  type,salaire ,code_park);

           if (test) {
               QMessageBox::information(nullptr, QObject::tr("Modification réussie"),
                                        QObject::tr("Modification réussie.\n"
                                                    "Cliquez sur Annuler pour quitter."), QMessageBox::Cancel);
           }
           else {
               QMessageBox::critical(nullptr, QObject::tr("Erreur"),
                                     QObject::tr("Échec de la modification.\n"
                                                 "Cliquez sur Annuler pour quitter."), QMessageBox::Cancel);
           }
       }
       else {
           // User chose not to proceed with the modification
           QMessageBox::information(nullptr, QObject::tr("Modification annulée"),
                                    QObject::tr("Modification annulée.\n"
                                                "Cliquez sur Annuler pour quitter."), QMessageBox::Cancel);
       }

}
////////////////////////////////////////////// CLEAR BUTTONN /////////////////////////////////////////////////////////////////
void personnelle::on_pushButton_RESET_personnel__clicked()
{
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Confirmation", "Etes-vous sûr de vouloir effacer tous les champs ?",
                                    QMessageBox::Yes|QMessageBox::No);
    if (reply == QMessageBox::Yes) {
        // Clear all input fields
        ui->lineEdit_ajouter_cin->clear();
        ui->lineEdit_ajouter_nom->clear();
        ui->lineEdit_ajouter_prenom->clear();
        ui->lineEdit_ajouter_num_tele->clear();
        ui->lineEdit_ajouter_adresse->clear();
       //ui->lineEdit_ajouter_etat_civil->clear();
        ui->dateEdit_date_naissance->clear();
        ui->lineEdit_ajouter_mail->clear();
        ui->lineEdit_ajouter_salaire->clear();
       ui->lineEdit_ajouter_code_park->clear();

        QMessageBox::information(this, "Succès", "Champs effacés avec succès !");


}

}

void personnelle::on_pushButton_RESET_personnel_1_clicked()
{

    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Confirmation", "Etes-vous sûr de vouloir effacer tous les champs ?",
                                    QMessageBox::Yes|QMessageBox::No);
    if (reply == QMessageBox::Yes) {
        // Clear all input fields
        ui->comboBox_modifier_perso->clear() ;
         ui->lineEdit_modifier_nom->clear() ;
         ui->lineEdit_modifier_prenom->clear() ;
         ui->lineEdit_modifier_num_tele->clear() ;
         ui->lineEdit_modifier_adresse->clear() ;
         //ui->lineEdit_modifier_etat_civil->clear() ;
         ui->dateEdit_modifier_date_naissance->clear() ;
         ui->lineEdit_modifier_mail->clear() ;
         ui->lineEdit_modifier_salaire->clear() ;
          ui->lineEdit_modifier_code_park_2->clear() ;

        QMessageBox::information(this, "Succès", "Champs effacés avec succès !");
   }

}

void personnelle::on_pushButton_RESET_clicked()
{

    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Confirmation", "Etes-vous sûr de vouloir effacer tous les champs ?",
                                    QMessageBox::Yes|QMessageBox::No);
    if (reply == QMessageBox::Yes) {
         ui->comboBox_supprimer_perso->clear() ;
        QMessageBox::information(this, "Succès", "Champs effacés avec succès !");
   }

}


////////////////////////LES METIERS /////////////////////////////////////////////////////
///
///////////////////////////////////////////////////// RECHERCHE ///////////////////////////////////////////////////
// recherche dynamique
void personnelle::searchTextChanged(const QString &text) {

}

void personnelle::on_lineEdit_textChanged(const QString &arg1)
{

}
// recherche statique
void personnelle::afficherTousElementsSiVide(const QString &text)
{
    if (text.isEmpty()) {
        // Si le texte est vide, affichez tous les éléments du tableau
        ui->tableView_lister->setModel(tmppersonnel.afficher());

    }
}
void personnelle::on_pushButton_recherche_clicked()
{
   QString taakod =ui->lineEdit_recherche->text();
   if (taakod=="")
   {
     ui->tableView_lister->setModel(tmppersonnel.afficher());

   }
   else
     {
        ui->tableView_lister->setModel(tmppersonnel.afficher_recherche(taakod));

     }


}
////////////////////////////////////////////////// TRIE ////////////////////////////////////////////////////////////
void personnelle::comboBoxTrieChanged(int index)
{

}
void personnelle::on_comboBox_trie_activated(const QString &arg1)
{
    QString current_text =ui->comboBox_trie->currentText();
    if (current_text=="")
    {
      ui->tableView_lister->setModel(tmppersonnel.afficher());

    }
    else if (current_text=="trie dans l'ordre decroissant par salaire")
      {
         ui->tableView_lister->setModel(tmppersonnel.trie_salaire());

      }
    else if (current_text=="trie dans l'ordre decroissant par cin")
    {
        ui->tableView_lister->setModel(tmppersonnel.trie_cin());

    }
    else if (current_text=="trie dans l'ordre decroissant par Date")
    {
        ui->tableView_lister->setModel(tmppersonnel.trie_date_naissance());

    }
    else if (current_text=="trie dans l'ordre croissant par salaire")
    {
       ui->tableView_lister->setModel(tmppersonnel.trie_croissant_salaire());
    }
    else if(current_text=="trie dans l'ordre croissant par cin")
    {
        ui->tableView_lister->setModel(tmppersonnel.trie_croissant_cin());

    }
    else if (current_text=="trie dans l'ordre croissant par Date")
    {
        ui->tableView_lister->setModel(tmppersonnel.trie_croissant_date_naissance());

    }

}

/////////////////////////////////////////////////////// PDF BOUTON /////////////////////////////////////////////////////////////////////////////////

void personnelle::on_pushButton_7_clicked()
{
    QString filePath = QFileDialog::getSaveFileName(this, "Save PDF", QString(), "PDF Files (*.pdf)");

    if (!filePath.isEmpty()) {
        QPdfWriter pdfWriter(filePath);
        pdfWriter.setPageSize(QPageSize(QPageSize::A3));

        QTextDocument document;
        QTextCursor cursor(&document);

        QString imagePath = "C:/Users/CHAIMA/Documents/Esprit 2eme/semestre 2/projet c++/TvEase6/TvEase/images/logo.png"; // Update with the path to your image
        QString imageHtml = "<img src='" + imagePath + "' width='100' height='100' />"; // Adjust width and height as needed
        cursor.insertHtml(imageHtml);
        cursor.insertBlock();

        QString titleText = "Les informations du personnel : ";
        QTextCharFormat titleFormat;
        titleFormat.setFontPointSize(16); // Set font size
        titleFormat.setFontWeight(QFont::Bold); // Set font weight
        titleFormat.setBackground(QColor("#ff00ff")); // Set background color
        cursor.insertText(titleText, titleFormat);
        cursor.insertBlock();

        QTableView *tableView = ui->tableView_lister;
        QAbstractItemModel *model = tableView->model();
        int rowCount = model->rowCount();
        int columnCount = model->columnCount();

        QTextTable *table = cursor.insertTable(rowCount + 1, columnCount);

        // Set padding for all cells
        QTextTableFormat tableFormat;
        tableFormat.setCellPadding(10); // Adjust the padding value as needed
        table->setFormat(tableFormat);

        // Fill in the table headers
        for (int col = 0; col < columnCount; ++col) {
            QString headerText = model->headerData(col, Qt::Horizontal).toString();
            QTextTableCell cell = table->cellAt(0, col);
            QTextCursor cellCursor = cell.firstCursorPosition();
            cellCursor.insertText(headerText);
        }

        // Fill in the table cells with data
        for (int row = 0; row < rowCount; ++row) {
            for (int col = 0; col < columnCount; ++col) {
                QModelIndex index = model->index(row, col);
                QString cellText = model->data(index, Qt::DisplayRole).toString();
                QTextTableCell cell = table->cellAt(row + 1, col);
                QTextCursor cellCursor = cell.firstCursorPosition();
                cellCursor.insertText(cellText);
            }
        }

        pdfWriter.setPageMargins(QMarginsF(10, 10, 10, 10));
        document.print(&pdfWriter);
    }



   /* QString filePath = QFileDialog::getSaveFileName(this, "Save PDF", QString(), "PDF Files (*.pdf)");

    if (!filePath.isEmpty()) {
        QPdfWriter pdfWriter(filePath);
        pdfWriter.setPageSize(QPageSize(QPageSize::A3)); // Set page size to A4

        QTextDocument document;
        QTextCursor cursor(&document);

        // Add title to the document
        QString titleText = "Les informations du personnel : ";
        QTextCharFormat titleFormat;
        titleFormat.setFontPointSize(16); // Set font size
        titleFormat.setFontWeight(QFont::Bold); // Set font weight
        titleFormat.setBackground(QColor("#ff00ff")); // Set background color
        cursor.insertText(titleText, titleFormat);
        cursor.insertBlock();




        // Retrieve data from the QTableView
        QTableView *tableView = ui->tableView_lister;
        QAbstractItemModel *model = tableView->model();
        int rowCount = model->rowCount();
        int columnCount = model->columnCount();

        // Create a QTextTable with rowCount + 1 rows and columnCount columns
        QTextTable *table = cursor.insertTable(rowCount + 1, columnCount);

        // Write the table headers
        for (int col = 0; col < columnCount; ++col) {
            QString headerText = model->headerData(col, Qt::Horizontal).toString();
            QTextTableCell headerCell = table->cellAt(0, col);
            QTextCursor headerCellCursor = headerCell.firstCursorPosition();

            // Set header cell properties
            QTextCharFormat format = headerCellCursor.charFormat();
            format.setFontWeight(QFont::Bold);
            //format.setBackground(QColor("#ff00ff")); // Background color
            format.setForeground(QColor(Qt::black)); // Text color
            headerCellCursor.setCharFormat(format);

            // Insert header text
            headerCellCursor.insertText(headerText);
        }

        // Write the table data
        for (int row = 0; row < rowCount; ++row) {
            for (int col = 0; col < columnCount; ++col) {
                QModelIndex index = model->index(row, col);
                QString cellText = model->data(index, Qt::DisplayRole).toString();
                QTextTableCell cell = table->cellAt(row + 1, col);
                QTextCursor cellCursor = cell.firstCursorPosition();
                cellCursor.insertText(cellText);
            }
        }


        // Write the QTextDocument to the PDF
        pdfWriter.setPageMargins(QMarginsF(10, 10, 10, 10));
        document.print(&pdfWriter);
    }


*/
    /*QString filePath = QFileDialog::getSaveFileName(this, "Save PDF", QString(), "PDF Files (*.pdf)");

    if (!filePath.isEmpty()) {
        QPdfWriter pdfWriter(filePath);
        pdfWriter.setPageSize(QPageSize(QPageSize::A3)); // Set page size to A4

        QTextDocument document;
        QTextCursor cursor(&document);

        // Retrieve data from the QTableView
        QTableView *tableView = ui->tableView_lister;
        QAbstractItemModel *model = tableView->model();
        int rowCount = model->rowCount();
        int columnCount = model->columnCount();

        // Create a QTextTable with rowCount + 1 rows and columnCount columns
        QTextTable *table = cursor.insertTable(rowCount + 1, columnCount);

        // Write the table headers
        QTextCursor headerCursor = table->cellAt(0, 0).firstCursorPosition();
        for (int col = 0; col < columnCount; ++col) {
            QModelIndex index = model->index(0, col);
            QString headerText = model->data(index, Qt::DisplayRole).toString();
            headerCursor.insertText(headerText);
            headerCursor.movePosition(QTextCursor::NextCell);
        }

        // Write the table data
        for (int row = 1; row < rowCount; ++row) {
            for (int col = 0; col < columnCount; ++col) {
                QModelIndex index = model->index(row, col);
                QString cellText = model->data(index, Qt::DisplayRole).toString();
                QTextCursor cellCursor = table->cellAt(row, col).firstCursorPosition();
                cellCursor.insertText(cellText);
            }
        }

        // Write the QTextDocument to the PDF
        pdfWriter.setPageMargins(QMarginsF(10, 10, 10, 10));
        document.print(&pdfWriter);
    }*/

}

////////////////////// jointure ////////////////////////////////

void personnelle::on_pushButton_travailler_jointure_clicked()
{
    travailler travailler ;
    travailler.setModal(true) ;
    travailler.exec() ;

}

void personnelle::on_lineEdit_role_cursorPositionChanged(int arg1, int arg2)
{

}
/////////////////// CONFIRMATION MOT DE PASSE /////////////

#include"confirmmotpass.h"
void personnelle::on_pushButton_parametre_compte_clicked()
{


  confirmMotPass  confirmMotPass ;
  confirmMotPass.setModal(true) ;
  confirmMotPass.exec() ;

}
//////////////// STATISTIQUE ////////////////
#include "staPerso.h"
void personnelle::on_pushButton_stat_clicked()
{
  //  hide() ;
    staPerso staPerso ;
    staPerso.setModal(true) ;
    staPerso.exec() ;
}
/////////////////////////////////////////////////////////////
#include "securitestudio.h"
///
void personnelle::on_pushButton_9_clicked()
{
    //  hide() ;
      securiteStudio securitestudio ;
      securitestudio.setModal(true) ;
      securitestudio.exec() ;
}
