#ifndef PROGRAMME_H
#define PROGRAMME_H

#include <QDialog>

namespace Ui {
class programme;
}

class programme : public QDialog
{
    Q_OBJECT

public:
    explicit programme(QWidget *parent = nullptr);
    ~programme();

private slots:
    void on_pushButton_9_clicked();

    void on_pushButton_11_clicked();

    void on_pushButton_12_clicked();

    void on_pushButton_13_clicked();

    void on_pushButton_14_clicked();

<<<<<<< Updated upstream
=======
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

>>>>>>> Stashed changes
private:
    Ui::programme *ui;
};

#endif // PROGRAMME_H
