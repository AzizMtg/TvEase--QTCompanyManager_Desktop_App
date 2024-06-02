#ifndef PROGRAMME_H
#define PROGRAMME_H

#include <QDialog>

#include <QDialog>
#include "cprogramme.h"
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

namespace Ui {
class programme;
}

class programme : public QDialog
{
    Q_OBJECT

public:
    explicit programme(QWidget *parent = nullptr);
    ~programme();

    void setcinCNX(const QString& cin) {
             this->cin = cin;
         }
        void setROLECNX(const QString& role) {
             this->role = role;
         }

void updateTime() ;

private slots:
    void on_pushButton_9_clicked();

    void on_pushButton_11_clicked();

    void on_pushButton_12_clicked();

    void on_pushButton_13_clicked();

    void on_pushButton_14_clicked();

    void on_pushButton_10_clicked();

    void on_pushButton_parametre_compte_clicked();

    /// siwar


    // /////////////////crud/////////////////////////////

     void on_pushButton_AJOUT_clicked();

     void on_pushButton_lister_clicked();

     void on_tabprog_activated(const QModelIndex &index);
    void on_pushButton_maj_2_clicked();
     void on_recherche_clicked();
     void on_pushButton_refraichir_clicked();
     void on_imprimer_clicked();

     void on_pushButton_3_clicked();

     void on_pushButton_7_clicked();
  // ////////////////////////calendrier///////////////////////
 void setupCalendar();
 void onStart();
 void on_calendarWidget_activated(const QDate &date);




     // /////////////////image/////////


 //  //////////////////////////////////////////////
         void on_browse_clicked();


 // //////////////////////////////////////////

         void on_pushButton_stat_clicked();

         void playGifAutomatically() ;



 //    void hideAnimation();
         void on_pushButton_clicked();

        // void on_pushButton3_clicked();

         void on_pushButton_16_clicked();

         void on_chatbot_clicked();

         void on_Notif_clicked();

         void on_pushButton_17_clicked();

private:
    Ui::programme *ui;
    QString cin , role  ;
    cprogramme tp ;
       bool calendarConfigured  ;
       QMap<QDate, QString> m_programData;
       QListView *imageListView;
           QStandardItemModel *imageModel;
           QString imageName,imagePath;
           QByteArray imageData;
           int idProgramme;
           QByteArray selected_image_data;
           QByteArray image_data;

            QSortFilterProxyModel *proxyModel;


};


////////////////////////////////////////////////////////
class ImageDelegate : public QStyledItemDelegate {
public:
    ImageDelegate(QObject* parent = nullptr)
        : QStyledItemDelegate(parent)
    {
    }

    void paint(QPainter *painter, const QStyleOptionViewItem &option, const QModelIndex &index) const {
        if (index.column() == 8) { // la colonne d'image est la colonne 9
            QVariant data = index.model()->data(index);
            if (data.isValid() && !data.isNull()) {
                QByteArray byteArray = data.toByteArray();
                QPixmap pixmap;
                pixmap.loadFromData(byteArray);
                painter->drawPixmap(option.rect, pixmap);
            }
        } else {
            QStyledItemDelegate::paint(painter, option, index);
        }
    }
};



#endif // PROGRAMME_H
