#ifndef PUBLICITE_H
#define PUBLICITE_H

#include <QDialog>
#include "cpub.h"
#include <QFrame>
namespace Ui {
class publicite;
}

class publicite : public QDialog
{
    Q_OBJECT

public:
    explicit publicite(QWidget *parent = nullptr);
    ~publicite();

    void setcinCNX(const QString& cin) {
            this->cin = cin;
        }
       void setROLECNX(const QString& role) {
            this->role= role;
        }


       /////
            Cpub fetchPubliciteById(int id);
            int generateNewIdSoc();
            void populateSocieteComboBox();
            void populateModifierSocieteComboBox();
            QString fetchSocieteIDByName(const QString& societeName);
            void populateProgramComboBox();
            void updateDateEdit(int index);
            void selectionprog();
            void insertIntoPUBPROG(int pubID, const QString& programID);
            void clearLayout(QLayout *layout);
            void clearFrame(QFrame *frame);
public slots:
    void onProgramSelected(int index);
    void onTableViewClicked(const QModelIndex& index);

private slots:
    void on_pushButton_16_clicked();

    void on_pushButton_17_clicked();

    void on_pushButton_19_clicked();

    void on_pushButton_20_clicked();

    void on_pushButton_21_clicked();

    void on_pushButton_18_clicked();

    void on_pushButton_parametre_compte_clicked();

    ///
    ///
        void on_pushButton_2_clicked();

           void on_pushButton_4_clicked();

           void on_pushButton_3_clicked();

           void on_pushButton_5_clicked();

           void on_pushButton_6_clicked();

           void on_BoutonAjouter_6_clicked();

              void on_lookforid_clicked();

              void on_modifier_clicked();

              void on_BoutonSupprimer_clicked();

              void on_pushButton_clicked();

              void on_rechbutton_clicked();


              void on_comboBox_currentIndexChanged(int index);

              void on_comboBox_activated(const QString &arg1);

              void on_random_clicked();

              void on_ajoutersociete_clicked();

              void playGifAutomatically() ;


              void on_chatbot_clicked();

              void on_pushButton_7_clicked();

              void on_Notif_clicked();

              void on_raf_clicked();

              void on_ard_clicked();

              void on_ard_2_clicked();

              void on_ard_3_clicked();

private:
    Ui::publicite *ui;
    QString cin , role  ;
    Cpub tmp;
};

#endif // PUBLICITE_H
