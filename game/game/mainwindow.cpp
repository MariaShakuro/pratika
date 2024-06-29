#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QTabBar>
#include"stylehelper.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->tabWidget->tabBar()->hide();
    ui->tabWidget->setCurrentIndex(0);
    setInterfaceStyle();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setInterfaceStyle()
{
ui->pushButton_2->setStyleSheet(StyleHelper::getStartButtonsStyle());
ui->pushButton_3->setStyleSheet(StyleHelper::getStartButtonsStyle());
ui->pushButton->setStyleSheet(StyleHelper::getStartButtonsStyle());
}


void MainWindow::on_pushButton_clicked()
{
    ui->tabWidget->setCurrentIndex(1);
}


void MainWindow::on_pushButton_4_clicked()
{
    ui->tabWidget->setCurrentIndex(0);
}


void MainWindow::on_pushButton_2_clicked()
{
    qApp->quit();
}


void MainWindow::on_label_19_linkActivated(const QString &link)
{

}


void MainWindow::on_label_21_linkActivated(const QString &link)
{

}


void MainWindow::on_label_22_linkActivated(const QString &link)
{

}


void MainWindow::on_label_20_linkActivated(const QString &link)
{

}


void MainWindow::on_label_18_linkActivated(const QString &link)
{

}

