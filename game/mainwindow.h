#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_2_clicked();

    void on_progressBar_valueChanged(int value);
    void onloadout();

    void on_label_19_mousePressEvent(QMouseEvent *event);

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_5_clicked();

    void on_label_19_linkActivated(const QString &link);

    void on_pushButton_3_clicked();

private:
    Ui::MainWindow *ui;
    QTimer*timer;
    void MakePuzzle();
    void setInterfaceStyle();

    QString difficulte;
    int  current_picture;
};
#endif // MAINWINDOW_H
