#ifndef PUBHISTO_H
#define PUBHISTO_H

#include <QDialog>

namespace Ui {
class PubHisto;
}

class PubHisto : public QDialog
{
    Q_OBJECT

public:
    explicit PubHisto(QWidget *parent = nullptr);
    ~PubHisto();

private:
    Ui::PubHisto *ui;
};

#endif // PUBHISTO_H
