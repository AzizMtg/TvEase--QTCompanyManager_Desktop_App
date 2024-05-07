#ifndef CABONNEMENT_H
#define CABONNEMENT_H
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QDate>
#include <QSqlRecord>
#include <QtCharts>
#include<QChartView>
#include<QPieSeries>
class cabonnement
{int id_abonnement,numero_abonnement,id_auditeur;
    QString Type_abonnement;
    QDate Date_debut,Date_expiration;
public:
    cabonnement(){}
    cabonnement(int,int,QDate,QDate,QString,int);
    //getters
    int getId_abonnement(){return id_abonnement;}
    int getNum_abonnement(){return numero_abonnement;}
    QDate getDate_debut(){return Date_debut;}
    QDate getDate_expiration(){return Date_expiration;}
    QString getType_abonnement(){return Type_abonnement;}
    //setters
    void setId_abonnement(int id){ this->id_abonnement=id;}
    void setNum_abonnement(int n){ numero_abonnement=n;}
    void setDate_debut(QDate dd){ Date_debut=dd;}
    void setDate_expiration(QDate de){ Date_expiration=de;}
    void setType_abonnement(QString t){Type_abonnement=t;}
    //fonctions
    bool ajouter_abonnement();
    QSqlQueryModel *afficher_abonnement();
    int generateUniqueNumber();
    bool supprimer_abonnement(int);
    QSqlRecord rechercher_abonnement(int id);

      // Fonction de modification
      bool modifier_abonnement(int id, QString& numero,  QString& dateDebut,  QString& dateExpiration,  QString& type);

      //fonction filtre

      QSqlQueryModel* afficher_abonnementOrderByExpiration();
      QSqlQueryModel* afficher_abonnementsPremium();
      QSqlQueryModel* afficher_abonnementsFamily();
      QSqlQueryModel* afficher_abonnementsStandard();
      QSqlQueryModel* afficher_abonnements_groupes();
      //fonction recherche
      QSqlQueryModel* rechercherdansAbonnement( QString valeur);
      //charte
      bool recuperer_donnees_types_abonnement(QPieSeries *series);
      //historique
      bool ajouter_historique(int Numero);
      QStandardItemModel*  afficher_historique();
      bool supprimer_historique(int numero_abonnement);

      bool modifier_historique(int numero_abonnement) ;
};

#endif // CABONNEMENT_H
