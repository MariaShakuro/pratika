#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QTabBar>
#include<QTimer>
#include<QTimeEdit>
#include<QFrame>
#include<QMouseEvent>
#include<QLabel>
#include"stylehelper.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    ui->progressBar->setValue(0);
  //  ui->widget->setStyleSheet("background-image: url(:/im/im/allanimals.jpg);");
    ui->widget->show();
    timer=new QTimer(ui->widget);
    timer->start(20);
    connect(timer,&QTimer::timeout,this,&MainWindow::onloadout);


    ui->tabWidget->tabBar()->hide();
    ui->tabWidget->setCurrentIndex(0);
    setInterfaceStyle();

    this->current_picture = 0;
    this->difficulte = "";


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setInterfaceStyle()
{
    ui->pushButton_2->setStyleSheet(StyleHelper::getStartButtonsStyle());
    ui->pushButton->setStyleSheet(StyleHelper::getStartButtonsStyle());
}


void MainWindow::on_pushButton_clicked()
{
    ui->tabWidget->setCurrentIndex(1);
    this->current_picture = 0;
    this->difficulte = "";
}


void MainWindow::on_pushButton_4_clicked()
{
    if(this->current_picture == 0 or this->difficulte == ""){
        return;
    }
    else{
        this->MakePuzzle();
        this->field = new PuzzleWindow();
        this->ui->gridLayout_4->addWidget(this->field);
        this->MakeField();
        QTimer*  timer = new QTimer(this);
        // Создаем объект QTimeEdit и устанавливаем текущее время
        QTimeEdit* timeEdit = new QTimeEdit();
        timeEdit->setDisplayFormat("hh:mm:ss");
        timeEdit->setTime(QTime(0, 0, 0)); // Устанавливаем начальное время
        // Подключаем сигнал таймера к слоту, который будет обновлять время в QTimeEdit
        connect(timer, &QTimer::timeout, this, [=]() {
            QTime currentTime = timeEdit->time().addSecs(1);
            timeEdit->setTime(currentTime);
        });

        // Устанавливаем интервал времени для таймера (1 секунда)
        timer->setInterval(1000);

        // Запускаем таймер
        timer->start();
        ui->layout->addWidget(timeEdit);
    }

}

void MainWindow::MakePuzzle()
{
   ui->tabWidget->setCurrentIndex(0);
    switch(this->current_picture){
    case 1:
        this->ui->label->setPixmap(QPixmap(":/resources/image_part_001.png"));
        this->ui->label_7->setPixmap(QPixmap(":/resources/image_part_002.png"));
        this->ui->label_3->setPixmap(QPixmap(":/resources/image_part_003.png"));
        this->ui->label_4->setPixmap(QPixmap(":/resources/image_part_004.png"));
        this->ui->label_5->setPixmap(QPixmap(":/resources/image_part_005.png"));
        this->ui->label_8->setPixmap(QPixmap(":/resources/image_part_006.png"));
        this->ui->label_11->setPixmap(QPixmap(":/resources/image_part_007.png"));
        this->ui->label_16->setPixmap(QPixmap(":/resources/image_part_008.png"));
        this->ui->label_2->setPixmap(QPixmap(":/resources/image_part_009.png"));
        this->ui->label_9->setPixmap(QPixmap(":/resources/image_part_010.png"));
        this->ui->label_12->setPixmap(QPixmap(":/resources/image_part_011.png"));
        this->ui->label_15->setPixmap(QPixmap(":/resources/image_part_012.png"));
        this->ui->label_6->setPixmap(QPixmap(":/resources/image_part_013.png"));
        this->ui->label_10->setPixmap(QPixmap(":/resources/image_part_014.png"));
        this->ui->label_13->setPixmap(QPixmap(":/resources/image_part_015.png"));
        this->ui->label_14->setPixmap(QPixmap(":/resources/image_part_016.png"));
        break;
    default:
        break;
    }
}

void MainWindow::MakeField()
{
    QVector<QPixmap> temp;
    temp.push_back(QPixmap(":/3on3/3on3/1.png"));
    temp.push_back(QPixmap(":/3on3/3on3/2.png"));
    temp.push_back(QPixmap(":/3on3/3on3/3.png"));
    temp.push_back(QPixmap(":/3on3/3on3/4.png"));
    temp.push_back(QPixmap(":/3on3/3on3/5.png"));
    temp.push_back(QPixmap(":/3on3/3on3/6.png"));
    temp.push_back(QPixmap(":/3on3/3on3/7.png"));
    temp.push_back(QPixmap(":/3on3/3on3/8.png"));
    temp.push_back(QPixmap(":/3on3/3on3/9.png"));
    this->field->SetVectorOfPictures(temp);

    //this->field->SetPicture(0,":/3on3/1.png");
}

void MainWindow::on_pushButton_2_clicked()
{
    qApp->quit();
}


void MainWindow::on_progressBar_valueChanged(int value)
{

}
void MainWindow::onloadout()
{
    if(ui->progressBar->value()==100)  {
        ui->progressBar->hide();
        ui->widget->hide();
    }
    ui->progressBar->setValue(ui->progressBar->value()+1);
}


void MainWindow::on_label_19_mousePressEvent(QMouseEvent *event)
{
    if (event->button() == Qt::LeftButton) {
        QLabel* clickedLabel = qobject_cast<QLabel*>(sender());
        if(clickedLabel) {
            QPixmap image = clickedLabel->pixmap(Qt::ReturnByValue);
            if (!image.isNull()) {
                QFrame* frame = new QFrame;
                QHBoxLayout* layout = new QHBoxLayout;
                QLabel* imageLabel = new QLabel;
                imageLabel->setPixmap(image);
                layout->addWidget(imageLabel);
                frame->setLayout(layout);

            }
        }
    }
}


void MainWindow::on_pushButton_6_clicked()
{

}


void MainWindow::on_pushButton_7_clicked()
{
    this->difficulte = "Medium";
}


void MainWindow::on_pushButton_5_clicked()
{

}


void MainWindow::on_label_19_linkActivated(const QString &link)
{
    this->current_picture = 1;
    qDebug() << 1;
}


void MainWindow::on_pushButton_3_clicked()
{
    this->current_picture = 1;
    this->ui->pushButton_3->setIcon(QPixmap(":/icons/icons/photo_2024-07-07_13-29-04.jpg"));
}



