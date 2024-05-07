#include "cstudio.h"
#include <QDebug>
#include<QSqlError>
Cstudio::Cstudio()
{
ids="";
loc="";
type="";
etat="";
capacite=0;
}

Cstudio::Cstudio(QString ids,QString loc,QString type,QString etat,int capacite)
{
     this->ids=ids;
     this->loc=loc;
     this->type=type;
     this->etat=etat;
     this->capacite=capacite;
}
QString Cstudio::get_ids()
{
    return  ids ;
}

QString Cstudio::get_loc()
{
    return loc;
}

QString Cstudio::get_etat()
{
    return etat;
}
QString Cstudio::get_type()
{
    return type;

}
int Cstudio::get_capacite()
{
    return capacite;
}
bool Cstudio::ajouter()
{
   QSqlQuery query ;
   query.prepare("INSERT INTO studio (ids, localisation,type ,etat,  capacite) VALUES (:ids, :loc, :type, :etat, :capacite)");

   query.bindValue(":ids", ids);
   query.bindValue(":loc", loc);
   query.bindValue(":type", type);
   query.bindValue(":etat", etat);
   query.bindValue(":capacite", capacite);

   if (!query.exec()) {
       qDebug() << "Error executing query:" << query.lastError().text();
       return false;
   }

   return true;
}
QSqlQueryModel* Cstudio::afficher()
{
   QSqlQueryModel* model = new QSqlQueryModel();


   model->setQuery("SELECT * FROM studio");

   if (model->lastError().isValid()) {
       qDebug() << "Error executing query:" << model->lastError().text();
       delete model;
       return nullptr;
   }

   // Set header data for each column

   model->setHeaderData(0, Qt::Horizontal, QObject::tr("ids"));
   model->setHeaderData(1, Qt::Horizontal, QObject::tr("loc"));
   model->setHeaderData(2, Qt::Horizontal, QObject::tr("type"));
   model->setHeaderData(3, Qt::Horizontal, QObject::tr("etat"));
   model->setHeaderData(4, Qt::Horizontal, QObject::tr("capacite"));

   return model;
}

