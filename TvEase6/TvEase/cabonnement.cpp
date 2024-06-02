#include "ui_abonnement.h"
#include "cabonnement.h"
#include <QDialog>
#include <QSqlRecord>
#include <QVariant>
#include <QDebug>
 #include <QtSql>
#include <random>

#include <QPixmap>
#include <QJsonObject>
#include <QJsonDocument>
#include <QJsonArray>
#include <QFile>
#include <QDateTime>
#include <QSqlQueryModel>
#include <QStandardItemModel>
cabonnement::cabonnement(int id, int numero, QDate debut, QDate expiration, QString type,int idaudit , QString prixx ) {
    id_abonnement = id;
    numero_abonnement = numero;
    Date_debut = debut;
    Date_expiration = expiration;
    Type_abonnement = type;
    id_auditeur = idaudit;
    prix = prix ;

}


bool cabonnement::ajouter_abonnement() {
    QSqlQuery query;
    query.prepare("INSERT INTO ABONNEMENT (ID_ABONNEMENT, NUMERO_ABONNEMENT, DATE_DEBUT, DATE_EXPIRATION, TYPE_ABONNEMENT, ID_AUDITEUR , PRIX) "
                  "VALUES ( abonnement_id_seq.NEXTVAL,:numero, :debut, :expiration, :type, :idaudit ,:prix)");
    //query.bindValue(":id", id_abonnement);
    query.bindValue(":numero", numero_abonnement);
    query.bindValue(":debut", Date_debut.toString(Qt::ISODate)); // Format ISODate
    query.bindValue(":expiration", Date_expiration.toString(Qt::ISODate)); // Format ISODate
    query.bindValue(":type", Type_abonnement);
    query.bindValue(":idaudit", id_auditeur);
     query.bindValue(":prix", prix);
// le ID doit etre effectué avec auto-incrémente
// le numéro dde l'abonnement doit etre Génerer automatiquement avec
// il faut trouver une solution pour avo
    if(query.exec())
    {ajouter_historique(numero_abonnement);
        return true;}
    else
        return false;

}
#include <random>

int cabonnement::generateUniqueNumber() {
    // Initialiser un générateur de nombres aléatoires
    std::random_device rd;
    std::mt19937 gen(rd());


    std::uniform_int_distribution<> dis(10000, 99999);

    // Générer un numéro aléatoire
    int num = dis(gen);


    QSqlQuery queryCheck;
    queryCheck.prepare("SELECT COUNT(*) FROM ABONNEMENT WHERE NUMERO_ABONNEMENT = :numero");
    queryCheck.bindValue(":numero", num);
    queryCheck.exec();
    queryCheck.next();
    int count = queryCheck.value(0).toInt();

    // Si le numéro est déjà utilisé, regénérer un nouveau jusqu'à obtenir un numéro unique
    while (count > 0) {
        num = dis(gen);
        queryCheck.bindValue(":numero", num);
        queryCheck.exec();
        queryCheck.next();
        count = queryCheck.value(0).toInt();
    }

    return num;
}




//affichage
QSqlQueryModel *cabonnement::afficher_abonnement(){
QSqlQueryModel * model=new QSqlQueryModel();
model->setQuery("select * from ABONNEMENT");
model->setHeaderData(0,Qt::Horizontal,QObject::tr("ID") );
model->setHeaderData(1,Qt::Horizontal,QObject::tr("Numéro") );
model->setHeaderData(2,Qt::Horizontal,QObject::tr("Date début") );
model->setHeaderData(3,Qt::Horizontal,QObject::tr("Date d'expir") );
model->setHeaderData(4,Qt::Horizontal,QObject::tr("Type") );
return model;


}
//filtre

QSqlQueryModel* cabonnement::afficher_abonnementOrderByExpiration() {
    QSqlQueryModel* model = new QSqlQueryModel();
    QString query = "SELECT * FROM ABONNEMENT ORDER BY DATE_EXPIRATION ASC";
    model->setQuery(query);
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Numéro"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Date début"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Date d'expiration"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("Type"));
    return model;
}
//
QSqlQueryModel* cabonnement::afficher_abonnementsPremium() {
    QSqlQueryModel* model = new QSqlQueryModel();
    QString query = "SELECT * FROM ABONNEMENT WHERE TYPE_ABONNEMENT = 'Premium'";
    model->setQuery(query);
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Numéro"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Date début"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Date d'expiration"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("Type"));

    return model;
}

QSqlQueryModel* cabonnement::afficher_abonnementsFamily() {
    QSqlQueryModel* model = new QSqlQueryModel();
    QString query = "SELECT * FROM ABONNEMENT WHERE TYPE_ABONNEMENT = 'Family'";
    model->setQuery(query);
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Numéro"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Date début"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Date d'expiration"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("Type"));

    return model;
}

