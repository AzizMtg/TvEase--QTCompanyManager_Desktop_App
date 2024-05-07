#include "cpersonnel.h"
#include <QDebug>

#include<QSqlRecord>
#include<QSqlQueryModel>
#include<QSqlError>
#include<QMessageBox>
// cin nom prenom numero_telephone adresse etat_civil date_naissance adresse_mail role type salaire password_personnel
Cpersonnel::Cpersonnel() {
   cin = "";
    nom = "";
    prenom = "";
    numero_telephone = "";
    adresse = "";
    etat_civil = "";
    date_naissance = ""; // Initialize with a default-constructed QDate
    adresse_mail = "";
    role = "";
    type = "";
    salaire = ""; // Initialize with 0.0 for a floating-point value
    password_personnel = "";
    code_park = "" ;
}

Cpersonnel::Cpersonnel(QString cin,QString nom,QString prenom,QString numero_telephone,QString adresse,QString etat_civil,QString date_naissance,QString adresse_mail,QString role,QString type,QString salaire,QString password_personnel ,QString code_park)
{
 this->cin  =cin ;
 this->nom  =nom ;
 this->prenom  =prenom ;
 this->numero_telephone  =numero_telephone ;
 this->adresse  =adresse ;
 this->etat_civil  =etat_civil ;
 this->date_naissance  =date_naissance ;
 this->adresse_mail  =adresse_mail ;
 this->role  =role ;
 this->type  =type ;
 this->salaire =salaire ;
 this->password_personnel =password_personnel ;
 this->code_park = code_park ;

}
// get function
QString Cpersonnel:: get_cin() {return cin ;}
QString Cpersonnel:: get_nom() {return  nom;}
QString Cpersonnel:: get_prenom() {return  prenom ;}
QString Cpersonnel:: get_numero_telephone() {return numero_telephone ;}
QString Cpersonnel:: get_adresse() {return  adresse ; }
QString Cpersonnel:: get_etat_civil() {return etat_civil ;}
QString   Cpersonnel:: get_date_naissance() {return  date_naissance ; }
QString Cpersonnel:: get_adresse_mail() {return  adresse_mail ;}
QString Cpersonnel:: get_role() { return role ; }
QString Cpersonnel:: get_type() {return  type;}
QString   Cpersonnel:: get_salaire() {return  salaire ; }
QString Cpersonnel:: get_password_personnel() {return  password_personnel ; }

///////////////////////////////////////////////////////////////AJOUTER///////////////////////////////////////////////////////////////////
// cin nom prenom numero_telephone adresse etat_civil date_naissance adresse_mail role type salaire password_personnel
// fonction CRUD
bool Cpersonnel::ajouter() {
    QSqlQuery query;

      // Check if the cin already exists
      QSqlQuery checkQuery;
      checkQuery.prepare("SELECT cin_personelle FROM personelles WHERE cin_personelle = :cin");
      checkQuery.bindValue(":cin", cin);
      if (checkQuery.exec() && checkQuery.next()) {
          // The cin already exists, display a message box
          QMessageBox::warning(nullptr, "Erreur", "Le cin existe déjà!");
          return false;
      }

      query.prepare("INSERT INTO personelles (cin_personelle, nom_personelle, prenom_personelle, numero_telephone_personelle, adresse_personelle, etat_civil_personelle, date_naissance_personelle, adresse_mail_personelle, role_personelle, type_personelle, salaire_personelle, password_personelle , code_park) VALUES (:cin, :nom, :prenom, :numero_telephone, :adresse, :etat_civil, :date_naissance, :adresse_mail, :role, :type, :salaire, :password_personnel ,:code_park)");

      // Bind values to parameters in a prepared SQL query
      query.bindValue(":cin", cin);
      query.bindValue(":nom", nom);
      query.bindValue(":prenom", prenom);
      query.bindValue(":numero_telephone", numero_telephone);
      query.bindValue(":adresse", adresse);
      query.bindValue(":etat_civil", etat_civil);
      query.bindValue(":date_naissance", date_naissance);
      query.bindValue(":adresse_mail", adresse_mail);
      query.bindValue(":role", role);
      query.bindValue(":type", type);
      query.bindValue(":salaire", salaire);
      query.bindValue(":password_personnel", password_personnel);
      query.bindValue(":code_park",code_park);

      return query.exec();
}


