#ifndef PUZZLEWINDOW_H
#define PUZZLEWINDOW_H

#include <QMainWindow>

#include <QMainWindow>
#include <QGridLayout>
#include <QPushButton>
#include <QVector>
#include <QTime>
#include <random>
#include <QRandomGenerator>

#include <vector>

class PuzzleWindow : public QMainWindow {
    Q_OBJECT

public:
    PuzzleWindow(QWidget *parent = nullptr);
    ~PuzzleWindow();
    void SetPicture(int i, QString file_path);
    void SetVectorOfPictures(QVector<QPixmap>);
private slots:
    void onTileClicked();

private:
    void shuffleTiles();
    bool isSolved();
    void updateUI();

    QGridLayout *gridLayout;
    // std::vector<std::vector<QPushButton*>> tiles;
    QVector<QPushButton*> tiles;
    QVector<QPixmap> field;
    int emptyTileIndex;
};

#endif // PUZZLEWINDOW_H
