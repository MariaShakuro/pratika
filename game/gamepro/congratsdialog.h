#ifndef CONGRATSDIALOG_H
#define CONGRATSDIALOG_H

#include <QDialog>

namespace Ui {
class congratsDialog;
}

class congratsDialog : public QDialog
{
    Q_OBJECT

public:
    explicit congratsDialog(QWidget *parent = nullptr);
    ~congratsDialog();

private:
    Ui::congratsDialog *ui;
};

#endif // CONGRATSDIALOG_H