// fonction supprimer
 bool Cstudio::supprimer(QString ids) {
     QSqlQuery query;
     query.prepare("DELETE FROM studio WHERE IDS = :ids");
     query.bindValue(":ids", ids);

     return query.exec();
 }


 bool Cstudio::modifier(QString ids,QString loc,QString type,QString etat,int capacite ) {
     QSqlQuery query;

     // Vérifier d'abord si l'ID existe
     QSqlQuery checkQuery;
     checkQuery.prepare("SELECT *  FROM studio WHERE ids = :ids");
     checkQuery.bindValue(":ids", ids);
     checkQuery.exec();
     checkQuery.next();
     int count = checkQuery.value(0).toInt();

     if (count == 0) {
         qDebug() << "L'ID spécifié n'existe pas.";
         return false; // ID n'existe pas, retourner false
     }


     query.prepare("UPDATE studio SET  LOCALISATION = :loc,TYPE=:type, ETAT = :etat, CAPACITE=:capacite WHERE IDS=:ids");



     query.bindValue(":ids", ids);
     query.bindValue(":loc", loc);
     query.bindValue(":type", type);
     query.bindValue(":etat", etat);

     query.bindValue(":capacite", capacite);


     bool success = query.exec();
     if (!success) {
         qDebug() << "Erreur lors de la mise à jour de l'enregistrement:" << query.lastError().text();
         qDebug() << "Requête:" << query.lastQuery();
     } else {
         qDebug() << "Enregistrement mis à jour avec succès";
     }

     return success;
 }
 QSqlQueryModel* Cstudio::recherche(QString valeur)
  {
      QSqlQueryModel* model = new QSqlQueryModel();
      QSqlQuery query;

      query.prepare("SELECT ids, localisation, type, etat, capacite FROM studio WHERE ids LIKE :valeur OR localisation LIKE :valeur OR etat LIKE :valeur OR type LIKE :valeur OR capacite LIKE :valeur");

      query.bindValue(":valeur", "%" + valeur + "%"); // Ajout des caractères de joker pour une recherche partielle

      if (!query.exec()) {
          qDebug() << "Erreur lors de l'exécution de la requête :" << query.lastError().text();
          delete model;
          return nullptr;
      }

      model->setHeaderData(0, Qt::Horizontal, QObject::tr("ids"));
      model->setHeaderData(1, Qt::Horizontal, QObject::tr("loc"));
      model->setHeaderData(2, Qt::Horizontal, QObject::tr("type"));
      model->setHeaderData(3, Qt::Horizontal, QObject::tr("etat"));
      model->setHeaderData(4, Qt::Horizontal, QObject::tr("capacite"));


      return model;
  }
 bool Cstudio::studioExists(const QString& ids)
 {
     QSqlQuery query;
     query.prepare("SELECT COUNT(*) FROM studio WHERE ids = :ids");
     query.bindValue(":ids", ids);

     if (query.exec() && query.next()) {
         int count = query.value(0).toInt();
         return count > 0;
     } else {
         qDebug() << "Error checking if studio exists:" << query.lastError().text();
         return false;
     }
 }

 QSqlQueryModel *Cstudio::trie_cap()
  {
      QSqlQueryModel *model = new QSqlQueryModel();

      QString queryStr = "SELECT ids, localisation, type , etat,  capacite FROM studio ORDER BY CAST(capacite AS DECIMAL) DESC";

      model->setQuery(queryStr);


      model->setHeaderData(0, Qt::Horizontal, QObject::tr("ids"));
      model->setHeaderData(1, Qt::Horizontal, QObject::tr("loc"));
      model->setHeaderData(2, Qt::Horizontal, QObject::tr("type"));
      model->setHeaderData(3, Qt::Horizontal, QObject::tr("etat"));
      model->setHeaderData(4, Qt::Horizontal, QObject::tr("capacite"));

      return model;
  }
 QSqlQueryModel *Cstudio::trie_type()
 {
     QSqlQueryModel *model = new QSqlQueryModel();

     QString queryStr = "SELECT ids, localisation, type, etat,  capacite FROM studio ORDER BY type DESC";

     model->setQuery(queryStr);


     model->setHeaderData(0, Qt::Horizontal, QObject::tr("ids"));
     model->setHeaderData(1, Qt::Horizontal, QObject::tr("loc"));
     model->setHeaderData(2, Qt::Horizontal, QObject::tr("type"));
     model->setHeaderData(3, Qt::Horizontal, QObject::tr("etat"));
     model->setHeaderData(4, Qt::Horizontal, QObject::tr("capacite"));

     return model;
 }
 QSqlQueryModel *Cstudio::trie_etat()
 {
     QSqlQueryModel *model = new QSqlQueryModel();

     QString queryStr = "SELECT ids, localisation, type, etat,  capacite FROM studio ORDER BY etat DESC";

     model->setQuery(queryStr);


     model->setHeaderData(0, Qt::Horizontal, QObject::tr("ids"));
     model->setHeaderData(1, Qt::Horizontal, QObject::tr("loc"));
     model->setHeaderData(2, Qt::Horizontal, QObject::tr("type"));
     model->setHeaderData(3, Qt::Horizontal, QObject::tr("etat"));
     model->setHeaderData(4, Qt::Horizontal, QObject::tr("capacite"));

     return model;
 }
 void Cstudio::calculateTypestudio(int *recod_sd, int *film_sd, int *pho_sd , int *dance_sd ,int *art_sd, int *music_sd, int *prod_sd , int *broad_sd , int *design_sd , int *gaming_sd ) {

      *recod_sd=0;
     *film_sd =0;
     *pho_sd=0 ;
     *dance_sd=0 ;
      *art_sd=0;
      *music_sd=0;
     *prod_sd =0;
      *broad_sd=0 ;
      *design_sd=0 ;
      *gaming_sd=0;

     // Exécuter la requête pour récupérer les types de poste de tous les employés
     QSqlQuery query("SELECT etat FROM studio");

     // Itérer à travers les résultats et compter le nombre de chaque type de poste
     while (query.next()) {
         QString posteType = query.value(0).toString().trimmed();
         if (posteType == "Recording Studio")
             (*recod_sd)++;
         else if (posteType == "Film Studio")
             ( *film_sd)++;
         else if (posteType == "Photography Studio")
             ( *pho_sd)++;
         else if (posteType == "Dance Studio")
             (*dance_sd)++;
         else if (posteType == "Art Studio")
             (*art_sd)++;
         else if (posteType == "Music Studio")
             (  *music_sd)++;
         else if (posteType == "Production Studio")
             ( *prod_sd)++;
         else if (posteType == "Broadcast Studio")
             (*broad_sd)++;
         else if (posteType == "Design Studio")
             (*design_sd)++;
         else if (posteType == "Gaming Studio")
             (*gaming_sd)++;



     }

     // Afficher le nombre de postes de chaque type
     qDebug() << "nb Recording Studio" << *recod_sd;
     qDebug() << "nb Film Studio" << *film_sd;
     qDebug() << "nb Photography Studio" << *pho_sd;
     qDebug() << "nb Dance Studio" << *dance_sd;
     qDebug() << "nb Art Studio" << *art_sd;
     qDebug() << "nb Music Studio" << *music_sd;
     qDebug() << "nb Production Studio" << *prod_sd;
     qDebug() << "nb Broadcast Studio" << *broad_sd;
     qDebug() << "nb Design Studio" << *design_sd;
     qDebug() << "nb Gaming Studio" << *gaming_sd;

 }
