#include "ajtevent.h"
#include "ui_ajtevent.h"
#include <QSqlQuery>
#include <QDebug>
#include <QSqlError>
#include <QMessageBox>
#include "event.h"
#include <QSqlQuery>
#include <QSqlQueryModel>

ajtevent::ajtevent(QDialog *parent) :
    QDialog(parent),
    ui(new Ui::ajtevent)
{
    ui->setupUi(this);

    // Populate the combobox with event types
    ui->typeajt->addItem("Fete");
    ui->typeajt->addItem("Sortie");
    ui->typeajt->addItem("Conference");
    ui->etat->addItem("en cours");
    ui->etat->addItem("Fini");

    // Connect the checkboxes mutually exclusive
    connect(ui->present, &QCheckBox::clicked, [this](){
        if(ui->present->isChecked())
            ui->nonpres->setChecked(false);
    });

    connect(ui->nonpres, &QCheckBox::clicked, [this](){
        if(ui->nonpres->isChecked())
            ui->present->setChecked(false);
    });

    // Assuming you have a member variable for your QTableView named tableView

    // Create a QSqlQueryModel
    QSqlQueryModel *model = new QSqlQueryModel(this);

    // Set the SQL query to fetch data from your event table
    model->setQuery("SELECT * FROM Event");

    // Check for errors
    if (model->lastError().isValid()) {
        qDebug() << "Error executing query:" << model->lastError().text();
        return;
    }

    // Debugging statement to check the number of rows fetched
    qDebug() << "Number of rows fetched:" << model->rowCount();

    // Set the model to the QTableView
    ui->tableView->setModel(model);

    // Debugging statement to check if model is set correctly
    qDebug() << "Model set successfully";
    connect(ui->tableView, &QTableView::clicked, this, &ajtevent::on_tableView_clicked);

    // Connect the clicked signal of the "effectuer" button to another custom slot
    connect(ui->effectuer, &QPushButton::clicked, this, &ajtevent::on_effectuer_clicked);
}


ajtevent::~ajtevent()
{
    delete ui;
}


void ajtevent::on_ajouter_clicked()
{
    // Retrieve values from UI elements
    QString nom = ui->nom->text();
    QString lieu = ui->lieu->text();
    QString type = ui->typeajt->currentText();
    QTime tempsDeb = ui->tempdeb->time();
    QTime tempsFin = ui->tempfin->time();
    int photo = 0; // Default to 0

    // Determine value of PHOTO based on checkbox
    if(ui->present->isChecked())
        photo = 1;

    // Insert values into the database
    QSqlQuery query;
    query.prepare("INSERT INTO Event (NOM, LIEU, TYPE, TEMPSDEB, TEMPSFIN, PHOTO, ETAT) "
                  "VALUES (:nom, :lieu, :type, :tempsDeb, :tempsFin, :photo, :etat)");
    query.bindValue(":nom", nom);
    query.bindValue(":lieu", lieu);
    query.bindValue(":type", type);
    query.bindValue(":tempsDeb", tempsDeb.toString("hh:mm:ss")); // Bind only the time part
    query.bindValue(":tempsFin", tempsFin.toString("hh:mm:ss"));
    query.bindValue(":photo", photo);
    query.bindValue(":etat", "en cours"); // Provide a non-NULL value for ETAT


    if(query.exec())
    {
        qDebug() << "Event added successfully";
        // Optionally, you can emit a signal to notify other parts of your application
        // that a new event has been added.
        QMessageBox::information(this, "Success", "Event added successfully");

        emit eventAdded();
    }
    else
    {
        qDebug() << "Failed to add event:" << query.lastError().text();
    }

}

void ajtevent::on_pushButton_clicked()
{
    hide() ;
    Event c;
    c.setModal(true);
    c.exec();
}



void ajtevent::on_tableView_clicked(const QModelIndex &index)
{
    // Get the selected row
    int row = index.row();

    // Get data from the selected row
    QString nom = ui->tableView->model()->index(row, 0).data().toString(); // Assuming 'NOM' is in the first column
    QString etat = ui->tableView->model()->index(row, 6).data().toString(); // Assuming 'ETAT' is in the seventh column

    // Populate the line edit and combo box with the extracted data
    ui->nomrech->setText(nom);
    ui->etat->setCurrentText(etat);
}

void ajtevent::on_effectuer_clicked()
{
    // Get the selected event's name
    QString nom = ui->nomrech->text();

    // Get the new state from the combo box
    QString newEtat = ui->etat->currentText();

    // Update the state of the selected event in the database
    QSqlQuery query;
    query.prepare("UPDATE Event SET ETAT = :newEtat WHERE NOM = :nom");
    query.bindValue(":newEtat", newEtat);
    query.bindValue(":nom", nom);

    if(query.exec())
    {
        qDebug() << "Event state updated successfully";
        QMessageBox::information(this, "Success", "Event state updated successfully");
    }
    else
    {
        qDebug() << "Failed to update event state:" << query.lastError().text();
        QMessageBox::warning(this, "Error", "Failed to update event state");
    }
}

