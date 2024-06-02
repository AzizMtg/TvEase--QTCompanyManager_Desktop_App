#include "historiquebon.h"
#include "ui_historiquebon.h"

historiquebon::historiquebon(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::historiquebon)
{
    ui->setupUi(this);

    ui->tableView_historique->setModel(Atmp.afficher_historique());


}



historiquebon::~historiquebon()
{
    delete ui;
}
