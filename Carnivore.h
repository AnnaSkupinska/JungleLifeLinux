#ifndef CARNIVORE_H
#define CARNIVORE_H

#include "Animal.h"

class Carnivore : public Animal
{ 
public:
  Carnivore(const Phenotype& phenotype, const std::weak_ptr<Environment> &environment);
  Carnivore(const Carnivore&) = delete;

  Carnivore& operator=(const Carnivore&) = delete;

  virtual double calculateFitness();

  virtual void paint(QPainter * painter, const QStyleOptionGraphicsItem * option, QWidget * widget);
  virtual QRectF boundingRect() const;


};

#endif // CARNIVORE_H
