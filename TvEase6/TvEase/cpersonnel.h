#ifndef CPERSONNEL_H
#define CPERSONNEL_H

#include<QString>
#include<QDate>
#include<QSqlQuery>
#include<QSqlQueryModel>

// cin nom prenom numero_telephone adresse etat_civil date_naissance adresse_mail role type salaire password_personnel
class Cpersonnel
{
public:
    Cpersonnel();
    Cpersonnel(QString,QString,QString,QString,QString,QString,QString,QString,QString,QString,QString,QString ,QString );
    // les fonction get
    QString get_cin() ;
    QString get_nom() ;
    QString get_prenom() ;
    QString get_numero_telephone() ;
    QString get_adresse() ;
    QString get_etat_civil() ;
    QString get_date_naissance() ;
    QString get_adresse_mail() ;
    QString get_role() ;
    QString get_type() ;
    QString get_salaire() ;
    QString get_password_personnel() ;

    //fonction crud
    bool ajouter() ;
    QSqlQueryModel * afficher() ;
    bool supprimer(QString) ;
    bool modifier(QString cin,QString nom,QString prenom,QString numero_telephone,QString adresse,QString etat_civil,QString date_naissance,QString adresse_mail,QString role,QString type,QString salaire ,QString code_park );


    //taba3 il metier
     QSqlQueryModel * afficher_CIN() ;
     QSqlRecord  afficher_ONE_CIN(QString condition) ;
     QSqlQueryModel * afficher_recherche(QString valeur) ;
     QSqlQueryModel * trie_salaire() ;
     QSqlQueryModel *trie_cin() ;
     QSqlQueryModel *trie_date_naissance() ;
     QSqlQueryModel *trie_croissant_salaire() ;
     QSqlQueryModel *trie_croissant_cin() ;
     QSqlQueryModel *trie_croissant_date_naissance() ;
     void calculateContratStat(int *cdiCount, int *cddCount, int *ctpCount) ;
     void calculateTypeStat(int *adminP, int *RC, int *Rinter);











private:
    QString cin, nom, prenom ,numero_telephone, adresse, etat_civil ,adresse_mail ,role ,type ,password_personnel ;
    QString date_naissance ;
    QString salaire  ;
    QString code_park ;
};

#endif // CPERSONNEL_H