////////////////////////////////////////////////////////////////AFFICHER///////////////////////////////////////////////////////////////////

// fonction lister afficher
 QSqlQueryModel *Cpersonnel::afficher()
 {
    QSqlQueryModel *model = new QSqlQueryModel() ;

   // model->setQuery("select *from personelles") ;
    model->setQuery("SELECT cin_personelle, nom_personelle, prenom_personelle, numero_telephone_personelle, adresse_personelle, etat_civil_personelle, date_naissance_personelle, adresse_mail_personelle, role_personelle, type_personelle, salaire_personelle ,code_park FROM personelles");

    model->setHeaderData(0, Qt::Horizontal, QObject::tr("CIN"));
       model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom"));
       model->setHeaderData(2, Qt::Horizontal, QObject::tr("Prenom"));
       model->setHeaderData(3, Qt::Horizontal, QObject::tr("Telephone"));
       model->setHeaderData(4, Qt::Horizontal, QObject::tr("Adresse"));
       model->setHeaderData(5, Qt::Horizontal, QObject::tr("Etat Civil"));
       model->setHeaderData(6, Qt::Horizontal, QObject::tr("Date de Naissance"));
       model->setHeaderData(7, Qt::Horizontal, QObject::tr("E-mail"));
       model->setHeaderData(8, Qt::Horizontal, QObject::tr("Role"));
       model->setHeaderData(9, Qt::Horizontal, QObject::tr("Type"));
       model->setHeaderData(10, Qt::Horizontal, QObject::tr("Salaire"));
       model->setHeaderData(10, Qt::Horizontal, QObject::tr("code_park"));


    return model ;
 }

///////////////////////////////////////////////////////////////SUPPRIMER///////////////////////////////////////////////////////////////////

// fonction supprimer
 bool Cpersonnel::supprimer(QString cin) {
     QSqlQuery query;
     query.prepare("DELETE FROM personelles WHERE cin_personelle = :cin");
     query.bindValue(":cin", cin);

     if (query.exec()) {
            if (query.numRowsAffected() > 0) {
                return true;  // At least one row was deleted
            } else {
                return false; // No rows were affected
            }
        } else {
            return false; // Error executing the query
        }
 }

///////////////////////////////////////////////////////////////MODIFIER///////////////////////////////////////////////////////////////////
// modifier

 bool Cpersonnel::modifier(QString cin, QString nom, QString prenom, QString numero_telephone, QString adresse, QString etat_civil, QString date_naissance, QString adresse_mail, QString role, QString type, QString salaire , QString code_park)
 {
     // kan fama 7ajet far8in
     if (cin.isEmpty() || nom.isEmpty() || prenom.isEmpty() || numero_telephone.isEmpty() || adresse.isEmpty() || etat_civil.isEmpty() || date_naissance.isEmpty() || adresse_mail.isEmpty() || role.isEmpty() || type.isEmpty()) {
            return false; // Return false indicating insufficient data
        }

     QSqlQuery query;
     query.prepare("UPDATE personelles SET nom_personelle = :nom, prenom_personelle = :prenom, numero_telephone_personelle = :numero_telephone, adresse_personelle = :adresse, etat_civil_personelle = :etat_civil, date_naissance_personelle = :date_naissance, adresse_mail_personelle = :adresse_mail, role_personelle = :role, type_personelle = :type, salaire_personelle = :salaire ,code_park = :code_park WHERE cin_personelle = :cin");
     query.bindValue(":nom", nom);
     query.bindValue(":prenom", prenom);
     query.bindValue(":numero_telephone", numero_telephone);
     query.bindValue(":adresse", adresse);
     query.bindValue(":etat_civil", etat_civil);
     query.bindValue(":date_naissance", date_naissance);
     query.bindValue(":adresse_mail", adresse_mail);
     query.bindValue(":role", role);
     query.bindValue(":type", type);
     query.bindValue(":salaire", salaire);
     query.bindValue(":cin", cin);
     query.bindValue(":code_park", code_park);


     return query.exec();
 }

