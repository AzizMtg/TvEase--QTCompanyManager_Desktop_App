#include "securitestudio.h"
#include "ui_securitestudio.h"

#include <iostream>
using namespace std ;

#include <QDateTime>

// taba3 il pdf
#include <QFileDialog>
#include <QPdfWriter>
#include <QPainter>
#include <QTableView>

#include <QTextDocument>
#include <QTextCursor>
#include <QStandardItemModel>
#include <QMessageBox>
#include <QTextDocumentWriter>
#include <QtPrintSupport/QPrinter>
#include <QtPrintSupport/QPrintDialog>
#include <QTextDocument>
#include <QFile>
#include <QFileDialog>
#include <QMessageBox>
#include <QStandardPaths>
#include <QTextTable>


securiteStudio::securiteStudio(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::securiteStudio)
{
    ui->setupUi(this);
    int ret=A.connect_arduino("COM5"); // lancer la connexion à arduino
       switch(ret){
       case(0):qDebug()<< "arduino is available and connected to : "<< A.getarduino_port_name();
           break;
       case(1):qDebug() << "arduino is available but not connected to :" <<A.getarduino_port_name();
          break;
       case(-1):qDebug() << "arduino is not available";
       }

    QObject::connect(A.getserial(),SIGNAL(readyRead()),this,SLOT(update_label())); // permet de lancer  //le slot update_label suite à la reception du signal readyRead (reception des données).



    /////affichage tableau ili fil securite
            // Create the proxy model
            proxyModel = new QSortFilterProxyModel(this);
            proxyModel->setSourceModel(securitysd.afficher());
            ui->tableView_securite->setModel(proxyModel);

            // Apply styles to the header
            QString headerStyle = "QHeaderView::section {"
                                    "    font-weight: bold;" // Making text bold
                                    "    background-color:rgb(7, 210, 255);" // bleue color
                                    "    border: 1px solid black;" // Adding a border
                                    "}";

            ui->tableView_securite->horizontalHeader()->setStyleSheet(headerStyle);
            ui->tableView_securite->horizontalHeader()->resizeSection(6,200);
            ui->tableView_securite->horizontalHeader()->resizeSection(5,200);
            ui->tableView_securite->horizontalHeader()->resizeSection(4,200);
            ui->tableView_securite->horizontalHeader()->resizeSection(3,120);

 /////////////////////
                       /// taba3 il recherche
                           // a3maltha bich kan il line edit imta3 il recherche fara8 yafichi il tableau kamil
                          connect(ui->lineEdit_recher_securite, &QLineEdit::textChanged, this, &securiteStudio::afficherTousElementsSiVide);


}

securiteStudio::~securiteStudio()
{

    A.close_arduino(); // Fermer la connexion à Arduino
    delete ui;
}




void securiteStudio::update_label()
{
    static QByteArray tempData;

    data = A.read_from_arduino();

    tempData.append(data);

    if (tempData.contains('\n')) {


        tempData.remove(tempData.indexOf('\n'), 1);

        receivedData = QString::fromUtf8(tempData);
        receivedData.chop(1);


        std::string dataStdString = receivedData.toStdString();
        std::cout << "Received data:" << dataStdString << std::endl;


        bool test = securitysd.existe_code_accees_perso_studio(receivedData) ;
        std::cout << "test existe:" << test<< std::endl;

        if (test==1)
        {
            QString id_per =securitysd.retourneidPerso(receivedData) ;
            QString id_std = securitysd.retourneidstudio(receivedData) ;

            std::cout << "idperso:" << id_per.toStdString() <<  "   idstudio:" << id_std.toStdString()<<std::endl;


            QDateTime currentDateTime = QDateTime::currentDateTime();
            QString currentDateTimeString = currentDateTime.toString("yyyy-MM-dd hh:mm:ss");
            std::cout << "dateEntre:" << currentDateTimeString.toStdString() <<std::endl;


                CSecuritySD CSecuritySD(id_per, id_std,currentDateTimeString,receivedData ) ;
                bool test2 = CSecuritySD.ajouter() ;

                if (test2) {

                    // Create the proxy model
                    proxyModel = new QSortFilterProxyModel(this);
                    proxyModel->setSourceModel(securitysd.afficher());
                    ui->tableView_securite->setModel(proxyModel);

                    // Apply styles to the header
                    QString headerStyle = "QHeaderView::section {"
                                            "    font-weight: bold;" // Making text bold
                                            "    background-color: rgb(7, 210, 255) ;" // bleue color
                                            "    border: 1px solid black;" // Adding a border
                                            "}";

                    ui->tableView_securite->horizontalHeader()->setStyleSheet(headerStyle);
                    ui->tableView_securite->horizontalHeader()->resizeSection(6,200);
                    ui->tableView_securite->horizontalHeader()->resizeSection(5,200);
                    ui->tableView_securite->horizontalHeader()->resizeSection(4,200);
                    ui->tableView_securite->horizontalHeader()->resizeSection(3,120);

                  }


          A.write_to_arduino("1"); //envoyer 1 à arduino

        }
        else
        {
           A.write_to_arduino("0"); //envoyer 0 à arduino


        }




        // Réinitialisation des données temporaires pour la prochaine réception
        tempData.clear();
    }
}









