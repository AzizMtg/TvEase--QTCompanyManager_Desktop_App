#ifndef MESEVENTS_H
#define MESEVENTS_H

#include <QDialog>

namespace Ui {
class mesevents;
}

class mesevents : public QDialog
{
    Q_OBJECT

public:
    explicit mesevents(QWidget *parent = nullptr);
    ~mesevents();

private slots:
    void on_retourner_clicked();
    void on_mesevent_clicked(const QModelIndex &index);


private:
    Ui::mesevents *ui;
};

#endif // MESEVENTS_H
