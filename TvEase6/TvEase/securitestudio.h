#ifndef SECURITESTUDIO_H
#define SECURITESTUDIO_H

#include <QDialog>
#include"arduino.h"

#include<QString>
#include<QDate>
#include<QSqlQuery>
#include<QSqlQueryModel>

#include <QSortFilterProxyModel>

#include"csecuritysd.h"
namespace Ui {
class securiteStudio;
}

class securiteStudio : public QDialog
{
    Q_OBJECT

public:
    explicit securiteStudio(QWidget *parent = nullptr);
    ~securiteStudio();

private slots:
    void update_label();   // slot permettant la mise à jour du label état de la lampe 1,  // ce slot est lancé à chaque réception d'un message de Arduino



    void on_pushButton__securite_clicked();

    void on_pushButton_recher_securite_clicked();

    void afficherTousElementsSiVide(const QString &text) ;


    void on_comboBox_trie_securite_activated(const QString &arg1);

private:
    Ui::securiteStudio *ui;
    QByteArray data; // variable contenant les données reçues
    Arduino A; // objet temporaire
    CSecuritySD securitysd ;
    QString receivedData;
    QSortFilterProxyModel *proxyModel; // Declaration of the proxy model

};

#endif // SECURITESTUDIO_H
