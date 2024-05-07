#ifndef TESTDIALOG_H
#define TESTDIALOG_H

#include <QDialog>
#include "ESpeak.h"

namespace Ui {
class TestDialog;
}

class TestDialog : public QDialog
{
    Q_OBJECT

public:
    explicit TestDialog(QWidget *parent = nullptr);
    ~TestDialog();

private slots:
    void on_pushButtonSpeak_clicked();

private:
    Ui::TestDialog *ui;
    ESpeak m_espeak;
};

#endif // TESTDIALOG_H
