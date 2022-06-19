#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "game.h"
#include <iostream>
using namespace std;
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_startB_clicked()
{
    game* g = new game();
    this->hide();
    g->show();
    //this->paintEvent();
}


