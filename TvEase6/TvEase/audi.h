#ifndef AUDI_H
#define AUDI_H

#include <QDialog>

#include<QString>
#include<QSqlQuery>
#include<QSqlQueryModel>
#include <QDate>
#include <QMap>
#include <QPixmap>
#include <QFile>
#include <QDebug>
#include <QFileDialog>
#include <QFileInfo>
#include <QBuffer>
#include <QByteArray>
#include <QTableWidgetItem>
#include <QWidget>
#include <QListView>
#include <QStandardItemModel>
#include <QStandardItem>
#include <QtSql>
#include <QCalendarWidget>
#include<QMovie>
#include<QThread>
#include<QStyledItemDelegate>
#include <QTableWidgetItem>
#include <QPixmap>
#include <QFile>
#include <QPainter>
class audi
{
public:
    audi();
    audi(int,QString,QString,QDate,int,QString,QString, QByteArray);
    bool addDataToDatabase();
    bool updateDataInDatabase();
    QSqlQueryModel* afficher();
    QSqlQueryModel* afficherstat();

    QSqlQueryModel * tri(int tp);
    bool updateImageInDatabase(int imageID, const QString &imageName, const QByteArray &imageData);

   /* bool modifier(QString cin,QString nom,QString prenom,*/



    QByteArray Image(){
            return image;
        };


    void setImage(const QByteArray  &Image){image = Image;}


    bool saveImageToDatabase(int imageID, const QString &imageName, const QByteArray &imageData);
    bool supprimerImageDuStock(int imageID) ;

        void setId_audi(int id_audi);
        void setNom_audi(const QString &nom_audi);
        void setPrenom_audi(const QString &prenom_audi);
        void setDate_audi(const QDate &date_audi);
        void setTele_audi(int tele_audi);
        void setAdr_audi(const QString &adr_audi);
        void setMail_audi(const QString &mail_audi);

        // Getters
        int getId_audi() const;
        QString getNom_audi() const;
        QString getPrenom_audi() const;
        QDate getDate_audi() const;
        int getTele_audi() const;
        QString getAdr_audi() const;
        QString getMail_audi() const;
        bool deleteDataFromDatabase();

private:
        int id_audi;
        QString nom_audi,prenom_audi;
        QDate date_audi;
        int tele_audi;

        QString adr_audi,mail_audi;
        QByteArray imageData,image;

};

#endif // AUDI_H
