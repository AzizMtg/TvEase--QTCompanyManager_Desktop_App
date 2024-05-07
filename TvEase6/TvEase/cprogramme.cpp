#include "cprogramme.h"
#include <QDebug>
#include <QtSql/QSqlQuery>
#include <QSqlError>
#include <QTextCharFormat>
#include <QCalendarWidget>

cprogramme::cprogramme()
{

ID_PROGRAMME=0;
NOMBRE_PIECE=0;
Duree=0;

NOM="";
SECTION="";
TYPE="";
DATE_Diffusion="";

CIN_PERSONELLE="";

}


cprogramme::cprogramme(QString NOM ,QString SECTION, QString TYPE, QString DATE_Diffusion ,int ID_PROGRAMME,int NOMBRE_PIECE, int Duree,QString CIN_PERSONELLE,QByteArray Image )
{ this->NOM= NOM ;
    this->SECTION= SECTION ;
    this-> TYPE= TYPE ;
    this-> DATE_Diffusion= DATE_Diffusion ;
  this->ID_PROGRAMME  =ID_PROGRAMME ;
  this->NOMBRE_PIECE  =NOMBRE_PIECE ;
    this->Duree =Duree ;
  this->CIN_PERSONELLE =CIN_PERSONELLE ;
    this->image = Image;


}



QString cprogramme::get_NOM()
{
    return  NOM ;
}

QString cprogramme::get_SECTION()
{
    return  SECTION ;
}


QString cprogramme::get_TYPE()
{
    return  TYPE ;
}

QString cprogramme::get_DATE_Diffusion()
{
    return  DATE_Diffusion ;
}



int cprogramme::get_ID_PROGRAMME()
{
    return  ID_PROGRAMME ;
}

int cprogramme::get_NOMBRE_PIECE()
{
    return  NOMBRE_PIECE ;
}



int cprogramme::get_Duree()
{
    return  Duree ;
}


QString cprogramme::get_CIN_PERSONELLE()
{
    return  CIN_PERSONELLE ;
}



///////////////////////////////////////////////////////////////////

void cprogramme::setNOM(const QString &NOM) {

    this->NOM = NOM;
}

void cprogramme::setSECTION(const QString &SECTION) {
    this->SECTION = SECTION;
}

void cprogramme::setTYPE(const QString &TYPE) {
    this->TYPE = TYPE;
}

void cprogramme::setDATE_Diffusion(const QString &DATE_Diffusion) {
    this->DATE_Diffusion = DATE_Diffusion;
}




void cprogramme::setID_PROGRAMME(int ID_PROGRAMME) {
    this->ID_PROGRAMME =ID_PROGRAMME;
}

void cprogramme::setNOMBRE_PIECE(int NOMBRE_PIECE) {
    this->NOMBRE_PIECE=NOMBRE_PIECE;
}


void cprogramme::setDuree(int Duree) {
    this->Duree= Duree;
}


void cprogramme::setCIN_PERSONELLE(const QString &CIN_PERSONELLE) {
    this->CIN_PERSONELLE = CIN_PERSONELLE;
}









///////////////////////////////////////////////////////////////////////////////////////////


bool cprogramme::ajouter(QCalendarWidget *calendarWidget)
{
    QSqlQuery query;
    query.prepare("INSERT INTO PROGRAMME (NOM, SECTION, TYPE, DATE_Diffusion, ID_PROGRAMME, NOMBRE_PIECE, Duree, CIN_PERSONELLE ,image) "
                  "VALUES (:NOM, :SECTION, :TYPE, :DATE_Diffusion, :ID_PROGRAMME, :NOMBRE_PIECE, :Duree, :CIN_PERSONELLE ,:image)");
    query.bindValue(":NOM", NOM);
    query.bindValue(":SECTION", SECTION);
    query.bindValue(":TYPE", TYPE);
    query.bindValue(":DATE_Diffusion", DATE_Diffusion); // Convertir la QDate en chaîne
    query.bindValue(":ID_PROGRAMME", ID_PROGRAMME);
    query.bindValue(":NOMBRE_PIECE", NOMBRE_PIECE);
    query.bindValue(":Duree", Duree);
    query.bindValue(":CIN_PERSONELLE", CIN_PERSONELLE);
    query.bindValue(":image",image);


    bool success = query.exec();
    if (success) {
        QTextCharFormat format;
        format.setToolTip(NOM);
        QDate date = QDate::fromString(DATE_Diffusion, "dd-MM-yyyy"); // Convertir la chaîne en QDate
        calendarWidget->setDateTextFormat(date, format);
    } else {
        qDebug() << ":Veuillez saisir un ID unique" << query.lastError().text();

    }
    return success;
}