QSqlQueryModel* cabonnement::afficher_abonnementsStandard() {
    QSqlQueryModel* model = new QSqlQueryModel();
    QString query = "SELECT * FROM ABONNEMENT WHERE TYPE_ABONNEMENT = 'Standard'";
    model->setQuery(query);
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Numéro"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Date début"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Date d'expiration"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("Type"));

    return model;
}

QSqlQueryModel* cabonnement::afficher_abonnements_groupes() {
    QSqlQueryModel* model = new QSqlQueryModel();
    QString query = "SELECT * FROM ABONNEMENT ORDER BY TYPE_ABONNEMENT";
    model->setQuery(query);
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Numéro"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Date début"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Date d'expiration"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("Type"));

    return model;
}



bool cabonnement::supprimer_abonnement(int id) {
    QSqlQuery query;
    query.prepare("DELETE FROM ABONNEMENT WHERE NUMERO_ABONNEMENT = :id");
    query.bindValue(":id", id);

    if (query.exec() && query.numRowsAffected() > 0){
        supprimer_historique(id);
        return true;
    }
    else
        return false;
}



QSqlRecord cabonnement::rechercher_abonnement(int id) {
    QSqlQuery query;
    query.prepare("SELECT * FROM ABONNEMENT WHERE ID_ABONNEMENT = :id");
    query.bindValue(":id", id);

    if(query.exec() && query.next()) {
        return query.record();
    } else {
        return QSqlRecord();
    }
}

bool cabonnement::modifier_abonnement(int id,  QString& numero,  QString& dateDebut,  QString& dateExpiration,  QString& type) {
    QSqlQuery query;
    query.prepare("UPDATE ABONNEMENT SET NUMERO_ABONNEMENT = :numero, DATE_DEBUT = :dateDebut, DATE_EXPIRATION = :dateExpiration, TYPE_ABONNEMENT = :type WHERE ID_ABONNEMENT = :id");
    query.bindValue(":numero", numero);
    query.bindValue(":dateDebut", dateDebut);
    query.bindValue(":dateExpiration", dateExpiration);
    query.bindValue(":type", type);
    query.bindValue(":id", id);

    if (query.exec()) {
            modifier_historique(numero.toInt());
            return true;
        } else {
            return false;
        }
}

QSqlQueryModel* cabonnement::rechercherdansAbonnement(QString valeur) {
    QSqlQueryModel *searchResultModel = new QSqlQueryModel();

      QSqlQuery query;
      query.prepare("SELECT ID_ABONNEMENT, NUMERO_ABONNEMENT, DATE_DEBUT, DATE_EXPIRATION, TYPE_ABONNEMENT ,ID_AUDITEUR  FROM ABONNEMENT WHERE LOWER(ID_ABONNEMENT) LIKE LOWER(:valeur) OR LOWER(NUMERO_ABONNEMENT) LIKE LOWER(:valeur) OR LOWER(DATE_DEBUT) LIKE LOWER(:valeur) OR LOWER(DATE_EXPIRATION) LIKE LOWER(:valeur) OR LOWER(TYPE_ABONNEMENT) LIKE LOWER(:valeur) OR LOWER(ID_AUDITEUR) LIKE LOWER(:valeur)");
      query.bindValue(":valeur", "%" + valeur.toLower() + "%"); // Convert search value to lowercase and add wildcard characters for partial matching

      if (!query.exec()) {
          qDebug() << "Erreur lors de l'exécution de la requête :" << query.lastError().text();
          delete searchResultModel;
          return nullptr;
      }

      searchResultModel->setQuery(query);

    searchResultModel->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    searchResultModel->setHeaderData(1, Qt::Horizontal, QObject::tr("Numéro"));
    searchResultModel->setHeaderData(2, Qt::Horizontal, QObject::tr("Date début"));
    searchResultModel->setHeaderData(3, Qt::Horizontal, QObject::tr("Date d'expir"));
    searchResultModel->setHeaderData(4, Qt::Horizontal, QObject::tr("Type"));

    return searchResultModel;
}

bool cabonnement::recuperer_donnees_types_abonnement(QPieSeries *series) {
    QSqlQuery query("SELECT TYPE_ABONNEMENT, COUNT(*) FROM ABONNEMENT GROUP BY TYPE_ABONNEMENT");

    while (query.next()) {
        QString type_abonnement = query.value(0).toString();
        int count = query.value(1).toInt();
        series->append(type_abonnement, count);
    }

    if (series->isEmpty())
        return false;
    else
        return true;
}


