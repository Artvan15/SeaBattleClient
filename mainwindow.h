#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPainter>
#include <memory>
#include <QGraphicsScene>

#include "myrect.h"


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

protected:
    void paintEvent(QPaintEvent*) override;

private:
    Ui::MainWindow *ui;
    QGraphicsScene *scene;
    std::unique_ptr<MyRect> rect;
};
#endif // MAINWINDOW_H