//////////////////////////////////////////////////////////////////////////////////////////////////


bool cprogramme::supprimer(int ID_PROGRAMME) {
    QSqlQuery query;

    query.prepare("DELETE FROM PROGRAMME WHERE ID_PROGRAMME = :ID_PROGRAMME");
    query.bindValue(":ID_PROGRAMME", ID_PROGRAMME);


    if (query.exec()) {
                if (query.numRowsAffected() > 0) {
                    return true;
                } else {
                    return false;
                }
            } else {
                return false;
            }
}

///////////////////////////////////////////////////////////////////////////////


bool cprogramme::update(int ID_PROGRAMME, QString NOM, QString SECTION, QString TYPE, int NOMBRE_PIECE, int Duree, QString DATE_Diffusion, QString CIN_PERSONELLE, QByteArray image) {
    QSqlQuery query;

    // Vérifier d'abord si l'ID existe
    QSqlQuery checkQuery;
    checkQuery.prepare("SELECT * FROM PROGRAMME WHERE ID_PROGRAMME = :ID_PROGRAMME");
    checkQuery.bindValue(":ID_PROGRAMME", ID_PROGRAMME);
    checkQuery.exec();

    if (!checkQuery.next()) {
        qDebug() << "L'ID spécifié n'existe pas.";
        return false;
    }

    query.prepare("UPDATE PROGRAMME "
                  "SET NOM = :NOM, "
                  "SECTION = :SECTION, "
                  "TYPE = :TYPE, "
                  "DATE_Diffusion = :DATE_Diffusion, "
                  "NOMBRE_PIECE = :NOMBRE_PIECE, "
                  "Duree = :Duree, "
                  "CIN_PERSONELLE = :CIN_PERSONELLE, "
                  "image = :image " // Ajout de la virgule manquante
                  "WHERE ID_PROGRAMME = :ID_PROGRAMME");


    query.bindValue(":NOM", NOM);
    query.bindValue(":SECTION", SECTION);
    query.bindValue(":TYPE", TYPE);
    query.bindValue(":DATE_Diffusion", DATE_Diffusion);
    query.bindValue(":NOMBRE_PIECE", NOMBRE_PIECE);
    query.bindValue(":Duree", Duree);
    query.bindValue(":ID_PROGRAMME", ID_PROGRAMME);
    query.bindValue(":CIN_PERSONELLE", CIN_PERSONELLE);
    query.bindValue(":image", image);

    bool success = query.exec();
    if (!success) {
        qDebug() << "Erreur lors de la mise à jour de l'enregistrement:" << query.lastError().text();
        qDebug() << "Requête:" << query.lastQuery();
    } else {
        qDebug() << "Enregistrement mis à jour avec succès";
    }

    return success;
}





/////////////////////////////////////////////////////////////////////////////////////////////


QSqlQueryModel* cprogramme::afficher() {
    QSqlQueryModel *model = new QSqlQueryModel();

    model->setQuery("SELECT * from programme");

    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID_PROGRAMME"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("NOM"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("SECTION"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("TYPE"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("NOMBRE_PIECE"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("DUREE"));
    model->setHeaderData(6, Qt::Horizontal, QObject::tr("DATE_DIFFUSION"));
    model->setHeaderData(7, Qt::Horizontal, QObject::tr("CIN_PERSONELLE"));
    model->setHeaderData(8, Qt::Horizontal, QObject::tr("image"));

    return model;
}




QSqlQueryModel* cprogramme::affichercalendrier() {
    QSqlQueryModel *model = new QSqlQueryModel();

    model->setQuery("SELECT DATE_DIFFUSION, NOM FROM PROGRAMME"); // Sélectionnez uniquement les dates de diffusion et les noms

    return model;
}






////////////////////////////////////////////////////////////////////////////

