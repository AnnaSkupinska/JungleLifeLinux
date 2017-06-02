#ifndef HERBIVORE_H
#define HERBIVORE_H

#include "Animal.h"

class Herbivore : public Animal
{
public:
  Herbivore(const Phenotype& phenotype, const std::weak_ptr<Environment> &environment);
  Herbivore(const Herbivore&) = delete;

  Herbivore& operator=(const Herbivore&) = delete;

  virtual double calculateFitness();

  virtual void paint(QPainter * painter, const QStyleOptionGraphicsItem * option, QWidget * widget);
  virtual QRectF boundingRect() const;
};

#endif // HERBIVORE_H
