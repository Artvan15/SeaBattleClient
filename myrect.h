#ifndef MYRECT_H
#define MYRECT_H

#include <QGraphicsItem>
#include <QPainter>

class MyRect : public QGraphicsItem{
public:
    MyRect();
    QRectF boundingRect() const override;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget = nullptr) override;

protected:
    void mousePressEvent(QGraphicsSceneMouseEvent *event) override;
    void mouseReleaseEvent(QGraphicsSceneMouseEvent *event) override;

private:
    bool Pressed;
};

#endif // MYRECT_H
