// In parkings.cpp

#include "parkings.h"
#include "ui_parkings.h"
#include <QDebug>
#include <QTimer>

parkings::parkings(QWidget *parent) :
    QDialog(parent), // Change QMainWindow to QDialog
    ui(new Ui::parkings)
{
    ui->setupUi(this);
    int ret =    A.connect_arduino("COM7"); // Connect to COM7
 // Connect to Arduino
    switch (ret) {
    case 0:
        qDebug() << "Arduino is available and connected to: " << A.getarduino_port_name();
        break;
    case 1:
        qDebug() << "Arduino is available but not connected to: " << A.getarduino_port_name();
        break;
    case -1:
        qDebug() << "Arduino is not available";
    }

    // Initialize timer to check for new data every 500 ms
    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(update_label()));
    timer->start(1000); // Start the timer
}

parkings::~parkings()
{
    delete ui;
}
//tlawej 3la code parking
#include <QtSql>

bool parkings::searchCodeInTable(const QString& codeToSearch) {
    // Construct the SQL query to search for similar codes in the code_park column
    QString queryText = "SELECT code_park FROM personelles WHERE UPPER(code_park) LIKE UPPER(:search)";

    QSqlQuery query;
    query.prepare(queryText);
    query.bindValue(":search", "%" + codeToSearch.toUpper() + "%"); // Adding wildcard for similarity search

    // Execute the query
    if (query.exec()) {
        // Check if any results were returned
        if (query.next()) {
            // Code found
            return true;
        } else {
            // Code not found
            return false;
        }
    } else {
        // Error handling
        qDebug() << "Query execution failed:" << query.lastError().text();
        return false;
    }
}


void parkings::update_label()
{
    QByteArray data = A.read_from_arduino(); // Read data from Arduino
    QString message = QString(data).trimmed(); // Trim whitespace from received data
    qDebug() << "Received message:" << message; // Print the received message for debugging

    // Split the message into parts based on the ":" character
    QStringList parts = message.split(":");
    if (parts.size() < 2) {
        qDebug() << "Invalid message format";
        return;
    }

    QString messageType = parts[0].trimmed();
    QString messageContent = parts[1].trimmed();
    ui->label_2->setText(messageContent); // Set the text of the label to the received content

    if (messageType == "UID tag") {
        qDebug() << "Received UID tag message with content:" << messageContent; // Add this line for debugging

        // Handle UID tag message
        if (searchCodeInTable(messageContent)) {
            ui->label->setText("Access Granted"); // Update label to indicate access granted
            A.write_to_arduino("1"); // Send "1" to Arduino for granting access
        } else {
            ui->label->setText("Access Denied"); // Update label to indicate access denied
            A.write_to_arduino("0"); // Send "0" to Arduino for denying access
        }
    }
}