//////////////////////////// bouton pdf

void securiteStudio::on_pushButton__securite_clicked()
{
    QString filePath = QFileDialog::getSaveFileName(this, "Save PDF", QString(), "PDF Files (*.pdf)");

    if (!filePath.isEmpty()) {
        QPdfWriter pdfWriter(filePath);
        pdfWriter.setPageSize(QPageSize(QPageSize::A3));

        QTextDocument document;
        QTextCursor cursor(&document);

        QString imagePath = "C:/Users/CHAIMA/Documents/Esprit 2eme/semestre 2/projet c++/TvEase6/TvEase/images/logo.png"; // Update with the path to your image
        QString imageHtml = "<img src='" + imagePath + "' width='100' height='100' />"; // Adjust width and height as needed
        cursor.insertHtml(imageHtml);
        cursor.insertBlock();

        QString titleText = "Les informations du personnel : ";
        QTextCharFormat titleFormat;
        titleFormat.setFontPointSize(16); // Set font size
        titleFormat.setFontWeight(QFont::Bold); // Set font weight
        titleFormat.setBackground(QColor("#ff00ff")); // Set background color
        cursor.insertText(titleText, titleFormat);
        cursor.insertBlock();

        QTableView *tableView = ui->tableView_securite;
        QAbstractItemModel *model = tableView->model();
        int rowCount = model->rowCount();
        int columnCount = model->columnCount();

        QTextTable *table = cursor.insertTable(rowCount + 1, columnCount);

        // Set padding for all cells
        QTextTableFormat tableFormat;
        tableFormat.setCellPadding(10); // Adjust the padding value as needed
        table->setFormat(tableFormat);

        // Fill in the table headers
        for (int col = 0; col < columnCount; ++col) {
            QString headerText = model->headerData(col, Qt::Horizontal).toString();
            QTextTableCell cell = table->cellAt(0, col);
            QTextCursor cellCursor = cell.firstCursorPosition();
            cellCursor.insertText(headerText);
        }

        // Fill in the table cells with data
        for (int row = 0; row < rowCount; ++row) {
            for (int col = 0; col < columnCount; ++col) {
                QModelIndex index = model->index(row, col);
                QString cellText = model->data(index, Qt::DisplayRole).toString();
                QTextTableCell cell = table->cellAt(row + 1, col);
                QTextCursor cellCursor = cell.firstCursorPosition();
                cellCursor.insertText(cellText);
            }
        }

        pdfWriter.setPageMargins(QMarginsF(10, 10, 10, 10));
        document.print(&pdfWriter);
    }
}


////////////////////////////////// BOUTON RECHERCHE

void securiteStudio::afficherTousElementsSiVide(const QString &text)
{
    if (text.isEmpty()) {
        // Si le texte est vide, affichez tous les éléments du tableau
        ui->tableView_securite->setModel(securitysd.afficher());

    }
}

void securiteStudio::on_pushButton_recher_securite_clicked()
{
    QString taakod =ui->lineEdit_recher_securite->text();
    if (taakod=="")
    {
      ui->tableView_securite->setModel(securitysd.afficher());

    }
    else
      {
         ui->tableView_securite->setModel(securitysd.afficher_recherche_security(taakod));

      }
}

////////////////////////////////////// TRIE

void securiteStudio::on_comboBox_trie_securite_activated(const QString &arg1)
{
    QString current_text =ui->comboBox_trie_securite->currentText();

    if (current_text=="")
    {
      ui->tableView_securite->setModel(securitysd.afficher());

    }
    else if (current_text=="trie dans l'ordre croissant par date acces")
    {
        ui->tableView_securite->setModel(securitysd.trie_croissant_date());

    }
     else if (current_text=="trie dans l'ordre decroissant par date acces")
    {
        ui->tableView_securite->setModel(securitysd.trie_decroissant_date());

    }


}
