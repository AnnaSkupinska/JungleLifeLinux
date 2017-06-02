#ifndef PLANT_H
#define PLANT_H

#include "Organism.h"

class Plant : public Organism
{
  double calories;
  int regenTicks;
  bool eaten = false;

public:
  Plant();
  Plant(const Plant&) = delete;

  Plant& operator=(const Plant&) = delete;

  double eat();

  virtual void advance(int phase);

  virtual void paint(QPainter * painter, const QStyleOptionGraphicsItem * option, QWidget * widget);
  virtual QRectF boundingRect() const;
};

#endif // PLANT_H
