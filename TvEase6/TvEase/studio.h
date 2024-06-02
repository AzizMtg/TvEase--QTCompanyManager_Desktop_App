#ifndef STUDIO_H
#define STUDIO_H

#include <QDialog>
#include "cstudio.h"
#include <QSortFilterProxyModel>

namespace Ui {
class studio;
}

class studio : public QDialog
{
    Q_OBJECT

public:
    explicit studio(QWidget *parent = nullptr);
    ~studio();

    void setcinCNX(const QString& cin) {
            this->cin = cin;
        }
       void setROLECNX(const QString& role) {
            this->role = role;
        }
void updateTime() ;
private slots:
    void on_pushButton_37_clicked();

    void on_pushButton_38_clicked();

    void on_pushButton_39_clicked();

    void on_pushButton_40_clicked();

    void on_pushButton_41_clicked();

    void on_pushButton_42_clicked();

    void on_pushButton_parametre_compte_clicked() ;

    //// khalil
    void on_pushButton_clicked();

         //void on_tabWidget_tabBarClicked(int index);

         //void on_deleteb_clicked();

         void on_pushButton_2_clicked();

         void on_imprimerpdf_clicked();

         void on_pushButton_5_clicked();

         void on_Imprimer_clicked();
     void afficherTousElementsSiVide(const QString &text);
     void on_recherche_clicked();

     void on_tabWidget_currentChanged(int index);

     void on_tableView_lister_activated(const QModelIndex &index);

     void on_refresh1_clicked();

     void on_pushButton_7_clicked();

     void on_trie_activated(const QString &arg1);

    // void on_pushButton_9_clicked();

     void on_pushButton_10_clicked();


     void on_pushButton_9_clicked();

     void on_pushButton_11_clicked();

     void on_pushButton_12_clicked();


  void updateLineEdit(double latitude, double longitude);

  void on_chatbot_clicked();

  void on_Notif_clicked();

  void on_pushButton_13_clicked();

private:
    Ui::studio *ui;    
    QString cin , role  ;
    Cstudio tmpstudio ;
    QSortFilterProxyModel *proxyModel; // Declaration of the proxy model

};

#endif // STUDIO_H
