#include "puzzlewindow.h"
#include "congratsdialog.h"
#include <QMessageBox>

PuzzleWindow::PuzzleWindow(QWidget *parent)
    : QMainWindow(parent),
    gridLayout(new QGridLayout),
    emptyTileIndex(8) {

    QWidget *centralWidget = new QWidget(this);
    setCentralWidget(centralWidget);
    centralWidget->setLayout(gridLayout);
    // for(int i = 0;i < 9;i++){
    //     this->field.push_back(QPixmap());
    // }
    QVector<QPixmap>* temp = &this->field;
    temp->push_back(QPixmap(":/3on3/3on3/1.png"));
    temp->push_back(QPixmap(":/3on3/3on3/2.png"));
    temp->push_back(QPixmap(":/3on3/3on3/3.png"));
    temp->push_back(QPixmap(":/3on3/3on3/4.png"));
    temp->push_back(QPixmap(":/3on3/3on3/5.png"));
    temp->push_back(QPixmap(":/3on3/3on3/6.png"));
    temp->push_back(QPixmap(":/3on3/3on3/7.png"));
    temp->push_back(QPixmap(":/3on3/3on3/8.png"));
    temp->push_back(QPixmap(":/3on3/3on3/9.png"));
    for (int i = 0; i < 9; ++i) {
        QPushButton *button = new QPushButton(this);
        button->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        button->setFont(QFont("Arial", 24));
        QSize largerSize = temp->at(i).size() * 5;
        button->setIconSize(largerSize);
        connect(button, &QPushButton::clicked, this, &PuzzleWindow::onTileClicked);
        tiles.append(button);
        gridLayout->addWidget(button, i / 3, i % 3);
    }

    shuffleTiles();
    //updateUI();
}

PuzzleWindow::~PuzzleWindow() {}

void PuzzleWindow::SetPicture(int i, QString file_path)
{
    QPixmap temp(file_path);
    this->tiles[i]->setIcon(temp);

    this->tiles[i]->setIconSize(temp.size());
}

void PuzzleWindow::SetVectorOfPictures(QVector<QPixmap> vec_)
{
    field.clear();
    field = vec_;
}

void PuzzleWindow::shuffleTiles() {


    std::vector<int> numbers{0,1,2,3,4,5,6,7,8};

    std::random_device rd;
    std::mt19937 gen(rd());

    // эта строка определяет рандом
    //std::shuffle(numbers.begin(), numbers.end(), gen);

    for (int i = 0; i < 9; ++i) {
        if (numbers[i] == 0) {
            emptyTileIndex = i;
            qDebug()<<numbers[i] << "nado";
            tiles[i]->setIcon(QIcon());
        }
        else {
            qDebug()<<numbers[i];
            //qDebug()<<this->field[numbers[i]];
           tiles[i]->setIcon(this->field[numbers[i]]);
        }
    }
}

bool PuzzleWindow::isSolved() {
    // for (int i = 0; i < 8; ++i) {
    //     if (tiles[i]->text().toInt() != i + 1)
    //         return false;
    // }
    // return true;
    return false;
}

void PuzzleWindow::updateUI() {
    for (int i = 0; i < 9; ++i) {
        if (i == emptyTileIndex)
            tiles[i]->setIcon(QIcon());
        else
            tiles[i]->setIcon(field[i]);
    }
}

void PuzzleWindow::onTileClicked() {
    QPushButton *clickedButton = qobject_cast<QPushButton*>(sender());
    int clickedIndex = tiles.indexOf(clickedButton);

    int rowClicked = clickedIndex / 3;
    int colClicked = clickedIndex % 3;
    int rowEmpty = emptyTileIndex / 3;
    int colEmpty = emptyTileIndex % 3;

    if ((rowClicked == rowEmpty && abs(colClicked - colEmpty) == 1) ||
        (colClicked == colEmpty && abs(rowClicked - rowEmpty) == 1)) {
        tiles[emptyTileIndex]->setIcon(clickedButton->icon());
        clickedButton->setIcon(QIcon());
        emptyTileIndex = clickedIndex;
        if (isSolved()) {
            // Создаем модальное диалоговое окно
            QDialog congratsDialog(this);
            congratsDialog.setWindowTitle("Выигрыш");
            QLabel congratsLabel("Поздравляем! Вы решили головоломку!", &congratsDialog);
            congratsLabel.setAlignment(Qt::AlignCenter);
            congratsDialog.exec();


        }
    }
}