/// taba3 il combobox imta3 supp ajouter
 QSqlQueryModel *Cpersonnel::afficher_CIN()
 {
    QSqlQueryModel *model = new QSqlQueryModel() ;

   // model->setQuery("select *from personelles") ;
    model->setQuery("SELECT cin_personelle FROM personelles");

    model->setHeaderData(0, Qt::Horizontal, QObject::tr("CIN"));


    return model ;
 }
/// taba3 il lister imta3 cin
 QSqlRecord Cpersonnel::afficher_ONE_CIN(QString condition) {
     QSqlQuery query;
     query.prepare("SELECT cin_personelle, nom_personelle, prenom_personelle, "
                   "numero_telephone_personelle, adresse_personelle, "
                   "etat_civil_personelle, date_naissance_personelle, "
                   "adresse_mail_personelle, role_personelle, type_personelle, "
                   "salaire_personelle , code_park FROM personelles WHERE cin_personelle = :condition");
     query.bindValue(":condition", condition);
     query.exec();

     if (query.next()) {
         return query.record();
     } else {
         // Return an empty QSqlRecord if no record is found
         return QSqlRecord();
     }
 }

////////////////////////////////////// TABA3 IL METIER ////////////////////
///recherche imta3 il tableau itlawej 3ala 7aja tiktibha
 QSqlQueryModel* Cpersonnel::afficher_recherche(QString valeur)
 {
     QSqlQueryModel* model = new QSqlQueryModel();
     QSqlQuery query;

     query.prepare("SELECT cin_personelle, nom_personelle, prenom_personelle, numero_telephone_personelle, adresse_personelle, etat_civil_personelle, date_naissance_personelle, adresse_mail_personelle, role_personelle, type_personelle, salaire_personelle ,code_park FROM personelles WHERE LOWER(cin_personelle) LIKE LOWER(:valeur) OR LOWER(nom_personelle) LIKE LOWER(:valeur) OR LOWER(prenom_personelle) LIKE LOWER(:valeur) OR LOWER(numero_telephone_personelle) LIKE LOWER(:valeur) OR LOWER(adresse_personelle) LIKE LOWER(:valeur) OR LOWER(etat_civil_personelle) LIKE LOWER(:valeur) OR LOWER(date_naissance_personelle) LIKE LOWER(:valeur) OR LOWER(adresse_mail_personelle) LIKE LOWER(:valeur) OR LOWER(role_personelle) LIKE LOWER(:valeur) OR LOWER(type_personelle) LIKE LOWER(:valeur) OR LOWER(salaire_personelle) LIKE LOWER(:valeur) OR LOWER(code_park) LIKE LOWER(:valeur)");

     query.bindValue(":valeur", "%" + valeur.toLower() + "%"); // Convert search value to lowercase and add wildcard characters for partial matching

     if (!query.exec()) {
         qDebug() << "Erreur lors de l'exécution de la requête :" << query.lastError().text();
         delete model;
         return nullptr;
     }

     model->setQuery(query);
     model->setHeaderData(0, Qt::Horizontal, QObject::tr("CIN"));
     model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom"));
     model->setHeaderData(2, Qt::Horizontal, QObject::tr("Prenom"));
     model->setHeaderData(3, Qt::Horizontal, QObject::tr("Telephone"));
     model->setHeaderData(4, Qt::Horizontal, QObject::tr("Adresse"));
     model->setHeaderData(5, Qt::Horizontal, QObject::tr("Etat Civil"));
     model->setHeaderData(6, Qt::Horizontal, QObject::tr("Date de Naissance"));
     model->setHeaderData(7, Qt::Horizontal, QObject::tr("E-mail"));
     model->setHeaderData(8, Qt::Horizontal, QObject::tr("Role"));
     model->setHeaderData(9, Qt::Horizontal, QObject::tr("Type"));
     model->setHeaderData(10, Qt::Horizontal, QObject::tr("Salaire"));
     model->setHeaderData(10, Qt::Horizontal, QObject::tr("code_park"));

     return model;
 }

