#ifndef ANIMALSTATESUBJECT_H
#define ANIMALSTATESUBJECT_H

#include "Phenotype.h"
#include "Statistic.h"

class AnimalStateSubject
{
public:
  AnimalStateSubject();
  virtual ~AnimalStateSubject() {}

  virtual Phenotype getPhenotype() const noexcept = 0;
  virtual double getCalories() const noexcept = 0;
  virtual double getStamina() const noexcept = 0;
  virtual double getSpeed() const noexcept = 0;
  virtual bool isDead() const noexcept = 0;
  virtual bool isEaten() const noexcept = 0;
  virtual double& getStatistic(StatisticName) = 0;
  virtual double getX() = 0;
  virtual double getY() = 0;
  virtual double getAngle() = 0;

  virtual void setX(double x) = 0;
  virtual void setY(double y) = 0;
  virtual void setPos(double x, double y) = 0;
  virtual void setAngle(double angle) = 0;
  virtual void setCalories(double calories) = 0;
  virtual void setStamina(double stamina) = 0;
  virtual void setSpeed(double speed) = 0;
};

#endif // ANIMALSTATESUBJECT_H
