#include "pubarduino.h"
#include "ui_pubarduino.h"
#include <QMessageBox>
#include <QSqlDatabase>
#include <QSqlQuery>

pubarduino::pubarduino(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::pubarduino)
{
    ui->setupUi(this);

    // Access the QSerialPort object through a member function of the arduino class
   connect(arduinoObj.getserial(), &QSerialPort::readyRead, this, &pubarduino::onDataReceived);

    if (arduinoObj.connect_arduino() == 0) {
        qDebug() << "Arduino connected successfully!";
    } else {
        qDebug() << "Failed to connect to Arduino!";
    }
}

pubarduino::~pubarduino()
{
    arduinoObj.close_arduino();
    delete ui;
}
void pubarduino::on_envoyer_clicked()
{
    QString idValue = ui->lineEdit->text(); // Extract the ID value from the QLineEdit

    // Prepare the SQL query
    QSqlQuery query;
    query.prepare("SELECT NOM, DATEPUB, TEMPS FROM PUBLICITE WHERE ID = ?");
    query.addBindValue(idValue);

    // Execute the query
    if (!query.exec()) {
        qDebug() << "Query execution failed";
        return;
    }

    // Check if a record was found
    if (query.next()) {
        QString nomValue = query.value(0).toString();
        QString datePubValue = query.value(1).toString();
        QString tempsValue = query.value(2).toString();

        // Format the data to send to Arduino
        QString dataToSend = nomValue + "\n"
                           + "Date de publication: " + datePubValue + "\n"
                           + "Temps: " + tempsValue + "\n";

        // Convert QString to QByteArray
        QByteArray byteArray = dataToSend.toUtf8();

        // Send data to Arduino
        arduinoObj.write_to_arduino(byteArray);
    } else {
        qDebug() << "No record found for the given ID";
        // Send "Publicite non trouve" to Arduino
        QString dataToSend = "n'existe pas\n";
        QByteArray byteArray = dataToSend.toUtf8(); // Convert QString to QByteArray
        arduinoObj.write_to_arduino(byteArray); // Send data to Arduino
    }
}



void pubarduino::on_clear_clicked()
{
    ui->lineEdit->clear();
}

void pubarduino::on_eff_clicked()
{
    QString currentText = ui->lineEdit->text();

    // Check if the text is not empty
    if (!currentText.isEmpty()) {
        // Remove the last character
        currentText.chop(1); // Removes the last character
        // Set the modified text back to the line edit
        ui->lineEdit->setText(currentText);
    }
}

void pubarduino::onDataReceived()
{
    QByteArray data = arduinoObj.read_from_arduino();
    QString receivedData = QString::fromLatin1(data);

    qDebug() << "Received data:" << receivedData;

    QString numericData;

    // Filter out non-numeric characters
    for (const QChar &ch : receivedData) {
        if (ch.isDigit()) {
            numericData += ch;
        }
    }

    // Check if the numeric data is not empty
    if (!numericData.isEmpty()) {
        // Append the numeric data to the existing text in the QLineEdit widget
        ui->lineEdit->setText(ui->lineEdit->text() + numericData);
    }

    // Check if the received data contains "#"
    if (receivedData.contains("#")) {
        // Simulate button click event
        on_envoyer_clicked();
    }
    if (receivedData.contains("A")) {
            // Call the slot to handle the 'A' character
            on_clear_clicked();
        }
    if (receivedData.contains("B")) {
            // Call the slot to handle the 'A' character
            on_eff_clicked();
        }
}


void pubarduino::displayData()
{
    QByteArray data = arduinoObj.read_from_arduino();
    QString receivedData = QString::fromLatin1(data);

    qDebug() << "Received data:" << receivedData;

    QString numericData;

    // Filter out non-numeric characters
    for (const QChar &ch : receivedData) {
        if (ch.isDigit()) {
            numericData += ch;
        }
    }

    // Set the received numeric data directly to the lineEdit widget
    ui->lineEdit->setText(numericData);

    // Check if the received data contains "#"
    if (receivedData.contains("#")) {
        // Simulate button click event
        on_envoyer_clicked();
    }
}

