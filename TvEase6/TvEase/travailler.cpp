#include "travailler.h"
#include "ui_travailler.h"

#include"ctravailler.h"
#include "QMessageBox"
#include <QSortFilterProxyModel>


#include "programme.h"
#include "publicite.h"
#include "auditeur.h"
#include "abonnement.h"
#include "studio.h"

#include "QMessageBox"
#include"cpersonnel.h"

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


//taba3 il recherche
#include <QSortFilterProxyModel>
#include <QStandardItemModel>

// taba3 il combobox modifier
#include <QSqlRecord>

// jointure
#include "travailler.h"

travailler::travailler(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::travailler)
{
    ui->setupUi(this);


    /// affichage cin ili fil combobox
     // l affichagecin rahou min tableau personelles
        QSqlQueryModel *models = tmptravailler.afficher_CIN_combobox();
        ui->comboBox_cin_jointure->setModel(models);
    // l affichage  ids rahou min tableau studio
        QSqlQueryModel *modelst = tmptravailler.afficher_ids_combobox();
        ui->comboBox_studio_jointure->setModel(modelst);

  /// affichage studio ili fil combobox
        // l affichage cin rahou min tableau travailler
        QSqlQueryModel *models2 = tmptravailler.afficher_CIN_combobox_travailler();
        ui->comboBox_modifier_cin_jointure->setModel(models2);

        // l affichage ids rahou min tableau travailler
        QSqlQueryModel *modelsi = tmptravailler.afficher_ids_combobox_travailler();
        ui->comboBox_modifier_idskol_jointure->setModel(modelsi);

        // l affichage ids rahou min tableau studio bich na5tar
        QSqlQueryModel *modelst2 = tmptravailler.afficher_ids_combobox();
        ui->comboBox_modifier_studio_jointure->setModel(modelst2);



 //////////////////////////// afficher fil tableau imta3 il travailler //////////////

    /// taba3 il afficher
            // Create the proxy model
            proxyModel = new QSortFilterProxyModel(this);
            proxyModel->setSourceModel(tmptravailler.afficher());
            ui->tableView_jointure->setModel(proxyModel);

            // Apply styles to the header
            QString headerStyle = "QHeaderView::section {"
                                    "    font-weight: bold;" // Making text bold
                                    "    background-color: rgb(7, 210, 255) ;" // bleue color
                                    "    border: 1px solid black;" // Adding a border
                                    "}";

            ui->tableView_jointure->horizontalHeader()->setStyleSheet(headerStyle);
            ui->tableView_jointure->horizontalHeader()->resizeSection(6,200);
            ui->tableView_jointure->horizontalHeader()->resizeSection(5,200);
            ui->tableView_jointure->horizontalHeader()->resizeSection(4,200);
            ui->tableView_jointure->horizontalHeader()->resizeSection(3,120);

 /////////////////////
            /// taba3 il recherche
                // a3maltha bich kan il line edit imta3 il recherche fara8 yafichi il tableau kamil
               connect(ui->lineEdit_recher_jointure, &QLineEdit::textChanged, this, &travailler::afficherTousElementsSiVide);


}

travailler::~travailler()
{
    delete ui;
}
/////////////////////////////////////////////// ajouter lil tableau travailler
void travailler::on_pushButton_afficher_jointure_clicked()
{
    QString idcin = ui->comboBox_cin_jointure->currentText();
    QString idstudio = ui->comboBox_studio_jointure->currentText();
    QString code_acces = ui->lineEdit_code_acces->text();


    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Confirmation", "Êtes-vous sûr de vouloir ajouter cette personne ?",
                                  QMessageBox::Yes|QMessageBox::No);
    if (reply == QMessageBox::Yes) {

    ///// ajouter fil base
        ctravailler travailler(idcin, idstudio,code_acces ) ;
        bool test = travailler.ajouter() ;


        // User confirmed the addition, proceed with addition
        if (test) {

    ///// taba3 il tabeau kan yajouti irafrachi
            // Create the proxy model
            proxyModel = new QSortFilterProxyModel(this);
            proxyModel->setSourceModel(tmptravailler.afficher());
            ui->tableView_jointure->setModel(proxyModel);

            // Apply styles to the header
            QString headerStyle = "QHeaderView::section {"
                                    "    font-weight: bold;" // Making text bold
                                    "    background-color: rgb(7, 210, 255) ;" // bleue color
                                    "    border: 1px solid black;" // Adding a border
                                    "}";

            ui->tableView_jointure->horizontalHeader()->setStyleSheet(headerStyle);
            ui->tableView_jointure->horizontalHeader()->resizeSection(6,200);
            ui->tableView_jointure->horizontalHeader()->resizeSection(5,200);
            ui->tableView_jointure->horizontalHeader()->resizeSection(4,200);
            ui->tableView_jointure->horizontalHeader()->resizeSection(3,120);



       ///irafrachi les information ili fil cobom box cin ids ili tab3in tableau travaille
            // l affichage cin rahou min tableau travailler
            QSqlQueryModel *models2 = tmptravailler.afficher_CIN_combobox_travailler();
            ui->comboBox_modifier_cin_jointure->setModel(models2);

            // l affichage ids rahou min tableau travailler
            QSqlQueryModel *modelsi = tmptravailler.afficher_ids_combobox_travailler();
            ui->comboBox_modifier_idskol_jointure->setModel(modelsi);

     ///
            QMessageBox::information(nullptr, QObject::tr("Ajout réussi"),
                                     QObject::tr("Ajout réussi.\n"
                                                 "Cliquez sur Annuler pour quitter."), QMessageBox::Cancel);
        }
        else {
            QMessageBox::critical(nullptr, QObject::tr("Error"),
                                  QObject::tr("Échec de l'ajout.\n"
                                              "Cliquez sur Annuler pour quitter."), QMessageBox::Cancel);
        }
    }
    else {
        // User chose not to proceed with the addition
        QMessageBox::information(nullptr, QObject::tr("Ajout annulé"),
                                 QObject::tr("Ajout annulé.\n"
                                             "Cliquez sur Annuler pour quitter."), QMessageBox::Cancel);
    }

}