/*bool cabonnement::ajouter_historique(int Numero) {
    QSqlQuery query;
    query.prepare("INSERT INTO HISTORIQUE (NUMERO, OPERATION, DATE_ET_HEURE) "
                  "VALUES (:Numero, 'ajout', CURRENT_TIMESTAMP)");
    query.bindValue(":Numero", Numero);

    if(query.exec())
        return true;
    else
        return false;
       }*/
bool cabonnement::ajouter_historique(int Numero) {
    // Lire le numéro ID depuis le fichier Role.txt
    QFile roleFile("C:\\Users\\CHAIMA\\Documents\\Esprit 2eme\\semestre 2\\projet c++\\TvEase6\\TvEase\\role\\role.txt");
    QString numeroID;
    if (roleFile.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QTextStream in(&roleFile);
        numeroID = in.readLine().trimmed(); // Lire la première ligne et supprimer les espaces blancs
        roleFile.close();
    } else {
        qDebug() << "Impossible d'ouvrir le fichier Role.txt";
        return false;
    }

    // Créer l'objet historique avec le numéro d'ID admin
    QJsonObject historiqueObj;
    historiqueObj["Numero"] = Numero;
    historiqueObj["Operation"] = "ajout";
    historiqueObj["Date_et_heure"] = QDateTime::currentDateTime().toString(Qt::ISODate);
    historiqueObj["AdminID"] = numeroID; // Ajout du numéro d'ID admin

    QFile file("historique.json");
    if (!file.open(QIODevice::ReadWrite | QIODevice::Text)) {
        // Impossible d'ouvrir le fichier
        return false;
    }

    // Lecture des données JSON existantes
    QByteArray data = file.readAll();
    QJsonDocument doc;
    if (!data.isEmpty()) {
        doc = QJsonDocument::fromJson(data);
        if (!doc.isArray()) {
            // Le fichier JSON n'est pas un tableau JSON valide, on ne peut pas ajouter de nouvelles entrées
            return false;
        }
    } else {
        // Si le fichier est vide, on crée un nouveau tableau JSON
        doc = QJsonDocument::fromJson("[]");
    }

    // Ajout de la nouvelle entrée dans le tableau JSON
    QJsonArray historiqueArray = doc.array();
    historiqueArray.append(historiqueObj);
    doc.setArray(historiqueArray);

    // Écriture du document JSON dans le fichier
    file.resize(0); // Efface le contenu existant
    file.write(doc.toJson());
    file.close();

    return true;
}

/*QSqlQueryModel *cabonnement::afficher_historique(){
    QSqlQueryModel *model = new QSqlQueryModel();
    model->setQuery("SELECT * FROM HISTORIQUE");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("NUMERO"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Opération"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Date et heure"));
    return model;
}*/


/*QStandardItemModel* cabonnement::afficher_historique() {
    // Lecture du fichier JSON
    QFile file("historique.json");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        // Impossible d'ouvrir le fichier
        qDebug() << "Impossible d'ouvrir le fichier historique.json";
        return new QStandardItemModel();
    }

    // Lecture des données JSON
    QByteArray data = file.readAll();
    QJsonDocument doc = QJsonDocument::fromJson(data);
    if (!doc.isArray()) {
        // Le fichier JSON n'est pas un tableau JSON valide
        qDebug() << "Le fichier historique.json n'est pas un tableau JSON valide";
        return new QStandardItemModel();
    }


    QStandardItemModel *model = new QStandardItemModel();
    model->setColumnCount(3);
    model->setHorizontalHeaderLabels({"Numero", "Operation", "Date et heure"});

    // Parcours du tableau JSON et ajout des données au modèle
    QJsonArray historiqueArray = doc.array();
    for (const auto &item : historiqueArray) {
        if (item.isObject()) {
            QJsonObject obj = item.toObject();
            int numero = obj["Numero"].toInt();
            QString operation = obj["Operation"].toString();
            QString dateTime = obj["Date_et_heure"].toString();

            QList<QStandardItem *> rowItems;
            rowItems.append(new QStandardItem(QString::number(numero)));
            rowItems.append(new QStandardItem(operation));
            rowItems.append(new QStandardItem(dateTime));
            model->appendRow(rowItems);
        }
    }
 return model;


}*/
QStandardItemModel *cabonnement::afficher_historique() {
    // Lecture du fichier JSON
    QFile file("historique.json");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        // Impossible d'ouvrir le fichier
        qDebug() << "Impossible d'ouvrir le fichier historique.json";
        return new QStandardItemModel();
    }

    // Lecture des données JSON
    QByteArray data = file.readAll();
    QJsonDocument doc = QJsonDocument::fromJson(data);
    if (!doc.isArray()) {

        qDebug() << "Le fichier historique.json n'est pas un tableau JSON valide";
        return new QStandardItemModel();
    }

    QStandardItemModel *model = new QStandardItemModel();
    model->setColumnCount(4); // Ajout d'une colonne supplémentaire
    model->setHorizontalHeaderLabels({ "Numero", "Operation", "Date et heure" ,"AdminID"}); // Modification des en-têtes

    // Parcours du tableau JSON et ajout des données au modèle
    QJsonArray historiqueArray = doc.array();
    for (const auto &item : historiqueArray) {
        if (item.isObject()) {
            QJsonObject obj = item.toObject();
            int numero = obj["Numero"].toInt();
            QString operation = obj["Operation"].toString();
            QString dateTime = obj["Date_et_heure"].toString();
            QString cin = obj["AdminID"].toString();



            QList<QStandardItem *> rowItems;

            rowItems.append(new QStandardItem(QString::number(numero)));
            rowItems.append(new QStandardItem(operation));
            rowItems.append(new QStandardItem(dateTime));
            rowItems.append(new QStandardItem(cin));

            model->appendRow(rowItems);
        }
    }
    return model;
}




