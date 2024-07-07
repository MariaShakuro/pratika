#include "congratsdialog.h"
#include "ui_congratsdialog.h"

congratsDialog::congratsDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::congratsDialog)
{
    ui->setupUi(this);
}

congratsDialog::~congratsDialog()
{
    delete ui;
}
