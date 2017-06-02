#include "Plant.h"

Plant::Plant()
{

}

double Plant::eat()
{
  eaten = true;

  return calories;
}

void Plant::advance(int phase)
{

}

void Plant::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
  QRectF rec = QRectF(-10,-10,20,20);
  QBrush Brush(Qt::darkGreen);

  painter->setBrush(Brush);
  painter->setPen(Qt::darkGreen);
  painter->drawEllipse(rec);
  painter->drawEllipse(QRectF(-9,-12,13,13));
  painter->drawEllipse(QRectF(-12,0,5,5));
  painter->drawEllipse(QRectF(3,5,6,6));
}

QRectF Plant::boundingRect() const
{
  return QRectF(-40,-40,80,80);
}