bool cabonnement::supprimer_historique(int numero_abonnement) {

    // Lire le numéro ID depuis le fichier Role.txt
    QFile roleFile("C:\\Users\\CHAIMA\\Documents\\Esprit 2eme\\semestre 2\\projet c++\\TvEase6\\TvEase\\role\\role.txt");
    QString numeroID;
    if (roleFile.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QTextStream in(&roleFile);
        numeroID = in.readLine().trimmed(); // Lire la première ligne et supprimer les espaces blancs
        roleFile.close();
    } else {
        qDebug() << "Impossible d'ouvrir le fichier Role.txt";
        return false;
    }


    // Création d'un objet JSON pour stocker les données
    QJsonObject historiqueObj;
    historiqueObj["Numero"] = numero_abonnement;
    historiqueObj["Operation"] = "suppression";
    historiqueObj["Date_et_heure"] = QDateTime::currentDateTime().toString(Qt::ISODate);
    historiqueObj["AdminID"] = numeroID; // Ajout du numéro d'ID admin

    // Lecture du fichier JSON existant ou création d'un nouveau
    QFile file("historique.json");
    if (!file.open(QIODevice::ReadWrite | QIODevice::Text)) {
        // Impossible d'ouvrir le fichier
        return false;
    }


    QByteArray data = file.readAll();
    QJsonDocument doc;
    if (!data.isEmpty()) {
        doc = QJsonDocument::fromJson(data);
        if (!doc.isArray()) {

            return false;
        }
    } else {
        // Si le fich vide
        doc = QJsonDocument::fromJson("[]");
    }

    // Ajout
    QJsonArray historiqueArray = doc.array();
    historiqueArray.append(historiqueObj);
    doc.setArray(historiqueArray);

    // Écriture du document JSON dans le fichier
    file.resize(0); // Efface le contenu existant
    file.write(doc.toJson());
    file.close();

    return true;
}

bool cabonnement::modifier_historique(int numero_abonnement) {
    // Lire le numéro ID depuis le fichier Role.txt
    QFile roleFile("C:\\Users\\CHAIMA\\Documents\\Esprit 2eme\\semestre 2\\projet c++\\TvEase6\\TvEase\\role\\role.txt");
    QString numeroID;
    if (roleFile.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QTextStream in(&roleFile);
        numeroID = in.readLine().trimmed(); // Lire la première ligne et supprimer les espaces blancs
        roleFile.close();
    } else {
        qDebug() << "Impossible d'ouvrir le fichier Role.txt";
        return false;
    }



    //  stocker les données
    QJsonObject historiqueObj;
    historiqueObj["Numero"] = numero_abonnement;
    historiqueObj["Operation"] = "modification";
    historiqueObj["Date_et_heure"] = QDateTime::currentDateTime().toString(Qt::ISODate);
    historiqueObj["AdminID"] = numeroID; // Ajout du numéro d'ID admin


    QFile file("historique.json");
    if (!file.open(QIODevice::ReadWrite | QIODevice::Text)) {
        // Impossible d'ouvrir le fichier
        return false;
    }

    // Lecture des donnée
    QByteArray data = file.readAll();
    QJsonDocument doc;
    if (!data.isEmpty()) {
        doc = QJsonDocument::fromJson(data);
        if (!doc.isArray()) {

            return false;
        }
    } else {
        // Si le fichier est vide
        doc = QJsonDocument::fromJson("[]");
    }

    // Ajout de la nouvelle entrée dans le tableau JSON
    QJsonArray historiqueArray = doc.array();
    historiqueArray.append(historiqueObj);
    doc.setArray(historiqueArray);

    // Écriture du document JSON dans le fichier
    file.resize(0); // Efface le contenu existant
    file.write(doc.toJson());
    file.close();

    return true;
}
