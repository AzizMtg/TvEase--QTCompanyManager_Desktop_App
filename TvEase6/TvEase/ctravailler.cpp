#include "ctravailler.h"

#include<QSqlRecord>
#include<QSqlQueryModel>
#include<QSqlError>
#include<QMessageBox>
#include<QtDebug>
ctravailler::ctravailler()
{
id_perso = "" ;
id_studio = "" ;
code_acces ="" ;
}
ctravailler::ctravailler(QString id_perso,QString id_studio ,QString code_acces)
{
    this->id_perso  =id_perso ;
    this->id_studio =id_studio ;
    this->code_acces = code_acces ;
}

/////////////////il lister imta3 il combobox imta3 il idstudio et cin
QSqlQueryModel *ctravailler:: afficher_CIN_combobox()
{
    QSqlQueryModel *model = new QSqlQueryModel() ;


    model->setQuery("SELECT cin_personelle FROM personelles");

    model->setHeaderData(0, Qt::Horizontal, QObject::tr("CIN"));

    return model ;
}
QSqlQueryModel *ctravailler:: afficher_ids_combobox()
{
    QSqlQueryModel *model = new QSqlQueryModel() ;


    model->setQuery("SELECT ids FROM studio");

    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ids"));

    return model ;
}
QSqlQueryModel *ctravailler::afficher_CIN_combobox_travailler()
{
    QSqlQueryModel *model = new QSqlQueryModel();

    // Select distinct values for id_perso
    model->setQuery("SELECT DISTINCT id_perso FROM travailler");

    model->setHeaderData(0, Qt::Horizontal, QObject::tr("id_perso"));

    return model;
}

QSqlQueryModel *ctravailler::afficher_ids_combobox_travailler()
{
    QSqlQueryModel *model = new QSqlQueryModel();

    // Select distinct values for id_studio
    model->setQuery("SELECT DISTINCT id_studio FROM travailler");

    model->setHeaderData(0, Qt::Horizontal, QObject::tr("id_studio"));

    return model;
}

///////////////////////////////// AJOUTER crud
// yit2akad kanha mawjouda i9bal wala le kan mouch mawjouda izidha makanich i9olik rahi mawjouda i9ba


bool ctravailler::ajouter()
{
    QSqlQuery query;

    // Vérifier si une entrée avec le même id_studio et id_perso existe déjà
    query.prepare("SELECT id_perso, id_studio FROM TRAVAILLER WHERE id_studio = :id_studio AND id_perso = :id_perso");
    query.bindValue(":id_studio", id_studio);
    query.bindValue(":id_perso", id_perso);
    query.exec();

    if (query.next()) {
        // Une entrée avec le même id_studio et id_perso existe déjà, afficher un message
        QMessageBox::warning(nullptr, "Entrée déjà existante", "Une entrée avec cet id_studio et id_perso existe déjà dans la base de données.");
        return false;
    }

    // Vérifier si une entrée avec le même code_acces existe déjà
    query.prepare("SELECT code_acces FROM TRAVAILLER WHERE code_acces = :code_acces");
    query.bindValue(":code_acces", code_acces);
    query.exec();

    if (query.next()) {
        // Une entrée avec le même code_acces existe déjà, afficher un message
        QMessageBox::warning(nullptr, "CODE déjà existante", "Une entrée avec ce code_acces existe déjà .");
        return false;
    }

    // Aucune entrée avec le même id_studio, id_perso et code_acces n'existe, procéder à l'ajout
    query.prepare("INSERT INTO TRAVAILLER (id_perso, id_studio, code_acces) VALUES (:id_perso, :id_studio, :code_acces)");
    query.bindValue(":id_perso", id_perso);
    query.bindValue(":id_studio", id_studio);
    query.bindValue(":code_acces", code_acces);

    return query.exec();
}


////////////////////////////// supprimer crud
bool ctravailler::supprimer(QString idperso, QString idstudio)
{
    QSqlQuery query;
    query.prepare("DELETE FROM TRAVAILLER WHERE id_perso = :idperso AND id_studio = :idstudio");
    query.bindValue(":idperso", idperso);
    query.bindValue(":idstudio", idstudio);

    if (query.exec()) {
        if (query.numRowsAffected() > 0) {
            return true;  // Au moins une ligne a été supprimée
        } else {
            QMessageBox::warning(nullptr, "Entrée non trouvée", "L'entrée à supprimer n'existe pas dans la base de données.");
            return false; // Aucune ligne n'a été affectée
        }
    } else {
        qDebug() << "Erreur lors de l'exécution de la requête de suppression:" << query.lastError().text();
        return false; // Erreur lors de l'exécution de la requête
    }
}


