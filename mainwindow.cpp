#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    rect = std::make_unique<MyRect>();
    scene = new QGraphicsScene(-50,-10,500,200,this);

    ui->graphicsView->setScene(scene);
    scene->addItem(rect.get());

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::paintEvent(QPaintEvent *event){

}
