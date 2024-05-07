#include "TestDialog.h"
#include "ui_TestDialog.h"

TestDialog::TestDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TestDialog)
{
    ui->setupUi(this);
}

TestDialog::~TestDialog()
{
    delete ui;
}

void TestDialog::on_pushButtonSpeak_clicked()
{
    // Get text from line edit and convert to wide char
    QString text = ui->lineEditText->text();
    const wchar_t *wText = reinterpret_cast<const wchar_t *>(text.utf16());

    // Speak the text using eSpeak
    m_espeak.speak(wText);
}
