#ifndef CONNEXION_H
#define CONNEXION_H

// in7otou hadouma
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>

class connexion
{
private:
    QSqlDatabase db ;
public:
    connexion();
    bool ouvrirConnexion() ;
    void fermerConnexion() ;
};

#endif // CONNEXION_H
