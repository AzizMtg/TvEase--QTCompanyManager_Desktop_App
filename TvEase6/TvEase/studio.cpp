#include "studio.h"
#include "ui_studio.h"

//
#include "personnelle.h"
#include "programme.h"
#include "publicite.h"
#include "auditeur.h"
#include "abonnement.h"
// role
#include <iostream>
#include <fstream>
#include <string>
#include<QTimer>
//
#include "parkings.h"



//KHALIL START
#include"statstudio.h"
#include"cstudio.h"
#include <QMessageBox>
#include "personnelle.h"
#include "programme.h"
#include "publicite.h"
#include "auditeur.h"
#include "abonnement.h"
#include <QDebug>
#include <QtPrintSupport/QPrinter>
#include <QFileDialog>
#include <QTextDocument>
#include <QTextCursor>
#include <QTextTable>
#include <QTextBlock>
#include <QTextTableFormat>
#include <QSqlQueryModel>
#include "QSqlError"
#include <QSortFilterProxyModel>
#include <QSqlField>
#include <QAbstractTableModel>
#include <QTime>
#include <QtGlobal>
#include "QStyledItemDelegate"
//
#include <QQuickItem>
//#include"notification.h"
//game
#include"gamehub.h"
#include "gui/w.h"
#include <QApplication>

#include <iostream>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include "core/board.h"
#include "gui/qgameboard.h"

#include "gui/qgameoverwindow.h"
// KBC END




