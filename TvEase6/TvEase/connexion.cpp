#include "connexion.h"

connexion::connexion()
{ }


bool connexion::ouvrirConnexion()
{bool test=false;
QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
db.setDatabaseName("TvEase");
db.setUserName("chaima");//inserer nom de l'utilisateur
db.setPassword("chaima");//inserer mot de passe de cet utilisateur

if (db.open())
test=true;

 return  test;
}


void connexion::fermerConnexion()
{
   db.close() ;
}
