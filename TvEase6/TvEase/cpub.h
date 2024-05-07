#ifndef CPUB_H
#define CPUB_H
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QDate>
#include <QTime>

class Cpub
{


public:
    Cpub();
    Cpub(int,QString,QString,QString,int,QDate,QString,QString,QString);
    bool addDataToDatabase();
    bool updateDataInDatabase();
    QSqlQueryModel* afficher();
    QSqlQueryModel* afficherSociete();
    bool updateIDSOCInDatabase(const QString& IDSOC);
    bool deleteFromPubProg(int idPub);



        void setId(int id);
        void setNom(const QString &nom);
        void setCanal(const QString &canal);
        void setPUBDESC(const QString PUBDESC);
        void setPrix(int prix);
        void setDatePub(const QDate &date);
        void setDuree(const QString &duree);
        void setTemps(const QString &temps);
        void setIDSOC(const QString& idsoc);


        // Getters
        int getId() const;
        QString getNom() const;
        QString getCanal() const;
        QString getPUBDESC() const;
        int getPrix() const;
        QDate getDatePub() const;
        QString getDuree() const;
        QString getTemps() const;
        bool deleteDataFromDatabase();
        QString getIDSOC();

private:
    int id;
    QString nom,canal,PUBDESC;
    int prix;
    QDate date;
    QString duree,temps;
    QString IDSOC;


};


#endif // CPUB_H
