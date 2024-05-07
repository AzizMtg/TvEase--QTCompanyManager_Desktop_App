#include "csecuritysd.h"

#include<QSqlRecord>
#include<QSqlQueryModel>
#include<QSqlError>
#include<QMessageBox>


CSecuritySD::CSecuritySD()
{
    id_perso = "";
    id_studio = "";
    // date_entre doit être initialisé avec une date valide, car elle est de type QDate
    date_entre = "";
    code_acce = "";
}

CSecuritySD::CSecuritySD(QString id_perso, QString id_studio, QString date_entre, QString code_acce)
{
    this->id_perso = id_perso;
    this->id_studio = id_studio;
    this->date_entre = date_entre;
    this->code_acce = code_acce;
}


////////////////////////////////////////////////////////DEVELOPPEMENT FONCTION Verification
bool CSecuritySD::existe_code_accees_perso_studio(QString condition) {
    QSqlQuery query;
    query.prepare("SELECT COUNT(*) FROM TRAVAILLER  WHERE code_acces = :condition");
    query.bindValue(":condition", condition);
    query.exec();

    if (query.next()) {
        int count = query.value(0).toInt();
        return count > 0; // Retourne vrai si le nombre d'enregistrements est supérieur à zéro
    } else {
        return false; // En cas d'erreur dans la requête SQL, retourne faux par défaut
    }
}

///
/// fonction ta5ou il code itlawej a3lih fi travailler wa itraja3lik isperso
QString CSecuritySD::retourneidPerso(QString condition) {
    QSqlQuery query;
    query.prepare("SELECT id_perso FROM TRAVAILLER WHERE code_acces = :condition");
    query.bindValue(":condition", condition);
    query.exec();

    if (query.next()) {
        return query.value(0).toString(); // Retourne id_perso si un enregistrement est trouvé
    } else {
        return ""; // Retourne une chaîne vide si aucun enregistrement correspondant n'est trouvé ou en cas d'erreur
    }
}

/// fonction ta5ou il code itlawej a3lih fi travailler wa itraja3lik idstudio
QString CSecuritySD::retourneidstudio(QString condition) {
    QSqlQuery query;
    query.prepare("SELECT id_studio FROM TRAVAILLER WHERE code_acces = :condition");
    query.bindValue(":condition", condition);
    query.exec();

    if (query.next()) {
        return query.value(0).toString(); // Retourne id_perso si un enregistrement est trouvé
    } else {
        return ""; // Retourne une chaîne vide si aucun enregistrement correspondant n'est trouvé ou en cas d'erreur
    }
}


/////////////////////////////// ajouter les information table securitestudio
bool CSecuritySD::ajouter()
{
    QSqlQuery query;


      query.prepare("INSERT INTO securitesd (id_perso, id_studio,date_entre , code_acce ) VALUES (:id_perso , :id_studio ,:date_entre, :code_acce )");

      // Bind values to parameters in a prepared SQL query
      query.bindValue(":id_perso", id_perso);
      query.bindValue(":id_studio", id_studio);
      query.bindValue(":date_entre", date_entre);
      query.bindValue(":code_acce", code_acce);


      return query.exec();

}

/////////////////////////////// afficher les information table securitestudio
QSqlQueryModel *CSecuritySD::afficher()
{
    QSqlQueryModel *model = new QSqlQueryModel();

        // Requête SQL pour sélectionner les colonnes spécifiées de la table securitesd

        QString query = "SELECT securitesd.id_perso, securitesd.id_studio, securitesd.date_entre,securitesd.code_acce, "
                        "personelles.nom_personelle, personelles.prenom_personelle, "
                        "personelles.numero_telephone_personelle, personelles.role_personelle, "
                        "studio.type "
                        "FROM securitesd "
                        "INNER JOIN personelles ON securitesd.id_perso = personelles.cin_personelle "
                        "INNER JOIN studio ON securitesd.id_studio = studio.ids";

        // Exécution de la requête SQL et définition du modèle avec les données résultantes
        model->setQuery(query);



        // Définition des en-têtes des colonnes
        model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID Personne"));
        model->setHeaderData(1, Qt::Horizontal, QObject::tr("ID Studio"));
        model->setHeaderData(2, Qt::Horizontal, QObject::tr("Date d'entrée"));
        model->setHeaderData(3, Qt::Horizontal, QObject::tr("Code d'accès"));

        model->setHeaderData(8, Qt::Horizontal, QObject::tr("Type Studio")); // Changer l'en-tête de la colonne "Type" en "Type Studio"



        return model;
}

