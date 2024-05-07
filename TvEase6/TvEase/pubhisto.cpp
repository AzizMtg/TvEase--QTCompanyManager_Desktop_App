#include "pubhisto.h"
#include "ui_pubhisto.h"
#include <QSqlTableModel>


PubHisto::PubHisto(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PubHisto)
{
    ui->setupUi(this);
    QSqlTableModel *model = new QSqlTableModel(this);
       model->setTable("PUBPROG"); // Set the table name
       model->select(); // Fetch data

       // Set the model to the table view
       ui->histotab->setModel(model);
       ui->histotab->setStyleSheet("background-color: transparent;");
       ui->label->setStyleSheet("background-color: transparent;");
}

PubHisto::~PubHisto()
{
    delete ui;
}
