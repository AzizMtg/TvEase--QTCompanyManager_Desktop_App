#ifndef TRAVAILLER_H
#define TRAVAILLER_H

#include <QDialog>
#include "ctravailler.h"

#include <QSortFilterProxyModel>

namespace Ui {
class travailler;
}

class travailler : public QDialog
{
    Q_OBJECT

public:
    explicit travailler(QWidget *parent = nullptr);
    ~travailler();

private slots:
    void on_pushButton_afficher_jointure_clicked();

    void on_pushButton_supp_jointure_clicked();

    void on_pushButton_modifier_jointure_clicked();

    void on_pushButton__telechargement_jointure_clicked();

    void on_pushButton_recher_jointure_clicked();

    void afficherTousElementsSiVide(const QString &text) ;


    void on_comboBox_trie_jointure_activated(const QString &arg1);

private:
    Ui::travailler *ui;
     ctravailler tmptravailler ;
     // ista3maltha fil affichage
     QSortFilterProxyModel *proxyModel; // Declaration of the proxy model

};

#endif // TRAVAILLER_H
