#include "cpub.h"
#include <QDebug>
#include <QtSql/QSqlQuery>
#include <QSqlError>
#include <QSqlQuery>

Cpub::Cpub()
{
    nom="";
    canal="";
    PUBDESC="";
    prix=0;
    date=QDate();
    duree="Not Set";
    temps="Not Set";
    IDSOC="";

}

Cpub::Cpub(int id,QString nom,QString canal,QString PUBDESC,int prix,QDate date,QString duree,QString temps,QString IDSOC){
    this->id=id;
    this->nom=nom;
    this->date=date;
    this->prix=prix;
    this->duree=duree;
    this->temps=temps;
    this->PUBDESC=PUBDESC;
    this->canal=canal;
    this->IDSOC=IDSOC;

}

bool Cpub::addDataToDatabase() {
    QSqlQuery query;

    query.prepare("INSERT INTO PUBLICITE (ID, NOM, PUBDESC, CANAL, PRIX, DATEPUB, DUREE, TEMPS, IDSOC) "
                  "VALUES (:id, :nom, :pubdesc, :canal, :prix, :datePub, :duree, :temps, :idsoc)");

    query.bindValue(":id", id);
    query.bindValue(":nom", nom);
    query.bindValue(":pubdesc", PUBDESC);
    query.bindValue(":canal", canal);
    query.bindValue(":prix", prix);
    query.bindValue(":datePub", date);
    query.bindValue(":duree", duree);
    query.bindValue(":temps", temps);
    query.bindValue(":idsoc", IDSOC);

    return query.exec();
}


bool Cpub::updateDataInDatabase() {
    QSqlQuery query;

    // Update the Cpub object's properties
    setNom(nom);
    setPUBDESC(PUBDESC);
    setCanal(canal);
    setPrix(prix);
    setDatePub(date);
    setDuree(duree);
    setTemps(temps);

    // Prepare the SQL query
    query.prepare("UPDATE PUBLICITE "
                  "SET NOM = :nom, "
                  "PUBDESC = :pubdesc, "
                  "CANAL = :canal, "
                  "PRIX = :prix, "
                  "DATEPUB = :datePub, "
                  "DUREE = :duree, "
                  "TEMPS = :temps "
                  "WHERE ID = :id");

    // Bind values to the parameters
    query.bindValue(":id", id);
    query.bindValue(":nom", getNom());
    query.bindValue(":pubdesc", getPUBDESC());
    query.bindValue(":canal", getCanal());
    query.bindValue(":prix", getPrix());
    query.bindValue(":datePub", getDatePub());
    query.bindValue(":duree", getDuree());
    query.bindValue(":temps", getTemps());

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

bool Cpub::updateIDSOCInDatabase(const QString& IDSOC) {
    QSqlQuery query;
    query.prepare("UPDATE publicite SET IDSOC = :IDSOC WHERE id = :id");
    query.bindValue(":IDSOC", IDSOC);
    query.bindValue(":id", this->id);
    return query.exec();
}


//setters and getters

// Setters
void Cpub::setId(int id) {
    this->id = id;
}

void Cpub::setNom(const QString &nom) {
    this->nom = nom;
}

void Cpub::setCanal(const QString &canal) {
    this->canal = canal;
}

void Cpub::setPUBDESC(const QString PUBDESC){
    this->PUBDESC = PUBDESC;
}

void Cpub::setPrix(int prix) {
    this->prix = prix;
}

void Cpub::setDatePub(const QDate &date) {
    this->date = date;
}


void Cpub::setDuree(const QString &duree) {
    this->duree = duree;
}

void Cpub::setTemps(const QString &temps) {
    this->temps = temps;
}

// Getters
int Cpub::getId() const {
    return id;
}

QString Cpub::getNom() const {
    return nom;
}

QString Cpub::getCanal() const {
    return canal;
}

QString Cpub::getPUBDESC() const {
    return PUBDESC;
}

int Cpub::getPrix() const {
    return prix;
}

QDate Cpub::getDatePub() const {
    return date;
}

QString Cpub::getDuree() const {
    return duree;
}

QString Cpub::getTemps() const {
    return temps;
}

void Cpub::setIDSOC(const QString& idsoc) {
    IDSOC = idsoc;
}

QString Cpub::getIDSOC() {
    return IDSOC;
}

bool Cpub::deleteFromPubProg(int idPub) {
    QSqlQuery query;
    query.prepare("DELETE FROM PUBPROG WHERE IDPUB = :idPub");
    query.bindValue(":idPub", idPub);
    return query.exec();
}

bool Cpub::deleteDataFromDatabase() {
    QSqlDatabase::database().transaction(); // Begin transaction

    bool success = false;
    QSqlQuery query; // Declare query object here

    // Delete from PUBPROG first
    if (deleteFromPubProg(id)) {
        query.prepare("DELETE FROM PUBLICITE WHERE ID = :id");
        query.bindValue(":id", id);

        success = query.exec();
        if (!success) {
            qDebug() << "Error deleting record from PUBLICITE:" << query.lastError().text();
            qDebug() << "Query:" << query.lastQuery();
        }
    } else {
        qDebug() << "Error deleting record from PUBPROG:" << query.lastError().text();
        qDebug() << "Query:" << query.lastQuery();
    }

    if (success) {
        QSqlDatabase::database().commit(); // Commit transaction
        qDebug() << "Record deleted successfully";
    } else {
        QSqlDatabase::database().rollback(); // Rollback transaction
        qDebug() << "Error deleting record";
    }

    return success;
}



QSqlQueryModel* Cpub::afficher() {
    QSqlQueryModel *model = new QSqlQueryModel();

    model->setQuery("SELECT ID, IDSOC, NOM, PUBDESC, CANAL, PRIX, DATEPUB, DUREE, TEMPS FROM PUBLICITE");

    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("IDSOC"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Nom"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("PUBDESC"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("Canal"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("Prix"));
    model->setHeaderData(6, Qt::Horizontal, QObject::tr("DatePub"));
    model->setHeaderData(7, Qt::Horizontal, QObject::tr("Duree"));
    model->setHeaderData(8, Qt::Horizontal, QObject::tr("Temps"));

    return model;
}

QSqlQueryModel* Cpub::afficherSociete() {
    QSqlQueryModel *model = new QSqlQueryModel();
    model->setQuery("SELECT IDSOC, NOM, EMAIL, INDUSTRIE, ADRESSE, PERS, NUMERO, SITE FROM SOCI");

    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID Société"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Email"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Industrie"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("Adresse"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("Personne de Contact"));
    model->setHeaderData(6, Qt::Horizontal, QObject::tr("Numéro"));
    model->setHeaderData(7, Qt::Horizontal, QObject::tr("Site Web"));

    return model;
}
