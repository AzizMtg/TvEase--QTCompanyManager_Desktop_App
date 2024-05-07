#include "employearduino.h"
#include "ui_employearduino.h"
#include <QMessageBox>
#include "arduino.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include "ESpeak.h" // Include the ESpeak header

employearduino::employearduino(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::employearduino)
{
    ui->setupUi(this);

    // Create a regular expression for numeric characters only
    QRegExp rx("[0-9]+");

    // Create a validator with the regular expression
    QRegExpValidator *validator = new QRegExpValidator(rx, this);

    // Set the validator to the QLineEdit
    ui->lineEdit->setValidator(validator);

    qDebug() << "Validator is set up.";

    // Access the QSerialPort object through a member function of the arduino class
    connect(arduinoObj.getserial(), &QSerialPort::readyRead, this, &employearduino::onDataReceived);

    if (arduinoObj.connect_arduino() == 0) {
        qDebug() << "Arduino connected successfully!";
    } else {
        qDebug() << "Failed to connect to Arduino!";
    }
}

employearduino::~employearduino()
{
    arduinoObj.close_arduino();
    delete ui;
}

void employearduino::onDataReceived()
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

    // Append the filtered numeric data to the existing text in the QLineEdit widget
    ui->lineEdit->setText(ui->lineEdit->text() + numericData);

    // Check if the received data contains "#"
    if (receivedData.contains("#")) {

        // Get the text from lineEdit_2
        QString text = ui->lineEdit_2->text();

        // Convert the text to a wchar_t array
        const wchar_t *wText = reinterpret_cast<const wchar_t *>(text.utf16());

        // Speak the text using eSpeak
        m_espeak.speak(wText);

        ui->lineEdit_2->clear();

        // Update the display immediately
        on_pushButton_clicked();


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

void employearduino::on_pushButton_clicked()
{
    QString cinValue = ui->lineEdit->text(); // Extract the value from the QLineEdit

    // Prepare the SQL query
    QSqlQuery query;
    query.prepare("SELECT NOM_PERSONELLE, PRENOM_PERSONELLE, SALAIRE_PERSONELLE, NUMERO_TELEPHONE_PERSONELLE FROM PERSONELLES WHERE CIN_PERSONELLE = ?");
    query.addBindValue(cinValue);

    // Execute the query
    if (!query.exec()) {
        qDebug() << "Query execution failed";
        return;
    }

    QString dataToSend;
    QString dataWithoutNumbers;
    // Declaration moved here

    // Check if a record was found
    if (query.next()) {
        QString nomValue = query.value(0).toString();
        QString prenomValue = query.value(1).toString();
        QString salaireValue = query.value(2).toString();
        QString numeroValue = query.value(3).toString();

        // Format the data to send to Arduino
        dataToSend = nomValue + " " + prenomValue + "\n"
                           + "salaire: " + salaireValue + " dt\n"
                           + "num: " + numeroValue + "\n";

        dataWithoutNumbers = nomValue + " " + prenomValue + "\n"
                                   + "salaire: " + salaireValue + " dt\n";

        // Convert QString to QByteArray
        QByteArray byteArray = dataToSend.toUtf8();

        // Send data to Arduino
        arduinoObj.write_to_arduino(byteArray);
    } else {
        qDebug() << "No record found for the given CIN";
        // Send "doesnt exist" to Arduino
        dataToSend = "n'existe pas\n";
        dataWithoutNumbers="aucun employé de ce CIN existe veuiller resaisir le numero";
        QByteArray byteArray = dataToSend.toUtf8(); // Convert QString to QByteArray
        arduinoObj.write_to_arduino(byteArray); // Send data to Arduino

        // Set data to lineEdit_2 for immediate update
        ui->lineEdit_2->setText(dataWithoutNumbers);
    }


    // Set data to lineEdit_2
    ui->lineEdit_2->setText(dataWithoutNumbers);
}

void employearduino::on_clear_clicked()
{
    ui->lineEdit->clear();
}

void employearduino::on_eff_clicked()
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