//////////////////// afficher
QSqlQueryModel *ctravailler::afficher()
{
    QSqlQueryModel *model = new QSqlQueryModel();

    QString query = "SELECT travailler.id_perso, travailler.id_studio, travailler.code_acces, "
                    "personelles.nom_personelle, personelles.prenom_personelle, "
                    "personelles.numero_telephone_personelle, personelles.role_personelle, "
                    "studio.localisation, studio.type "
                    "FROM travailler "
                    "INNER JOIN personelles ON travailler.id_perso = personelles.cin_personelle "
                    "INNER JOIN studio ON travailler.id_studio = studio.ids";

    model->setQuery(query);

    // Définir les en-têtes des colonnes
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("CIN Personne"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Numero Studio"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Code d'acces"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Nom Personne"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("Prénom Personne"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("Telephone Personne"));
    model->setHeaderData(6, Qt::Horizontal, QObject::tr("Rôle Personne"));
    model->setHeaderData(7, Qt::Horizontal, QObject::tr("Localisation Studio"));
    model->setHeaderData(8, Qt::Horizontal, QObject::tr("Type Studio"));

    return model;
}



///////////////////////////////////////////////////////// modifier
/*bool ctravailler::modifier(QString id_perso, QString id_studio, QString id_studio_new)
{
    if (id_perso.isEmpty() || id_studio.isEmpty() || id_studio_new.isEmpty()) {
        return false; // Retourner false indiquant des données insuffisantes
    }

    QSqlQuery query;
    query.prepare("UPDATE travailler SET id_studio = :id_studio_new WHERE id_perso = :id_perso AND id_studio = :id_studio");
    query.bindValue(":id_studio_new", id_studio_new);
    query.bindValue(":id_perso", id_perso);
    query.bindValue(":id_studio", id_studio);

    if (!query.exec()) {
        qDebug() << "Erreur lors de l'exécution de la requête de mise à jour :" << query.lastError().text();
        return false; // Retourner false indiquant une erreur d'exécution de la requête
    }

    // Vérifier si des lignes ont été affectées par l'opération de mise à jour
    if (query.numRowsAffected() == 0) {
        // Aucun enregistrement correspondant trouvé, afficher QMessageBox
        QMessageBox::warning(nullptr, "Enregistrement non trouvé", "Aucun enregistrement correspondant trouvé pour id_perso: " + id_perso + " et id_studio: " + id_studio);
        return false; // Retourner false indiquant qu'aucun enregistrement correspondant n'a été trouvé
    }

    return true; // Retourner true indiquant une mise à jour réussie
}*/
bool ctravailler::modifier(QString id_perso, QString id_studio, QString id_studio_new, QString code_acces_new)
{
    if (id_perso.isEmpty() || id_studio.isEmpty() || id_studio_new.isEmpty() || code_acces_new.isEmpty()) {
        return false; // Retourner false indiquant des données insuffisantes
    }

    // Vérification de l'existence de l'entrée à modifier
    QSqlQuery checkQuery;
    checkQuery.prepare("SELECT id_perso FROM travailler WHERE id_perso = :id_perso AND id_studio = :id_studio");
    checkQuery.bindValue(":id_perso", id_perso);
    checkQuery.bindValue(":id_studio", id_studio);
    if (!checkQuery.exec()) {
        qDebug() << "Erreur lors de l'exécution de la requête de vérification :" << checkQuery.lastError().text();
        return false; // Retourner false en cas d'erreur d'exécution de la requête de vérification
    }

    if (!checkQuery.next()) {
        // L'entrée à modifier n'existe pas, afficher un message d'avertissement
        QMessageBox::warning(nullptr, "Enregistrement non trouvé", "Aucun enregistrement correspondant trouvé pour id_perso: " + id_perso + " et id_studio: " + id_studio);
        return false; // Retourner false pour indiquer que l'enregistrement n'a pas été trouvé
    }

    // Vérification de l'existence de la nouvelle combinaison id_perso et id_studio_new
    QSqlQuery checkNewQuery;
    checkNewQuery.prepare("SELECT id_perso FROM travailler WHERE id_perso = :id_perso AND id_studio = :id_studio_new");
    checkNewQuery.bindValue(":id_perso", id_perso);
    checkNewQuery.bindValue(":id_studio_new", id_studio_new);
    if (!checkNewQuery.exec()) {
        qDebug() << "Erreur lors de l'exécution de la requête de vérification :" << checkNewQuery.lastError().text();
        return false; // Retourner false en cas d'erreur d'exécution de la requête de vérification
    }

    if (checkNewQuery.next()) {
        // La nouvelle combinaison id_perso et id_studio_new existe déjà, afficher un message d'avertissement
        QMessageBox::warning(nullptr, "Enregistrement existant", "La nouvelle combinaison pour id_perso: " + id_perso + " et id_studio: " + id_studio_new + " existe déjà.");
        return false; // Retourner false pour indiquer que la modification n'a pas été effectuée
    }

    // Vérification de l'unicité de la valeur de code_acces_new
    QSqlQuery checkCodeQuery;
    checkCodeQuery.prepare("SELECT id_perso FROM travailler WHERE code_acces = :code_acces_new");
    checkCodeQuery.bindValue(":code_acces_new", code_acces_new);
    if (!checkCodeQuery.exec()) {
        qDebug() << "Erreur lors de l'exécution de la requête de vérification de code_acces :" << checkCodeQuery.lastError().text();
        return false; // Retourner false en cas d'erreur d'exécution de la requête de vérification
    }

    if (checkCodeQuery.next()) {
        // La valeur de code_acces_new existe déjà, afficher un message d'avertissement
        QMessageBox::warning(nullptr, "Code d'accès existant", "La valeur du code d'accès: " + code_acces_new + " existe déjà.");
        return false; // Retourner false pour indiquer que la modification n'a pas été effectuée
    }

    // L'entrée à modifier existe, la nouvelle combinaison n'existe pas encore et la valeur de code_acces_new est unique, effectuer la mise à jour
    QSqlQuery query;
    query.prepare("UPDATE travailler SET id_studio = :id_studio_new, code_acces = :code_acces_new WHERE id_perso = :id_perso AND id_studio = :id_studio");
    query.bindValue(":id_studio_new", id_studio_new);
    query.bindValue(":code_acces_new", code_acces_new);
    query.bindValue(":id_perso", id_perso);
    query.bindValue(":id_studio", id_studio);

    if (!query.exec()) {
        qDebug() << "Erreur lors de l'exécution de la requête de mise à jour :" << query.lastError().text();
        return false; // Retourner false indiquant une erreur d'exécution de la requête
    }

    return true; // Retourner true indiquant une mise à jour réussie
}



//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//////////////////// RECHERCHE

QSqlQueryModel* ctravailler::afficher_recherche(QString valeur)
{
    QSqlQueryModel* model = new QSqlQueryModel();
    QSqlQuery query;

    QString queryString = "SELECT travailler.id_perso, travailler.id_studio, travailler.code_acces, "
                          "personelles.nom_personelle, personelles.prenom_personelle, "
                          "personelles.numero_telephone_personelle, personelles.role_personelle, "
                          "studio.localisation, studio.type "
                          "FROM travailler "
                          "INNER JOIN personelles ON travailler.id_perso = personelles.cin_personelle "
                          "INNER JOIN studio ON travailler.id_studio = studio.ids "
                          "WHERE LOWER(travailler.id_perso) LIKE LOWER(:valeur) "
                          "OR LOWER(travailler.id_studio) LIKE LOWER(:valeur) "
                          "OR LOWER(travailler.code_acces) LIKE LOWER(:valeur) "
                          "OR LOWER(personelles.nom_personelle) LIKE LOWER(:valeur) "
                          "OR LOWER(personelles.prenom_personelle) LIKE LOWER(:valeur) "
                          "OR LOWER(personelles.numero_telephone_personelle) LIKE LOWER(:valeur) "
                          "OR LOWER(personelles.role_personelle) LIKE LOWER(:valeur) "
                          "OR LOWER(studio.localisation) LIKE LOWER(:valeur) "
                          "OR LOWER(studio.type) LIKE LOWER(:valeur)";

    query.prepare(queryString);
    query.bindValue(":valeur", "%" + valeur.toLower() + "%"); // Convert search value to lowercase and add wildcard characters for partial matching

    if (!query.exec()) {
        qDebug() << "Erreur lors de l'exécution de la requête :" << query.lastError().text();
        delete model;
        return nullptr;
    }

    model->setQuery(query);

    // Set column headers
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("CIN Personne"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Numero Studio"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Code d'accès"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Nom Personne"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("Prénom Personne"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("Téléphone Personne"));
    model->setHeaderData(6, Qt::Horizontal, QObject::tr("Rôle Personne"));
    model->setHeaderData(7, Qt::Horizontal, QObject::tr("Localisation Studio"));
    model->setHeaderData(8, Qt::Horizontal, QObject::tr("Type Studio"));

    return model;
}



///////////////////////////// TRIE
QSqlQueryModel * ctravailler::trie_cin()
{
    QSqlQueryModel *model = new QSqlQueryModel();

       QString query = "SELECT travailler.id_perso, travailler.id_studio,travailler.code_acces, "
                       "personelles.nom_personelle, personelles.prenom_personelle, "
                       "personelles.numero_telephone_personelle, personelles.role_personelle, "
                       "studio.localisation, studio.type "
                       "FROM travailler "
                       "INNER JOIN personelles ON travailler.id_perso = personelles.cin_personelle "
                       "INNER JOIN studio ON travailler.id_studio = studio.ids "
                       "ORDER BY personelles.cin_personelle + 0 DESC"; // Order by CIN in descending order as a numeric value

       model->setQuery(query);

       // Set column headers
       model->setHeaderData(0, Qt::Horizontal, QObject::tr("CIN Personne"));
       model->setHeaderData(1, Qt::Horizontal, QObject::tr("Numero Studio"));
       model->setHeaderData(2, Qt::Horizontal, QObject::tr("Code d'accès")); // Nouvelle colonne pour le code d'accès
       model->setHeaderData(3, Qt::Horizontal, QObject::tr("Nom Personne"));
       model->setHeaderData(4, Qt::Horizontal, QObject::tr("Prénom Personne"));
       model->setHeaderData(5, Qt::Horizontal, QObject::tr("Téléphone Personne"));
       model->setHeaderData(6, Qt::Horizontal, QObject::tr("Rôle Personne"));
       model->setHeaderData(7, Qt::Horizontal, QObject::tr("Localisation Studio"));
       model->setHeaderData(8, Qt::Horizontal, QObject::tr("Type Studio"));

       return model;
}
QSqlQueryModel *ctravailler ::trie_croissant_cin()
{
    QSqlQueryModel *model = new QSqlQueryModel();

       QString query = "SELECT travailler.id_perso, travailler.id_studio,travailler.code_acces, "
                       "personelles.nom_personelle, personelles.prenom_personelle, "
                       "personelles.numero_telephone_personelle, personelles.role_personelle, "
                       "studio.localisation, studio.type "
                       "FROM travailler "
                       "INNER JOIN personelles ON travailler.id_perso = personelles.cin_personelle "
                       "INNER JOIN studio ON travailler.id_studio = studio.ids "
                       "ORDER BY personelles.cin_personelle + 0 ASC"; // Order by CIN in ascending order as a numeric value

       model->setQuery(query);

       // Set column headers
       model->setHeaderData(0, Qt::Horizontal, QObject::tr("CIN Personne"));
       model->setHeaderData(1, Qt::Horizontal, QObject::tr("Numero Studio"));
       model->setHeaderData(2, Qt::Horizontal, QObject::tr("Code d'accès")); // Nouvelle colonne pour le code d'accès
       model->setHeaderData(3, Qt::Horizontal, QObject::tr("Nom Personne"));
       model->setHeaderData(4, Qt::Horizontal, QObject::tr("Prénom Personne"));
       model->setHeaderData(5, Qt::Horizontal, QObject::tr("Téléphone Personne"));
       model->setHeaderData(6, Qt::Horizontal, QObject::tr("Rôle Personne"));
       model->setHeaderData(7, Qt::Horizontal, QObject::tr("Localisation Studio"));
       model->setHeaderData(8, Qt::Horizontal, QObject::tr("Type Studio"));


       return model;
}

QSqlQueryModel *ctravailler::afficher_localisation()
{
    QSqlQueryModel *model = new QSqlQueryModel();

    QString query = "SELECT travailler.id_perso, travailler.id_studio,travailler.code_acces, "
                    "personelles.nom_personelle, personelles.prenom_personelle, "
                    "personelles.numero_telephone_personelle, personelles.role_personelle, "
                    "studio.localisation, studio.type "
                    "FROM travailler "
                    "INNER JOIN personelles ON travailler.id_perso = personelles.cin_personelle "
                    "INNER JOIN studio ON travailler.id_studio = studio.ids "
                    "ORDER BY studio.localisation ASC"; // Order by localisation in ascending order

    model->setQuery(query);

    // Set column header
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("CIN Personne"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Numero Studio"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Code d'accès")); // Nouvelle colonne pour le code d'accès
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Nom Personne"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("Prénom Personne"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("Téléphone Personne"));
    model->setHeaderData(6, Qt::Horizontal, QObject::tr("Rôle Personne"));
    model->setHeaderData(7, Qt::Horizontal, QObject::tr("Localisation Studio"));
    model->setHeaderData(8, Qt::Horizontal, QObject::tr("Type Studio"));


    return model;
}






























