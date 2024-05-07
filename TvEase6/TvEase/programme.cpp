#include "programme.h"
#include "ui_programme.h"
//
#include "personnelle.h"
#include "publicite.h"
#include "auditeur.h"
#include "abonnement.h"
#include "studio.h"

//
#include <iostream>
#include <fstream>
#include <string>
#include<QTimer>
//
/// siwar
#include "cprogramme.h"
#include <QMessageBox>
#include <QDebug>
#include "personnelle.h"
#include "publicite.h"
#include "auditeur.h"
#include "abonnement.h"
#include "connexion.h"
#include "studio.h"
#include "publicite.h"
#include "ui_publicite.h"
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
#include <QMap>
#include <QTextDocument>
#include <QTextCursor>
#include <QPainter>
#include <QAbstractItemModel>
#include <QModelIndex>
#include <QTableView>
#include <QTextDocument>
#include <QTextCursor>
#include <QTextDocument>
#include <QPdfWriter>
#include <QTextCursor>
#include <QAbstractItemModel>
#include <QModelIndex>
#include <QtCharts>
#include <QChartView>
#include <QLineSeries>
#include <QPixmap>
#include <QFile>
#include <QDebug>
#include <QFileInfo>
#include <QBuffer>
#include <QByteArray>
#include <QTableWidgetItem>
#include <QStandardItemModel>
#include <QImage>
#include <QPixmap>
#include<statprog.h>
#include<QMovie>
#include<QThread>
#include <QTableWidgetItem>
#include <QPixmap>
#include <QFile>
#include <QPainter>
//////////////
std::string getRoleFromFilePG(const std::string& filePath) {
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

std::string getNomPrenomFromFilePG(const std::string& filePath) {
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




//////////////////////////////////////////////
programme::programme(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::programme)
{
    ui->setupUi(this);

/////////////ROLE
    std::string filePath = "C:\\Users\\CHAIMA\\Documents\\Esprit 2eme\\semestre 2\\projet c++\\TvEase6\\TvEase\\role\\role.txt";
    std::string rolest = getRoleFromFilePG(filePath);
    role = QString::fromStdString(rolest);
    ui->lineEdit_role->setText(role);

    std::string nomprenom = getNomPrenomFromFilePG(filePath);
    QString Messwelcome = "Bienvenu " +QString::fromStdString(nomprenom);
    ui->lineEdit_nomprenom->setText(Messwelcome);
/////////////// SIWAR
    ui->label_animation->setVisible(false);

       setupCalendar();


       playGifAutomatically();


       ui->tabprog->setModel(tp.afficher());
       ImageDelegate *imageDelegate = new ImageDelegate();
       ui->tabprog->setItemDelegateForColumn(8, imageDelegate);







       QSqlQueryModel *models = tp.afficher_CIN_combobox();


       ui->comboBox_cin->setModel(models);

}

programme::~programme()
{
    delete ui;
}

/////////////////////
void programme::on_pushButton_9_clicked()
{
    std::string filePath = "C:\\Users\\CHAIMA\\Documents\\Esprit 2eme\\semestre 2\\projet c++\\TvEase6\\TvEase\\role\\role.txt";
    std::string rolest = getRoleFromFilePG(filePath);
    role = QString::fromStdString(rolest);
    std::cout <<"ili fil prog"<<role.toStdString();

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


void programme::on_pushButton_11_clicked()
{
    std::string filePath = "C:\\Users\\CHAIMA\\Documents\\Esprit 2eme\\semestre 2\\projet c++\\TvEase6\\TvEase\\role\\role.txt";
    std::string rolest = getRoleFromFilePG(filePath);
    role = QString::fromStdString(rolest);
    std::cout <<"ili fil prog"<<role.toStdString();


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




void programme::on_pushButton_12_clicked()
{
    std::string filePath = "C:\\Users\\CHAIMA\\Documents\\Esprit 2eme\\semestre 2\\projet c++\\TvEase6\\TvEase\\role\\role.txt";
    std::string rolest = getRoleFromFilePG(filePath);
    role = QString::fromStdString(rolest);
    std::cout <<"ili fil prog"<<role.toStdString();

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

void programme::on_pushButton_13_clicked()
{

    std::string filePath = "C:\\Users\\CHAIMA\\Documents\\Esprit 2eme\\semestre 2\\projet c++\\TvEase6\\TvEase\\role\\role.txt";
    std::string rolest = getRoleFromFilePG(filePath);
    role = QString::fromStdString(rolest);
    std::cout <<"ili fil prog"<<role.toStdString();


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


void programme::on_pushButton_14_clicked()
{

    std::string filePath = "C:\\Users\\CHAIMA\\Documents\\Esprit 2eme\\semestre 2\\projet c++\\TvEase6\\TvEase\\role\\role.txt";
    std::string rolest = getRoleFromFilePG(filePath);
    role = QString::fromStdString(rolest);
    std::cout <<"ili fil prog"<<role.toStdString();

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

void programme::on_pushButton_10_clicked()
{

    std::string filePath = "C:\\Users\\CHAIMA\\Documents\\Esprit 2eme\\semestre 2\\projet c++\\TvEase6\\TvEase\\role\\role.txt";
    std::string rolest = getRoleFromFilePG(filePath);
    role = QString::fromStdString(rolest);
    std::cout <<"ili fil prog"<<role.toStdString();


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
///////////////////////////////////
/////////////////// MODIFICATION MOT DE PASSE //////////////
#include"confirmmotpass.h"

void programme::on_pushButton_parametre_compte_clicked()
{

    confirmMotPass  confirmMotPass ;
    confirmMotPass.setModal(true) ;
    confirmMotPass.exec() ;

}
///////////////////////// code siwar

/////////////////////////////////////////////////AJOUT prog+image///////////////////////////////////////////////////////////////////////////////////////////////

void programme::on_pushButton_AJOUT_clicked() {
    setupCalendar();
    QString NOM = ui->lineEdit_NOM->text();
    QString SECTION = ui->comboBox_SECTION->currentText();
    QString TYPE = ui->comboBox_TYPE->currentText();
    QDate currentDate = QDate::currentDate();
    QString dateString = ui->QEdit_DATE->date().toString("dd-MM-yyyy");
    QDate DATE_Diffusion = QDate::fromString(dateString, "dd-MM-yyyy");
    int ID_PROGRAMME = ui->lineEdit_ID->text().toInt();
    QString CIN_PERSONELLE = ui->comboBox_cin->currentText();

    if (ID_PROGRAMME <= 0) {
        QMessageBox::warning(this, "Erreur", "Veuillez saisir un ID qui doit être un nombre supérieur à 0.");
        return;
    }

    if (!NOM.isEmpty() && !NOM.at(0).isUpper()) {
        QMessageBox::warning(this, "Erreur", "Veuillez saisir un nom de programme commençant par une majuscule.");
        return;
    }

    QDate maxDate(2040, 12, 01);
    if (!DATE_Diffusion.isValid() || DATE_Diffusion < currentDate || DATE_Diffusion > maxDate) {
        QMessageBox::warning(this, "Erreur", "Veuillez saisir une date de diffusion valide supérieure à la date d'aujourd'hui.");
        return;
    }

    int NOMBRE_PIECE = ui->lineEdit_NOMBRE->text().toInt();

    if (SECTION == "FILM" && NOMBRE_PIECE != 1) {
        QMessageBox::warning(this, "Erreur", "Le nombre d'épisodes pour un film doit être exactement égal à 1.");
        return;
    }

    if (NOMBRE_PIECE <= 0) {
        QMessageBox::warning(this, "Erreur", "Le total d'épisodes doit être un nombre supérieur à 0.");
        return;
    }

    int Duree = ui->lineEdit_DUREE->text().toInt();

    if (Duree <= 0) {
        QMessageBox::warning(this, "Erreur", "La durée doit être un nombre supérieur à 0.");
        return;
    }

   /* QString filename = QFileDialog::getOpenFileName(this, tr("Sélectionner une image"), QDir::homePath(), tr("Images (*.png *.xpm *.jpg)"));
    if (!filename.isEmpty()) {
        QPixmap image(filename);
        QByteArray image_data;
        QBuffer buffer(&image_data);
        buffer.open(QIODevice::WriteOnly);
        image.toImage().save(&buffer, "PNG");*/

        QMessageBox::StandardButton confirmation;
        confirmation = QMessageBox::question(this, "Confirmation", "Êtes-vous sûr de vouloir ajouter le programme ?", QMessageBox::Yes|QMessageBox::No);
        if (confirmation == QMessageBox::Yes) {
            cprogramme prog(NOM, SECTION, TYPE, dateString, ID_PROGRAMME, NOMBRE_PIECE, Duree, CIN_PERSONELLE, image_data);
            bool ajoutProgrammeReussi = prog.ajouter(ui->calendarWidget1);
            if (!ajoutProgrammeReussi) {
                QMessageBox::warning(nullptr, QObject::tr("Erreur"),
                                     QObject::tr("Échec de l'ajout du programme.\nVeuillez réessayer."), QMessageBox::Ok);
                return;
            }

            // Maintenant que le programme est ajouté avec succès, récupérons l'ID du programme

            // Ajouter le programme avec l'image dans la base de données



            // Le programme et l'image ont été ajoutés avec succès
            QTextCharFormat format;
            format.setToolTip(NOM);
            ui->calendarWidget1->setDateTextFormat(DATE_Diffusion, format);
            format.setBackground(Qt::blue);
            ui->tabprog->setModel(tp.afficher());
            QMessageBox::information(nullptr, QObject::tr("Ajouter programme"),
                                     QObject::tr("Programme ajouté avec succès.\nCliquez sur Annuler pour fermer."), QMessageBox::Cancel);

            // Effacer les champs après l'ajout réussi
            ui->lineEdit_NOM->clear();
            ui->comboBox_SECTION->setCurrentIndex(0);
            ui->comboBox_TYPE->setCurrentIndex(0);
            ui->QEdit_DATE->clear();
            ui->lineEdit_ID->clear();
            ui->lineEdit_NOMBRE->clear();
            ui->lineEdit_DUREE->clear();
            ui->comboBox_cin->clear();
            ui->imagebrowser->clear();

        } else {
            QMessageBox::information(nullptr, QObject::tr("Annulation"),
                                     QObject::tr("Ajout annulé."), QMessageBox::Close);
        }
    }







////////////////////////////////////////////////telechargement image////////////////////////////////////////:



void programme::on_browse_clicked() {
    QString filename = QFileDialog::getOpenFileName(this, tr("Sélectionner une image"), QDir::homePath(), tr("Images (*.png *.xpm *.jpg)"));
    if (!filename.isEmpty()) {
        QPixmap image(filename);
        // Convertir l'image en données binaires et stocker les données dans la variable membre
        QByteArray image_data;
        QBuffer buffer(&image_data);
        buffer.open(QIODevice::WriteOnly);
        image.toImage().save(&buffer, "PNG");
        ui->imagebrowser->setPixmap(image);
        // Stocker les données de l'image dans la variable membre
        this->image_data = image_data;
    }
}



///////////////////////////////////////////bouton lister//////////////////////////////////////////////////
void programme::on_pushButton_lister_clicked()
{
    // Récupérer les programmes depuis le modèle de données et les afficher dans le tableau
    ui->tabprog->setModel(tp.afficher());


}



/////////////////////////////////////selection du tableau///////////////////////////////////////////


void programme::on_tabprog_activated(const QModelIndex &index) {
    QString val = ui->tabprog->model()->data(index).toString();

    QSqlQuery query;
    query.prepare("SELECT * FROM PROGRAMME WHERE ID_PROGRAMME=:x OR NOM=:val OR SECTION=:val OR TYPE=:val OR DATE_Diffusion=:val OR NOMBRE_PIECE=:x OR Duree=:x OR CIN_PERSONELLE=:val");

    query.bindValue(":val", val);
    query.bindValue(":x", val.toInt()); // Si val peut être converti en int

    if (query.exec()) {
        if (query.next()) {
            ui->lineEdit_ID->setText(query.value(0).toString());
            ui->lineEdit_NOM->setText(query.value(1).toString());
            ui->comboBox_SECTION->setCurrentText(query.value(2).toString());
            ui->comboBox_TYPE->setCurrentText(query.value(3).toString());
            ui->lineEdit_NOMBRE->setText(query.value(4).toString());
            ui->lineEdit_DUREE->setText(query.value(5).toString());

            // Si image_data est une colonne de type BLOB dans la base de données
            QByteArray imageData = query.value(8).toByteArray(); // Récupérer les données binaires de l'image depuis la base de données
            QPixmap image;
            image.loadFromData(imageData); // Charger l'image à partir des données binaires
            ui->imagebrowser_2->setPixmap(image);
            ui->imagebrowser->setPixmap(image);


            QString dateString = query.value(6).toString(); // Récupérer la date sous forme de QString depuis la base de données
            QDate date = QDate::fromString(dateString, "dd-MM-yyyy"); // Convertir la QString en QDate
            ui->QEdit_DATE->setDate(date);

            ui->comboBox_cin->setCurrentText(query.value(7).toString());

            ui->lineEdit_ID->setEnabled(false);


            // Mettre à jour le calendrier
            setupCalendar();

            // Mettre à jour la liste des programmes
            ui->tabprog->setModel(tp.afficher());
        } else {
            QMessageBox::information(this, tr("Information"), tr("No DATA found."));
        }
    } else {
        QMessageBox::critical(this, tr("Error"), query.lastError().text());
    }
}


/////////////////////////////////////maj///////////////////////////////////////////


void programme::on_pushButton_maj_2_clicked() {


    QString NOM = ui->lineEdit_NOM->text();
    QString SECTION = ui->comboBox_SECTION->currentText();
    QString TYPE = ui->comboBox_TYPE->currentText();
    QString DATE_Diffusion = ui->QEdit_DATE->date().toString("dd-MM-yyyy"); // Transformation de QDate en QString
    int ID_PROGRAMME = ui->lineEdit_ID->text().toInt();
    int NOMBRE_PIECE = ui->lineEdit_NOMBRE->text().toInt();
    int Duree = ui->lineEdit_DUREE->text().toInt();
    QString CIN_PERSONELLE = ui->comboBox_cin->currentText();
    QByteArray image_data;

    // Récupérer les données de l'image depuis ui->imagebrowser
    const QPixmap *originalPixmap = ui->imagebrowser->pixmap();
    if (originalPixmap) {
        // Faire une copie modifiable de la QPixmap
        QPixmap pixmap = QPixmap(*originalPixmap);

        // Convertir la QPixmap en QByteArray
        QBuffer buffer(&image_data);
        buffer.open(QIODevice::WriteOnly);
        pixmap.toImage().save(&buffer, "PNG");
    } else {
        QMessageBox::warning(this, "Erreur", "Veuillez sélectionner une image.");
        return;
    }

    // Vérifie si l'ID du programme est supérieur à 0
    if (ID_PROGRAMME <= 0) {
        QMessageBox::warning(this, "Erreur", "Veuillez saisir un ID qui doit être un nombre supérieur à 0");
        return;
    }

    // Vérifie si le nom du film est vide et commence par une majuscule
    if (NOM.isEmpty() || !NOM.at(0).isUpper()) {
        QMessageBox::warning(this, "Erreur", "Veuillez saisir un nom du film commençant par une majuscule.");
        return;
    }

    // Définir la limite supérieure pour la date de diffusion
    QDate currentDate = QDate::currentDate(); // Obtenez la date actuelle
    QDate maxDate(2073, 12, 01); // Définir la limite supérieure pour la date de diffusion
    if (!ui->QEdit_DATE->date().isValid() || ui->QEdit_DATE->date() < currentDate || ui->QEdit_DATE->date() > maxDate) {
        QMessageBox::warning(this, "Erreur", "Veuillez saisir une date de diffusion valide.");
        return;
    }

    // Vérifie si le type est "FILM" et que le nombre d'épisodes est différent de 1
    if (SECTION == "FILM" && NOMBRE_PIECE != 1) {
        QMessageBox::warning(this, "Erreur", "Le total d'épisodes pour un film doit être exactement égal à 1.");
        return;
    }

    // Vérifie si le nombre de pièces est valide (supérieur à 0)
    if (NOMBRE_PIECE <= 0) {
        QMessageBox::warning(this, "Erreur", "Le total d'épisode doit être un nombre supérieur à 0.");
        return;
    }

    // Vérifie si la durée est valide (supérieure à 0)
    if (Duree <= 0) {
        QMessageBox::warning(this, "Erreur", "La durée doit être un nombre supérieure à 0.");
        return;
    }

    // Afficher une boîte de dialogue de confirmation avec un message
    QMessageBox::StandardButton confirmation;
    confirmation = QMessageBox::question(this, "Confirmation", "Êtes-vous sûr de vouloir modifier ?", QMessageBox::Yes|QMessageBox::No);
    if (confirmation == QMessageBox::Yes) {
        // L'utilisateur a confirmé la modification
        cprogramme p;
        bool test = p.update(ID_PROGRAMME, NOM, SECTION, TYPE, NOMBRE_PIECE, Duree, DATE_Diffusion, CIN_PERSONELLE, image_data);
        if (test) {
            ui->tabprog->setModel(tp.afficher());
            QMessageBox::information(this, "Modifier effectué", "La modification a été effectuée avec succès.");

            // Vider tous les QLineEdit après la modification
            ui->lineEdit_NOM->clear();
            ui->comboBox_SECTION->setCurrentIndex(0);
            ui->comboBox_TYPE->setCurrentIndex(0);
            ui->QEdit_DATE->clear();
            ui->lineEdit_ID->clear();
            ui->lineEdit_NOMBRE->clear();
            ui->lineEdit_DUREE->clear();
            ui->comboBox_cin->clear();
            ui->imagebrowser->clear();
            ui->imagebrowser_2->clear();
            ui->lineEdit_ID->setEnabled(true);
        } else {
            QMessageBox::warning(this, "Erreur de modification", "ID n'existe pas. Veuillez réessayer.");
        }
    } else {
        // L'utilisateur a annulé la modification
        QMessageBox::information(this, "Annulation", "Modification annulée.", QMessageBox::Close);
    }
}








///////////////////////////////////////////recherche///////////////////////////////////////////

void programme::on_recherche_clicked()
{
    QString searchText = ui->lineEdit_recherche->text().trimmed();

    if (searchText.isEmpty()) {
        // Afficher toutes les données si le texte de recherche est vide
        ui->tabprog->setModel(tp.afficher());
    } else {
        // Construire la requête SQL pour rechercher le texte saisi dans toutes les colonnes pertinentes
        QString queryText = "SELECT * FROM PROGRAMME WHERE "
                            "LOWER(ID_PROGRAMME) LIKE LOWER(:search) OR "
                            "LOWER(NOM) LIKE LOWER(:search) OR "
                            "LOWER(SECTION) LIKE LOWER(:search) OR "
                            "LOWER(TYPE) LIKE LOWER(:search) OR "
                            "LOWER(DATE_Diffusion) LIKE LOWER(:search) OR "
                            "LOWER(NOMBRE_PIECE) LIKE LOWER(:search) OR "
                            "LOWER(Duree) LIKE LOWER(:search) OR "
                            "LOWER(CIN_PERSONELLE) LIKE LOWER(:search)";


        // Préparer la requête avec la chaîne SQL construite
        QSqlQueryModel *model = new QSqlQueryModel();
        QSqlQuery query;
        query.prepare(queryText);
        query.bindValue(":search", "%" + searchText + "%");

        if (query.exec()) {
            model->setQuery(query);
            ui->tabprog->setModel(model);
        } else {
            // Gestion des erreurs
            qDebug() << "Échec de l'exécution de la requête :" << query.lastError().text();
        }
    }

    ui->lineEdit_recherche->clear();
}











////////////////////////////////////////////////refraiche////////////////////////////////////////////////////////////////////////

void programme::on_pushButton_refraichir_clicked()
{

    ui->lineEdit_NOM->clear();
    ui->QEdit_DATE->clear();
    ui->lineEdit_ID->clear();
    ui->lineEdit_NOMBRE->clear();
    ui->lineEdit_DUREE->clear();
    ui->lineEdit_ID->setEnabled(true);
     ui->comboBox_cin->setEnabled(true);
     ui->imagebrowser_2->clear();

}


////////////////////////////////////////////////////imprime///////////////////////////////////////////////////////////////////////
void programme::on_imprimer_clicked()
{
    QAbstractItemModel *model = ui->tabprog->model();

    int rows = model->rowCount();
    int columns = model->columnCount();

    int cellWidth = 280; // Increased cell width for better readability
    int cellHeight = 300; // Increased cell height for better readability

    // Define the margin for the table
    int margin = 100; // Reduced margin for more space

    // Define the vertical offset for attribute names
    int attributeOffset = 70; // Adjusted vertical offset for clearer header

    // Create a QTextDocument to hold the content
    QTextDocument doc;

    // Ask the user to select a file for saving
    QString fileName = QFileDialog::getSaveFileName(this, tr("Save PDF"), "", "*.pdf");
    if (!fileName.isEmpty()) {
        // Export the document as PDF
        QPdfWriter writer(fileName);
        writer.setPageSize(QPageSize(QPageSize::A4)); // Set page size to A4
        writer.setResolution(300); // Set resolution to 300 dpi
        doc.setDefaultFont(QFont("Arial", 7)); // Set font size for the table content

        QPainter painter(&writer);

        painter.setPen(Qt::black);

        int page = 1; // Initialize page counter
        int rowsPerPage = 10; // Number of rows per page

        // Draw each page
        for (int rowStart = 0; rowStart < rows; rowStart += rowsPerPage, ++page) {
            // Start a new page
            writer.newPage();

            // Draw the title "--LISTE PROGRAMMES--" in the middle top of the page
            QRect titleRect(margin, margin / 2, cellWidth * columns, attributeOffset);
            painter.setFont(QFont("Arial", 14, QFont::Bold)); // Increased font size for title
            painter.setPen(Qt::green); // Set pen color to green
            painter.drawText(titleRect, Qt::AlignCenter, "--LISTE PROGRAMMES--");

            // Define the size of the table
            int tableWidth = cellWidth * columns;
            int tableHeight = cellHeight * rowsPerPage;

            // Draw the table outline
            painter.setPen(Qt::black); // Reset pen color to black
            painter.drawRect(margin, margin + attributeOffset, tableWidth, tableHeight + attributeOffset);

            // Draw the horizontal lines
            for (int row = 0; row < rowsPerPage; ++row) {
                int y = margin + (row * cellHeight) + attributeOffset;
                painter.drawLine(margin, y, margin + tableWidth, y);
            }

            // Draw the vertical lines
            for (int column = 0; column < columns; ++column) {
                int x = margin + column * cellWidth;
                painter.drawLine(x, margin + attributeOffset, x, margin + tableHeight + attributeOffset); // Adjusted vertical lines
            }

            // Insert column names
            painter.setPen(Qt::red); // Set pen color to red
            for (int column = 0; column < columns; ++column) {
                QString columnName = model->headerData(column, Qt::Horizontal).toString();
                QRect cellRect(margin + column * cellWidth, margin + attributeOffset, cellWidth, attributeOffset);
                painter.setFont(QFont("Arial", 7, QFont::Bold)); // Set font to bold
                painter.drawText(cellRect, Qt::AlignCenter, columnName);
            }

            // Iterate through each cell and add its content to the table
            painter.setPen(Qt::black); // Reset pen color to black
            for (int row = rowStart; row < std::min(rowStart + rowsPerPage, rows); ++row) {
                for (int column = 0; column < columns; ++column) {
                    QModelIndex index = model->index(row, column);
                    QString data = model->data(index).toString();
                    QRect cellRect(margin + column * cellWidth, margin + (row - rowStart) * cellHeight + attributeOffset, cellWidth, cellHeight); // Adjusted cell position
                    painter.setFont(QFont("Arial", 7)); // Reset font to regular
                    painter.drawText(cellRect, Qt::AlignCenter, data);
                }
            }

            // Draw page number at the bottom
            QString pageInfo = QString("Page: %1").arg(page);
            QRect pageInfoRect(margin, margin + tableHeight + attributeOffset * 2 + margin / 2, tableWidth, attributeOffset);
            painter.drawText(pageInfoRect, Qt::AlignRight, pageInfo);

            // Draw the current date at the bottom
            QString currentDate = QDateTime::currentDateTime().toString("dd/MM/yyyy");
            QRect dateRect(margin, pageInfoRect.bottom() + margin / 2, tableWidth, attributeOffset);
            painter.drawText(dateRect, Qt::AlignRight, "Date: " + currentDate);
        }

        // Finish painting
        painter.end();
    }
}



///////////////////////////////////////////////tri//////////////////////////////////////////////////////////////




void programme::on_pushButton_3_clicked()
    {

cprogramme *part = new cprogramme();

   int triType = ui->comboBox->currentIndex() + 1;

   if (triType >= 1 && triType <= 6) {

       QSqlQueryModel *model = part->tri(triType);
       ui->tabprog->setModel(model);
   }


   else {
       qDebug() << "Erreur : Aucun critère de tri sélectionné.";
   }
}



/////////////////////////////////////suppression///////////////////////////////////////////////




void programme::on_pushButton_7_clicked() {
    int ID_PROGRAMME = ui->lineEdit_ID->text().toInt();

    QMessageBox::StandardButton confirmation;
    confirmation = QMessageBox::question(this, "Confirmation", "Êtes-vous sûr de vouloir supprimer ?",
                                          QMessageBox::Yes|QMessageBox::No);
    if (confirmation == QMessageBox::Yes) {
        // L'utilisateur a confirmé la suppression
        bool programDeleted = tp.supprimer(ID_PROGRAMME); // Supprimer le programme

        if ( programDeleted) {
            // Les deux opérations de suppression ont réussi

            // Supprimer le programme du calendrier
            QDate programDate = ui->calendarWidget1->selectedDate(); // Récupérer la date sélectionnée dans le calendrier
            QTextCharFormat format;
            format.clearBackground(); // Effacer la couleur de fond
            format.setToolTip(""); // Effacer le texte formaté
            ui->calendarWidget1->setDateTextFormat(programDate, format);

            // Mettre à jour l'affichage du calendrier et de la table des programmes
            setupCalendar();
            ui->tabprog->setModel(tp.afficher());

            QMessageBox::information(nullptr, QObject::tr("OK"),
                                     QObject::tr("Suppression effectuée"), QMessageBox::Close);
        } else {
            // Au moins une des opérations de suppression a échoué
            QMessageBox::critical(nullptr, QObject::tr("Erreur"), QObject::tr("Suppression non effectuée : ID invalide ou erreur lors de la suppression de l'image"), QMessageBox::Cancel);
        }
    } else {
        // L'utilisateur a annulé la suppression
        QMessageBox::information(nullptr, QObject::tr("Annulation"),
                                 QObject::tr("Suppression annulée"), QMessageBox::Close);
    }

    ui->lineEdit_NOM->clear();
    ui->comboBox_SECTION->setCurrentIndex(0);
    ui->comboBox_TYPE->setCurrentIndex(0);
    ui->QEdit_DATE->clear();
    ui->lineEdit_ID->clear();
    ui->lineEdit_NOMBRE->clear();
    ui->lineEdit_DUREE->clear();
    ui->comboBox_cin->clear();
    ui->imagebrowser->clear();
    ui->imagebrowser_2->clear();
    ui->lineEdit_ID->setEnabled(true);}




////////////////////////////////////////////set up calendrier////////////////////////////////////////////////////////////



void programme::setupCalendar() {
    // Effacer les anciennes données du calendrier uniquement si nécessaire
    if (!m_programData.isEmpty()) {
        qDebug() << "Effacement des anciennes données du calendrier...";
        for (auto it = m_programData.constBegin(); it != m_programData.constEnd(); ++it) {
            QDate programDate = it.key();
            QTextCharFormat format;
            format.clearBackground(); // Effacer la couleur de fond
            format.setToolTip(""); // Effacer le texte formaté
            ui->calendarWidget1->setDateTextFormat(programDate, format);
        }
        m_programData.clear(); // Effacer les données précédentes
        qDebug() << "Anciennes données du calendrier effacées.";
    }

    QSqlQueryModel *model = tp.affichercalendrier();

    // Parcourir les données du modèle pour extraire les informations sur les programmes
    for (int i = 0; i < model->rowCount(); ++i) {
        QModelIndex index = model->index(i, 0); // Colonne DATE_DIFFUSION
        QString dateString = model->data(index).toString();
        QDate programDate = QDate::fromString(dateString, "dd-MM-yyyy");

        QString programName = model->index(i, 1).data().toString();
        QString existingPrograms = m_programData.value(programDate);
        if (!existingPrograms.isEmpty()) {
            // S'il y a déjà des programmes pour cette date, ajouter le nouveau programme avec un saut de ligne
            programName = existingPrograms + "\n" + programName;
        }
        m_programData.insert(programDate, programName);

        // Mettre à jour le calendrier avec le nouveau programme
        QTextCharFormat format;
        format.setBackground(Qt::blue); // Définir la couleur de fond en jaune
        format.setToolTip(programName);
        ui->calendarWidget1->setDateTextFormat(programDate, format);
    }

    delete model;
}





//////////////////////////////////////////////////////////////////////////////

void programme::on_calendarWidget_activated(const QDate &date) {
    QSqlQueryModel *model = tp.affichercalendrier();
    QTextCharFormat format;

    for (int i = 0; i < model->rowCount(); ++i) {
        QModelIndex index = model->index(i, 0); // Colonne DATE_DIFFUSION
        QString dateString = model->data(index).toString();
        QDate programDate = QDate::fromString(dateString, "dd-MM-yyyy");

        if (programDate == date) {
            QString programName = model->index(i, 1).data().toString();
            format.setToolTip(programName);
            ui->calendarWidget1->setDateTextFormat(date, format);
            break;
        }
    }

    delete model;
}

// Fonction appelée lors du démarrage de l'application pour initialiser le calendrier
void programme::onStart() {
    setupCalendar(); // Configurer le calendrier
    on_calendarWidget_activated(ui->calendarWidget1->selectedDate()); // Mettre à jour le format de la date sélectionnée
}






////////////////////////////////////:stat//////////////////////////////////////

void programme::on_pushButton_stat_clicked()
{
    //  hide() ;
       statProg statProg ;
       statProg.setModal(true) ;
       statProg.exec() ;
}

////////////////////////////////gif//////////////////////





// Dans votre fonction membre ou dans le constructeur de votre classe programme
void programme::playGifAutomatically() {
    QString desktopPath = QStandardPaths::writableLocation(QStandardPaths::DesktopLocation);
    QString gifPath = desktopPath + "/presentation.gif";

    QMovie *gifAnimation = new QMovie(gifPath);

    // Redimensionner l'image
    QSize newSize(200, 200); // Remplacez ces valeurs par les dimensions souhaitées
    gifAnimation->setScaledSize(newSize);

    ui->label_animation->setMovie(gifAnimation);
    ui->label_animation->setVisible(true);
    ui->label_animation->raise();
    gifAnimation->start();
}

/*
// Slot pour masquer l'animation
void programme::hideAnimation() {
    ui->label_animation->setVisible(false);
    // Arrêter le GIF
    ui->label_animation->movie()->stop();
}

*/

////////////////////////////////////////////////////////

void programme::on_pushButton_clicked()
{
    if (!m_programData.isEmpty()) {
        qDebug() << "Effacement des anciennes données du calendrier...";
        for (auto it = m_programData.constBegin(); it != m_programData.constEnd(); ++it) {
            QDate programDate = it.key();
            QTextCharFormat format;
            format.clearBackground(); // Effacer la couleur de fond
            format.setToolTip(""); // Effacer le texte formaté
            ui->calendarWidget1->setDateTextFormat(programDate, format);
        }
        m_programData.clear(); // Effacer les données précédentes
        qDebug() << "Anciennes données du calendrier effacées.";
    }

    QSqlQueryModel *model = tp.affichercalendrier();

    // Parcourir les données du modèle pour extraire les informations sur les programmes
    for (int i = 0; i < model->rowCount(); ++i) {
        QModelIndex index = model->index(i, 0); // Colonne DATE_DIFFUSION
        QString dateString = model->data(index).toString();
        QDate programDate = QDate::fromString(dateString, "dd-MM-yyyy");

        QString programName = model->index(i, 1).data().toString();
        QString existingPrograms = m_programData.value(programDate);
        if (!existingPrograms.isEmpty()) {
            // S'il y a déjà des programmes pour cette date, ajouter le nouveau programme avec un saut de ligne
            programName = existingPrograms + "\n" + programName;
        }
        m_programData.insert(programDate, programName);

        // Mettre à jour le calendrier avec le nouveau programme
        QTextCharFormat format;
        format.setBackground(Qt::blue); // Définir la couleur de fond en jaune
        format.setToolTip(programName);
        ui->calendarWidget1->setDateTextFormat(programDate, format);
    }

    delete model;
}
////////////////////////////////////////////////






















