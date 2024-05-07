#ifndef EVENT_H
#define EVENT_H

#include <QDialog>
#include <QSqlQueryModel>

namespace Ui {
class Event;
}

class Event : public QDialog
{
    Q_OBJECT

public:
    explicit Event(QWidget *parent = nullptr);
    ~Event();

private slots:
    void on_ajt_clicked();
    void on_eventdispo_clicked(const QModelIndex &index);
    void on_particip_clicked();

    void on_pushButton_clicked();

private:
    Ui::Event *ui;
    QSqlQueryModel *model; // Declaration of QSqlQueryModel as a member variable
    QString cin , role;

};

#endif // EVENT_H