/////////////////////supprimer fi tableau imta3 il travailler
void travailler::on_pushButton_supp_jointure_clicked()
{
    QString cin =ui->comboBox_cin_jointure->currentText() ;
    QString idstudio =ui->comboBox_studio_jointure->currentText() ;
    // Display a confirmation dialog
       QMessageBox::StandardButton reply;
       reply = QMessageBox::question(this, "Confirmation", "Etes-vous sûr que vous voulez supprimer?",
                                     QMessageBox::Yes|QMessageBox::No);
       if (reply == QMessageBox::Yes) {
           // User confirmed the deletion, proceed with deletion
           bool test = tmptravailler.supprimer(cin,idstudio);
           if (test) {

             ///////irafrachi les information ili fil cobom box cin ids ili tab3in tableau travaille
                    // l affichage cin rahou min tableau travailler
                    QSqlQueryModel *models2 = tmptravailler.afficher_CIN_combobox_travailler();
                    ui->comboBox_modifier_cin_jointure->setModel(models2);

                    // l affichage ids rahou min tableau travailler
                    QSqlQueryModel *modelsi = tmptravailler.afficher_ids_combobox_travailler();
                    ui->comboBox_modifier_idskol_jointure->setModel(modelsi);


             //////// taba3 il table ki titfasa5 7aja irafrachi
                       // Create the proxy model
                       proxyModel = new QSortFilterProxyModel(this);
                       proxyModel->setSourceModel(tmptravailler.afficher());
                       ui->tableView_jointure->setModel(proxyModel);

                       // Apply styles to the header
                       QString headerStyle = "QHeaderView::section {"
                                               "    font-weight: bold;" // Making text bold
                                               "    background-color: rgb(7, 210, 255) ;" // bleue color
                                               "    border: 1px solid black;" // Adding a border
                                               "}";

                       ui->tableView_jointure->horizontalHeader()->setStyleSheet(headerStyle);
                       ui->tableView_jointure->horizontalHeader()->resizeSection(6,200);
                       ui->tableView_jointure->horizontalHeader()->resizeSection(5,200);
                       ui->tableView_jointure->horizontalHeader()->resizeSection(4,200);
                       ui->tableView_jointure->horizontalHeader()->resizeSection(3,120);



               QMessageBox::information(nullptr, QObject::tr("Suppression réussie"),
                                        QObject::tr("La suppression a été effectuée avec succès.\n"
                                                    "Cliquez sur Annuler pour quitter.."), QMessageBox::Cancel);
           }
           else {
               QMessageBox::critical(nullptr, QObject::tr("Error"),
                                     QObject::tr("La suppression a échoué.\n"
                                                 "Cliquez sur Annuler pour quitter.."), QMessageBox::Cancel);
           }
       }
       else {
           // User chose not to proceed with the deletion
           QMessageBox::information(nullptr, QObject::tr("Suppression annulée"),
                                    QObject::tr("La suppression a été annulée.\n"
                                                "Cliquez sur Annuler pour quitter.."), QMessageBox::Cancel);
       }
}

/////////////////////////////////////////// MODIFIER


