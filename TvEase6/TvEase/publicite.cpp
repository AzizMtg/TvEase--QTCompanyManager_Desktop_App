#include "publicite.h"
#include "ui_publicite.h"
//
#include "personnelle.h"
#include "programme.h"
#include "auditeur.h"
#include "abonnement.h"
#include "studio.h"
// file role
#include <iostream>
#include <fstream>
#include <string>
#include<QTimer>
//
/// azizzz

#include "event.h"

#include "testdialog.h"
#include "pubarduino.h"
#include "abonnement_arduino.h"

#include "pubhisto.h"
#include "personnelle.h"
#include "programme.h"
#include "auditeur.h"
#include "abonnement.h"
#include "studio.h"
#include "cpub.h"
#include <QMessageBox>
#include "cpub.h"
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
#include <QSqlQuery>
#include <QLabel>
#include <QMovie>
#include <QtCharts>
#include <QChartView>
#include <QLineSeries>

#include "lopiza.h"
#include "chat.h"

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
#include "espeak.h"


////////ROLE
std::string getRoleFromFilePUB(const std::string& filePath) {
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

std::string getNomPrenomFromFilePUB(const std::string& filePath) {
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
void publicite::updateTime()
{
    // Get the current time
    QTime currentTime = QTime::currentTime();
    // Convert the time to string in the format "hh:mm:ss"
    QString timeText = currentTime.toString("hh:mm:ss");
    // Update the QLabel text with the current time
    ui->label_heure->setText(timeText);
}



////////////////////////////////////////////////
publicite::publicite(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::publicite),
  m_lastClickTime(QTime::currentTime()),
      m_lastClickedColumn(-1) // Initialize to an invalid value
  {
      ui->setupUi(this);

/////////////ROLE
        std::string filePath = "C:\\Users\\CHAIMA\\Documents\\Esprit 2eme\\semestre 2\\projet c++\\TvEase6\\TvEase\\role\\role.txt";
        std::string rolest = getRoleFromFilePUB(filePath);
        role = QString::fromStdString(rolest);
        ui->lineEdit_role->setText(role);

        std::string nomprenom = getNomPrenomFromFilePUB(filePath);
            QString Messwelcome = "Bienvenu " +QString::fromStdString(nomprenom);
            ui->lineEdit_nomprenom->setText(Messwelcome);

//////////// aziz
///
///
///
///
///
            // Connect the clicked signal of the QTableView to the slot function
                      connect(ui->tableaupub, SIGNAL(clicked(const QModelIndex&)), this, SLOT(copySelectedTextToLineEdit(const QModelIndex&)));
                      ////////////////////////// statistique 1
              int under500 = 0, over500 = 0;

              // Fetch data from the Publicite table
              QSqlQuery query;
              query.exec("SELECT COUNT(*) FROM Publicite WHERE prix < 500");
              if (query.next()) {
                  under500 = query.value(0).toInt();
              }
              query.exec("SELECT COUNT(*) FROM Publicite WHERE prix >= 500");
              if (query.next()) {
                  over500 = query.value(0).toInt();
              }

              // Create graph
              QtCharts::QPieSeries *pie = new QtCharts::QPieSeries();
              pie->append("Prix < 500", under500);
              pie->append("Prix >= 500", over500);

              QtCharts::QChart *chart = new QtCharts::QChart();
              chart->addSeries(pie);
              chart->setTitle("Prix de la Publicité");

              chart->setAnimationOptions(QtCharts::QChart::AllAnimations);

              QtCharts::QChartView *chartView = new QtCharts::QChartView(chart);
              chartView->setRenderHint(QPainter::Antialiasing);

              QHBoxLayout *layout = new QHBoxLayout(ui->frame);
              layout->addWidget(chartView);

              // Connect signal hovered to show the number of Publicités over and under 500
              connect(pie, &QtCharts::QPieSeries::hovered, this, [=](QtCharts::QPieSlice *slice, bool hovered) {
                  if (hovered) {
                      int over500Count = 0;
                      int under500Count = 0;

                      if (slice->label() == "Prix >= 500") {
                          over500Count = slice->value();
                          under500Count = under500;
                      } else if (slice->label() == "Prix < 500") {
                          under500Count = slice->value();
                          over500Count = over500;
                      }

                      QString message = QString("Publicités avec prix >= 500: %1\nPublicités avec prix < 500: %2")
                                                .arg(over500Count).arg(under500Count);
                      QToolTip::showText(QCursor::pos(), message);
                      QToolTip::setFont(QFont("Arial", 10, QFont::Bold)); // Set the font to bold
                      QToolTip::setPalette(QPalette(Qt::white, Qt::black)); // Set background and text color
                  } else {
                      QToolTip::hideText();
                  }
              });

              ////////////////////////////// statistique 2
              int linkedSocietes = 0, unlinkedSocietes = 0;

              query.exec("SELECT COUNT(*) FROM Soci");
              if (query.next()) {
                  int totalSocietes = query.value(0).toInt();
                  query.exec("SELECT COUNT(DISTINCT IDSOC) FROM Publicite");
                  if (query.next()) {
                      linkedSocietes = query.value(0).toInt();
                      unlinkedSocietes = totalSocietes - linkedSocietes;
                  }
              }

              QtCharts::QBarSet *linkedSet = new QtCharts::QBarSet("Sociétés liées a une pub");
              QtCharts::QBarSet *unlinkedSet = new QtCharts::QBarSet("Sociétés non liées a une pub");

              *linkedSet << linkedSocietes;
              *unlinkedSet << unlinkedSocietes;

              QtCharts::QBarSeries *barSeries = new QtCharts::QBarSeries();
              barSeries->append(linkedSet);
              barSeries->append(unlinkedSet);

              QtCharts::QChart *chart2 = new QtCharts::QChart();
              chart2->addSeries(barSeries);
              chart2->setTitle("Liens avec des Sociétés");

              chart2->setAnimationOptions(QtCharts::QChart::AllAnimations);

              QtCharts::QChartView *chartView2 = new QtCharts::QChartView(chart2);
              chartView2->setRenderHint(QPainter::Antialiasing);

              QHBoxLayout *layout2 = new QHBoxLayout(ui->frame_2);
              layout2->addWidget(chartView2);

              // Connect signal hovered to show the number of Sociétés linked and unlinked
              connect(linkedSet, &QtCharts::QBarSet::hovered, this, [=](bool status, int index) {
                  if (status) {
                      int value = linkedSet->at(index);
                      QString message = QString("Sociétés liées: %1").arg(value);
                      message.append(QString("\nSociétés non liées: %1").arg(unlinkedSet->at(index)));
                      QToolTip::showText(chartView2->mapToGlobal(QPoint(0, 0)), message);
                      QToolTip::setFont(QFont("Arial", 10, QFont::Bold)); // Set the font to bold
                      QToolTip::setPalette(QPalette(Qt::white, Qt::black)); // Set background and text color
                  } else {
                      QToolTip::hideText();
                  }
              });


            //tabn
              playGifAutomatically();


            ui->tableaupub->setModel(tmp.afficher());


            /////////

            /// taba3 il afficher
                // Create the proxy model
                proxyModel = new QSortFilterProxyModel(this);
                proxyModel->setSourceModel(tmp.afficher());
                ui->tableaupub->setModel(proxyModel);

                // Apply styles to the header
                QString headerStyle = "QHeaderView::section {"
                                        "    font-weight: bold;" // Making text bold
                                        "    background-color: #EEE6D8 ;" // bleue color
                                        "    border: 1px solid black;" // Adding a border
                                        "}";

                ui->tableaupub->horizontalHeader()->setStyleSheet(headerStyle);
                ui->tableaupub->horizontalHeader()->resizeSection(7,200);
                ui->tableaupub->horizontalHeader()->resizeSection(8,150);
                ui->tableaupub->horizontalHeader()->resizeSection(9,200);


            ///////////

            // tbadel asemi el tableau melfou9
             QStringList headers;
             headers << "ID Publ" << "ID Société" << "Nom" << "Description" << "Canal" << "Prix" << "Date_diffusion" << "Durée" << "Heure_diffusion";
             for (int i = 0; i < headers.size(); ++i) {
                 ui->tableaupub->horizontalHeader()->setSectionResizeMode(i, QHeaderView::Stretch); // Stretch the columns to fit the contents
                 ui->tableaupub->model()->setHeaderData(i, Qt::Horizontal, headers.at(i));
             }
             QIntValidator *intValidator = new QIntValidator(this);
             ui->ajoutID_6->setValidator(intValidator);
             ui->enterid->setValidator(intValidator);
             ui->lineEdit_5->setValidator(intValidator);
             ui->suppr->setValidator(intValidator);
             ui->idsupprimer->setValidator(intValidator);







             ui->prixmodif->setValidator(intValidator);
             ui->numero->setValidator(intValidator);
             ui->IDSOC->setValidator(intValidator);







             //table societe
             ui->tableView->setModel(tmp.afficherSociete());





            /*QAbstractItemModel *model = ui->tableaupub->model();
            int numeroColumnIndex = -1;
            for (int i = 0; i < model->columnCount(); ++i) {
                if (model->headerData(i, Qt::Horizontal).toString() == "Numero") {
                    numeroColumnIndex = i;
                    break;
                }
            }

            if (numeroColumnIndex != -1) {
                ui->tableaupub->setItemDelegateForColumn(numeroColumnIndex, new QStyledItemDelegate(ui->tableaupub));
            }*/

            //zedthom lel filter
            ui->comboBox->addItem("Date");
           // ui->comboBox->addItem("Numero");
            ui->comboBox->addItem("ID");
            ui->comboBox->addItem("Duree");
            ui->comboBox->addItem("Temps");
            ui->comboBox->addItem("Prix");




                // Set up validator for decimal input in prixajout_6
                QDoubleValidator *prixValidator = new QDoubleValidator(this);
                prixValidator->setDecimals(2); // Set the maximum number of decimal places to 2
                ui->prixajout_6->setValidator(prixValidator);


                //combobox societe
                populateSocieteComboBox();
                populateModifierSocieteComboBox();

                populateProgramComboBox();
                //connect(ui->ProgID, SIGNAL(currentIndexChanged(int)), this, SLOT(onProgramSelected(int)));


                //connect(programComboBox, QOverload<int>::of(&QComboBox::currentIndexChanged), this, &publicite::updateDateEdit);
                selectionprog();

                connect(ui->ProgID, QOverload<int>::of(&QComboBox::currentIndexChanged), this, &publicite::selectionprog);
                connect(ui->tableView, SIGNAL(clicked(const QModelIndex&)), this, SLOT(onTableViewClicked(const QModelIndex&)));
/////////////////// jours mois anne
///////////////time/////////////////////////
   // Create a QTimer to update the time every second
  QTimer *timer = new QTimer(this);
 connect(timer, &QTimer::timeout, this, &publicite::updateTime);
timer->start(5); // 1000 milliseconds = 1 second


/////
        QDateTime currentDateTime = QDateTime::currentDateTime();
             QString currentDate = currentDateTime.toString("dddd dd/MM/yyyy");
             ui->label_date->setText(currentDate);


}

publicite::~publicite()
{
    delete ui;
}


/////////////////////// chaima
///
///
///

void publicite::copySelectedTextToLineEdit(const QModelIndex& index) {
    // Check if the index is valid
    if (index.isValid()) {
        // Check if the column header is clicked twice
        if (index.column() == m_lastClickedColumn && m_lastClickTime.elapsed() < 300) {
            // Get the text of the selected cell
            QString selectedText = ui->tableaupub->model()->data(index, Qt::DisplayRole).toString();

            // Set the selected text to the QLineEdit
            ui->lineEdit->setText(selectedText);

            // Call the speak function with the selected text
            const wchar_t *wText = reinterpret_cast<const wchar_t *>(selectedText.utf16());
            m_espeak.speak(wText);
        } else {
            // Update the last clicked column and time
            m_lastClickedColumn = index.column();
            m_lastClickTime.start();
        }
    }
}


void publicite::on_pushButton_16_clicked()
{

    std::string filePath = "C:\\Users\\CHAIMA\\Documents\\Esprit 2eme\\semestre 2\\projet c++\\TvEase6\\TvEase\\role\\role.txt";
    std::string rolest = getRoleFromFilePUB(filePath);
    role = QString::fromStdString(rolest);
    std::cout <<"ili fil pub"<<role.toStdString();

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

void publicite::on_pushButton_17_clicked()
{
    std::string filePath = "C:\\Users\\CHAIMA\\Documents\\Esprit 2eme\\semestre 2\\projet c++\\TvEase6\\TvEase\\role\\role.txt";
    std::string rolest = getRoleFromFilePUB(filePath);
    role = QString::fromStdString(rolest);
    std::cout <<"ili fil pub"<<role.toStdString();

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

void publicite::on_pushButton_19_clicked()
{
    std::string filePath = "C:\\Users\\CHAIMA\\Documents\\Esprit 2eme\\semestre 2\\projet c++\\TvEase6\\TvEase\\role\\role.txt";
    std::string rolest = getRoleFromFilePUB(filePath);
    role = QString::fromStdString(rolest);
    std::cout <<"ili fil pub"<<role.toStdString();


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

void publicite::on_pushButton_20_clicked()
{

    std::string filePath = "C:\\Users\\CHAIMA\\Documents\\Esprit 2eme\\semestre 2\\projet c++\\TvEase6\\TvEase\\role\\role.txt";
    std::string rolest = getRoleFromFilePUB(filePath);
    role = QString::fromStdString(rolest);
    std::cout <<"ili fil pub"<<role.toStdString();


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

void publicite::on_pushButton_21_clicked()
{

    std::string filePath = "C:\\Users\\CHAIMA\\Documents\\Esprit 2eme\\semestre 2\\projet c++\\TvEase6\\TvEase\\role\\role.txt";
    std::string rolest = getRoleFromFilePUB(filePath);
    role = QString::fromStdString(rolest);
    std::cout <<"ili fil pub"<<role.toStdString();


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

void publicite::on_pushButton_18_clicked()
{

  /*  std::string filePath = "C:\\Users\\CHAIMA\\Documents\\Esprit 2eme\\semestre 2\\projet c++\\TvEase6\\TvEase\\role\\role.txt";
    std::string rolest = getRoleFromFilePUB(filePath);
    role = QString::fromStdString(rolest);
    std::cout <<"ili fil pub"<<role.toStdString();


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

        }*/
}
//////////////////////////////////////////////////
/////////////////// MODIFICATION MOT DE PASSE //////////////
#include"confirmmotpass.h"


void publicite::on_pushButton_parametre_compte_clicked()
{

    confirmMotPass  confirmMotPass ;
    confirmMotPass.setModal(true) ;
    confirmMotPass.exec() ;
}
//////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////
/////////////////////////////////////////////////



//combobox mte3 societe


void publicite::populateSocieteComboBox() {
    ui->comboBoxSocietes->clear();

    QSqlQuery query("SELECT IDSOC, NOM FROM soci");

    while (query.next()) {
        QString IDSOC = query.value(0).toString(); // Retrieve IDSOC as QString
        QString nom = query.value(1).toString();
        ui->comboBoxSocietes->addItem(nom, IDSOC);
    }
}
//modif ki tenzel 3la id fel table

void publicite::onTableViewClicked(const QModelIndex& index) {
    // Check if the clicked item is valid
    if (!index.isValid()) {
        return;
    }

    // Fetch the IDSOC from the clicked row
    QString IDSOC = ui->tableView->model()->data(ui->tableView->model()->index(index.row(), 0)).toString();

    // Set the retrieved IDSOC in lineEdit_5
    ui->lineEdit_5->setText(IDSOC);
}


#include<iostream>
//combobox mte3 modifier
void publicite::populateModifierSocieteComboBox() {
    ui->societe->clear();

    QSqlQuery query("SELECT IDSOC, NOM FROM soci");

    while (query.next()) {
        QString IDSOC = query.value(0).toString(); // Retrieve IDSOC as QString
        QString nom = query.value(1).toString();
        qDebug() << "Converted ID:" << nom;
        ui->societe->addItem(nom, IDSOC);
    }
}
// Slot implementation to update the QDateEdit
/*void publicite::updateDateEdit(int index) {
    if (index >= 0 && index < ProgID->count()) {
        QString selectedProgram = ProgID->itemText(index);
        // Assuming you have a function to get the diffusion date of the selected program
        QDate diffusionDate = getDiffusionDate(selectedProgram);
        // Update the QDateEdit with the diffusion date
        dateEdit->setDate(diffusionDate);
    }
}
*/

void publicite::on_BoutonAjouter_6_clicked() {
    QString id = ui->ajoutID_6->text();
    QString nom = ui->ajoutnom_6->text();
    QString PUBDESC = ui->ajoutnumero_6->text();
    QString CANAL = ui->ajoutadr_6->text();
    int prix = ui->prixajout_6->text().toInt();
    QString dureeText = ui->dureeajout_6->text();
    QString tempsText = ui->tempsajout_6->text();
    QDate datePub = ui->dateajout_6->date();
    QTime duree = QTime::fromString(dureeText, "hh:mm:ss");
    QTime temps = QTime::fromString(tempsText, "hh:mm:ss");

    qDebug() << "DUREE TEXT:" << dureeText;
    qDebug() << "DUREE:" << duree;
    qDebug() << "TEMPS TEXT:" << tempsText;
    qDebug() << "TEMPS:" << temps;

    // njib IDSOC mel combobox
    QString IDSOC = ui->comboBoxSocietes->currentData().toString();

    // instance pub
    Cpub publicite(id.toInt(), nom, CANAL, PUBDESC, prix, datePub, dureeText, tempsText, IDSOC);

    // nzid fel database w nhotha fi test pour tester hal machekel yaaaa rabi 7elhom :,,,)
    bool test = publicite.addDataToDatabase();

    if (test) {
        // tjib el newly added ID mte3 pub
        int pubID = publicite.getId();

        // njib el ID mte3 el program mel COMBOBOX
        int programIndex = ui->ProgID->currentIndex();
        QString programID = ui->ProgID->itemData(programIndex).toString();

        // n7ott les deux IDs fel table mte3 jointure
        insertIntoPUBPROG(pubID, programID);

        QMessageBox::information(nullptr, QObject::tr("Ajouter Publicité"),
                    QObject::tr("Publicité ajoutée avec succès.\n"
                                "Cliquez sur Annuler pour fermer."), QMessageBox::Cancel);
    } else {
        QMessageBox::warning(nullptr, QObject::tr("Erreur"),
                    QObject::tr("Échec de l'ajout de la publicité.\n"
                                "Veuillez vérifier les données saisies et réessayer."), QMessageBox::Ok);
    }
}


void publicite::insertIntoPUBPROG(int pubID, const QString& programID) {
    QSqlQuery query;

    // date mte3 el pc
    QDate currentDate = QDate::currentDate();

    query.prepare("INSERT INTO PUBPROG (IDPUB, IDPROG, DATEPP) VALUES (:pubID, :programID, :currentDate)");
    query.bindValue(":pubID", pubID);
    query.bindValue(":programID", programID);
    query.bindValue(":currentDate", currentDate);

    bool success = query.exec();

    if (!success) {
        qDebug() << "Error inserting into PUBPROG table:" << query.lastError().text();
        qDebug() << "Query:" << query.lastQuery();
    } else {
        qDebug() << "Inserted into PUBPROG table successfully";
    }
}



Cpub publicite::fetchPubliciteById(int id) {
    Cpub publicite;

    QSqlQuery query;
    query.prepare("SELECT * FROM PUBLICITE WHERE ID = :id");
    query.bindValue(":id", id);

    if (query.exec() && query.next()) {
        QString idSociete = query.value("IDSOC").toString();

        QSqlQuery societeQuery;
        societeQuery.prepare("SELECT NOM FROM SOCI WHERE IDSOC = :idSociete");
        societeQuery.bindValue(":idSociete", idSociete);

        if (societeQuery.exec() && societeQuery.next()) {
            QString societeName = societeQuery.value("NOM").toString();

            publicite = Cpub(
                query.value("ID").toInt(),
                query.value("NOM").toString(),
                query.value("CANAL").toString(),
                query.value("PUBDESC").toString(),
                query.value("PRIX").toInt(),
                query.value("DATEPUB").toDate(),
                query.value("DUREE").toString(),
                query.value("TEMPS").toString(),
                idSociete // Include IDSOC
            );
        }
    } else {
        // publicite laysat mawjouda
        publicite.setId(-1);
    }

    return publicite;
}

void publicite::on_lookforid_clicked()
{
    QString idText = ui->enterid->text().trimmed();
    qDebug() << "ID entered text:" << idText;

    // controle de saisie id mouch empty
    if (idText.isEmpty() || !idText.toInt()) {
        QMessageBox::warning(this, "Erreur", "Veuillez saisir un ID valide.");
        return;
    }

    int id = idText.toInt();
    qDebug() << "Converted ID:" << id;

    // jib el pub mel ID
    Cpub publicite = fetchPubliciteById(id);

    // aywa mawjouda wala le
    if (publicite.getId() != -1) {
        // 3abi ya mohsen 3abi el line edits
        ui->modifnom->setText(publicite.getNom());
        ui->modifnum->setText(publicite.getPUBDESC());
        ui->adressmodif->setText(publicite.getCanal());
        ui->prixmodif->setText(QString::number(publicite.getPrix()));
        ui->datemodif->setDate(publicite.getDatePub());

        QTime dureeTime = QTime::fromString(publicite.getDuree(), "hh:mm");
        if (dureeTime.isValid()) {
            ui->dureemodif->setTime(dureeTime);
        } else {
            qDebug() << "Invalid duree format:" << publicite.getDuree();
        }

        QTime tempsTime = QTime::fromString(publicite.getTemps(), "hh:mm");
        if (tempsTime.isValid()) {
            ui->tempsmodif->setTime(tempsTime);
        } else {
            qDebug() << "Invalid temps format:" << publicite.getTemps();
        }
    } else {
        QMessageBox::warning(this, "Erreur", "Aucune publicité trouvée avec cet ID.");
        ui->modifnom->clear();
        ui->modifnum->clear();
        ui->adressmodif->clear();
        ui->prixmodif->clear();
        ui->datemodif->setDate(QDate());
        ui->dureemodif->clear();
        ui->tempsmodif->clear();
    }

    QSqlQuery societeQuery;
    societeQuery.prepare("SELECT NOM FROM SOCI WHERE IDSOC = :idSociete");
    societeQuery.bindValue(":idSociete", publicite.getIDSOC());

    if (societeQuery.exec() && societeQuery.next()) {
        QString societeName = societeQuery.value("NOM").toString();
        ui->societe->setCurrentText(societeName);
    } else {
        qDebug() << "No societe found with IDSOC:" << publicite.getIDSOC();
    }
}






//societe tjib el id selon el nom function

/*
QString publicite::fetchSocieteIDByName(const QString& societeName) {
    QSqlQuery query;
    query.prepare("SELECT IDSOC FROM societe WHERE nom = :nom");
    query.bindValue(":nom", societeName);

    if (query.exec() && query.next()) {
        return query.value(0).toString(); // Assuming IDSOC is stored in the first column
    } else {
        // Handle error or return a default value indicating failure
        qDebug() << "Failed to fetch IDSOC for société:" << societeName;
        return ""; // Return an empty string or any other default value
    }
}*/
QString publicite::fetchSocieteIDByName(const QString& societeName) {
    QSqlQuery query;
    query.prepare("SELECT IDSOC FROM SOCI WHERE NOM = :nom");
    query.bindValue(":nom", societeName);

    if (query.exec() && query.next()) {
        return query.value(0).toString(); // Assuming IDSOC is stored in the first column
    } else {
        // Handle error or return a default value indicating failure
        qDebug() << "Failed to fetch IDSOC for société:" << societeName;
        return ""; // Return an empty string or any other default value
    }
}






void publicite::on_modifier_clicked() {
    QString idText = ui->enterid->text().trimmed();

    // control de saisie id
    QRegExp numericRegex("\\d*");
    if (!numericRegex.exactMatch(idText)) {
        QMessageBox::warning(this, "Erreur", "Veuillez saisir un ID numérique valide.");
        return;
    }

    int id = idText.toInt(); // Convert ID to int

    Cpub publicite = fetchPubliciteById(id);

    if (publicite.getId() != -1) {
        QString nom = ui->modifnom->text();
        QString PUBDESC = ui->modifnum->text();
        QString canal = ui->adressmodif->text();
        int prix = ui->prixmodif->text().toInt();
        QString dureeText = ui->dureemodif->text();
        QString tempsText = ui->tempsmodif->text();
        QDate datePub = ui->datemodif->date();

        QString societeName = ui->societe->currentText(); // Assuming combobox contains société name
        QString IDSOC = fetchSocieteIDByName(societeName);

        qDebug() << "IDSOC value:" << IDSOC;

        publicite.setNom(nom);
        publicite.setPUBDESC(PUBDESC);
        publicite.setCanal(canal);
        publicite.setPrix(prix);
        publicite.setDatePub(datePub);
        publicite.setDuree(dureeText);
        publicite.setTemps(tempsText);

        // Update the other fields in the database
        bool success = publicite.updateDataInDatabase();

        // Update IDSOC separately
        if (success) {
            success = publicite.updateIDSOCInDatabase(IDSOC);
        }

        if (success) {
            QMessageBox::information(this, "Modifier Publicité", "Publicité modifiée avec succès.");
        } else {
            QMessageBox::warning(this, "Erreur", "Échec de la modification de la publicité. Veuillez réessayer.");
        }
    } else {
        QMessageBox::warning(this, "Erreur", "Aucune publicité trouvée avec cet ID.");
    }
}





void publicite::on_BoutonSupprimer_clicked()
{
       QString idText = ui->idsupprimer->text().trimmed();

       QRegExp numericRegex("\\d*");
       if (!numericRegex.exactMatch(idText)) {
           QMessageBox::warning(this, "Erreur", "Veuillez saisir un ID numérique valide.");
           return;
       }

       int id = idText.toInt(); // Convert ID to int

       // Create a Cpub object with the ID to be deleted
       Cpub publicite;
       publicite.setId(id);

       // Check if the ID is valid
       if (id != -1) {
           // Prompt the user for confirmation
           QMessageBox::StandardButton confirmation;
           confirmation = QMessageBox::question(this, "Confirmation", "Êtes-vous sûr de vouloir supprimer cette publicité ?",
                                                 QMessageBox::Yes | QMessageBox::No);

           if (confirmation == QMessageBox::Yes) {
               // Attempt to delete the record from the database
               bool success = publicite.deleteDataFromDatabase();

               if (success) {
                   QMessageBox::information(this, "Supprimer Publicité", "Publicité supprimée avec succès.");
               } else {
                   QMessageBox::warning(this, "Erreur", "Échec de la suppression de la publicité. Veuillez réessayer.");
               }
           }
       } else {
           // No valid ID entered, show error message
           QMessageBox::warning(this, "Erreur", "Veuillez saisir un ID valide.");
       }
}

void publicite::on_pushButton_clicked() {
    //imprimer pdf
    QAbstractItemModel *model = ui->tableaupub->model();

    QTextDocument doc;

    // Set the default font and text color for the document
    QTextCharFormat defaultFormat;
    defaultFormat.setFontFamily("Neue Haas Grotesk Text Pro Medium");
    defaultFormat.setFontPointSize(10);
    defaultFormat.setForeground(QColor("#333333")); // Dark gray text color
    doc.setDefaultTextOption(QTextOption(Qt::AlignCenter));

    // Create a QTextCursor to insert content into the document
    QTextCursor cursor(&doc);

    // Insert a header with custom formatting
    QTextCharFormat headerFormat;
    headerFormat.setFontPointSize(16); // Larger font for header
    headerFormat.setFontWeight(QFont::Bold);
    headerFormat.setForeground(QColor("#0078d7")); // Blue text color
    cursor.setCharFormat(headerFormat); // Apply formatting to the cursor
    cursor.insertText("TVEASE PUBLICITES DISPONIBLE\n", headerFormat); // Insert text with formatting

    // Insert current date with smaller font
    QTextCharFormat dateFormat;
    dateFormat.setFontPointSize(12); // Smaller font for date
    dateFormat.setForeground(QColor("#333333")); // Dark gray text color
    cursor.setCharFormat(dateFormat); // Apply formatting to the cursor
    cursor.insertText(QDateTime::currentDateTime().toString("yyyy-MM-dd"), dateFormat); // Insert current date

    // Insert spacing between header and logo
    cursor.insertBlock();

    // Insert logo after the header
    QTextImageFormat imageFormat;
    imageFormat.setName(":/img/images/logo transp.png");
    imageFormat.setWidth(50); // Set image width
    imageFormat.setHeight(50); // Set image height
    cursor.insertImage(imageFormat);

    // Insert spacing between logo and table
    cursor.insertBlock();

    // Create a QTextTable to hold the table data
    QTextTableFormat tableFormat;
    tableFormat.setAlignment(Qt::AlignCenter); // Center align table
    tableFormat.setBorder(1); // Set border width to 1
    tableFormat.setBorderBrush(QColor("#333333")); // Set border color
    tableFormat.setCellSpacing(0); // Set cell spacing to 0
    QTextTable *table = cursor.insertTable(model->rowCount() + 1, model->columnCount(), tableFormat);

    // Insert table headers with custom formatting
    QStringList headers;
    for (int column = 0; column < model->columnCount(); ++column) {
        headers << model->headerData(column, Qt::Horizontal).toString();
        QTextTableCell headerCell = table->cellAt(0, column);
        QTextCursor headerCellCursor = headerCell.firstCursorPosition();
        headerCellCursor.setCharFormat(defaultFormat);
        headerCellCursor.insertText(headers[column]);
    }

    // Insert table data with custom formatting
    for (int row = 0; row < model->rowCount(); ++row) {
        for (int column = 0; column < model->columnCount(); ++column) {
            QModelIndex index = model->index(row, column);
            QTextTableCell dataCell = table->cellAt(row + 1, column);
            QTextCursor dataCellCursor = dataCell.firstCursorPosition();
            dataCellCursor.setCharFormat(defaultFormat);
            dataCellCursor.insertText(model->data(index).toString());
        }
    }

    // Ask the user to select a filename for the PDF file
    QString fileName = QFileDialog::getSaveFileName(this, tr("Save PDF"), "", tr("PDF Files (*.pdf)"));

    if (!fileName.isEmpty()) {
        // Create a PDF printer
        QPrinter printer(QPrinter::PrinterResolution);
        printer.setOutputFormat(QPrinter::PdfFormat);
        printer.setOutputFileName(fileName);

        // Print the QTextDocument to the PDF file
        doc.print(&printer);
    }
}





void publicite::on_rechbutton_clicked()
{
    QString searchText = ui->recherche->text().trimmed();

       if (searchText.isEmpty()) {
           // Show all data if the search text is empty
           ui->tableaupub->setModel(tmp.afficher());
       } else {
           // Construct the SQL query to search for the entered text in all relevant columns
           QString queryText = "SELECT * FROM PUBLICITE WHERE "
                               "ID LIKE :search OR "
                               "NOM LIKE :search OR "
                               "CANAL LIKE :search OR "
                               "PUBDESC LIKE :search OR "
                               "PRIX LIKE :search OR "
                               "DATEPUB LIKE :search OR "
                               "DUREE LIKE :search OR "
                               "TEMPS LIKE :search";

           // Prepare the query with the constructed SQL string
           QSqlQueryModel *model = new QSqlQueryModel();
           QSqlQuery query;
           query.prepare(queryText);
           query.bindValue(":search", "%" + searchText + "%");

           if (query.exec()) {
               model->setQuery(query);
               ui->tableaupub->setModel(model);
           } else {
               // Error handling
               qDebug() << "Query execution failed:" << query.lastError().text();
           }
       }
}



void publicite::on_comboBox_currentIndexChanged(int index)
{
}

void publicite::on_comboBox_activated(const QString &text) {
    QString columnName;
    Qt::SortOrder sortOrder = Qt::AscendingOrder;

    if (text == "Date") {
        columnName = "DatePub";
    } else if (text == "PUBDESC") {
        columnName = "PUBDESC";
    } else if (text == "ID") {
        columnName = "ID";
    } else if (text == "Duree") {
        columnName = "Duree";
    } else if (text == "Temps") {
        columnName = "Temps";
    } else if (text == "Prix") {
        columnName = "Prix";
    } else {
        return; // Return if an invalid value is selected
    }

    // Create a QSortFilterProxyModel to handle sorting
    QSortFilterProxyModel *proxyModel = new QSortFilterProxyModel(this);
    proxyModel->setSourceModel(ui->tableaupub->model());

    // Find the column index by iterating through the headers
    int columnIndex = -1;
    for (int i = 0; i < ui->tableaupub->model()->columnCount(); ++i) {
        QVariant headerData = ui->tableaupub->model()->headerData(i, Qt::Horizontal);
        if (headerData.toString() == columnName) {
            columnIndex = i;
            break;
        }
    }

    if (columnIndex == -1) {
        qDebug() << "Column not found!";
        return;
    }

    // Set the sorting criteria for the proxy model
    proxyModel->setSortCaseSensitivity(Qt::CaseInsensitive);
    proxyModel->setSortRole(Qt::EditRole); // Use EditRole for numeric sorting

    // Sort the proxy model based on the specified column
    proxyModel->sort(columnIndex, sortOrder);

    // Set the sorted proxy model as the model for the table view
    ui->tableaupub->setModel(proxyModel);
}



void publicite::on_random_clicked()
{
    qsrand(QTime::currentTime().msec());

    int randomNumber = qrand() % 100000; // 100000 is exclusive, so it generates numbers from 0 to 99999

    ui->ajoutID_6->setText(QString::number(randomNumber));
}

void publicite::on_ajoutersociete_clicked()
{
    QString nom = ui->nomsociete->text().trimmed();
//control sais
        if (nom.isEmpty()) {
            QMessageBox::warning(this, "Erreur", "Veuillez saisir un nom de société.");
            return;
        }

        // chouf ken el nom mawjoud wale
        QSqlQuery query;
        query.prepare("SELECT COUNT(*) FROM SOCI WHERE NOM = :nom");
        query.bindValue(":nom", nom);
        if (query.exec() && query.next()) {
            int count = query.value(0).toInt();
            if (count > 0) {
                // Show a message indicating that the société already exists
                QMessageBox::warning(this, "Erreur", "La société existe déjà. Veuillez la modifier si vous souhaitez effectuer des changements.");
                return;
            }
        } else {
            QMessageBox::warning(this, "Erreur", "Erreur lors de la vérification de l'existence de la société.");
            return;
        }

        // Retrieve input values
        QString email = ui->email->text().trimmed();
        QString siteweb = ui->siteweb->text().trimmed();

        // Perform input validation
        if (email.isEmpty() || !email.contains('@')) {
            QMessageBox::warning(this, "Erreur", "Veuillez saisir une adresse e-mail valide.");
            return;
        }

        if (siteweb.isEmpty() || !siteweb.startsWith("www.") || !siteweb.endsWith(".com")) {
            QMessageBox::warning(this, "Erreur", "Veuillez saisir un site Web valide au format 'www.[nom].com'.");
            return;
        }

        // Proceed with inserting the société if validations pass
        QString industrie = ui->industrie->text().trimmed();
        QString adresse = ui->adresse->text().trimmed();
        QString personneDeContact = ui->pers->text().trimmed();
        QString idText = ui->IDSOC->text().trimmed();
        int IDSOC = idText.toInt();
        int numero = ui->numero->text().toInt();

        query.prepare("INSERT INTO SOCI (IDSOC, NOM, EMAIL, INDUSTRIE, ADRESSE, PERS, NUMERO, SITE) "
                      "VALUES (:idSoc, :nom, :email, :industrie, :adresse, :personneDeContact, :numero, :siteweb)");
        query.bindValue(":idSoc", IDSOC);
        query.bindValue(":nom", nom);
        query.bindValue(":email", email);
        query.bindValue(":industrie", industrie);
        query.bindValue(":adresse", adresse);
        query.bindValue(":personneDeContact", personneDeContact);
        query.bindValue(":numero", numero);
        query.bindValue(":siteweb", siteweb);

        if (query.exec()) {
            QMessageBox::information(this, "Ajout Réussi", "La société a été ajoutée avec succès.");
        } else {
            QMessageBox::warning(this, "Erreur", "Erreur lors de l'ajout de la société : " + query.lastError().text());
        }
}




void publicite::on_pushButton_2_clicked()
{
    QSqlQueryModel *newModel = tmp.afficherSociete();

        // Set the new model for the QTableView
        ui->tableView->setModel(newModel);

        // Optionally, you might want to resize the columns to fit the content
        ui->tableView->resizeColumnsToContents();
}
void publicite::on_pushButton_4_clicked() {
    // Retrieve the ID to delete
    QString idText = ui->suppr->text().trimmed();
    int idToDelete = idText.toInt();

    // Check if the entered ID is valid
    if (idText.isEmpty() || idToDelete <= 0) {
        QMessageBox::warning(this, "Erreur", "Veuillez saisir un ID valide.");
        return;
    }

    // Check if the société ID exists
    QSqlQuery checkQuery;
    checkQuery.prepare("SELECT COUNT(*) FROM SOCI WHERE IDSOC = :idToDelete");
    checkQuery.bindValue(":idToDelete", idToDelete);
    if (!checkQuery.exec() || !checkQuery.next()) {
        QMessageBox::warning(this, "Erreur", "Erreur lors de la vérification de l'existence de l'ID de la société.");
        return;
    }

    int count = checkQuery.value(0).toInt();
    if (count == 0) {
        QMessageBox::warning(this, "Erreur", "L'ID de la société n'existe pas.");
        return;
    }

    // Check if the société is referenced in PUBLICITE
    QSqlQuery publiciteCheckQuery;
    publiciteCheckQuery.prepare("SELECT COUNT(*) FROM PUBLICITE WHERE IDSOC = :idToDelete");
    publiciteCheckQuery.bindValue(":idToDelete", idToDelete);
    if (!publiciteCheckQuery.exec() || !publiciteCheckQuery.next()) {
        QMessageBox::warning(this, "Erreur", "Erreur lors de la vérification des publicités associées à cette société.");
        return;
    }

    count = publiciteCheckQuery.value(0).toInt();
    if (count > 0) {
        QMessageBox::warning(this, "Erreur", "Veuillez d'abord supprimer les publicités associées à cette société.");
        return;
    }

    // Confirmation dialog
    QMessageBox::StandardButton confirmation;
    confirmation = QMessageBox::question(this, "Confirmation", "Êtes-vous sûr de vouloir supprimer cette société ?",
                                         QMessageBox::Yes | QMessageBox::No);

    // Delete société if confirmed
    if (confirmation == QMessageBox::Yes) {
        QSqlQuery deleteQuery;
        deleteQuery.prepare("DELETE FROM SOCI WHERE IDSOC = :idToDelete");
        deleteQuery.bindValue(":idToDelete", idToDelete);

        if (deleteQuery.exec()) {
            QMessageBox::information(this, "Suppression réussie", "La société a été supprimée avec succès.");
        } else {
            QMessageBox::warning(this, "Erreur", "Erreur lors de la suppression de la société : " + deleteQuery.lastError().text());
        }
    }
}



void publicite::on_pushButton_3_clicked()
{
    // Modifier société
    QString idText = ui->lineEdit_5->text().trimmed();
    int idToModify = idText.toInt();

    // Retrieve the new email and address values
    QString newEmail = ui->lineEdit_6->text().trimmed();
    QString newAddress = ui->lineEdit_7->text().trimmed();

    // Check if the entered ID is valid
    if (idText.isEmpty() || idToModify <= 0) {
        QMessageBox::warning(this, "Erreur", "Veuillez saisir un ID valide.");
        return;
    }

    // Check if either the new email or new address is empty
    if (newEmail.isEmpty() && newAddress.isEmpty()) {
        QMessageBox::warning(this, "Erreur", "Veuillez saisir au moins une nouvelle valeur (Email ou Adresse).");
        return;
    }

    // Check if the provided email is valid
    if (!newEmail.isEmpty() && !newEmail.contains("@")) {
        QMessageBox::warning(this, "Erreur", "Veuillez saisir une adresse email valide.");
        return;
    }

    // Check if the provided ID exists
    QSqlQuery checkQuery;
    checkQuery.prepare("SELECT COUNT(*) FROM SOCI WHERE IDSOC = :idToModify");
    checkQuery.bindValue(":idToModify", idToModify);
    if (!checkQuery.exec()) {
        QMessageBox::warning(this, "Erreur", "Erreur lors de la vérification de l'existence de l'ID : " + checkQuery.lastError().text());
        return;
    }
    checkQuery.next();
    int rowCount = checkQuery.value(0).toInt();
    if (rowCount == 0) {
        QMessageBox::warning(this, "Erreur", "L'ID spécifié n'existe pas.");
        return;
    }

    // Construct the UPDATE query based on the entered values
    QString updateQuery = "UPDATE SOCI SET ";
    bool needComma = false; // Flag to determine if a comma is needed before adding a new column to update
    if (!newEmail.isEmpty()) {
        updateQuery += "EMAIL = :newEmail";
        needComma = true;
    }
    if (!newAddress.isEmpty()) {
        if (needComma) {
            updateQuery += ", ";
        }
        updateQuery += "ADRESSE = :newAddress";
    }
    updateQuery += " WHERE IDSOC = :idToModify;";

    // Prepare and execute the UPDATE query
    QSqlQuery query;
    query.prepare(updateQuery);
    if (!newEmail.isEmpty()) {
        query.bindValue(":newEmail", newEmail);
    }
    if (!newAddress.isEmpty()) {
        query.bindValue(":newAddress", newAddress);
    }
    query.bindValue(":idToModify", idToModify);

    if (query.exec()) {
        QMessageBox::information(this, "Modification réussie", "Les informations de la société ont été modifiées avec succès.");
    } else {
        QMessageBox::warning(this, "Erreur", "Erreur lors de la modification des informations de la société : " + query.lastError().text());
    }
}

void publicite::populateProgramComboBox() {
    // Clear existing items
    ui->ProgID->clear();

    // Query to retrieve program IDs and names
    QSqlQuery query("SELECT ID_PROGRAMME, NOM FROM PROGRAMME");

    // Populate the QComboBox with program names
    while (query.next()) {
        QString programID = query.value(0).toString(); // Retrieve program ID as QString
        QString nom = query.value(1).toString();
        ui->ProgID->addItem(nom, programID);
    }
}
//hethi function that handles selection
void publicite::selectionprog() {
    // Get the index of the currently selected item in ProgID
    int index = ui->ProgID->currentIndex();

    // Call onProgramSelected directly with the index
    onProgramSelected(index);
}

void publicite::onProgramSelected(int index) {
    QString programID = ui->ProgID->itemData(index).toString();

    // Query to fetch the DATE_DIFFUSION value based on the selected program ID
    QSqlQuery query;
    query.prepare("SELECT DATE_DIFFUSION FROM PROGRAMME WHERE ID_PROGRAMME = :programID");
    query.bindValue(":programID", programID);

    if (query.exec() && query.next()) {
        QDate dateDiffusion = query.value(0).toDate();
        qDebug() << "Date Diffusion:" << dateDiffusion; // Debug output
        ui->dateajout_6->setDate(dateDiffusion); // Set the date value to dateajout_6
        qDebug() << "Selected program ID:" << programID;
        qDebug() << "Executing query:" << query.lastQuery();
        qDebug() << "Date Diffusion from database:" << query.value(0).toString();
        qDebug() << "Setting dateajout_6 to:" << dateDiffusion;
    }
}





void publicite::on_pushButton_5_clicked()
{
    //el machyen lel historique
    PubHisto p ;
    p.setModal(true) ;
    p.exec() ;

}

void publicite::on_pushButton_6_clicked()
{
    //refresh comboboxsociete
    populateSocieteComboBox();

}



void publicite::playGifAutomatically() {
     QString desktopPath = QStandardPaths::writableLocation(QStandardPaths::DesktopLocation);
     QString gifPath = "C:\\Users\\CHAIMA\\Documents\\Esprit 2eme\\semestre 2\\git colone TvEase\\TvEase\\TvEase6\\TvEase\\images\\pen.gif";

     QMovie *gifAnimation = new QMovie(gifPath);

     // Redimensionner l'image
     QSize newSize(200, 200); // Remplacez ces valeurs par les dimensions souhaitées
     gifAnimation->setScaledSize(newSize);

     ui->label_21->setMovie(gifAnimation);
     ui->label_21->setVisible(true);
     ui->label_21->raise();

     ui->label_76->setMovie(gifAnimation);
     ui->label_76->setVisible(true);
     ui->label_76->raise();

     gifAnimation->start();
 }



















void publicite::on_chatbot_clicked()
{

// Inside the method where you handle the button click event to open the chatbot window
/*chat *chatbotWindow = new chat();
chatbotWindow->show(); */

chat c ;
c.setModal(true) ;
c.exec() ;
}

void publicite::on_pushButton_7_clicked()
{
    Event c;
    c.setModal(true);
    c.exec();

}

void publicite::on_Notif_clicked()
{
    Lopiza *lop = new Lopiza();

        // Show the lopiza window
        lop->show();
        lop->raise();

}

void publicite::on_raf_clicked()
{
    // Clear existing contents from frame and frame_2
    clearFrame(ui->frame);
    clearFrame(ui->frame_2);

    // Rest of your code to update statistics...
    ////////////////////////// statistique 1
    int under500 = 0, over500 = 0;

    // Fetch data from the Publicite table
    QSqlQuery query;
    query.exec("SELECT COUNT(*) FROM Publicite WHERE prix < 500");
    if (query.next()) {
        under500 = query.value(0).toInt();
    }
    query.exec("SELECT COUNT(*) FROM Publicite WHERE prix >= 500");
    if (query.next()) {
        over500 = query.value(0).toInt();
    }

    // Create graph
    QtCharts::QPieSeries *pie = new QtCharts::QPieSeries();
    pie->append("Prix < 500", under500);
    pie->append("Prix >= 500", over500);

    QtCharts::QChart *chart = new QtCharts::QChart();
    chart->addSeries(pie);
    chart->setTitle("Prix de la Publicité");

    chart->setAnimationOptions(QtCharts::QChart::AllAnimations);

    QtCharts::QChartView *chartView = new QtCharts::QChartView(chart);

    chartView->setRenderHint(QPainter::Antialiasing);

    // Add chartView to a widget
    QWidget *widget1 = new QWidget();
    QHBoxLayout *layout1 = new QHBoxLayout(widget1);
    layout1->addWidget(chartView);

    // Add the widget to frame
    ui->frame->setLayout(layout1);

    // Connect signal hovered to show the number of Publicités over and under 500
    connect(pie, &QtCharts::QPieSeries::hovered, this, [=](QtCharts::QPieSlice *slice, bool hovered) {
        if (hovered) {
            int over500Count = 0;
            int under500Count = 0;

            if (slice->label() == "Prix >= 500") {
                over500Count = slice->value();
                under500Count = under500;
            } else if (slice->label() == "Prix < 500") {
                under500Count = slice->value();
                over500Count = over500;
            }

            QString message = QString("Publicités avec prix >= 500: %1\nPublicités avec prix < 500: %2")
                                      .arg(over500Count).arg(under500Count);
            QToolTip::showText(QCursor::pos(), message);
            QToolTip::setFont(QFont("Arial", 10, QFont::Bold)); // Set the font to bold
            QToolTip::setPalette(QPalette(Qt::white, Qt::black)); // Set background and text color
        } else {
            QToolTip::hideText();
        }
    });


























    ////////////////////////////// statistique 2
    int linkedSocietes = 0, unlinkedSocietes = 0;

    query.exec("SELECT COUNT(*) FROM Soci");
    if (query.next()) {
        int totalSocietes = query.value(0).toInt();
        query.exec("SELECT COUNT(DISTINCT IDSOC) FROM Publicite");
        if (query.next()) {
            linkedSocietes = query.value(0).toInt();
            unlinkedSocietes = totalSocietes - linkedSocietes;
        }
    }

    QtCharts::QBarSet *linkedSet = new QtCharts::QBarSet("Sociétés liées");
    QtCharts::QBarSet *unlinkedSet = new QtCharts::QBarSet("Sociétés non liées");

    *linkedSet << linkedSocietes;
    *unlinkedSet << unlinkedSocietes;

    QtCharts::QBarSeries *barSeries = new QtCharts::QBarSeries();
    barSeries->append(linkedSet);
    barSeries->append(unlinkedSet);

    QtCharts::QChart *chart2 = new QtCharts::QChart();
    chart2->addSeries(barSeries);
    chart2->setTitle("Liens avec des Sociétés");

    chart2->setAnimationOptions(QtCharts::QChart::AllAnimations);

    QtCharts::QChartView *chartView2 = new QtCharts::QChartView(chart2);
    chartView2->setRenderHint(QPainter::Antialiasing);

    // Add chartView2 to a widget
    QWidget *widget2 = new QWidget();
    QHBoxLayout *layout2 = new QHBoxLayout(widget2);
    layout2->addWidget(chartView2);

    // Add the widget2 to frame_2
    ui->frame_2->setLayout(layout2);

    // Connect signal hovered to show the number of Sociétés linked and unlinked
    connect(linkedSet, &QtCharts::QBarSet::hovered, this, [=](bool status, int index) {
        if (status) {
            int value = linkedSet->at(index);
            QString message = QString("Sociétés liées: %1").arg(value);
            message.append(QString("\nSociétés non liées: %1").arg(unlinkedSet->at(index)));
            QToolTip::showText(chartView2->mapToGlobal(QPoint(0, 0)), message);
            QToolTip::setFont(QFont("Arial", 10, QFont::Bold)); // Set the font to bold
            QToolTip::setPalette(QPalette(Qt::white, Qt::black)); // Set background and text color
        } else {
            QToolTip::hideText();
        }
    });

}




void publicite::clearLayout(QLayout *layout) {
    if (!layout)
        return;

    while (QLayoutItem* item = layout->takeAt(0)) {
        if (QWidget* widget = item->widget()) {
            delete widget;
        } else if (QLayout* childLayout = item->layout()) {
            clearLayout(childLayout);
        }
        delete item;
    }
}

void publicite::clearFrame(QFrame *frame) {
    QLayout *layout = frame->layout();
    if (layout) {
        QLayoutItem *item;
        while ((item = layout->takeAt(0))) {
            if (item->widget()) {
                delete item->widget();
            }
            delete item;
        }
        delete layout;
    }
}




void publicite::on_ard_clicked()
{
    pubarduino c;
    c.setModal(true);
    c.exec();

}

void publicite::on_ard_2_clicked()
{
    TestDialog c;
    c.setModal(true);
    c.exec();


}

void publicite::on_ard_3_clicked()
{
    abonnement_arduino c;
    c.setModal(true);
    c.exec();


}

#include"gamehub.h"
void publicite::on_pushButton_11_clicked()
{

    gamehub gameh ;
    gameh.setModal(true) ;
    gameh.exec() ;
}
