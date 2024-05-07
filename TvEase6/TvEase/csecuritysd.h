#ifndef CSECURITYSD_H
#define CSECURITYSD_H

#include<QString>
#include<QDate>
#include<QSqlQuery>
#include<QSqlQueryModel>
class CSecuritySD
{
public:
    CSecuritySD();
    CSecuritySD(QString,QString,QString,QString);


    bool existe_code_accees_perso_studio(QString condition) ;

    QString retourneidPerso(QString condition) ;
    QString retourneidstudio(QString condition) ;


    // fonction base
    bool ajouter() ;
    QSqlQueryModel * afficher() ;


    //METIER
    QSqlQueryModel* afficher_recherche_security(QString valeur) ;
    QSqlQueryModel *trie_croissant_date() ;
    QSqlQueryModel *trie_decroissant_date() ;




private:
    QString id_perso , id_studio , code_acce ,date_entre ;


};

#endif // CSECURITYSD_H