void travailler::on_pushButton_modifier_jointure_clicked()
{


    QString cin = ui->comboBox_modifier_cin_jointure->currentText();
    QString ids = ui->comboBox_modifier_idskol_jointure->currentText();
    QString ids_new= ui->comboBox_modifier_studio_jointure->currentText();
    QString code_acces_new = ui->lineEdit_code_acces_modif->text();



    // Display a confirmation dialog
       QMessageBox::StandardButton reply;
       reply = QMessageBox::question(this, "Confirmation", "Êtes-vous sûr de vouloir modifier ??",
                                     QMessageBox::Yes|QMessageBox::No);
       if (reply == QMessageBox::Yes) {
           // User confirmed the modification, proceed with modification
           ctravailler t;
           bool test = t.modifier(cin, ids , ids_new ,code_acces_new);

           if (test) {

               ///////irafrachi les information ili fil cobom box cin ids ili tab3in tableau travaille
                      // l affichage cin rahou min tableau travailler
                      QSqlQueryModel *models2 = tmptravailler.afficher_CIN_combobox_travailler();
                      ui->comboBox_modifier_cin_jointure->setModel(models2);

                      // l affichage ids rahou min tableau travailler
                      QSqlQueryModel *modelsi = tmptravailler.afficher_ids_combobox_travailler();
                      ui->comboBox_modifier_idskol_jointure->setModel(modelsi);




               //////// taba3 il table ki titfasa5 7aja irafrachi
                         // Create the proxy model
                         proxyModel = new QSortFilterProxyModel(this);
                         proxyModel->setSourceModel(tmptravailler.afficher());
                         ui->tableView_jointure->setModel(proxyModel);

                         // Apply styles to the header
                         QString headerStyle = "QHeaderView::section {"
                                                 "    font-weight: bold;" // Making text bold
                                                 "    background-color: rgb(7, 210, 255) ;" // bleue color
                                                 "    border: 1px solid black;" // Adding a border
                                                 "}";

                         ui->tableView_jointure->horizontalHeader()->setStyleSheet(headerStyle);
                         ui->tableView_jointure->horizontalHeader()->resizeSection(6,200);
                         ui->tableView_jointure->horizontalHeader()->resizeSection(5,200);
                         ui->tableView_jointure->horizontalHeader()->resizeSection(4,200);
                         ui->tableView_jointure->horizontalHeader()->resizeSection(3,120);
               /////

               QMessageBox::information(nullptr, QObject::tr("Modification réussie"),
                                        QObject::tr("Modification réussie.\n"
                                                    "Cliquez sur Annuler pour quitter."), QMessageBox::Cancel);
           }
           else {
               QMessageBox::critical(nullptr, QObject::tr("Erreur"),
                                     QObject::tr("Échec de la modification.\n"
                                                 "Cliquez sur Annuler pour quitter."), QMessageBox::Cancel);
           }
       }
       else {
           // User chose not to proceed with the modification
           QMessageBox::information(nullptr, QObject::tr("Modification annulée"),
                                    QObject::tr("Modification annulée.\n"
                                                "Cliquez sur Annuler pour quitter."), QMessageBox::Cancel);
       }
}
////////////////////////////////////////////// LES METIERS/////////////////////////////////////
///////////////////////////////// BOUTON PDF
void travailler::on_pushButton__telechargement_jointure_clicked()
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

        QTableView *tableView = ui->tableView_jointure;
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

void travailler::afficherTousElementsSiVide(const QString &text)
{
    if (text.isEmpty()) {
        // Si le texte est vide, affichez tous les éléments du tableau
        ui->tableView_jointure->setModel(tmptravailler.afficher());

    }
}
void travailler::on_pushButton_recher_jointure_clicked()
{
    QString taakod =ui->lineEdit_recher_jointure->text();
    if (taakod=="")
    {
      ui->tableView_jointure->setModel(tmptravailler.afficher());

    }
    else
      {
         ui->tableView_jointure->setModel(tmptravailler.afficher_recherche(taakod));

      }
}


//////////////////////////////////BONTON TRIE


void travailler::on_comboBox_trie_jointure_activated(const QString &arg1)
{
    QString current_text =ui->comboBox_trie_jointure->currentText();

    if (current_text=="")
    {
      ui->tableView_jointure->setModel(tmptravailler.afficher());

    }
    else if (current_text=="trie dans l'ordre decroissant par cin")
    {
        ui->tableView_jointure->setModel(tmptravailler.trie_cin());

    }
    else if (current_text=="trie dans l'ordre croissant par cin")
    {        ui->tableView_jointure->setModel(tmptravailler.trie_croissant_cin());

    }
    else if (current_text=="trie dans l'ordre croissant par localisation")
    {
      ui->tableView_jointure->setModel(tmptravailler.afficher_localisation());

     }


}