/// il trie imta3 il tableau
//trie par salaire trie decroissant
 QSqlQueryModel *Cpersonnel::trie_salaire()
 {
     QSqlQueryModel *model = new QSqlQueryModel();

     QString queryStr = "SELECT cin_personelle, nom_personelle, prenom_personelle, numero_telephone_personelle, adresse_personelle, etat_civil_personelle, date_naissance_personelle, adresse_mail_personelle, role_personelle, type_personelle, salaire_personelle , code_park FROM personelles ORDER BY salaire_personelle+0 DESC";

     model->setQuery(queryStr);

     model->setHeaderData(0, Qt::Horizontal, QObject::tr("CIN"));
     model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom"));
     model->setHeaderData(2, Qt::Horizontal, QObject::tr("Prenom"));
     model->setHeaderData(3, Qt::Horizontal, QObject::tr("Telephone"));
     model->setHeaderData(4, Qt::Horizontal, QObject::tr("Adresse"));
     model->setHeaderData(5, Qt::Horizontal, QObject::tr("Etat Civil"));
     model->setHeaderData(6, Qt::Horizontal, QObject::tr("Date de Naissance"));
     model->setHeaderData(7, Qt::Horizontal, QObject::tr("E-mail"));
     model->setHeaderData(8, Qt::Horizontal, QObject::tr("Role"));
     model->setHeaderData(9, Qt::Horizontal, QObject::tr("Type"));
     model->setHeaderData(10, Qt::Horizontal, QObject::tr("Salaire"));
     model->setHeaderData(10, Qt::Horizontal, QObject::tr("code_park"));


     return model;
 }
// trie par cin decroissant
 QSqlQueryModel *Cpersonnel::trie_cin()
 {
     QSqlQueryModel *model = new QSqlQueryModel();

     QString queryStr = "SELECT cin_personelle, nom_personelle, prenom_personelle, numero_telephone_personelle, adresse_personelle, etat_civil_personelle, date_naissance_personelle, adresse_mail_personelle, role_personelle, type_personelle, salaire_personelle , code_park FROM personelles ORDER BY cin_personelle+0 DESC";

     model->setQuery(queryStr);

     model->setHeaderData(0, Qt::Horizontal, QObject::tr("CIN"));
     model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom"));
     model->setHeaderData(2, Qt::Horizontal, QObject::tr("Prenom"));
     model->setHeaderData(3, Qt::Horizontal, QObject::tr("Telephone"));
     model->setHeaderData(4, Qt::Horizontal, QObject::tr("Adresse"));
     model->setHeaderData(5, Qt::Horizontal, QObject::tr("Etat Civil"));
     model->setHeaderData(6, Qt::Horizontal, QObject::tr("Date de Naissance"));
     model->setHeaderData(7, Qt::Horizontal, QObject::tr("E-mail"));
     model->setHeaderData(8, Qt::Horizontal, QObject::tr("Role"));
     model->setHeaderData(9, Qt::Horizontal, QObject::tr("Type"));
     model->setHeaderData(10, Qt::Horizontal, QObject::tr("Salaire"));
     model->setHeaderData(10, Qt::Horizontal, QObject::tr("code_park"));


     return model;
 }

