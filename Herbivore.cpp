#include "Herbivore.h"
#include "GrazingState.h"

Herbivore::Herbivore(const Phenotype& phenotype, const std::weak_ptr<Environment>& environment) : Animal(phenotype, environment)
{
  currentState.reset(new GrazingState(this));
}

double Herbivore::calculateFitness()
{
  return 0.0;
}

void Herbivore::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
  QRectF rec = QRectF(-10,-10,20,20);
  QBrush brush(Qt::yellow);
  painter->fillRect(rec,brush);
  painter->setPen(QPen(Qt::lightGray));
  painter->drawRect(rec);
  painter->setPen(QPen(Qt::black));

  double number1 = this->pos().x();
  double number2 = this->pos().y();
  QString s=QString::number(number1,'f',0)+"\n"+QString::number(number2,'f',0);
  painter->drawText(rec,Qt::AlignCenter,s);
}

QRectF Herbivore::boundingRect() const
{
  return QRectF(-40,-40,80,80);
}
