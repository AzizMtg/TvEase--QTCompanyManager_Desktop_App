#include "abonnement.h"
#include "ui_abonnement.h"
//
#include "personnelle.h"
#include "programme.h"
#include "publicite.h"
#include "auditeur.h"
#include "studio.h"
//
//file role
#include <iostream>
#include <fstream>
#include <string>
#include<QTimer>
///
// khalillll
#include "cabonnement.h"
//#include "abonnement_arduino.h"

#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QMainWindow>
#include <QApplication>
#include <QMessageBox>
#include<QDate>
//
#include "personnelle.h"
#include "programme.h"
#include "publicite.h"
#include "auditeur.h"
#include "studio.h"
#include <QPdfWriter>
#include <QPainter>


//
#include <QFile>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
///
////////////////////////////ROLE
std::string getRoleFromFileAB(const std::string& filePath) {
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
///
std::string getNomPrenomFromFileAB(const std::string& filePath) {
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
void abonnement::updateTime()
{
    // Get the current time
    QTime currentTime = QTime::currentTime();
    // Convert the time to string in the format "hh:mm:ss"
    QString timeText = currentTime.toString("hh:mm:ss");
    // Update the QLabel text with the current time
    ui->label_heure->setText(timeText);
}

///
abonnement::abonnement(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::abonnement)
{
    ui->setupUi(this);

    std::string filePath = "C:\\Users\\CHAIMA\\Documents\\Esprit 2eme\\semestre 2\\projet c++\\TvEase6\\TvEase\\role\\role.txt";
    std::string rolest = getRoleFromFileAB(filePath);
    role = QString::fromStdString(rolest);
    ui->lineEdit_role->setText(role);

    std::string nomprenom = getNomPrenomFromFileAB(filePath);
    QString Messwelcome = "Bienvenu " +QString::fromStdString(nomprenom);
    ui->lineEdit_nomprenom->setText(Messwelcome);

 /// code khalillll
   // connect(ui->lineEdit_recherche, &QLineEdit::textChanged, this, &abonnement::afficherTousElementsSiVide);
     // ui->tableView_liste_abonnement->setModel(Atmp.afficher_abonnement());
     // ui->tableView_historique->setModel(Atmp.afficher_historique());
     // ui->tableView_historique->setModel(Atmp.afficher_historique());

      mettreAJourGraphique();



      /// taba3 il afficher
          // Create the proxy model
          proxyModel = new QSortFilterProxyModel(this);
          proxyModel->setSourceModel(Atmp.afficher_abonnement());
          ui->tableView_liste_abonnement->setModel(proxyModel);

          // Apply styles to the header
          QString headerStyle = "QHeaderView::section {"
                                  "    font-weight: bold;" // Making text bold
                                  "    background-color: #EEE6D8 ;" // bleue color
                                  "    border: 1px solid black;" // Adding a border
                                  "}";

          ui->tableView_liste_abonnement->horizontalHeader()->setStyleSheet(headerStyle);
          ui->tableView_liste_abonnement->horizontalHeader()->resizeSection(0,200);
          ui->tableView_liste_abonnement->horizontalHeader()->resizeSection(1,200);
          ui->tableView_liste_abonnement->horizontalHeader()->resizeSection(2,200);
          ui->tableView_liste_abonnement->horizontalHeader()->resizeSection(3,200);
          ui->tableView_liste_abonnement->horizontalHeader()->resizeSection(4,200);
          ui->tableView_liste_abonnement->horizontalHeader()->resizeSection(5,200);

////////// wa9t wa jour
      ///////////////time/////////////////////////
            // Create a QTimer to update the time every second
               QTimer *timer = new QTimer(this);
               connect(timer, &QTimer::timeout, this, &abonnement::updateTime);
               timer->start(5); // 1000 milliseconds = 1 second

               /////
                       QDateTime currentDateTime = QDateTime::currentDateTime();
                            QString currentDate = currentDateTime.toString("dddd dd/MM/yyyy");
                            ui->label_date->setText(currentDate);

}

abonnement::~abonnement()
{
    delete ui;
}

//////////////
void abonnement::on_pushButton_30_clicked()
{

    std::string filePath = "C:\\Users\\CHAIMA\\Documents\\Esprit 2eme\\semestre 2\\projet c++\\TvEase6\\TvEase\\role\\role.txt";
    std::string rolest = getRoleFromFileAB(filePath);
    role = QString::fromStdString(rolest);
    std::cout <<"ili fil abon"<<role.toStdString();

    if(role =="Admin principal" )
         {

                 // Create the new UI
                 personnelle *newUI = new personnelle;

                 // Make the new UI transparent
                  newUI->setWindowOpacity(0.0);

                 // Show the new UI
                 newUI->show();

                 // Animate the opacity to make it gradually visible
                 QPropertyAnimation *animation = new QPropertyAnimation(newUI, "windowOpacity");
                 animation->setDuration(50); // 500 milliseconds
                 animation->setStartValue(0.0);
                 animation->setEndValue(1.0);

                 // Hide the old UI (this dialog) after the animation finishes
                 connect(animation, &QPropertyAnimation::finished, this, [=]() {
                     hide();
                     animation->deleteLater(); // Delete the animation object when done
                 });

                 // Start the animation
                 animation->start();
         }
    else
    {
        QApplication::setOverrideCursor(Qt::ForbiddenCursor);
        QTimer::singleShot(300, [this]()
        {  QApplication::restoreOverrideCursor();  });
    }

}
/************/
void abonnement::on_pushButton_31_clicked()
{

    std::string filePath = "C:\\Users\\CHAIMA\\Documents\\Esprit 2eme\\semestre 2\\projet c++\\TvEase6\\TvEase\\role\\role.txt";
    std::string rolest = getRoleFromFileAB(filePath);
    role = QString::fromStdString(rolest);

    if(role=="Responsable clientele" )
        {
        QApplication::setOverrideCursor(Qt::ForbiddenCursor);
        QTimer::singleShot(300, [this]()
        {  QApplication::restoreOverrideCursor();  });


        }
        else
        {

            // Create the new UI
            programme *newUI = new programme;

            // Make the new UI transparent
             newUI->setWindowOpacity(0.0);

            // Show the new UI
            newUI->show();

            // Animate the opacity to make it gradually visible
            QPropertyAnimation *animation = new QPropertyAnimation(newUI, "windowOpacity");
            animation->setDuration(50); // 500 milliseconds
            animation->setStartValue(0.0);
            animation->setEndValue(1.0);

            // Hide the old UI (this dialog) after the animation finishes
            connect(animation, &QPropertyAnimation::finished, this, [=]() {
                hide();
                animation->deleteLater(); // Delete the animation object when done
            });

            // Start the animation
            animation->start();




        }  ;
}

void abonnement::on_pushButton_32_clicked()
{

    std::string filePath = "C:\\Users\\CHAIMA\\Documents\\Esprit 2eme\\semestre 2\\projet c++\\TvEase6\\TvEase\\role\\role.txt";
    std::string rolest = getRoleFromFileAB(filePath);
    role = QString::fromStdString(rolest);

    if(role=="Responsable clientele" )
        {
        QApplication::setOverrideCursor(Qt::ForbiddenCursor);
        QTimer::singleShot(300, [this]()
        {  QApplication::restoreOverrideCursor();  });
        }
        else
        {
           // Create the new UI
            publicite *newUI = new publicite;

            // Make the new UI transparent
             newUI->setWindowOpacity(0.0);

            // Show the new UI
            newUI->show();

            // Animate the opacity to make it gradually visible
            QPropertyAnimation *animation = new QPropertyAnimation(newUI, "windowOpacity");
            animation->setDuration(50); // 500 milliseconds
            animation->setStartValue(0.0);
            animation->setEndValue(1.0);

            // Hide the old UI (this dialog) after the animation finishes
            connect(animation, &QPropertyAnimation::finished, this, [=]() {
                hide();
                animation->deleteLater(); // Delete the animation object when done
            });

            // Start the animation
            animation->start();
        }
}

void abonnement::on_pushButton_33_clicked()
{


    std::string filePath = "C:\\Users\\CHAIMA\\Documents\\Esprit 2eme\\semestre 2\\projet c++\\TvEase6\\TvEase\\role\\role.txt";
    std::string rolest = getRoleFromFileAB(filePath);
    role = QString::fromStdString(rolest);

    if(role=="Responsable interne" )
          {
            QApplication::setOverrideCursor(Qt::ForbiddenCursor);
            QTimer::singleShot(300, [this]()
           {  QApplication::restoreOverrideCursor();  });
         }
          else
          {

              // Create the new UI
              auditeur *newUI = new auditeur;

              // Make the new UI transparent
               newUI->setWindowOpacity(0.0);

              // Show the new UI
              newUI->show();

              // Animate the opacity to make it gradually visible
              QPropertyAnimation *animation = new QPropertyAnimation(newUI, "windowOpacity");
              animation->setDuration(50); // 500 milliseconds
              animation->setStartValue(0.0);
              animation->setEndValue(1.0);

              // Hide the old UI (this dialog) after the animation finishes
              connect(animation, &QPropertyAnimation::finished, this, [=]() {
                  hide();
                  animation->deleteLater(); // Delete the animation object when done
              });

              // Start the animation
              animation->start();
          }

}

void abonnement::on_pushButton_35_clicked()
{

    std::string filePath = "C:\\Users\\CHAIMA\\Documents\\Esprit 2eme\\semestre 2\\projet c++\\TvEase6\\TvEase\\role\\role.txt";
    std::string rolest = getRoleFromFileAB(filePath);
    role = QString::fromStdString(rolest);

    if(role=="Responsable clientele" )
      {
        QApplication::setOverrideCursor(Qt::ForbiddenCursor);
        QTimer::singleShot(300, [this]()
        {  QApplication::restoreOverrideCursor();  });
      }
      else
      {

          // Create the new UI
          studio *newUI = new studio;

          // Make the new UI transparent
           newUI->setWindowOpacity(0.0);

          // Show the new UI
          newUI->show();

          // Animate the opacity to make it gradually visible
          QPropertyAnimation *animation = new QPropertyAnimation(newUI, "windowOpacity");
          animation->setDuration(50); // 500 milliseconds
          animation->setStartValue(0.0);
          animation->setEndValue(1.0);

          // Hide the old UI (this dialog) after the animation finishes
          connect(animation, &QPropertyAnimation::finished, this, [=]() {
              hide();
              animation->deleteLater(); // Delete the animation object when done
          });

          // Start the animation
          animation->start();
      }

}

void abonnement::on_pushButton_34_clicked()
{
   /* std::string filePath = "C:\\Users\\CHAIMA\\Documents\\Esprit 2eme\\semestre 2\\projet c++\\TvEase6\\TvEase\\role\\role.txt";
    std::string rolest = getRoleFromFileAB(filePath);
    role = QString::fromStdString(rolest);

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
          }*/
}
/////////////////////////////////////////////////////////////parametre mot de passe
/////////////////// MODIFICATION MOT DE PASSE //////////////

#include"confirmmotpass.h"

void abonnement::on_pushButton_parametre_compte_clicked()
{

    confirmMotPass  confirmMotPass ;
    confirmMotPass.setModal(true) ;
    confirmMotPass.exec() ;
}
////////////////////// khalilll
/*****  to5ol lkl base wa itraja3 mail auditeur *********/
QString getEmailFromId(int id) {
    QSqlQuery query;
    QString email;

    query.prepare("SELECT MAIL_AUDITEUR FROM AUDITEUR WHERE ID_AUDITEUR = :id_audi");
    query.bindValue(":id_audi", id);

    if (query.exec() && query.next()) {
        email = query.value(0).toString();
    } else {
        // Gérer le cas où l'ID n'est pas trouvé ou s'il y a une erreur dans la requête
        // Par exemple, vous pouvez attribuer une valeur par défaut à l'e-mail ou lever une exception.
        email = "Email non trouvé"; // À adapter selon votre logique
    }

    return email;
}

/**********************/
void abonnement::on_pushButton_Gnerer_clicked()
{   int numero_abonnement = Atmp.generateUniqueNumber();
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Confirmation", "Voulez-vous vraiment générer l'abonnement?",
                                  QMessageBox::Yes|QMessageBox::No);
    if (reply == QMessageBox::Yes) {
        //int id_abonnement = ui->lineEdit_Id_abonnement->text().toInt();
        //int numero_abonnement = ui->lineEdit_numero_abonnement->text().toInt();
        ui->lineEdit_numero_abonnement->setText(QString::number(numero_abonnement));
        QDate Date_debut = ui->dateEdit_debut->date();
        QDate Date_expiration = ui->dateEdit_expiration->date();
        QString Type_abonnement = ui->comboBox_type_abonnement->currentText();

        int id_auditeur = ui->lineEdit_id_auditeur->text().toInt();


         QString prix = ui->lineEdit_prix->text();


        if (Date_debut.year() <= 2023 || Date_expiration.year() <= 2023) {
            QMessageBox::warning(this, "Erreur de saisie", "Veuillez saisir des dates correctes.");
            return;
        }

        if (Date_debut >= Date_expiration) {
            QMessageBox::warning(this, "Erreur de saisie", "La date de début doit être avant la date d'expiration.");
            return;
        }

        if (prix.isEmpty() ) {
            QMessageBox::warning(this, "Erreur de saisie", "Merci d'estimer le prix avant de générer l'abonnement");
            return;
        }

        cabonnement A(-1, numero_abonnement, Date_debut, Date_expiration, Type_abonnement, id_auditeur , prix );


        bool test = A.ajouter_abonnement();
        if(test) {


            //////////////////// mailing
                      QString  email =  getEmailFromId(id_auditeur) ;

                      QString contenuMail = "Sujet : Confirmation de votre abonnement\n\n"
                                            "Cher(e),\n\n"
                                            "Nous vous remercions pour votre abonnement à notre service ! Nous sommes ravis de vous compter parmi nos utilisateurs.\n\n"
                                            "Votre abonnement a été confirmé avec succès.\n\n"
                                            "Pour toute question ou assistance supplémentaire, n'hésitez pas à nous contacter.\n\n"
                                            "Cordialement,\n"
                                            "[Nom de votre entreprise]";



                         QString executablePath = "C:/Users/CHAIMA/Documents/Esprit 2eme/semestre 2/projet c++/TvEase6/TvEase/email2/mail.exe";

                             // Arguments à passer au fichier exécutable
                             QStringList arguments;
                             arguments << email << "Confirmation de votre abonnement " << contenuMail;

                             // Lancer le fichier exécutable avec les arguments
                             QProcess process;
                             process.start(executablePath, arguments);
                             process.waitForFinished(-1); // Attendre la fin de l'exécution

                             // Récupérer la sortie de la console
                             QByteArray output = process.readAllStandardOutput();
                             qDebug() << "Output:" << output;




            ///////////////



            QString filename = "C:/Users/CHAIMA/Documents/Esprit 2eme/semestre 2/projet c++/TvEase6/TvEase/abonne.pdf";

                       generatePDF(filename, -1, numero_abonnement, Date_debut, Date_expiration, Type_abonnement , prix );

            ui->tableView_liste_abonnement->setModel(Atmp.afficher_abonnement());
           // ui->tableView_historique->setModel(Atmp.afficher_historique());
            QMessageBox::information(nullptr, QObject::tr("OK"),
                    QObject::tr("Ajout effectué\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
        } else {
            QMessageBox::critical(nullptr, QObject::tr("Not ok"),
                                  QObject::tr("Ajout non effectué.\n"
                                              "Click Cancel to exit."), QMessageBox::Cancel);
        }
    } else {

    }
}




void abonnement::on_pushButton_supprimer_abonnement_clicked()
{
    int id = ui->lineEdit_supprimer_abonnement->text().toInt();

    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Confirmation", "Voulez-vous vraiment supprimer cet abonnement?",
                                  QMessageBox::Yes|QMessageBox::No);
    if (reply == QMessageBox::Yes) {
        bool test = Atmp.supprimer_abonnement(id);
        if(test) {
            ui->tableView_liste_abonnement->setModel(Atmp.afficher_abonnement());
           // ui->tableView_historique->setModel(Atmp.afficher_historique());
            QMessageBox::information(nullptr, QObject::tr("OK"),
                    QObject::tr("Abonnement supprimé\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
        } else {
            QMessageBox::critical(nullptr, QObject::tr("Not ok"),
                                  QObject::tr("Abonnement non trouvé.\n"
                                              "Click Cancel to exit."), QMessageBox::Cancel);
        }
    } else {

    }
}





void abonnement::on_pushButton_8_clicked()
{
    int id = ui->lineEdit_id_abonnement_c->text().toInt();

    QSqlRecord record = Atmp.rechercher_abonnement(id);

    if (!record.isEmpty()) {

        ui->lineEdit_numero_c->setText(record.value("NUMERO_ABONNEMENT").toString());
        ui->dateEdit_debut_c->setDate(record.value("DATE_DEBUT").toDate());
        ui->dateEdit_expiration_c->setDate(record.value("DATE_EXPIRATION").toDate());

        QString type = record.value("TYPE_ABONNEMENT").toString();

        int index = ui->comboBox_type_c->findText(type);
        if (index != -1) {
            ui->comboBox_type_c->setCurrentIndex(index);
        } else {

            QMessageBox::warning(this, "Avertissement", "Type d'abonnement non trouvé dans la liste.");
        }
    } else {
        QMessageBox::warning(this, "Erreur", "ID d'abonnement introuvable.");
    }
}



void abonnement::on_pushButton_5_clicked()
{
    int id = ui->lineEdit_id_abonnement_c->text().toInt();
    QString numero = ui->lineEdit_numero_c->text();
    QString dateDebut = ui->dateEdit_debut_c->date().toString("yyyy-MM-dd");
    QString dateExpiration = ui->dateEdit_expiration_c->date().toString("yyyy-MM-dd");
    QString type = ui->comboBox_type_c->currentText();

    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Confirmation", "Voulez-vous vraiment modifier cet abonnement?",
                                  QMessageBox::Yes|QMessageBox::No);
    if (reply == QMessageBox::Yes) {
        bool modifie = Atmp.modifier_abonnement(id, numero, dateDebut, dateExpiration, type);

        if (modifie) {
            ui->tableView_liste_abonnement->setModel(Atmp.afficher_abonnement());
           // ui->tableView_historique->setModel(Atmp.afficher_historique());
            QMessageBox::information(this, "Succès", "Abonnement modifié avec succès.");
        } else {
            QMessageBox::warning(this, "Erreur", "Erreur lors de la modification de l'abonnement.");
        }
    } else {

    }
}

void abonnement::on_comboBoxFiltre_activated(const QString &arg1)
{
    QString filtre = ui->comboBoxFiltre->currentText();
      QSqlQueryModel* model = nullptr;

      if (filtre == "Date d'expiration croissante") {
          model =Atmp.afficher_abonnementOrderByExpiration();
      }
 else if (filtre == "Premium") {
       model = Atmp.afficher_abonnementsPremium();
   }
      else if (filtre == "Family") {
            model = Atmp.afficher_abonnementsFamily();
        }
      else if (filtre == "Standard") {
            model = Atmp.afficher_abonnementsStandard();
        }

      else if (filtre == "Type") {
            model = Atmp.afficher_abonnements_groupes();
        }


      // Mettre à jour l'affichage
      if (model != nullptr) {
          ui->tableView_liste_abonnement->setModel(model);
      }
}

void abonnement::on_pushButton_recherche_abonnement_clicked()
{
    QString valeur = ui->lineEdit_recherche->text();
    if (valeur=="")
    {
      ui->tableView_liste_abonnement->setModel(Atmp.afficher_abonnement());

    }
    else
      {
         ui->tableView_liste_abonnement->setModel(Atmp.rechercherdansAbonnement(valeur));

      }



}


void abonnement::afficherTousElementsSiVide(const QString &text)
{
    if (text.isEmpty()) {
        // Si le texte est vide, affichez tous les éléments du tableau
        ui->tableView_liste_abonnement->setModel(Atmp.afficher_abonnement());

    }
}void abonnement::generatePDF(const QString& filename, int id, int numero, const QDate& debut, const QDate& expiration, const QString& type, const QString& prix)
{
    QPdfWriter writer(filename);
    writer.setPageSize(QPageSize(QPageSize::A4)); // Définir la taille de la page A4

    QPainter painter(&writer);

    // Configuration du PDF
    painter.setPen(Qt::black);
    painter.setFont(QFont("Arial", 12));

    QRect titleRect(50, 50, writer.width() - 200, 200); // Rectangle pour le titre
    painter.drawText(titleRect, Qt::AlignCenter, "Abonnement TvEase");

    QImage image("C:/Users/khali/Desktop/projet c++/TvEase17  BADALNA 1/TvEase6/TvEase/abonne.pdf/images/Qr.png"); // Chemin de l'image relative au fichier qrc (si vous utilisez Qt resources)
    QRect qrRect(500, 2000, 1000, 1000); // Rectangle pour le QR code en bas de la page
    painter.drawImage(qrRect, image);

    // Écriture des données dans le PDF
    QString data = QString("ID Abonnement: %1\n"
                           "Numéro Abonnement: %2\n"
                           "Date de début: %3\n"
                           "Date d'expiration: %4\n"
                           "Type d'abonnement: %5\n"
                           "Prix: %6 €")
                       .arg(id)
                       .arg(numero)
                       .arg(debut.toString(Qt::ISODate))
                       .arg(expiration.toString(Qt::ISODate))
                       .arg(type)
                       .arg(prix); // Ajout de l'élément prix

    // Séparer chaque donnée sur une ligne distincte et ajouter des espaces
    QStringList dataList = data.split("\n");
    for (int i = 0; i < dataList.size(); ++i) {
        painter.drawText(50, 300 + i * 500, dataList.at(i));
    }

    // Fin de l'écriture et fermeture du PDF
    painter.end();
}




/*void abonnement::on_verticalFrame_customContextMenuRequested(const QPoint &pos)
{
    QPieSeries *series = new QPieSeries();
        if (!Atmp.recuperer_donnees_types_abonnement(series)) {
            qDebug() << "Pas de données d'abonnement à afficher.";
            return;
        }

        QChart *chart = new QChart();
        chart->addSeries(series);
        chart->setTitle("Répartition des types d'abonnement");

        QChartView *chartView = new QChartView(chart);
        chartView->setRenderHint(QPainter::Antialiasing);

        QHBoxLayout *layout = new QHBoxLayout(ui->verticalFrame);
        layout->addWidget(chartView);
}*/

/*void abonnement::mettreAJourGraphique() {
    QPieSeries *series = new QPieSeries();
    if (!Atmp.recuperer_donnees_types_abonnement(series)) {
        qDebug() << "Pas de données d'abonnement à afficher.";
        return;
    }

    QChart *chart = new QChart();
    chart->addSeries(series);
    chart->setTitle("Répartition des types d'abonnement");

    QChartView *chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);

    // Supprimer tout widget existant dans le layout de verticalFrame
    QLayout *existingLayout = ui->verticalFrame->layout();
    if (existingLayout) {
        QLayoutItem *child;
        while ((child = existingLayout->takeAt(0)) != nullptr)
            delete child;
        delete existingLayout;
    }

    // Ajouter le chartView dans le layout de verticalFrame
    QVBoxLayout *layout = new QVBoxLayout(ui->verticalFrame);
    layout->addWidget(chartView);
}*/

void abonnement::mettreAJourGraphique() {
    QPieSeries *series = new QPieSeries();
    if (!Atmp.recuperer_donnees_types_abonnement(series)) {
        qDebug() << "Pas de données d'abonnement à afficher.";
        return;
    }


    qreal total = 0.0;
    for (const auto &slice : series->slices())
        total += slice->value();


    for (const auto &slice : series->slices()) {
        qreal percentage = 100.0 * slice->value() / total;
        slice->setLabel(QString("%1 (%2%)").arg(slice->label()).arg(percentage, 0, 'f', 1));
    }

    QChart *chart = new QChart();
    chart->addSeries(series);
    chart->setTitle("Répartition des types d'abonnement");

    QChartView *chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);


    QLayout *existingLayout = ui->verticalFrame->layout();
    if (existingLayout) {
        QLayoutItem *child;
        while ((child = existingLayout->takeAt(0)) != nullptr)
            delete child;
        delete existingLayout;
    }

    // Ajouter le chartView dans le layout de verticalFrame
    QVBoxLayout *layout = new QVBoxLayout(ui->verticalFrame);
    layout->addWidget(chartView);
}

void abonnement::on_actualiser_clicked()
{
     mettreAJourGraphique();
}


/*void abonnement::calcul_reduction() {

    QString type_abonnement = ui->comboBox_type_abonnement->currentText();
    QString reduction = ui->comboBox_reduction->currentText();
    int nombre_jours = ui->dateEdit_debut->date().daysTo(ui->dateEdit_expiration->date());


    double prix_initial = 0.0;
    if (type_abonnement == "Standard")
        prix_initial = nombre_jours * 1; // Standard
    else if (type_abonnement == "VIP")
        prix_initial = nombre_jours * 3; // VIP
    else if (type_abonnement == "Family")
        prix_initial = nombre_jours * 2; //  Family

    // Appliquer
    double prix_apres_reduction = prix_initial;
    if (reduction == "10%")
        prix_apres_reduction *= 0.9;
    else if (reduction == "20%")
        prix_apres_reduction *= 0.8;
    else if (reduction == "30%")
        prix_apres_reduction *= 0.7;

    // Afficher le prix dans le lineEdit_prix
    ui->lineEdit_prix->setText(QString::number(prix_apres_reduction));

    int jours_restants = QDate::currentDate().daysTo(ui->dateEdit_expiration->date());
        QString message = QString("L'abonnement expire dans %1 jours.").arg(jours_restants);
        ui->lineEdit_jours->setText(message);
}*/

void abonnement::calcul_reduction() {
    QString type_abonnement = ui->comboBox_type_abonnement->currentText();
    QString reduction = ui->comboBox_reduction->currentText();
    int nombre_jours = ui->dateEdit_debut->date().daysTo(ui->dateEdit_expiration->date());

    double prix_initial = 0.0;
    if (type_abonnement == "Standard")
        prix_initial = nombre_jours * 1; // Standard
    else if (type_abonnement == "VIP")
        prix_initial = nombre_jours * 3; // VIP
    else if (type_abonnement == "Family")
        prix_initial = nombre_jours * 2; //  Family

    // Appliquer la réduction sélectionnée
    double prix_apres_reduction = prix_initial;
    if (reduction == "10%")
        prix_apres_reduction *= 0.9;
    else if (reduction == "20%")
        prix_apres_reduction *= 0.8;
    else if (reduction == "30%")
        prix_apres_reduction *= 0.7;

    // Vérifier si un code promo a été saisi et s'il est valide
    QString codePromo = ui->lineEdit_code->text();
    if (!codePromo.isEmpty()) {
        QFile promoFile("promo.json");
        if (promoFile.open(QIODevice::ReadOnly)) {
            QByteArray jsonData = promoFile.readAll();
            QJsonDocument promoDoc(QJsonDocument::fromJson(jsonData));
            QJsonObject promoObject = promoDoc.object();
            if (promoObject["code"].toString() == codePromo) {
                // Si le code promo est valide, appliquer une réduction supplémentaire de 10%
                prix_apres_reduction *= 0.9;
            }
            promoFile.close();
        }
    }

    // Afficher le prix dans le lineEdit_prix
    ui->lineEdit_prix->setText(QString::number(prix_apres_reduction));

    // Calculer et afficher les jours restants
    int jours_restants = QDate::currentDate().daysTo(ui->dateEdit_expiration->date());
    QString message = QString("L'abonnement expire dans %1 jours.").arg(jours_restants);
    ui->lineEdit_jours->setText(message);
}


void abonnement::on_pushButton_estimer_clicked()
{
    calcul_reduction();
}

void abonnement::on_pushButton_promo_clicked()
{
    // Récupérer
    QString codePromo = ui->lineEdit_promo->text();

    // Afficher une boîte
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Confirmation", "Voulez-vous vraiment ajouter ce code promo ?", QMessageBox::Yes|QMessageBox::No);
    if (reply == QMessageBox::No)
        return;

    // Créer un objet JSON
    QJsonObject promoObject;
    promoObject["code"] = codePromo;

    // Créer un document JSON
    QJsonDocument promoDocument(promoObject);


    QFile promoFile("promo.json");
    if (!promoFile.open(QIODevice::WriteOnly)) {
        qDebug() << "Impossible d'ouvrir le fichier pour l'écriture";
        return;
    }

    promoFile.write(promoDocument.toJson());
    promoFile.close();


    QMessageBox::information(this, "Succès", "Code ajouté avec succès");

    qDebug() << "Code promo enregistré avec succès dans le fichier promo.json";
}

void abonnement::on_lcd_clicked()
{
    /*abonnement_arduino abonnement_arduino ;
    abonnement_arduino.setModal(true) ;
    abonnement_arduino.exec() ;*/
}

void abonnement::on_pushButton_clicked()
{

}
#include"historiquebon.h"
//role
#include <iostream>
#include <fstream>
#include <string>
/////////////////////////ROLE
std::string getRoleFromFile11(const std::string& filePath) {
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

void abonnement::on_pushButton_10_clicked()
{

    std::string filePath = "C:\\Users\\CHAIMA\\Documents\\Esprit 2eme\\semestre 2\\projet c++\\TvEase6\\TvEase\\role\\role.txt";
    std::string rolest = getRoleFromFile11(filePath);
    role = QString::fromStdString(rolest);
    std::cout <<"ili fil pers"<<role.toStdString();



   if(role =="Admin principal" )
        {
     //  hide() ;
    historiquebon historiquebon ;
    historiquebon.setModal(true) ;
     historiquebon.exec() ;
        }
   else
   {
       QApplication::setOverrideCursor(Qt::ForbiddenCursor);
       QTimer::singleShot(300, [this]()
       {  QApplication::restoreOverrideCursor();  });
   }

}
#include"gamehub.h"
void abonnement::on_pushButton_11_clicked()
{

    gamehub gameh ;
    gameh.setModal(true) ;
    gameh.exec() ;
}
#include"event.h"
void abonnement::on_pushButton_12_clicked()
{

    Event c;
      c.setModal(true);
      c.exec();
}
#include"lopiza.h"
void abonnement::on_Notif_clicked()
{
    Lopiza *lop = new Lopiza();

           // Show the lopiza window
           lop->show();
           lop->raise();
}
#include"chat.h"
void abonnement::on_chatbot_clicked()
{

    chat c ;
    c.setModal(true) ;
    c.exec() ;
}