// trie par date naissnce decroissant
 QSqlQueryModel *Cpersonnel::trie_date_naissance()
 {
     QSqlQueryModel *model = new QSqlQueryModel();

     QString queryStr = "SELECT cin_personelle, nom_personelle, prenom_personelle, numero_telephone_personelle, adresse_personelle, etat_civil_personelle, date_naissance_personelle, adresse_mail_personelle, role_personelle, type_personelle, salaire_personelle , code_park FROM personelles ORDER BY date_naissance_personelle DESC";

     model->setQuery(queryStr);

     model->setHeaderData(0, Qt::Horizontal, QObject::tr("CIN"));
     model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom"));
     model->setHeaderData(2, Qt::Horizontal, QObject::tr("Prenom"));
     model->setHeaderData(3, Qt::Horizontal, QObject::tr("Telephone"));
     model->setHeaderData(4, Qt::Horizontal, QObject::tr("Adresse"));
     model->setHeaderData(5, Qt::Horizontal, QObject::tr("Etat Civil"));
     model->setHeaderData(6, Qt::Horizontal, QObject::tr("Date de Naissance"));
     model->setHeaderData(7, Qt::Horizontal, QObject::tr("E-mail"));
     model->setHeaderData(8, Qt::Horizontal, QObject::tr("Role"));
     model->setHeaderData(9, Qt::Horizontal, QObject::tr("Type"));
     model->setHeaderData(10, Qt::Horizontal, QObject::tr("Salaire"));
     model->setHeaderData(10, Qt::Horizontal, QObject::tr("code_park"));


     return model;
 }
 ///////////////////////////////////
 //trie par salaire trie croissant
  QSqlQueryModel *Cpersonnel::trie_croissant_salaire()
  {
      QSqlQueryModel *model = new QSqlQueryModel();

      QString queryStr = "SELECT cin_personelle, nom_personelle, prenom_personelle, numero_telephone_personelle, adresse_personelle, etat_civil_personelle, date_naissance_personelle, adresse_mail_personelle, role_personelle, type_personelle, salaire_personelle , code_park FROM personelles ORDER BY salaire_personelle+0 ASC";

      model->setQuery(queryStr);

      model->setHeaderData(0, Qt::Horizontal, QObject::tr("CIN"));
      model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom"));
      model->setHeaderData(2, Qt::Horizontal, QObject::tr("Prenom"));
      model->setHeaderData(3, Qt::Horizontal, QObject::tr("Telephone"));
      model->setHeaderData(4, Qt::Horizontal, QObject::tr("Adresse"));
      model->setHeaderData(5, Qt::Horizontal, QObject::tr("Etat Civil"));
      model->setHeaderData(6, Qt::Horizontal, QObject::tr("Date de Naissance"));
      model->setHeaderData(7, Qt::Horizontal, QObject::tr("E-mail"));
      model->setHeaderData(8, Qt::Horizontal, QObject::tr("Role"));
      model->setHeaderData(9, Qt::Horizontal, QObject::tr("Type"));
      model->setHeaderData(10, Qt::Horizontal, QObject::tr("Salaire"));
      model->setHeaderData(10, Qt::Horizontal, QObject::tr("code_park"));


      return model;
  }
 // trie par cin croissant
  QSqlQueryModel *Cpersonnel::trie_croissant_cin()
  {
      QSqlQueryModel *model = new QSqlQueryModel();

      QString queryStr = "SELECT cin_personelle, nom_personelle, prenom_personelle, numero_telephone_personelle, adresse_personelle, etat_civil_personelle, date_naissance_personelle, adresse_mail_personelle, role_personelle, type_personelle, salaire_personelle , code_park FROM personelles ORDER BY cin_personelle+0 ASC";

      model->setQuery(queryStr);

      model->setHeaderData(0, Qt::Horizontal, QObject::tr("CIN"));
      model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom"));
      model->setHeaderData(2, Qt::Horizontal, QObject::tr("Prenom"));
      model->setHeaderData(3, Qt::Horizontal, QObject::tr("Telephone"));
      model->setHeaderData(4, Qt::Horizontal, QObject::tr("Adresse"));
      model->setHeaderData(5, Qt::Horizontal, QObject::tr("Etat Civil"));
      model->setHeaderData(6, Qt::Horizontal, QObject::tr("Date de Naissance"));
      model->setHeaderData(7, Qt::Horizontal, QObject::tr("E-mail"));
      model->setHeaderData(8, Qt::Horizontal, QObject::tr("Role"));
      model->setHeaderData(9, Qt::Horizontal, QObject::tr("Type"));
      model->setHeaderData(10, Qt::Horizontal, QObject::tr("Salaire"));
      model->setHeaderData(10, Qt::Horizontal, QObject::tr("code_park"));


      return model;
  }

 // trie par date naissnce croissant
  QSqlQueryModel *Cpersonnel::trie_croissant_date_naissance()
  {
      QSqlQueryModel *model = new QSqlQueryModel();

      QString queryStr = "SELECT cin_personelle, nom_personelle, prenom_personelle, numero_telephone_personelle, adresse_personelle, etat_civil_personelle, date_naissance_personelle, adresse_mail_personelle, role_personelle, type_personelle, salaire_personelle ,code_park FROM personelles ORDER BY date_naissance_personelle ASC";

      model->setQuery(queryStr);

      model->setHeaderData(0, Qt::Horizontal, QObject::tr("CIN"));
      model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom"));
      model->setHeaderData(2, Qt::Horizontal, QObject::tr("Prenom"));
      model->setHeaderData(3, Qt::Horizontal, QObject::tr("Telephone"));
      model->setHeaderData(4, Qt::Horizontal, QObject::tr("Adresse"));
      model->setHeaderData(5, Qt::Horizontal, QObject::tr("Etat Civil"));
      model->setHeaderData(6, Qt::Horizontal, QObject::tr("Date de Naissance"));
      model->setHeaderData(7, Qt::Horizontal, QObject::tr("E-mail"));
      model->setHeaderData(8, Qt::Horizontal, QObject::tr("Role"));
      model->setHeaderData(9, Qt::Horizontal, QObject::tr("Type"));
      model->setHeaderData(10, Qt::Horizontal, QObject::tr("Salaire"));
      model->setHeaderData(10, Qt::Horizontal, QObject::tr("code_park"));


      return model;
  }

  ///////////////////////// statistiuqe ///////////////////////////////////////////////
