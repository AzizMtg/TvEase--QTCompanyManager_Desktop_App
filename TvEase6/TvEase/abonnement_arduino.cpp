#include "abonnement_arduino.h"
#include "ui_abonnement_arduino.h"
#include <QMessageBox>
#include <QSqlDatabase>
#include <QSqlQuery>
#include "ESpeak.h" // Include the ESpeak header


abonnement_arduino::abonnement_arduino(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::abonnement_arduino)
{
    ui->setupUi(this);
    arduinoObj.connect_arduino("COM6"); // Connect to COM6


    // Access the QSerialPort object through a member function of the arduino class
    connect(arduinoObj.getserial(), &QSerialPort::readyRead, this, &abonnement_arduino::onDataReceived);

    if (arduinoObj.connect_arduino() == 0) {
        qDebug() << "Arduino connected successfully!";
    } else {
        qDebug() << "Failed to connect to Arduino!";
    }
}

abonnement_arduino::~abonnement_arduino()
{
    arduinoObj.close_arduino();
    delete ui;
}


#include <QMessageBox>
#include <QSqlDatabase>

#include <QSqlQuery>

/*pubarduino::pubarduino(QWidget *parent) :
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
}*/

/*pubarduino::~pubarduino()
{
    arduinoObj.close_arduino();
    delete ui;
}*/
void abonnement_arduino::on_envoyer_clicked()
{
    QString idValue = ui->lineEdit->text(); // Extract the ID value from the QLineEdit

    // Prepare the SQL query
    QSqlQuery query;
    query.prepare("SELECT NUMERO_ABONNEMENT, DATE_EXPIRATION, TYPE_ABONNEMENT FROM ABONNEMENT WHERE ID_ABONNEMENT = ?");
    query.addBindValue(idValue);

    // Execute the query
    if (!query.exec()) {
        qDebug() << "Query execution failed";
        return;
    }

    // Check if a record was found
    if (query.next()) {
        QString nomValue = query.value(0).toString();
        QString dateExpValue = query.value(1).toString();
        QString typeValue = query.value(2).toString();

        // Format the data to send to Arduino
        QString dataToSend = "Type:" + typeValue + "\n"
                           + "Date Exp: " + dateExpValue + "\n"
                           + "Renouv ? (C)" + "\n";

        // Convert QString to QByteArray
        QByteArray byteArray = dataToSend.toUtf8();

        // Send data to Arduino
        arduinoObj.write_to_arduino(byteArray);

        // Set the date in the QDateEdit widget
        QDate expirationDate = QDate::fromString(dateExpValue, "yyyy-MM-dd"); // Assuming DATE_EXPIRATION is in yyyy-MM-dd format
        ui->dateEdit->setDate(expirationDate);

        // Compare expiration date with current date
        QDate currentDate = QDate::currentDate();
        if (expirationDate < currentDate) {
            ui->expirewale->setText("EXPIRED");
        } else {
            ui->expirewale->setText("NON EXPIRED");
        }
    } else {
        qDebug() << "No record found for the given ID";
        // Send "n'existe pas" to Arduino
        QString dataToSend = "n'existe pas\n";
        QByteArray byteArray = dataToSend.toUtf8(); // Convert QString to QByteArray
        arduinoObj.write_to_arduino(byteArray); // Send data to Arduino

        // Clear the date in the QDateEdit widget
        ui->dateEdit->setDate(QDate()); // Set an empty date

        // Clear the text in the expirewale QLineEdit
        ui->expirewale->clear();
    }
}





void abonnement_arduino::on_clear_clicked()
{
    ui->lineEdit->clear();
}

void abonnement_arduino::on_eff_clicked()
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

void abonnement_arduino::onDataReceived()
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
    if (receivedData.contains("C")) {
            // Call the slot to handle the 'A' character
            on_zid_clicked();
        }
}

//IN
void abonnement_arduino::displayData()
{
    QByteArray data = arduinoObj.read_from_arduino();
    QString receivedData = QString::fromLatin1(data);

    qDebug() << "Received data:" << receivedData;

    QString numericData;

    // tan7i numerique
    for (const QChar &ch : receivedData) {
        if (ch.isDigit()) {
            numericData += ch;
        }
    }

    // t7otha fel line edit
    ui->lineEdit->setText(numericData);

    // C "#"
    if (receivedData.contains("#")) {
        // Simulate button click event
        on_envoyer_clicked();
    }

}

void abonnement_arduino::on_zid_clicked()
{
    QString expirewaleText = ui->expirewale->text();

    if (expirewaleText == "NON EXPIRED") {
        // Get the current expiration date from the QDateEdit widget
        QDate currentDate = ui->dateEdit->date();

        // Calculate new expiration date by adding one year to the current date
        QDate newExpirationDate = currentDate.addYears(1);

        // Set the new expiration date in the dateEdit QDateEdit widget
        ui->dateEdit->setDate(newExpirationDate);

        // Extract the ID value from the QLineEdit
        QString idValue = ui->lineEdit->text();

        // Prepare the SQL query to update DATE_EXPIRATION in the ABONNEMENT table
        QSqlQuery query;
        query.prepare("UPDATE ABONNEMENT SET DATE_EXPIRATION = ? WHERE ID_ABONNEMENT = ?");
        query.addBindValue(newExpirationDate.toString(Qt::ISODate));
        query.addBindValue(idValue);

        // Execute the update query
        if (!query.exec()) {
            qDebug() << "Update query execution failed";
            return;
        } else {
            qDebug() << "Date expiration updated successfully";
        }
        QString text="renouv avec succes";
        const wchar_t *wText = reinterpret_cast<const wchar_t *>(text.utf16());               m_espeak.speak(wText);
    } else if (expirewaleText == "EXPIRED") {
        // Calculate new expiration date by adding one year to the current date
        QDate currentDate = QDate::currentDate();
        QDate newExpirationDate = currentDate.addYears(1);

        // Set the new expiration date in the dateEdit QDateEdit widget
        ui->dateEdit->setDate(newExpirationDate);

        // Extract the ID value from the QLineEdit
        QString idValue = ui->lineEdit->text();

        // Prepare the SQL query to update DATE_EXPIRATION in the ABONNEMENT table
        QSqlQuery query;
        query.prepare("UPDATE ABONNEMENT SET DATE_EXPIRATION = ? WHERE ID_ABONNEMENT = ?");
        query.addBindValue(newExpirationDate.toString(Qt::ISODate));
        query.addBindValue(idValue);

        // Execute the update query
        if (!query.exec()) {
            qDebug() << "Update query execution failed";
            return;
        } else {
            qDebug() << "Date expiration updated successfully";
        }
        QString text="renouv avec succes";
        const wchar_t *wText = reinterpret_cast<const wchar_t *>(text.utf16());               m_espeak.speak(wText);
    } else {
        // Handle other cases if needed
    }
}


