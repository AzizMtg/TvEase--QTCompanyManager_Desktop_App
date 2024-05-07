#include "audi.h"
#include <QDebug>

#include <QDebug>
#include <QtSql/QSqlQuery>
#include <QSqlError>
#include <QtCharts>
#include <QChartView>
#include <QLineSeries>

audi::audi()
{
    nom_audi="";
    prenom_audi="";
    date_audi=QDate();
    tele_audi=0;
    adr_audi="";
    mail_audi="";
    image=QByteArray();

}

audi::audi(int id_audi,QString nom_audi,QString prenom_audi,QDate date_audi,int tele_audi,QString adr_audi,QString mail_audi,QByteArray Image ){
    this->id_audi=id_audi;
    this->nom_audi=nom_audi;
    this->prenom_audi=prenom_audi;
    this->date_audi=date_audi;
    this->tele_audi=tele_audi;
    this->adr_audi=adr_audi;
    this->mail_audi=mail_audi;
    this->image = Image;


}

bool audi::addDataToDatabase() {
    QSqlQuery query;

    query.prepare("INSERT INTO AUDITEUR (ID_AUDITEUR, NOM_AUDITEUR, PRENOM_AUDITEUR, DDN_AUDITEUR, TELE_AUDITEUR, ADRESS_AUDITEUR, MAIL_AUDITEUR ,image) "
                  "VALUES (:id_audi, :nom_audi, :prenom_audi, :date_audi, :tele_audi, :adr_audi, :mail_audi, :image)");

    query.bindValue(":id_audi", id_audi);
    query.bindValue(":nom_audi", nom_audi);
    query.bindValue(":prenom_audi", prenom_audi);
    query.bindValue(":date_audi", date_audi);
    query.bindValue(":tele_audi", tele_audi);
    query.bindValue(":adr_audi", adr_audi);
    query.bindValue(":mail_audi", mail_audi);
    query.bindValue(":image",image);


    return query.exec();
}

bool audi::updateDataInDatabase() {
    QSqlQuery query;

    setNom_audi(nom_audi);
    setPrenom_audi(prenom_audi);
    setDate_audi(date_audi);
    setTele_audi(tele_audi);
    setAdr_audi(adr_audi);
    setMail_audi(mail_audi);

    query.prepare("UPDATE AUDITEUR "
                  "SET NOM_AUDITEUR = :nom_audi, "
                  "PRENOM_AUDITEUR = :prenom_audi, "
                  "DDN_AUDITEUR = :date_audi, "
                  "TELE_AUDITEUR = :tele_audi, "
                  "ADRESS_AUDITEUR = :adr_audi, "
                  "MAIL_AUDITEUR = :mail_audi "
                  "WHERE ID_AUDITEUR = :id_audi");

    // Bind values to the parameters
    query.bindValue(":id_audi", id_audi);
    query.bindValue(":nom_audi", getNom_audi());
    query.bindValue(":prenom_audi", getPrenom_audi());
    query.bindValue(":date_audi", getDate_audi());
    query.bindValue(":tele_audi", getTele_audi());
    query.bindValue(":adr_audi", getAdr_audi());
    query.bindValue(":mail_audi", getMail_audi());
    query.bindValue(":image", Image());



    // Execute the query
    bool success = query.exec();
    if (!success) {
        qDebug() << "Error updating record:" << query.lastError().text();
        qDebug() << "Query:" << query.lastQuery();
    } else {
        qDebug() << "Record updated successfully";
    }

    return success;
}

//setters and getters

// Setters
void audi::setId_audi(int id_audi) {
    this->id_audi = id_audi;
}

void audi::setNom_audi(const QString &nom_audi) {
    this->nom_audi = nom_audi;
}

void audi::setPrenom_audi(const QString &prenom_audi) {
    this->prenom_audi = prenom_audi;
}

void audi::setDate_audi(const QDate &date_audi) {
    this->date_audi = date_audi;
}

void audi::setTele_audi(int tele_audi) {
    this->tele_audi = tele_audi;
}


void audi::setAdr_audi(const QString &adr_audi) {
    this->adr_audi = adr_audi;
}

void audi::setMail_audi(const QString &mail_audi) {
    this->mail_audi = mail_audi;
}

// Getters
int audi::getId_audi() const {
    return id_audi;
}

QString audi::getNom_audi() const {
    return nom_audi;
}

QString audi::getPrenom_audi() const {
    return prenom_audi;
}

QDate audi::getDate_audi() const {
    return date_audi;
}

int audi::getTele_audi() const {
    return tele_audi;
}

QString audi::getAdr_audi() const {
    return adr_audi;
}

QString audi::getMail_audi() const {
    return mail_audi;
}

bool audi::deleteDataFromDatabase() {
    QSqlQuery query;

    // Prepare the SQL query to delete the record with the specified ID
    query.prepare("DELETE FROM AUDITEUR WHERE ID_AUDITEUR = :id_audi");
    query.bindValue(":id_audi", id_audi);

    // Execute the query and return whether it was successful
    return query.exec();
}

QSqlQueryModel* audi::afficher() {
    QSqlQueryModel *model = new QSqlQueryModel();

    model->setQuery("SELECT ID_AUDITEUR, NOM_AUDITEUR, PRENOM_AUDITEUR, DDN_AUDITEUR, TELE_AUDITEUR, ADRESS_AUDITEUR, MAIL_AUDITEUR, image FROM AUDITEUR");

    model->setHeaderData(0, Qt::Horizontal, QObject::tr("id"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("prenom"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("date de naissance"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("telephone"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("adress"));
    model->setHeaderData(6, Qt::Horizontal, QObject::tr("E-mail"));
    model->setHeaderData(7, Qt::Horizontal, QObject::tr("image"));




    return model;
}
QSqlQueryModel* audi::afficherstat() {
    QSqlQueryModel *model = new QSqlQueryModel();
    model->setQuery("SELECT YEAR(DDN_AUDITEUR) AS Year, SUM(DDN_AUDITEUR) AS Total FROM AUDITEUR GROUP BY YEAR(DDN_AUDITEUR)");
    return model;
}



QSqlQueryModel * audi::tri(int tp)
{
    QSqlQueryModel *model = new QSqlQueryModel();
    QSqlQuery query;
    QString orderByClause;

    switch(tp) {
        case 1:

            break;
        case 2:
            orderByClause = "DDN_AUDITEUR ASC"; // Tri par année
            break;
        case 3:
            orderByClause = "NOM_AUDITEUR ASC";
            break;
        case 4:
            orderByClause = "ID_AUDITEUR ASC";
            break;
        default:
            qDebug() << "Erreur : Type de tri invalide.";
            return nullptr;
    }

    QString queryString = "SELECT * FROM AUDITEUR ORDER BY " + orderByClause;
    query.prepare(queryString);

    if (!query.exec()) {
        qDebug() << "Erreur lors de l'exécution de la requête :" << query.lastError().text();
        return nullptr;
    }

    model->setQuery(query);
    return model;
}