// type de contrat
void Cpersonnel::calculateContratStat(int *cdiCount, int *cddCount, int *ctpCount) {
    *cdiCount = 0;
    *cddCount = 0;
    *ctpCount = 0;

    // Exécuter la requête pour récupérer les types de contrat de tous les employés
    QSqlQuery query("SELECT type_personelle FROM personelles");

    // Itérer à travers les résultats et compter le nombre de chaque type de contrat
    while (query.next()) {
        QString contratType = query.value(0).toString().trimmed();
        if (contratType == "Contrat a duree indeterminee (CDI)")
            (*cdiCount)++;
        else if (contratType == "Contrat a duree determinee (CDD)")
            (*cddCount)++;
        else if (contratType == "Contrat de travail temporaire")
            (*ctpCount)++;
    }

    // Afficher le nombre de contrats de chaque type
    qDebug() << "Nombre de contrats CDI : " << *cdiCount;
    qDebug() << "Nombre de contrats CDD : " << *cddCount;
    qDebug() << "Nombre de contrats CTP : " << *ctpCount;
}
// type de personnel
void Cpersonnel::calculateTypeStat(int *adminP, int *RC, int *Rinter) {
    *adminP = 0;
    *RC = 0;
    *Rinter = 0;

    // Exécuter la requête pour récupérer les types de poste de tous les employés
    QSqlQuery query("SELECT role_personelle FROM personelles");

    // Itérer à travers les résultats et compter le nombre de chaque type de poste
    while (query.next()) {
        QString posteType = query.value(0).toString().trimmed();
        if (posteType == "Admin principal")
            (*adminP)++;
        else if (posteType == "Responsable clientele")
            (*RC)++;
        else if (posteType == "Responsable interne")
            (*Rinter)++;
    }

    // Afficher le nombre de postes de chaque type
    qDebug() << "Nombre d'Admins principaux : " << *adminP;
    qDebug() << "Nombre de Responsables clientèle : " << *RC;
    qDebug() << "Nombre de Responsables internes : " << *Rinter;
}