QSqlQueryModel * cprogramme::tri(int tp)
{
    QSqlQueryModel *model = new QSqlQueryModel();
    QSqlQuery query;
    QString orderByClause;

    switch(tp) {
        case 1:
            orderByClause = "ID_PROGRAMME ASC";
            break;
        case 2:
            orderByClause = "SUBSTR(DATE_DIFFUSION, -4) ASC"; // Tri par année
            break;
        case 3:
            orderByClause = "NOM ASC";
            break;
        case 4:
            orderByClause = "SECTION ASC";
            break;
        case 5:
            orderByClause = "TYPE ASC";
            break;
        default:
            qDebug() << "Erreur : Type de tri invalide.";
            return nullptr;
    }

    QString queryString = "SELECT * FROM PROGRAMME ORDER BY " + orderByClause;
    query.prepare(queryString);

    if (!query.exec()) {
        qDebug() << "Erreur lors de l'exécution de la requête :" << query.lastError().text();
        return nullptr;
    }

    model->setQuery(query);
    return model;
}

//////////////////////////////////////////////////////////////////////////////////////////
QSqlQueryModel *cprogramme:: afficher_CIN_combobox()
{
    QSqlQueryModel *model = new QSqlQueryModel() ;


    model->setQuery("SELECT cin_personelle FROM personelles");

    model->setHeaderData(0, Qt::Horizontal, QObject::tr("CIN"));

    return model ;
}



///////////////////////// statistiuqe ///////////////////////////////////////////////

// type de contrat
void cprogramme::calculateTYPEprog(int *horreeur, int *suspence, int *diver , int *rom , int *roman , int *comedie , int *policier )
{  *horreeur = 0;
  *suspence = 0;
  *diver = 0;
  *rom = 0;
  *roman = 0;
  *comedie = 0;
  *policier = 0;


  // Exécuter la requête pour récupérer les types de contrat de tous les employés
  QSqlQuery query("SELECT type FROM programme");

  // Itérer à travers les résultats et compter le nombre de chaque type de contrat
  while (query.next()) {
      QString typeProg = query.value(0).toString().trimmed();
      if (typeProg == "HORREUR")
          (*horreeur)++;
      else if (typeProg == "SUSPENCE")
          (*suspence)++;
      else if (typeProg == "DIVERTISSEMENT")
          (*diver)++;
      else if (typeProg == "ROM-COM")
          (*rom)++;
      else if (typeProg == "ROMANTIQUE")
          (*roman)++;
      else if (typeProg == "COMEDIE")
          (*comedie)++;
      else if (typeProg == "POLICIER")
          (*policier)++;
  }

  // Afficher le nombre de contrats de chaque type
  qDebug() << "horreeur: " << *horreeur;
  qDebug() << "suspence: " << *suspence;
  qDebug() << "diver : " << *diver;
  qDebug() << "rom : " << *rom;
  qDebug() << "roman : " << *roman;
  qDebug() << "comedie: " << *comedie;
  qDebug() << "policier : " << *policier;

}
// type de personnel
void   cprogramme::calculatefiction(int *FILM, int *SERIE, int *DOCUMENTAIRE,int *PROGRAMME_TELEVISE)
{
  *FILM = 0;
  *SERIE = 0;
  *DOCUMENTAIRE = 0;
    *PROGRAMME_TELEVISE = 0;

  // Exécuter la requête pour récupérer les types de poste de tous les employés
  QSqlQuery query("SELECT section FROM programme");

  // Itérer à travers les résultats et compter le nombre de chaque type de poste
  while (query.next()) {
      QString section = query.value(0).toString().trimmed();
      if (section == "FILM")
          (*FILM)++;
      else if (section == "SERIE")
          (*SERIE)++;
      else if (section =="DOCUMENTAIRE")
          (*DOCUMENTAIRE)++;
      else if (section == "PROGRAMME TELEVISE")
          (*PROGRAMME_TELEVISE)++;
  }

  // Afficher le nombre de postes de chaque type
  qDebug() << "Nombre de FILM  : " << *FILM;
  qDebug() << "Nombre de SERIE  : " << *SERIE;
  qDebug() << "Nombre de DOCUMENTAIRE : " << *DOCUMENTAIRE;
  qDebug() << "Nombre de PROGRAMME_TELEVISE : " << *PROGRAMME_TELEVISE;

}


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////




