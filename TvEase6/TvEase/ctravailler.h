#ifndef CTRAVAILLER_H
#define CTRAVAILLER_H

#include<QString>
#include<QDate>
#include<QSqlQuery>
#include<QSqlQueryModel>

class ctravailler
{
public:
    ctravailler();
    ctravailler(QString,QString ,QString );

    //   il combobox
    QSqlQueryModel * afficher_CIN_combobox() ;
    QSqlQueryModel * afficher_ids_combobox() ;
    QSqlQueryModel * afficher_CIN_combobox_travailler() ;
    QSqlQueryModel * afficher_ids_combobox_travailler() ;


    // fonction crud
    bool ajouter() ;
    QSqlQueryModel * afficher() ;
    bool supprimer(QString,QString) ;
    bool modifier(QString id_perso,QString id_studio,QString id_studio_new ,QString code_acces_new);
    QSqlQueryModel * afficher_recherche(QString valeur) ;
    QSqlQueryModel *trie_cin() ;
    QSqlQueryModel *trie_croissant_cin() ;
    QSqlQueryModel *afficher_localisation();




private:
    QString id_perso, id_studio ,code_acces ;

};

#endif // CTRAVAILLER_H
