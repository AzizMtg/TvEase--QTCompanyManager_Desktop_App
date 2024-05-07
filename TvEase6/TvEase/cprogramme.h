#ifndef CPROGRAMME_H
#define CPROGRAMME_H
#include<QString>
#include <QSqlQuery>
#include<QSqlQueryModel>
//belek testa3mlhom
#include <QDate>
#include <QTime>
#include <QComboBox>
#include <QCalendarWidget>
#include <QPixmap>
#include <QFile>
#include <QDebug>
#include <QFileDialog>
#include <QFileInfo>
#include <QBuffer>
#include <QByteArray>
#include <QTableWidgetItem>

class cprogramme
{
public:
    cprogramme();
    cprogramme(QString,QString,QString,QString,int,int,int,QString, QByteArray) ;

    /// les fonctions
     bool ajouter(QCalendarWidget *calendarWidget);
       QSqlQueryModel * afficher() ;
       bool supprimer(int ID_PROGRAMME);
       bool update(int ID_PROGRAMME,QString NOM, QString SECTION, QString TYPE, int NOMBRE_PIECE,int Duree, QString DATE_Diffusion ,QString CIN_PERSONELLE,QByteArray Image);
       QSqlQueryModel * tri (int tp);

       QSqlQueryModel* affichercalendrier();
      // QByteArray getImageDataFromDatabase(const QString &imageNameToLoad);
       //QByteArray getImageDataFromDatabase(const QString &imageNameToLoad, QString &imageName);
      // QStringList getAllImageNames() const;

       bool updateImageInDatabase(int imageID, const QString &imageName, const QByteArray &imageData);




       QByteArray Image(){
               return image;
           };


       void setImage(const QByteArray  &Image){image = Image;}








       QString get_NOM() ;
    QString get_SECTION() ;
    QString get_TYPE() ;
    QString get_DATE_Diffusion() ;
     QString get_CIN_PERSONELLE() ;

    int get_ID_PROGRAMME() ;
    int get_Duree() ;
    int get_NOMBRE_PIECE() ;



    void setNOM(const QString &NOM);
    void setSECTION(const QString &SECTION);
    void setTYPE(const QString &TYPE);
    void setDATE_Diffusion(const QString &DATE_Diffusion);
      void setCIN_PERSONELLE(const QString &CIN_PERSONELLE);











     // void saveImageToDatabase(int imageID, const QString &imageName, const QByteArray &imageData);
      void displayImagesFromDatabases();

    void setID_PROGRAMME(int ID_PROGRAMME);
    void setDuree(int Duree);
    void setNOMBRE_PIECE(int NOMBRE_PIECE);
    bool saveImageToDatabase(int imageID, const QString &imageName, const QByteArray &imageData);

    bool supprimerImageDuStock(int imageID) ;
    bool supprimerProgrammeEtImage(int ID_PROGRAMME) ;


    bool supprimerProgramme(int ID_PROGRAMME);


    QSqlQueryModel * afficher_CIN_combobox();


public:
    void calculateTYPEprog(int *horreeur, int *suspence, int *diver , int *rom , int *roman , int *comedie , int *policier ) ;
    void   calculatefiction(int *FILM, int *SERIE, int *DOCUMENTAIRE,int *PROGRAMME_TELEVISE);







private:
    QString NOM,SECTION, TYPE,DATE_Diffusion ,CIN_PERSONELLE,DATA,INFO,imageName,imageNameToLoad;
    int ID_PROGRAMME ,NOMBRE_PIECE,Duree, idProgramme;
    QByteArray imageData,image;


};

#endif // CPROGRAMME_H
