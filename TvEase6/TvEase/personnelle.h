#ifndef PERSONNELLE_H
#define PERSONNELLE_H

#include <QDialog>
#include "cpersonnel.h"

// taba3 il recherche
#include <QSortFilterProxyModel>

namespace Ui {
class personnelle;
}

class personnelle : public QDialog
{
    Q_OBJECT

public:
    explicit personnelle(QWidget *parent = nullptr);
    ~personnelle();




    void setcin(const QString& cin) {
         this->cin = cin;
     }
    void setROLE(const QString& role) {
         this->role = role;
     }

    void updateTime() ;

private slots:
    void on_pushButton_6_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_ajouter_personnel_clicked();

    void on_tabWidget_currentChanged(int index);

    void on_pushButton_supprimer_perso_clicked();

    void on_pushButton_modifier_personnel_clicked();

    void on_pushButton_RESET_personnel__clicked();

    void on_pushButton_RESET_personnel_1_clicked();

    void on_pushButton_RESET_clicked();

    void on_pushButton_7_clicked();

   void searchTextChanged(const QString &text) ;

   void on_lineEdit_textChanged(const QString &arg1);

   void comboBoxTrieChanged(int index) ;

   void on_comboBox_trie_activated(const QString &arg1);

   void on_comboBox_modifier_activated(const QString &arg1);

   void on_comboBox_modifier_perso_currentIndexChanged(const QString &arg1);

   void on_pushButton_recherche_clicked();

   void afficherTousElementsSiVide(const QString &text) ;


   void on_pushButton_travailler_jointure_clicked();


   void on_pushButton_8_clicked();

   void on_lineEdit_role_cursorPositionChanged(int arg1, int arg2);

   void on_pushButton_parametre_compte_clicked();

   void on_pushButton_stat_clicked();

   void on_pushButton_9_clicked();

   void on_pushButton_11_clicked();

   void on_chatbot_clicked();

   void on_Notif_clicked();

   void on_pushButton_12_clicked();

private:
    Ui::personnelle *ui;
    Cpersonnel tmppersonnel ;
    // taba3 il recherche ista3maltha fil affichage
    QSortFilterProxyModel *proxyModel; // Declaration of the proxy model

    QString cin , role  ;

};


#endif // PERSONNELLE_H
