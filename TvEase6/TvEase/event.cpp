#include "event.h"
#include "ui_event.h"
#include "ajtevent.h"
#include <QDebug>
#include <QSqlError>
#include <QSqlQueryModel> // Include the necessary header file
#include <QFile>
#include <QMessageBox>
#include <QSqlQuery>
#include "mesevents.h"
#include <iostream>
#include <fstream>
#include <string>
#include<QTimer>
#include "auditeur.h"


////////////////
std::string getRoleFromFileEV(const std::string& filePath) {
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

std::string getNomPrenomFromFileEV(const std::string& filePath) {
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

////
Event::Event(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Event)
{
    ui->setupUi(this);

    // Create a QSqlQueryModel
    model = new QSqlQueryModel(this);

    // Set the SQL query to fetch only the desired columns and filter events where ETAT is not 'fini'
    model->setQuery("SELECT NOM, LIEU, TEMPSDEB, TEMPSFIN FROM Event WHERE ETAT != 'Fini'");

    // Check for errors
    if (model->lastError().isValid()) {
        qDebug() << "Error executing query:" << model->lastError().text();
        return;
    }

    // Debugging statement to check the number of rows fetched
    qDebug() << "Number of rows fetched:" << model->rowCount();

    // Set the model to the QTableView
    ui->eventdispo->setModel(model);

    // Debugging statement to check if model is set correctly
    qDebug() << "Model set successfully";

    // Connect the clicked signal of the eventdispo table view to a custom slot
    connect(ui->eventdispo, &QTableView::clicked, this, &Event::on_eventdispo_clicked);

    // Connect the clicked signal of the "particip" button to another custom slot
    connect(ui->particip, &QPushButton::clicked, this, &Event::on_particip_clicked);
}

Event::~Event()
{
    delete ui;
}

void Event::on_ajt_clicked()
{


    std::string filePath = "C:\\Users\\CHAIMA\\Documents\\Esprit 2eme\\semestre 2\\projet c++\\TvEase6\\TvEase\\role\\role.txt";
    std::string rolest = getRoleFromFileEV(filePath);

     role = QString::fromStdString(rolest);

     std::cout <<"ili fil aud"<<role.toStdString();

    if(role =="Admin principal" )
         {
        hide();
        ajtevent c;
        c.setModal(true);
        c.exec();

         }
    else
       {
        QApplication::setOverrideCursor(Qt::ForbiddenCursor);
        QTimer::singleShot(300, [this]()
        {  QApplication::restoreOverrideCursor();  });
       }

}

void Event::on_eventdispo_clicked(const QModelIndex &index)
{
    // Get the selected row
    int row = index.row();

    // Get data from the selected row
    QString nom = model->index(row, 0).data().toString(); // NOM column
    QString lieu = model->index(row, 1).data().toString(); // LIEU column
    QString tempdeb = model->index(row, 2).data().toString(); // TEMPSDEB column

    // Populate the line edits with the extracted data
    ui->nomev->setText(nom);
    ui->lieu->setText(lieu);
    ui->tempdeb->setText(tempdeb);
}

void Event::on_particip_clicked()
{
        QFile file("C:\\Users\\CHAIMA\\Documents\\Esprit 2eme\\semestre 2\\projet c++\\TvEase6\\TvEase\\role\\role.txt");
       if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
           qDebug() << "Failed to open role.txt";
           return;
       }
       QTextStream in(&file);
       QString cinperso = in.readLine();

       // Get the selected event's name
       QString nomevent = ui->nomev->text();

       // Insert data into EVENTPERSO table
       QSqlQuery query;
       query.prepare("INSERT INTO EVENTPERSO (CINPERSO, NOMEVENT) "
                     "VALUES (:cinperso, :nomevent)");
       query.bindValue(":cinperso", cinperso);
       query.bindValue(":nomevent", nomevent);

       if(query.exec())
       {
           qDebug() << "Participant added successfully";
           QMessageBox::information(this, "Success", "Participant added successfully");
       }
       else
       {
           qDebug() << "Failed to add participant:" << query.lastError().text();
           QMessageBox::warning(this, "Error", "Failed to add participant");
       }

       file.close();
}

void Event::on_pushButton_clicked()
{
    hide();
    mesevents c;
    c.setModal(true);
    c.exec();

}
