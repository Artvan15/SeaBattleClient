#include "myrect.h"


MyRect::MyRect()
{
    Pressed = false;
    setFlag(QGraphicsItem::ItemIsMovable);
}

QRectF MyRect::boundingRect() const
{
    return QRectF(10,10,100,100);
}

void MyRect::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    QRectF rect = boundingRect();
    QPen pen(Qt::black, 5);
    QBrush brush(Qt::red, Qt::BrushStyle::SolidPattern);

    if(Pressed)
        brush.setColor(Qt::green);
    else
        brush.setColor(Qt::red);

    painter->setPen(pen);
    QPainterPath path; path.addEllipse(rect);

    painter->drawEllipse(rect);
    painter->fillPath(path, brush);
}

void MyRect::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    Pressed = true;
    update();
    QGraphicsItem::mousePressEvent(event);
}

void MyRect::mouseReleaseEvent(QGraphicsSceneMouseEvent *event)
{
    Pressed = false;
    update();
    QGraphicsItem::mouseReleaseEvent(event);
}