/////////////////////////////////////////////////// METIER
// RECHERCHE
/*QSqlQueryModel* CSecuritySD::afficher_recherche_security(QString valeur)
{
    QSqlQueryModel* model = new QSqlQueryModel();
    QSqlQuery query;

    QString queryString = "SELECT securitesd.id_perso, securitesd.id_studio, securitesd.date_entre,securitesd.code_acce, "
                          "personelles.nom_personelle, personelles.prenom_personelle, "
                          "personelles.numero_telephone_personelle, personelles.role_personelle, "
                          "studio.type "
                          "FROM securitesd "
                          "INNER JOIN personelles ON securitesd.id_perso = personelles.cin_personelle "
                          "INNER JOIN studio ON securitesd.id_studio = studio.ids "
                          "WHERE LOWER(securitesd.id_perso) LIKE LOWER(:valeur) "
                          "OR LOWER(securitesd.id_studio) LIKE LOWER(:valeur) "
                          "OR LOWER(securitesd.code_acce) LIKE LOWER(:valeur) "
                          "OR LOWER(personelles.nom_personelle) LIKE LOWER(:valeur) "
                          "OR LOWER(personelles.prenom_personelle) LIKE LOWER(:valeur) "
                          "OR LOWER(personelles.numero_telephone_personelle) LIKE LOWER(:valeur) "
                          "OR LOWER(personelles.role_personelle) LIKE LOWER(:valeur) "
                          "OR LOWER(studio.type) LIKE LOWER(:valeur)";

    query.prepare(queryString);
    query.bindValue(":valeur", "%" + valeur.toLower() + "%"); // Convert search value to lowercase and add wildcard characters for partial matching

    model->setQuery(query);

    // Définition des en-têtes des colonnes
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID Personne"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("ID Studio"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Date d'entrée"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Code d'accès"));

    model->setHeaderData(8, Qt::Horizontal, QObject::tr("Type Studio")); // Changer l'en-tête de la colonne "Type" en "Type Studio"

    return model;
}*/
QSqlQueryModel* CSecuritySD::afficher_recherche_security(QString valeur)
{
    QSqlQueryModel *model = new QSqlQueryModel();

    // Requête SQL pour sélectionner les colonnes spécifiées de la table securitesd
    QString query = "SELECT securitesd.id_perso, securitesd.id_studio, securitesd.date_entre,securitesd.code_acce, "
                    "personelles.nom_personelle, personelles.prenom_personelle, "
                    "personelles.numero_telephone_personelle, personelles.role_personelle, "
                    "studio.type "
                    "FROM securitesd "
                    "INNER JOIN personelles ON securitesd.id_perso = personelles.cin_personelle "
                    "INNER JOIN studio ON securitesd.id_studio = studio.ids";

    // Si une valeur de recherche est spécifiée, ajoute une clause WHERE à la requête
    if (!valeur.isEmpty()) {
        query += " WHERE securitesd.id_perso LIKE '%" + valeur + "%' OR "
                 "securitesd.id_studio LIKE '%" + valeur + "%' OR "
                 "securitesd.date_entre LIKE '%" + valeur + "%' OR "
                 "securitesd.code_acce LIKE '%" + valeur + "%' OR "
                 "personelles.nom_personelle LIKE '%" + valeur + "%' OR "
                 "personelles.prenom_personelle LIKE '%" + valeur + "%' OR "
                 "personelles.numero_telephone_personelle LIKE '%" + valeur + "%' OR "
                 "personelles.role_personelle LIKE '%" + valeur + "%' OR "
                 "studio.type LIKE '%" + valeur + "%'";
    }

    // Exécution de la requête SQL et définition du modèle avec les données résultantes
    model->setQuery(query);

    // Définition des en-têtes des colonnes
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID Personne"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("ID Studio"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Date d'entrée"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Code d'accès"));
    model->setHeaderData(8, Qt::Horizontal, QObject::tr("Type Studio"));

    return model;
}
//////////////////////////// Trie par ordre croissant  decroissant par date
///////////////////////////// TRIE
QSqlQueryModel * CSecuritySD::trie_croissant_date()
{
    QSqlQueryModel *model = new QSqlQueryModel();

    QString query = "SELECT securitesd.id_perso, securitesd.id_studio, securitesd.date_entre, securitesd.code_acce, "
                    "personelles.nom_personelle, personelles.prenom_personelle, "
                    "personelles.numero_telephone_personelle, personelles.role_personelle, "
                    "studio.type "
                    "FROM securitesd "
                    "INNER JOIN personelles ON securitesd.id_perso = personelles.cin_personelle "
                    "INNER JOIN studio ON securitesd.id_studio = studio.ids "
                    "ORDER BY securitesd.date_entre ASC"; // Convert string to datetime and sort

    model->setQuery(query);

    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID Personne"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("ID Studio"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Date d'entrée"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Code d'accès"));
    model->setHeaderData(8, Qt::Horizontal, QObject::tr("Type Studio"));

    return model;
}

QSqlQueryModel * CSecuritySD::trie_decroissant_date()
{
    QSqlQueryModel *model = new QSqlQueryModel();

    QString query = "SELECT securitesd.id_perso, securitesd.id_studio, securitesd.date_entre, securitesd.code_acce, "
                    "personelles.nom_personelle, personelles.prenom_personelle, "
                    "personelles.numero_telephone_personelle, personelles.role_personelle, "
                    "studio.type "
                    "FROM securitesd "
                    "INNER JOIN personelles ON securitesd.id_perso = personelles.cin_personelle "
                    "INNER JOIN studio ON securitesd.id_studio = studio.ids "
                    "ORDER BY securitesd.date_entre DESC"; // Convert string to datetime and sort in descending order

    model->setQuery(query);

    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID Personne"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("ID Studio"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Date d'entrée"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Code d'accès"));
    model->setHeaderData(8, Qt::Horizontal, QObject::tr("Type Studio"));

    return model;
}
