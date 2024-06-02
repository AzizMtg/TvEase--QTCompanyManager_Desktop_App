#include "connexion.h"

connexion::connexion()
{ }


bool connexion::ouvrirConnexion()
{bool test=false;
QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
db.setDatabaseName("TvEase");
db.setUserName("aziz");//inserer nom de l'utilisateur
db.setPassword("aziz");//inserer mot de passe de cet utilisateur

if (db.open())
test=true;

 return  test;
}


void connexion::fermerConnexion()
{
   db.close() ;
}
