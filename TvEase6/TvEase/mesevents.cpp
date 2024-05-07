#include "mesevents.h"
#include "ui_mesevents.h"
#include <QFile>
#include <QTextStream>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>
#include <QSqlQueryModel>
#include "event.h"

mesevents::mesevents(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::mesevents)
{
    ui->setupUi(this);

    // Read CINPERSO from role.txt
    QString cinPerso;
    QFile file("C:\\Users\\CHAIMA\\Documents\\Esprit 2eme\\semestre 2\\projet c++\\TvEase6\\TvEase\\role\\role.txt");
    if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QTextStream in(&file);
        if (!in.atEnd()) {
            cinPerso = in.readLine();
            qDebug() << "CINPERSO read from role.txt:" << cinPerso;
        }
        file.close();
    } else {
        qDebug() << "Failed to open role.txt";
        return;
    }

    // Query EVENTPERSO table to fetch associated NOMEVENT values
    QSqlQuery query;
    query.prepare("SELECT NOMEVENT FROM EVENTPERSO WHERE CINPERSO = :cinPerso");
    query.bindValue(":cinPerso", cinPerso);
    if (!query.exec()) {
        qDebug() << "Error querying EVENTPERSO table:" << query.lastError().text();
        return;
    }

    // Construct a query to fetch event details for each NOMEVENT
    QStringList nomevents;
    while (query.next()) {
        QString nomevent = query.value(0).toString();
        nomevents << QString("'%1'").arg(nomevent); // Enclose each NOMEVENT in single quotes
    }
    qDebug() << "NOMEVENTs associated with CINPERSO:" << nomevents;

    QString eventQuery = "SELECT NOM, LIEU, TEMPSDEB, TEMPSFIN FROM EVENT WHERE NOM IN (";
    eventQuery += nomevents.join(", ") + ")";
    qDebug() << "Constructed query:" << eventQuery;


    // Execute the constructed query to fetch event details
    QSqlQueryModel *model = new QSqlQueryModel(this);
    model->setQuery(eventQuery);

    // Check for errors
    if (model->lastError().isValid()) {
        qDebug() << "Error executing query:" << model->lastError().text();
        return;
    }

    // Set the model to the mesevent table view
    ui->mesevent->setModel(model);

    // Connect the clicked signal of the mesevent table view to a custom slot
    connect(ui->mesevent, &QTableView::clicked, this, &mesevents::on_mesevent_clicked);
}


mesevents::~mesevents()
{
    delete ui;
}

void mesevents::on_retourner_clicked()
{
    hide() ;
    Event c;
    c.setModal(true);
    c.exec();
}

void mesevents::on_mesevent_clicked(const QModelIndex &index)
{
    // Get the selected event's name
    QString eventName = ui->mesevent->model()->index(index.row(), 0).data().toString();

    // Query EVENTPERSO table to fetch participants associated with the selected event
    QSqlQuery query;
    query.prepare("SELECT NOM_PERSONELLE, PRENOM_PERSONELLE FROM PERSONELLES WHERE CIN_PERSONELLE IN "
                  "(SELECT CINPERSO FROM EVENTPERSO WHERE NOMEVENT = :eventName)");
    query.bindValue(":eventName", eventName);
    if (!query.exec()) {
        qDebug() << "Error querying PERSONELLES table:" << query.lastError().text();
        return;
    }

    // Populate participant table view with the fetched data
    QSqlQueryModel *participantModel = new QSqlQueryModel(this);
    participantModel->setQuery(query);
    ui->participant->setModel(participantModel);
}
