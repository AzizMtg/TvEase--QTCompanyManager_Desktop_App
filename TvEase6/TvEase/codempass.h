#ifndef CODEMPASS_H
#define CODEMPASS_H

#include <QDialog>

namespace Ui {
class codeMpass;
}

class codeMpass : public QDialog
{
    Q_OBJECT

public:
    explicit codeMpass(QWidget *parent = nullptr);
    ~codeMpass();

    void setCodeConfirmation(const QString& codeConfirmation) {
         this->codeConfirmation = codeConfirmation;
     }
    void setCIN(const QString& cin) {
         this->cin = cin;
     }

private slots:
    void on_pushButton_clicked();

private:
    Ui::codeMpass *ui;
    QString codeConfirmation;
    QString cin;

};

#endif // CODEMPASS_H
