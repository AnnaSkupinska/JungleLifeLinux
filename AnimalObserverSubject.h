#ifndef ANIMALOBSERVERSUBJECT_H
#define ANIMALOBSERVERSUBJECT_H

#include "Phenotype.h"
#include "Statistic.h"

class AnimalObserverSubject
{
public:
  virtual ~AnimalObserverSubject() {}

  virtual Phenotype getPhenotype() const noexcept = 0;
  virtual double getCalories() const noexcept = 0;
  virtual double getStamina() const noexcept = 0;
  virtual double getSpeed() const noexcept = 0;
  virtual bool isDead() const noexcept = 0;
  virtual bool isEaten() const noexcept = 0;
  virtual double readStatistic(StatisticName name) = 0;
};

#endif // ANIMALOBSERVERSUBJECT_H