////// ROLE
std::string getRoleFromFileSD(const std::string& filePath) {
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
std::string getNomPrenomFromFileSD(const std::string& filePath) {
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

///////////////////////////////////////////////////////////


///
void studio::on_pushButton_37_clicked()
{


    std::string filePath = "C:\\Users\\CHAIMA\\Documents\\Esprit 2eme\\semestre 2\\projet c++\\TvEase6\\TvEase\\role\\role.txt";
    std::string rolest = getRoleFromFileSD(filePath);
    role = QString::fromStdString(rolest);
    std::cout <<"ili fil studio"<<role.toStdString();

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

void studio::on_pushButton_38_clicked()
{

    std::string filePath = "C:\\Users\\CHAIMA\\Documents\\Esprit 2eme\\semestre 2\\projet c++\\TvEase6\\TvEase\\role\\role.txt";
    std::string rolest = getRoleFromFileSD(filePath);
    role = QString::fromStdString(rolest);
    std::cout <<"ili fil studio"<<role.toStdString();


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

    }


}

void studio::on_pushButton_39_clicked()
{

    std::string filePath = "C:\\Users\\CHAIMA\\Documents\\Esprit 2eme\\semestre 2\\projet c++\\TvEase6\\TvEase\\role\\role.txt";
    std::string rolest = getRoleFromFileSD(filePath);
    role = QString::fromStdString(rolest);
    std::cout <<"ili fil studio"<<role.toStdString();

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

void studio::on_pushButton_40_clicked()
{

    std::string filePath = "C:\\Users\\CHAIMA\\Documents\\Esprit 2eme\\semestre 2\\projet c++\\TvEase6\\TvEase\\role\\role.txt";
    std::string rolest = getRoleFromFileSD(filePath);
    role = QString::fromStdString(rolest);
    std::cout <<"ili fil studio"<<role.toStdString();

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

void studio::on_pushButton_41_clicked()
{

    std::string filePath = "C:\\Users\\CHAIMA\\Documents\\Esprit 2eme\\semestre 2\\projet c++\\TvEase6\\TvEase\\role\\role.txt";
    std::string rolest = getRoleFromFileSD(filePath);
    role = QString::fromStdString(rolest);
    std::cout <<"ili fil studio"<<role.toStdString();

    if(role=="Responsable interne" )
      {
        QApplication::setOverrideCursor(Qt::ForbiddenCursor);
        QTimer::singleShot(300, [this]()
        {  QApplication::restoreOverrideCursor();  });
      }
      else
      {

          // Create the new UI
           abonnement *newUI = new abonnement;

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

void studio::on_pushButton_42_clicked()
{
   /* std::string filePath = "C:\\Users\\CHAIMA\\Documents\\Esprit 2eme\\semestre 2\\projet c++\\TvEase6\\TvEase\\role\\role.txt";
    std::string rolest = getRoleFromFileSD(filePath);
    role = QString::fromStdString(rolest);
    std::cout <<"ili fil studio"<<role.toStdString();

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



    }*/
}
//////////////////////////////////////////////////
/////////////////// MODIFICATION MOT DE PASSE //////////////
#include"confirmmotpass.h"

void studio::on_pushButton_parametre_compte_clicked()
{

    confirmMotPass  confirmMotPass ;
    confirmMotPass.setModal(true) ;
    confirmMotPass.exec() ;
}
////////////////////////////////////////////
/////////////////////////////////////////////////
///////////////////////////////////////////////// khalil code
//////////// KHALIL

void studio::updateLineEdit(double latitude, double longitude)
{
    QString text = QString("Latitude: %1, Longitude: %2").arg(latitude).arg(longitude);
    ui->loc->setText(text);
}
void studio::updateTime()
{
    // Get the current time
    QTime currentTime = QTime::currentTime();
    // Convert the time to string in the format "hh:mm:ss"
    QString timeText = currentTime.toString("hh:mm:ss");
    // Update the QLabel text with the current time
    ui->label_heure->setText(timeText);
}

///////////////////////////////////////////
studio::studio(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::studio)
{
    ui->setupUi(this);


    /////////////ROLE
            std::string filePath = "C:\\Users\\CHAIMA\\Documents\\Esprit 2eme\\semestre 2\\projet c++\\TvEase6\\TvEase\\role\\role.txt";
            std::string rolest = getRoleFromFileSD(filePath);
            role = QString::fromStdString(rolest);
            ui->lineEdit_role->setText(role);

            std::string nomprenom = getNomPrenomFromFileSD(filePath);
               QString Messwelcome = "Bienvenu " +QString::fromStdString(nomprenom);
               ui->lineEdit_nomprenom->setText(Messwelcome);



 //////////// KAHLIL
               //te3 el map

                  ui->quickWidget->setSource(QUrl(QStringLiteral("qrc:/map.qml")));
                  ui->quickWidget->show();

                  auto obj = ui->quickWidget->rootObject();
                  ui->quickWidget_2->setSource(QUrl(QStringLiteral("qrc:/map.qml")));
                  ui->quickWidget_2->show();


                  connect(this, SIGNAL(setCenter(QVariant, QVariant)), obj, SLOT(setCenter(QVariant, QVariant)));
                  connect(this, SIGNAL(addMarker(QVariant, QVariant)), obj, SLOT(addMarker(QVariant, QVariant)));
                  connect(obj, SIGNAL(coordinatesChanged(double, double)), this, SLOT(updateLineEdit(double, double)));


                  //type
                  ui->typemd->addItem("Recording Studio");
                  ui->typemd->addItem("Film Studio");
                  ui->typemd->addItem("Photography Studio");
                  ui->typemd->addItem("Dance Studio");
                  ui->typemd->addItem("Art Studio");
                  ui->typemd->addItem("Music Studio");
                  ui->typemd->addItem("Production Studio");
                  ui->typemd->addItem("Broadcast Studio");
                  ui->typemd->addItem("Design Studio");
                  ui->typemd->addItem("Gaming Studio");
                  //etat
                  ui->etatmd->addItem("valid");
                  ui->etatmd->addItem("non valid");
                  //type
                  ui->type->addItem("Recording Studio");
                  ui->type->addItem("Film Studio");
                  ui->type->addItem("Photography Studio");
                  ui->type->addItem("Dance Studio");
                  ui->type->addItem("Art Studio");
                  ui->type->addItem("Music Studio");
                  ui->type->addItem("Production Studio");
                  ui->type->addItem("Broadcast Studio");
                  ui->type->addItem("Design Studio");
                  ui->type->addItem("Gaming Studio");
                  //etat
                  ui->etat->addItem("valid");
                  ui->etat->addItem("non valid");
                  connect(ui->rechtab, &QLineEdit::textChanged, this, &studio::afficherTousElementsSiVide);



                  /// taba3 il afficher
                      // Create the proxy model
                      proxyModel = new QSortFilterProxyModel(this);
                      proxyModel->setSourceModel(tmpstudio .afficher());
                      ui->tableView_lister->setModel(proxyModel);
                      ui->afficheraj->setModel(proxyModel);

                      // Apply styles to the header
                      QString headerStyle = "QHeaderView::section {"
                                              "    font-weight: bold;" // Making text bold
                                              "    background-color: #EEE6D8 ;" // bleue color
                                              "    border: 1px solid black;" // Adding a border
                                              "}";

                      ui->tableView_lister->horizontalHeader()->setStyleSheet(headerStyle);
                      ui->afficheraj->horizontalHeader()->setStyleSheet(headerStyle);

                      ui->afficheraj->horizontalHeader()->resizeSection(4,100);
///////////////time/////////////////////////
 // Create a QTimer to update the time every second
  QTimer *timer = new QTimer(this);
  connect(timer, &QTimer::timeout, this, &studio::updateTime);
    timer->start(5); // 1000 milliseconds = 1 second


    /////
            QDateTime currentDateTime = QDateTime::currentDateTime();
                 QString currentDate = currentDateTime.toString("dddd dd/MM/yyyy");
                 ui->label_date->setText(currentDate);


}

studio::~studio()
{
    delete ui;
     ui->tableView_lister->setModel(tmpstudio.afficher()) ;
}


/////////////// khalil
void studio::on_pushButton_clicked()
{

    QString ids = ui->ids->text();
    QString loc = ui->loc->text();
    QString capacite = ui->capacite->text();
    int cap = capacite.toInt();


    if (ids.isEmpty() || loc.isEmpty() || capacite.isEmpty()) {
        QMessageBox::critical(nullptr, QObject::tr("Error"), QObject::tr("Please fill in all fields."));
    } else if (cap <= 0) {
        QMessageBox::critical(nullptr, QObject::tr("Error"), QObject::tr("Capacity must be a positive integer."));
    } else {

        if (tmpstudio.studioExists(ids)) {
            QMessageBox::critical(nullptr, QObject::tr("Error"), QObject::tr("Studio ID already exists."));
        } else {

            QString type = ui->type->currentText();
            QString etat = ui->etat->currentText();

            Cstudio cs(ids, loc, type, etat, cap);
            bool test = cs.ajouter();

           /* if (test)
            {
                cnotification notification;

                    // Set the values for the notification
                 //   notification.setcin("1A");
                  //  notification.setmessage("ajout d'un studio");
                   // notification.setrole("admin");

                    // Call the ajouter() function to add the notification to the NOTIFY table
                    //bool successNotification = notification.ajouter();

                    // Check if the insertion into the NOTIFY table was successful
                    //if (successNotification) {
                        // Both insertions were successful
                       // QMessageBox::information(nullptr, QObject::tr("ajouter sar"),
                                              //   QObject::tr("Both studio and notification added successfully.\n"
                                                        //     "Click Cancel to exit."), QMessageBox::Cancel);
                    } else {
                        // Insertion into the NOTIFY table failed
                        QMessageBox::critical(nullptr, QObject::tr("Error"),
                                              QObject::tr("Failed to add notification.\n"
                                                          "Click Cancel to exit."), QMessageBox::Cancel);
                    }


}*/


}
    }
}




void studio::on_pushButton_2_clicked()
{       QString ids = ui->idmd->text();
        QString loc = ui->locmd->text();
        QString type = ui->typemd->currentText();
        QString etat = ui->etatmd->currentText();
        QString capacite = ui->capmd->text();
        int cap = capacite.toInt();


        if (ids.isEmpty()) {
            QMessageBox::warning(this, "Erreur", "L'ID du studio ne peut pas être vide.");
            return;
        }


        if (cap <= 0) {
            QMessageBox::warning(this, "Erreur", "La capacité doit être un nombre positif.");
            return;
        }


        QMessageBox::StandardButton confirmation;
        confirmation = QMessageBox::question(this, "Confirmation", "Êtes-vous sûr de vouloir modifier ?", QMessageBox::Yes|QMessageBox::No);
        if (confirmation == QMessageBox::Yes) {

            Cstudio cs;
            bool test = cs.modifier(ids, loc, type,etat,  cap);
            if (test) {
                QMessageBox::information(this, "Modifier effectué", "La modification a été effectuée avec succès.");

                ui->ids->clear();
                ui->loc->clear();
                ui->capacite->clear();
                 ui->tableView_lister->setModel(tmpstudio.afficher());
            } else {
                QMessageBox::warning(this, "Erreur de modification", "L'ID spécifié n'existe pas. Veuillez réessayer.");
            }
        } else {

            QMessageBox::information(this, "Annulation", "Modification annulée.", QMessageBox::Close);
        }

}

void studio::on_imprimerpdf_clicked()
{

        QAbstractItemModel *model = ui->tableView_lister->model();


        QTextDocument doc;


        QTextCharFormat defaultFormat;
        defaultFormat.setFontFamily("Arial");
        defaultFormat.setFontPointSize(10);
        defaultFormat.setForeground(QColor("#333333")); // Dark gray text color
        doc.setDefaultTextOption(QTextOption(Qt::AlignLeft | Qt::AlignVCenter));


        QTextCursor cursor(&doc);


        QTextCharFormat headerFormat;
        headerFormat.setFontPointSize(12);
        headerFormat.setFontWeight(QFont::Bold);
        headerFormat.setForeground(QColor("#0078d7"));
        cursor.setCharFormat(headerFormat);
        cursor.insertText("studio Report\n", headerFormat);


        cursor.insertBlock();


        QTextTableFormat tableFormat;
        tableFormat.setBorder(1);
        tableFormat.setBorderBrush(QColor("#333333"));
        tableFormat.setCellSpacing(0);
        QTextTable *table = cursor.insertTable(model->rowCount() + 1, model->columnCount(), tableFormat);


        QStringList headers;
        for (int column = 0; column < model->columnCount(); ++column) {
            headers << model->headerData(column, Qt::Horizontal).toString();
            QTextTableCell headerCell = table->cellAt(0, column);
            QTextCursor headerCellCursor = headerCell.firstCursorPosition();
            headerCellCursor.setCharFormat(defaultFormat);
            headerCellCursor.insertText(headers[column]);
        }


        for (int row = 0; row < model->rowCount(); ++row) {
            for (int column = 0; column < model->columnCount(); ++column) {
                QModelIndex index = model->index(row, column);
                QTextTableCell dataCell = table->cellAt(row + 1, column);
                QTextCursor dataCellCursor = dataCell.firstCursorPosition();
                dataCellCursor.setCharFormat(defaultFormat);
                dataCellCursor.insertText(model->data(index).toString());
            }
        }


        QString fileName = QFileDialog::getSaveFileName(this, tr("Save PDF"), "", tr("PDF Files (*.pdf)"));

        if (!fileName.isEmpty()) {
            // Create a PDF printer
            QPrinter printer(QPrinter::PrinterResolution);
            printer.setOutputFormat(QPrinter::PdfFormat);
            printer.setOutputFileName(fileName);


            doc.print(&printer);
        }
}

void studio::on_pushButton_5_clicked()
{
   ui->afficheraj->setModel(tmpstudio.afficher()) ;
}


void studio::on_Imprimer_clicked()
{

            QAbstractItemModel *model = ui->afficheraj->model();


            QTextDocument doc;

            QTextCharFormat defaultFormat;
            defaultFormat.setFontFamily("Arial");
            defaultFormat.setFontPointSize(10);
            defaultFormat.setForeground(QColor("#333333"));
            doc.setDefaultTextOption(QTextOption(Qt::AlignLeft | Qt::AlignVCenter));


            QTextCursor cursor(&doc);

            QTextCharFormat headerFormat;
            headerFormat.setFontPointSize(12);
            headerFormat.setFontWeight(QFont::Bold);
            headerFormat.setForeground(QColor("#0078d7"));
            cursor.setCharFormat(headerFormat);
            cursor.insertText("studio Report\n", headerFormat);

            cursor.insertBlock();

            QTextTableFormat tableFormat;
            tableFormat.setBorder(1);
            tableFormat.setBorderBrush(QColor("#333333"));
            tableFormat.setCellSpacing(0);
            QTextTable *table = cursor.insertTable(model->rowCount() + 1, model->columnCount(), tableFormat);

            QStringList headers;
            for (int column = 0; column < model->columnCount(); ++column) {
                headers << model->headerData(column, Qt::Horizontal).toString();
                QTextTableCell headerCell = table->cellAt(0, column);
                QTextCursor headerCellCursor = headerCell.firstCursorPosition();
                headerCellCursor.setCharFormat(defaultFormat);
                headerCellCursor.insertText(headers[column]);
            }


            for (int row = 0; row < model->rowCount(); ++row) {
                for (int column = 0; column < model->columnCount(); ++column) {
                    QModelIndex index = model->index(row, column);
                    QTextTableCell dataCell = table->cellAt(row + 1, column);
                    QTextCursor dataCellCursor = dataCell.firstCursorPosition();
                    dataCellCursor.setCharFormat(defaultFormat);
                    dataCellCursor.insertText(model->data(index).toString());
                }
            }


            QString fileName = QFileDialog::getSaveFileName(this, tr("Save PDF"), "", tr("PDF Files (*.pdf)"));

            if (!fileName.isEmpty()) {
                // Create a PDF printer
                QPrinter printer(QPrinter::PrinterResolution);
                printer.setOutputFormat(QPrinter::PdfFormat);
                printer.setOutputFileName(fileName);

                doc.print(&printer);
            }


}
void studio::afficherTousElementsSiVide(const QString &text)
{
    if (text.isEmpty()) {

        ui->afficheraj->setModel(tmpstudio.afficher());

    }
}


#include <QDebug>
void studio::on_recherche_clicked()
{
    QString taakod =ui->rechtab->text();
   qDebug() << "phrase a chercher :" << taakod;
    if (taakod=="")
    {
      ui->afficheraj->setModel(tmpstudio.afficher());

    }
    else
      {
         ui->afficheraj->setModel(tmpstudio.recherche(taakod));

      }
}



void studio::on_tableView_lister_activated(const QModelIndex &index)
{
    ////////////////////////////////////:recuperation de la bd////////////////////////////////////////////



    QString val = ui->tableView_lister->model()->data(index).toString();
    int x = ui->tableView_lister->model()->data(index).toInt();

    QSqlQuery query;
    query.prepare("SELECT ids, localisation, etat, type, capacite FROM studio WHERE ids LIKE :val OR localisation LIKE :val OR etat LIKE :val OR type LIKE :val OR capacite = :x");

    query.bindValue(":val", val);
    query.bindValue(":x", x);

    if (query.exec()) {
        if (query.next()) {
            QString ids = query.value(0).toString(); // Assuming ids is stored in the first column
            QString loc = query.value(1).toString(); // Assuming loc is stored in the second column
            QString type = query.value(2).toString(); // Assuming type is stored in the third column
            QString etat = query.value(3).toString(); // Assuming etat is stored in the fourth column
            int cap = query.value(4).toInt(); // Assuming capacite is stored in the fifth column

            // Set the retrieved values to corresponding UI elements
            ui->idmd->setText(ids);
            ui->locmd->setText(loc);
            ui->etatmd->setCurrentText(etat);
            ui->typemd->setCurrentText(type);
            ui->capmd->setText(QString::number(cap));

            ui->idmd->setEnabled(false);
        } else
        {
            QMessageBox::information(this, tr("Information"), tr("No records found."));
        }
    } else
    {
        QMessageBox::critical(this, tr("Error"), query.lastError().text());
    }

    }


void studio::on_refresh1_clicked()
{
    ui->tableView_lister->setModel(tmpstudio.afficher()) ;
}

void studio::on_pushButton_7_clicked()
{
QString ids = ui->idsup->text();


if (ids.isEmpty()) {
    QMessageBox::critical(nullptr, QObject::tr("Error"), QObject::tr("Please fill in the ID field."));
} else {

    if (!tmpstudio.studioExists(ids)) {
        QMessageBox::critical(nullptr, QObject::tr("Error"), QObject::tr("Studio ID does not exist."));
    } else {

        bool test = tmpstudio.supprimer(ids);
        if (test) {

            ui->tableView_lister->setModel(tmpstudio.afficher());

            QMessageBox::information(nullptr, QObject::tr("Supprimer"),
                                      QObject::tr("Supprimer successful.\nClick Cancel to exit."),
                                      QMessageBox::Cancel);
        } else {
            QMessageBox::critical(nullptr, QObject::tr("Erreur"),
                                   QObject::tr("An error occurred while deleting the studio.\nClick Cancel to exit."),
                                   QMessageBox::Cancel);
        }
    }
}
}

void studio::on_trie_activated(const QString &arg1)
{
    QString current_text =ui->trie->currentText();
       if (current_text=="")
       {
         ui->afficheraj->setModel(tmpstudio.afficher());

       }
       else if (current_text=="capacite")
         {
            ui->afficheraj->setModel(tmpstudio.trie_cap());

         }
       else if (current_text=="type")
         {
            ui->afficheraj->setModel(tmpstudio.trie_type());

         }
       else if (current_text=="etat")
         {
            ui->afficheraj->setModel(tmpstudio.trie_etat());

         }



}



void studio::on_tabWidget_currentChanged(int index)
{
    //te3

  /*  ui->quickWidget->setSource(QUrl(QStringLiteral("qrc:/map.qml")));
    ui->quickWidget->show();

    auto obj = ui->quickWidget->rootObject();
    connect(this, SIGNAL(setCenter(QVariant, QVariant)), obj, SLOT(setCenter(QVariant, QVariant)));
    connect(this, SIGNAL(addMarker(QVariant, QVariant)), obj, SLOT(addMarker(QVariant, QVariant)));
    connect(obj, SIGNAL(coordinatesChanged(double, double)), this, SLOT(updateLineEdit(double, double)));*/
}

void studio::on_pushButton_10_clicked()
{
    //  hide() ;
 /*      notification notif ;
        notif.setModal(true) ;
        notif.exec() ;
        //njarreb
        cnotification tmpnotif;
             tmpnotif.checkAndDisplayProgramNotifications();*/
}




void studio::on_pushButton_9_clicked()
{
    statstudio statstud ;
    statstud.setModal(true) ;
    statstud.exec() ;
}

void studio::on_pushButton_11_clicked()
{

        gamehub gameh ;
        gameh.setModal(true) ;
        gameh.exec() ;

}

void studio::on_pushButton_12_clicked()
{
    parkings gameh ;
    gameh.setModal(true) ;
    gameh.exec() ;

}
#include"chat.h"
void studio::on_chatbot_clicked()
{
    chat c ;
    c.setModal(true) ;
    c.exec() ;

}
#include"lopiza.h"
void studio::on_Notif_clicked()
{

    Lopiza *lop = new Lopiza();

           // Show the lopiza window
           lop->show();
           lop->raise();
}
#include"event.h"
void studio::on_pushButton_13_clicked()
{

    Event c;
      c.setModal(true);
      c.exec();
}
