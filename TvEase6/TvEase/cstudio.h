#ifndef CSTUDIO_H
#define CSTUDIO_H
#include<QString>
#include <QDebug>
#include<QString>
#include<QSqlQuery>
#include<QSqlQueryModel>
class Cstudio
{
public:
    Cstudio(QString,QString,QString,QString,int);
    void setids(QString n);
    void setloc(QString n);
    void settype(QString n);
    void setetat(QString n);
    void setcapacite(int n);
    QString get_ids();
    QString get_loc();
    QString get_type();
    QString get_etat();
    int get_capacite();
    bool ajouter() ;
    QSqlQueryModel * afficher() ;
    bool supprimer(QString) ;
    bool modifier(QString ids,QString loc,QString type,QString etat,int capacite);
     QSqlQueryModel* recherche(QString valeur);
     bool studioExists(const QString& ids);
      QSqlQueryModel * trie_cap();
       QSqlQueryModel * trie_type();
        QSqlQueryModel * trie_etat();
    Cstudio();
    void calculateTypestudio(int *recod_sd, int *film_sd, int *pho_sd , int *dance_sd ,int *art_sd, int *music_sd, int *prod_sd , int *broad_sd , int *design_sd , int *gaming_sd ) ;

private:
QString ids,loc,type,etat;
int capacite;

};
#endif // STUDIO_H


