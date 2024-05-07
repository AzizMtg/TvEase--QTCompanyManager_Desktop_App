#ifndef AJTEVENT_H
#define AJTEVENT_H

#include <QDialog>

namespace Ui {
class ajtevent;
}

class ajtevent : public QDialog
{
    Q_OBJECT

public:
    explicit ajtevent(QDialog *parent = nullptr);
    ~ajtevent();

signals:
    void eventAdded();

private slots:
    void on_ajouter_clicked();
    void on_tableView_clicked(const QModelIndex &index);



    void on_pushButton_clicked();

    void on_effectuer_clicked();

private:
    Ui::ajtevent *ui;
};

#endif // AJTEVENT_H
