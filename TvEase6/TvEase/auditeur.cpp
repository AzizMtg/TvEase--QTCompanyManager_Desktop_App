#include "auditeur.h"
#include "ui_auditeur.h"
//
#include "personnelle.h"
#include "programme.h"
#include "publicite.h"
#include "abonnement.h"
#include "studio.h"
//file role
#include <iostream>
#include <fstream>
#include <string>
#include<QTimer>

///// anass
#include "alarme.h"
#include "audi.h"



#include"QMessageBox"
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
#include <QtGlobal>
#include "QStyledItemDelegate"
#include <QtCharts>
#include <QChartView>
#include <QLineSeries>
#include <QLabel>
#include <QImage>
#include <QPixmap>

#include<QStyledItemDelegate>
////////////////
std::string getRoleFromFileAD(const std::string& filePath) {
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

std::string getNomPrenomFromFileAU(const std::string& filePath) {
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
void auditeur::updateTime()
{
    // Get the current time
    QTime currentTime = QTime::currentTime();
    // Convert the time to string in the format "hh:mm:ss"
    QString timeText = currentTime.toString("hh:mm:ss");
    // Update the QLabel text with the current time
    ui->label_heure->setText(timeText);
}

///
auditeur::auditeur(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::auditeur)
{
    ui->setupUi(this);

    std::string filePath = "C:\\Users\\CHAIMA\\Documents\\Esprit 2eme\\semestre 2\\projet c++\\TvEase6\\TvEase\\role\\role.txt";
    std::string rolest = getRoleFromFileAD(filePath);
    role = QString::fromStdString(rolest);
    ui->lineEdit_role->setText(role);

    std::string nomprenom = getNomPrenomFromFileAU(filePath);
    QString Messwelcome = "Bienvenu " +QString::fromStdString(nomprenom);
    ui->lineEdit_nomprenom->setText(Messwelcome);



 ///////////// anas
    //aff list
       ui->tableView_lister_audi->setModel(tmpaudi.afficher()) ;

      /// taba3 il afficher
           // Create the proxy model
           proxyModel = new QSortFilterProxyModel(this);
           proxyModel->setSourceModel(tmpaudi.afficher());
           ui->tableView_lister_audi->setModel(proxyModel);

           // Apply styles to the header
           QString headerStyle = "QHeaderView::section {"
                                   "    font-weight: bold;" // Making text bold
                                   "    background-color: #EEE6D8 ;" // bleue color
                                   "    border: 1px solid black;" // Adding a border
                                   "}";

           ui->tableView_lister_audi->horizontalHeader()->setStyleSheet(headerStyle);
           ui->tableView_lister_audi->horizontalHeader()->resizeSection(0,100);
           ui->tableView_lister_audi->horizontalHeader()->resizeSection(1,100);
           ui->tableView_lister_audi->horizontalHeader()->resizeSection(2,200);
           ui->tableView_lister_audi->horizontalHeader()->resizeSection(3,200);
           ui->tableView_lister_audi->horizontalHeader()->resizeSection(4,200);
           ui->tableView_lister_audi->horizontalHeader()->resizeSection(5,200);
           ui->tableView_lister_audi->horizontalHeader()->resizeSection(6,200);




       QAbstractItemModel *model = ui->tableView_lister_audi->model();
       int numeroColumnIndex = -1;
       for (int i = 0; i < model->columnCount(); ++i) {
           if (model->headerData(i, Qt::Horizontal).toString() == "id_audi") {
               numeroColumnIndex = i;
               break;
           }
       }

       if (numeroColumnIndex != -1) {
           ui->tableView_lister_audi->setItemDelegateForColumn(numeroColumnIndex, new QStyledItemDelegate(ui->tableView_lister_audi));
       }
       ui->comboBox_trie->addItem("");
       ui->comboBox_trie->addItem("Date");
       ui->comboBox_trie->addItem("Nom");
       ui->comboBox_trie->addItem("ID");
       QIntValidator *teleValidator = new QIntValidator(10000000, 99999999, this);
       ui->ajouter_tele_audi->setValidator(teleValidator);
       ImageDelegatee *imageDelegatee = new ImageDelegatee();
       ui->tableView_lister_audi->setItemDelegateForColumn(7, imageDelegatee);
   ///////////////////////////////////////////////////////////////////////////////////////
       for (const QCameraInfo &infor : QCameraInfo::availableCameras())
       {
           qDebug() << infor.description();
       }

       M_Camera.reset(new QCamera(QCameraInfo::defaultCamera()));

       M_Camera->setViewfinder(ui->widget_Camera_View);

       M_Camera_Image.reset(new QCameraImageCapture(M_Camera.data()));
       M_Camera_Image->setCaptureDestination(QCameraImageCapture::CaptureToFile);

       player = new QMediaPlayer(this);//3
       videowidget = new QVideoWidget;//4
       player->setVideoOutput(videowidget);
       recorder = new QMediaRecorder(M_Camera.data(),this);//5
       auto&& settings = recorder->videoSettings();//6
       settings.setResolution(ui->widget_Camera_View->size());
       settings.setQuality(QMultimedia::VeryHighQuality);
       settings.setFrameRate(30.0);
       recorder->setVideoSettings(settings);
       M_Camera->setCaptureMode(QCamera::CaptureVideo);

       ///////////////time/////////////////////////
         // Create a QTimer to update the time every second
            QTimer *timer = new QTimer(this);
            connect(timer, &QTimer::timeout, this, &auditeur::updateTime);
            timer->start(5); // 1000 milliseconds = 1 second

            /////
                    QDateTime currentDateTime = QDateTime::currentDateTime();
                         QString currentDate = currentDateTime.toString("dddd dd/MM/yyyy");
                         ui->label_date->setText(currentDate);

}

auditeur::~auditeur()
{
    delete ui;
}

///
void auditeur::on_pushButton_23_clicked()
{

    std::string filePath = "C:\\Users\\CHAIMA\\Documents\\Esprit 2eme\\semestre 2\\projet c++\\TvEase6\\TvEase\\role\\role.txt";
    std::string rolest = getRoleFromFileAD(filePath);

     role = QString::fromStdString(rolest);

     std::cout <<"ili fil aud"<<role.toStdString();


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

void auditeur::on_pushButton_24_clicked()
{
    std::string filePath = "C:\\Users\\CHAIMA\\Documents\\Esprit 2eme\\semestre 2\\projet c++\\TvEase6\\TvEase\\role\\role.txt";
    std::string rolest = getRoleFromFileAD(filePath);

     role = QString::fromStdString(rolest);

     std::cout <<"ili fil aud"<<role.toStdString();



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

void auditeur::on_pushButton_25_clicked()
{

    std::string filePath = "C:\\Users\\CHAIMA\\Documents\\Esprit 2eme\\semestre 2\\projet c++\\TvEase6\\TvEase\\role\\role.txt";
    std::string rolest = getRoleFromFileAD(filePath);
    role = QString::fromStdString(rolest);
    std::cout <<"ili fil aud"<<role.toStdString();



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

void auditeur::on_pushButton_27_clicked()
{

    std::string filePath = "C:\\Users\\CHAIMA\\Documents\\Esprit 2eme\\semestre 2\\projet c++\\TvEase6\\TvEase\\role\\role.txt";
    std::string rolest = getRoleFromFileAD(filePath);

     role = QString::fromStdString(rolest);

     std::cout <<"ili fil aud"<<role.toStdString();



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

void auditeur::on_pushButton_28_clicked()
{


    std::string filePath = "C:\\Users\\CHAIMA\\Documents\\Esprit 2eme\\semestre 2\\projet c++\\TvEase6\\TvEase\\role\\role.txt";
    std::string rolest = getRoleFromFileAD(filePath);

     role = QString::fromStdString(rolest);

     std::cout <<"ili fil aud"<<role.toStdString();


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

void auditeur::on_pushButton_26_clicked()
{

   /* std::string filePath = "C:\\Users\\CHAIMA\\Documents\\Esprit 2eme\\semestre 2\\projet c++\\TvEase6\\TvEase\\role\\role.txt";
    std::string rolest = getRoleFromFileAD(filePath);

     role = QString::fromStdString(rolest);

     std::cout <<"ili fil aud"<<role.toStdString();


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
        }*/

}

void auditeur::on_label_34_linkActivated(const QString &link)
{

}
///////////////////////////////// auditeur
/////////////////// MODIFICATION MOT DE PASSE //////////////
#include"confirmmotpass.h"

///
void auditeur::on_pushButton_parametre_compte_clicked()
{

    confirmMotPass  confirmMotPass ;
    confirmMotPass.setModal(true) ;
    confirmMotPass.exec() ;
}
///////////////////////// anaaass
void auditeur::start_Camera()
{
    M_Camera->start();
}
void auditeur::stop_Camera()
{
    M_Camera->stop();
}

void auditeur::on_pushButton_14_clicked()
{
    start_Camera();

    QString name = QCoreApplication::applicationDirPath() + "/Testing.mp4";
    recorder->setOutputLocation(QUrl::fromLocalFile(name));
    recorder->record();//4
}


void auditeur::on_pushButton_13_clicked()
{
    recorder->stop();
    player->stop();

    stop_Camera();
}

void auditeur::imageCaptured(int reqid, const QImage &img)
{
   /* Q_UNUSED(reqid);
    ImageFromCamera = img.scaled(ui->widget_Camera_View->size(), Qt::KeepAspectRatio, Qt::SmoothTransformation);
    Counter = Counter + 1;
    QString ImagePath = QCoreApplication::applicationDirPath() + "/Image_"+ QString::number(Counter) + ".PNG";
    QPixmap::fromImage(ImageFromCamera).save(ImagePath);*/
   /* Q_UNUSED(reqid);
    ImageFromCamera = img.scaled(ui->widget_Camera_View->size(), Qt::KeepAspectRatio, Qt::SmoothTransformation);
    Counter = Counter + 1;
    QString ImagePath = QCoreApplication::applicationDirPath() + "/Image_"+ QString::number(Counter) + ".bmp";

    // Convert the image path to a QByteArray
    QByteArray imagePathByteArray = ImagePath.toUtf8();

    // Save the captured image to a file
    QPixmap::fromImage(ImageFromCamera).save(ImagePath);

    // Now you can use the imagePathByteArray for database insertion or any other purpose

        QPixmap image(ImagePath);
        // Convertir l'image en données binaires et stocker les données dans la variable membre
        QByteArray image_data;
        QBuffer buffer(&image_data);
        buffer.open(QIODevice::WriteOnly);
        image.toImage().save(&buffer, "PNG");
        ui->imagebrowser_4->setPixmap(image);

        // Stocker les données de l'image dans la variable membre
        this->image_data = image_data;*/

        Q_UNUSED(reqid);

        // Scale the image to fit the camera view widget
        ImageFromCamera = img.scaled(ui->widget_Camera_View->size(), Qt::KeepAspectRatio, Qt::SmoothTransformation);

        // Increment the counter
        Counter = Counter + 1;

        // Construct the file path for the image
        QString ImagePath = QCoreApplication::applicationDirPath() + "/Image_" + QString::number(Counter) + ".bmp";

        // Save the captured image to a file
        QPixmap::fromImage(ImageFromCamera).save(ImagePath);

        // Convert the QPixmap to QImage to save it to a buffer
        QImage image = QPixmap::fromImage(ImageFromCamera).toImage();

        // Convert the QImage to a QByteArray
        QByteArray image_data;
        QBuffer buffer(&image_data);
        buffer.open(QIODevice::WriteOnly);
        image.save(&buffer, "PNG");

        // Store the image data in the member variable
        this->image_data = image_data;

        // Display the image



}

void auditeur::on_pushButton_20_clicked()
{
    M_Camera_Image->capture();

}



void auditeur::on_pushButton_ajouter_audi_clicked()
{

    int id_audi= ui->ajouter_id_audi->text().toInt();

    QString nom_audi = ui->ajouter_nom_audi->text();

    QString prenom_audi = ui->ajouter_prenom_audi->text();

    QDate date_audi = ui->ajouter_ddn_audi->date();

    int tele_audi = ui->ajouter_tele_audi->text().toInt();

    QString adr_audi = ui->ajouter_adr_audi->text();

    QString mail_audi = ui->ajouter_mail_audi->text();
bool vtest=true;

    if (nom_audi.isEmpty() || !nom_audi.contains(QRegExp("[a-zA-Z]"))) {
        vtest = false;
        // Handle error: Display error message, etc.
    }

    if (prenom_audi.isEmpty() || !prenom_audi.contains(QRegExp("[a-zA-Z]"))) {
        vtest = false;
        // Handle error: Display error message, etc.
    }
    if (adr_audi.isEmpty()) {
        vtest = false;
        // Handle error: Display error message, etc.
    }
    if (tele_audi < 10000000 || tele_audi > 99999999) {
        vtest = false;
        // Handle error: Display error message, etc.
    }
    // Validation for mail_audi: Should contain '@'
    if (!mail_audi.contains('@')) {
        vtest = false;
        // Handle error: Display error message, etc.
    }
if(vtest){
    audi audi(id_audi, nom_audi,prenom_audi, date_audi, tele_audi, adr_audi,mail_audi,image_data);

    bool test = audi.addDataToDatabase();

    if (test)
    {
        QMessageBox::information(nullptr, QObject::tr("Ajouter auditeur"),
                    QObject::tr("auditeur ajoutée avec succès.\n"
                                "Cliquez sur Annuler pour fermer."), QMessageBox::Cancel);
        ui->tableView_lister_audi->setModel(tmpaudi.afficher());
        QMessageBox::information(nullptr, QObject::tr("Ajouter auditeur"),
                    QObject::tr("auditeur ajoutée avec succès.\n"
                                "Cliquez sur Annuler pour fermer."), QMessageBox::Cancel);
        ui->tableView_lister_audi->setModel(tmpaudi.afficher());

    }
    else
    {
        QMessageBox::warning(nullptr, QObject::tr("Erreur"),
                    QObject::tr("Échec de l'ajout de la auditeur.\n"
                                "Veuillez vérifier les données saisies et réessayer."), QMessageBox::Ok);
    }}
else{
    QMessageBox::warning(nullptr, QObject::tr("Erreur"),
                QObject::tr("Échec de controle saisir(nom , prenom ,mail) de la auditeur.\n"
                            "Veuillez vérifier les données saisies et réessayer."), QMessageBox::Ok);
}
}
audi auditeur::fetchAuditeurById(int id) {
    audi auditeur;

    QSqlQuery query;
    query.prepare("SELECT * FROM AUDITEUR WHERE ID_AUDITEUR= :id");
    query.bindValue(":id", id);

    if (query.exec() && query.next()) {
        auditeur = audi(
            query.value("ID_AUDITEUR").toInt(),
            query.value("NOM_AUDITEUR").toString(),
            query.value("PRENOM_AUDITEUR").toString(),
            query.value("DDN_AUDITEUR").toDate(),
            query.value("TELE_AUDITEUR").toInt(),
            query.value("ADRESS_AUDITEUR").toString(),
            query.value("MAIL_AUDITEUR").toString(),
            query.value("image").toByteArray()
        );
    } else {
        auditeur.setId_audi(-1);
    }

    return auditeur;
}



using namespace  std;
void auditeur::on_pushButton_modifier_audi_clicked()
{
    // Retrieve the data entered by the user
    QString idText = ui->modifier_id_audi->text().trimmed();

    QRegExp numericRegex("\\d*");
    if (!numericRegex.exactMatch(idText)) {
        QMessageBox::warning(this, "Erreur", "Veuillez saisir un ID numérique valide.");
        return;
    }

    int id_audi = idText.toInt();

    audi au = fetchAuditeurById(id_audi);

    if (au.getId_audi() != -1) {

        QString nom_audi = ui->modifier_nom_audi->text();
        QString prenom_audi = ui->modifier_prenom_audi->text();
        QDate ddn_audi = ui->modifier_ddn_audi->date();
        int tele_audi = ui->modifier_tele_audi->text().toInt();
        QString adress_audi = ui->modifier_adr_audi->text();
        QString mail_audi = ui->modifier_mail_audi->text();


        qDebug() << "ID entered text:" << nom_audi <<prenom_audi<< ddn_audi << tele_audi <<adress_audi << mail_audi ; ;

        au.setNom_audi(nom_audi);
        au.setPrenom_audi(prenom_audi);
        au.setDate_audi(ddn_audi);
        au.setTele_audi(tele_audi);
        au.setAdr_audi(adress_audi);
        au.setMail_audi(mail_audi);
        bool vtest=true;

            if (nom_audi.isEmpty() || !nom_audi.contains(QRegExp("[a-zA-Z]"))) {
                vtest = false;
                // Handle error: Display error message, etc.
            }

            if (prenom_audi.isEmpty() || !prenom_audi.contains(QRegExp("[a-zA-Z]"))) {
                vtest = false;
                // Handle error: Display error message, etc.
            }
            if (adress_audi.isEmpty()) {
                vtest = false;
                // Handle error: Display error message, etc.
            }
            if (tele_audi < 10000000 || tele_audi > 99999999) {
                vtest = false;
                // Handle error: Display error message, etc.
            }
            // Validation for mail_audi: Should contain '@'
            if (!mail_audi.contains('@')) {
                vtest = false;
                // Handle error: Display error message, etc.
            }
        if(vtest==true){


        bool success = au.updateDataInDatabase();

        if (success) {
            QMessageBox::information(this, "Modifier auditeur", "auditeur modifiée avec succès.");
            ui->tableView_lister_audi->setModel(tmpaudi.afficher());

        } else {
            QMessageBox::warning(this, "Erreur", "Échec de la modification de la auditeur. Veuillez réessayer.");
        }
    }
       else{
        QMessageBox::warning(nullptr, QObject::tr("Erreur"),
                    QObject::tr("Échec de controle saisir(nom , prenom ,mail) de la auditeur.\n"
                                "Veuillez vérifier les données saisies et réessayer."), QMessageBox::Ok);
    }
     }else {
            QMessageBox::warning(this, "Erreur", "Aucune auditeur trouvée avec cet ID.");
       }

}




void auditeur::on_pushButton_id_recher_clicked()
{
    QString idText = ui->modifier_id_audi->text().trimmed();
        qDebug() << "ID entered text:" << idText;

        if (idText.isEmpty() || !idText.toInt()) {
            QMessageBox::warning(this, "Erreur", "Veuillez saisir un ID valide.");
            return;
        }

        int id = idText.toInt();
        qDebug() << "Converted ID:" << id;

        audi auditeur = fetchAuditeurById(id);

        if (auditeur.getId_audi() != -1) {

            ui->modifier_nom_audi->setText(auditeur.getNom_audi());
            ui->modifier_prenom_audi->setText(auditeur.getPrenom_audi());
            ui->modifier_ddn_audi->setDate(auditeur.getDate_audi());
            ui->modifier_tele_audi->setText(QString::number(auditeur.getTele_audi()));
            ui->modifier_adr_audi->setText(auditeur.getAdr_audi());
            ui->modifier_mail_audi->setText(auditeur.getMail_audi());



        } else {
            QMessageBox::warning(this, "Erreur", "Aucune auditeur trouvée avec cet ID.");
            ui->modifier_nom_audi->clear();
            ui->modifier_prenom_audi->clear();
            ui->modifier_ddn_audi->setDate(QDate());
            ui->modifier_tele_audi->clear();
            ui->modifier_adr_audi->clear();
            ui->modifier_mail_audi->clear();
        }
}



void auditeur::on_pushButton_supprimer_audi_clicked()
{
       QString idText = ui->supprimer_id_audi->text().trimmed();

       QRegExp numericRegex("\\d*");
       if (!numericRegex.exactMatch(idText)) {
           QMessageBox::warning(this, "Erreur", "Veuillez saisir un ID numérique valide.");
           return;
       }

       int id = idText.toInt();
       audi audi, au = fetchAuditeurById(id);
       audi.setId_audi(id);

       if (!idText.isEmpty() && au.getId_audi() != -1) {
           QMessageBox::StandardButton confirmation;
           confirmation = QMessageBox::question(this, "Confirmation", "Êtes-vous sûr de vouloir supprimer cette auditeur ?",
                                                QMessageBox::Yes | QMessageBox::No);

           if (confirmation == QMessageBox::Yes) {
               // Attempt to delete the record from the database
               bool success = audi.deleteDataFromDatabase();

               if (success) {
                   QMessageBox::information(this, "Supprimer auditeur", "auditeur supprimée avec succès.");
                   ui->tableView_lister_audi->setModel(tmpaudi.afficher());
               } else {
                   QMessageBox::warning(this, "Erreur", "Échec de la suppression de la auditeur. Veuillez réessayer.");
               }
           }
       } else {
           QMessageBox::warning(this, "Erreur", "Cet ID n'existe pas.");
       }
}


void auditeur::on_pushButto_recherche_audi_clicked()
{
    QString searchText = ui->lineEdit_recherche_audi->text().trimmed();

    if (searchText.isEmpty()) {
        ui->tableView_lister_audi->setModel(tmpaudi.afficher());
    } else {
        // Construct the SQL query to search for the entered text in all relevant columns
        QString queryText = "SELECT * FROM AUDITEUR WHERE "
                            "ID_AUDITEUR LIKE :search OR "
                            "NOM_AUDITEUR LIKE :search OR "
                            "PRENOM_AUDITEUR LIKE :search OR "
                            "DDN_AUDITEUR LIKE :search OR "
                            "TELE_AUDITEUR LIKE :search OR "
                            "ADRESS_AUDITEUR LIKE :search OR "
                            "MAIL_AUDITEUR LIKE :search";

        QSqlQueryModel *model = new QSqlQueryModel();
        QSqlQuery query;
        query.prepare(queryText);
        query.bindValue(":search", "%" + searchText + "%");

        if (query.exec()) {
            model->setQuery(query);
            ui->tableView_lister_audi->setModel(model);
        } else {
            // Error handling
            qDebug() << "Query execution failed:" << query.lastError().text();
        }
    }
}

void auditeur::on_pushButton_pdf_audi_clicked()
{
    //imprimer pdf
    // Retrieve the model from the table view
        QAbstractItemModel *model = ui->tableView_lister_audi->model();

        // Create a QTextDocument to hold the content of the PDF
        QTextDocument doc;

        // Set the default font and text color for the document
        QTextCharFormat defaultFormat;
        defaultFormat.setFontFamily("Arial");
        defaultFormat.setFontPointSize(10);
        defaultFormat.setForeground(QColor("#333333")); // Dark gray text color
        doc.setDefaultTextOption(QTextOption(Qt::AlignLeft | Qt::AlignVCenter));

        // Create a QTextCursor to insert content into the document
        QTextCursor cursor(&doc);

        // Insert a header with custom formatting
        QTextCharFormat headerFormat;
        headerFormat.setFontPointSize(12);
        headerFormat.setFontWeight(QFont::Bold);
        headerFormat.setForeground(QColor("#0078d7")); // Blue text color
        cursor.setCharFormat(headerFormat); // Apply formatting to the cursor
        cursor.insertText("Auditeur  Report\n", headerFormat); // Insert text with formatting

        // Insert spacing between header and table headers
        cursor.insertBlock();

        // Create a QTextTable to hold the table data
        QTextTableFormat tableFormat;
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
void auditeur::on_comboBox_trie_activated(const QString& text)
{
    audi *part = new audi();

       int triType = ui->comboBox_trie->currentIndex() + 1;

       if (triType >= 1 && triType <= 6) {

           QSqlQueryModel *model = part->tri(triType);
           ui->tableView_lister_audi->setModel(model);
       }


       else {
           qDebug() << "Erreur : Aucun critère de tri sélectionné.";
       }
}

void auditeur::on_pushButton_17_clicked()
{
    int countBelow18Years = 0;
    int countAbove18Years = 0;

    QSqlQuery query("SELECT DDN_AUDITEUR FROM AUDITEUR");

    while (query.next()) {
        QDateTime birthDate = query.value(0).toDateTime(); // Assuming DDN_AUDITEUR is of DATE type
        QDateTime currentDate = QDateTime::currentDateTime();
        int age = birthDate.daysTo(currentDate) / 365; // Calculating age

        if (age < 18) {
            countBelow18Years++;
        } else {
            countAbove18Years++;
        }
    }

    QPieSeries *series = new QPieSeries();
    series->append("Inférieur à 18 ans", countBelow18Years);
    series->append("Supérieur à 18 ans", countAbove18Years);

    QChart *chart = new QChart();
    chart->addSeries(series);
    chart->setTitle("Répartition des âges");

    connect(series, &QPieSeries::hovered, [=](QPieSlice *slice, bool isHovered){
        if (isHovered) {
            QString tooltip = slice->label() + " : " + QString::number(slice->value());
            QToolTip::showText(QCursor::pos(), tooltip);
        } else {
            QToolTip::hideText();
        }
    });

    // Enable series animations taba3 animation
    chart->setAnimationOptions(QChart::AllAnimations);

    // Create the chart view and set the chart taba3 animation

    QChartView *chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);

    chartView->setMinimumSize(800, 600);
    chartView->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);

    QDialog *dialog = new QDialog(this);
    dialog->setWindowTitle("Statistiques");
    QVBoxLayout *layout = new QVBoxLayout();
    layout->addWidget(chartView);
    dialog->setLayout(layout);
    dialog->exec();
}



void auditeur::on_pushButton_22_clicked()
{
    alarme alarme ;
    alarme.setModal(true) ;
    alarme.exec() ;
}



void auditeur::on_browse_clicked()
{
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

void auditeur::on_tableView_lister_audi_activated(const QModelIndex &index)
{
   /* QSqlQuery query;

    // Si image_data est une colonne de type BLOB dans la base de données
    QByteArray imageData = query.value(7).toByteArray(); // Récupérer les données binaires de l'image depuis la base de données
    QPixmap image;
    image.loadFromData(imageData); // Charger l'image à partir des données binaires
    ui->imagebrowser_2->setPixmap(image);
    ui->imagebrowser->setPixmap(image);*/
    QString val = ui->tableView_lister_audi->model()->data(index).toString();

    QSqlQuery query;
    query.prepare("SELECT * FROM AUDITEUR WHERE ID_AUDITEUR=:x OR NOM_AUDITEUR=:val OR PRENOM_AUDITEUR=:val OR DDN_AUDITEUR=:val OR ADRESS_AUDITEUR=:val OR MAIL_AUDITEUR=:x");

    query.bindValue(":val", val);
    query.bindValue(":x", val.toInt()); // Si val peut être converti en int

    if (query.exec()) {
        if (query.next()) {

            // Si image_data est une colonne de type BLOB dans la base de données
            QByteArray imageData = query.value(7).toByteArray(); // Récupérer les données binaires de l'image depuis la base de données
            QPixmap image;
            image.loadFromData(imageData); // Charger l'image à partir des données binaires
            ui->imagebrowser->setPixmap(image);
        } else {
            QMessageBox::information(this, tr("Information"), tr("No DATA found."));
        }
    } else {
        QMessageBox::critical(this, tr("Error"), query.lastError().text());
    }
}






void auditeur::on_pushButton_16_clicked()
{
    ui->tabWidget->setCurrentIndex(4);

}

void auditeur::on_pushButton_15_clicked()
{
    ui->tabWidget->setCurrentIndex(1);

}







void auditeur::on_pushButton_RESET_audi_clicked()
{
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Confirmation", "Etes-vous sûr de vouloir effacer tous les champs ?",
                                    QMessageBox::Yes|QMessageBox::No);
    if (reply == QMessageBox::Yes) {
        // Clear all input fields
        ui->ajouter_id_audi->clear() ;
         ui->ajouter_nom_audi->clear() ;
         ui->ajouter_prenom_audi->clear() ;
         ui->ajouter_adr_audi->clear() ;
         ui->ajouter_ddn_audi->clear() ;
         ui->ajouter_mail_audi->clear() ;
         ui->ajouter_tele_audi->clear() ;
         ui->imagebrowser->clear() ;


        QMessageBox::information(this, "Succès", "Champs effacés avec succès !");
   }
}

void auditeur::on_pushButton_RESET_audi_2_clicked()
{
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Confirmation", "Etes-vous sûr de vouloir effacer tous les champs ?",
                                    QMessageBox::Yes|QMessageBox::No);
    if (reply == QMessageBox::Yes) {
        // Clear all input fields
        ui->modifier_id_audi->clear() ;
         ui->modifier_adr_audi->clear() ;
         ui->modifier_ddn_audi->clear() ;
         ui->modifier_nom_audi->clear() ;
         ui->modifier_mail_audi->clear() ;
         ui->modifier_tele_audi->clear() ;
         ui->modifier_prenom_audi->clear() ;


        QMessageBox::information(this, "Succès", "Champs effacés avec succès !");
   }
}

void auditeur::on_pushButton_RESET_audi_3_clicked()
{
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Confirmation", "Etes-vous sûr de vouloir effacer tous les champs ?",
                                    QMessageBox::Yes|QMessageBox::No);
    if (reply == QMessageBox::Yes) {
        // Clear all input fields
        ui->supprimer_id_audi->clear() ;



        QMessageBox::information(this, "Succès", "Champs effacés avec succès !");
   }
}
#include"gamehub.h"
void auditeur::on_pushButton_11_clicked()
{

    gamehub gameh ;
    gameh.setModal(true) ;
    gameh.exec() ;
}
#include"chat.h"
void auditeur::on_chatbot_clicked()
{
    chat c ;
    c.setModal(true) ;
    c.exec() ;

}
#include"lopiza.h"

void auditeur::on_Notif_clicked()
{

 Lopiza *lop = new Lopiza();

        // Show the lopiza window
        lop->show();
        lop->raise();
}
#include"event.h"
void auditeur::on_pushButton_7_clicked()
{
    Event c;
       c.setModal(true);
       c.exec();
}
