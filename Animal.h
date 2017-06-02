#ifndef ANIMAL_H
#define ANIMAL_H

#include <memory>
#include <vector>
#include "Organism.h"
#include "Phenotype.h"
#include "AnimalState.h"
#include "AnimalObserverSubject.h"
#include "AnimalStateSubject.h"
#include "Statistic.h"

class AnimalState;
class Environment;
class AnimalObserver;

class Animal : public Organism, public AnimalObserverSubject, public AnimalStateSubject
{
protected:
  Phenotype phenotype;

  double calories;
  double stamina;
  double speed;

  std::weak_ptr<Environment> environment;
  std::unique_ptr<AnimalState> currentState;
  std::vector<std::shared_ptr<AnimalObserver>> observers;

  std::map<StatisticName, Statistic> statistics;

  void notifyObservers();

public:
  Animal(const Phenotype& phenotype, const std::weak_ptr<Environment>& environment);

  void changeState(std::unique_ptr<AnimalState>&& state);

  double eat();

  virtual void advance(int phase);
  virtual double calculateFitness() = 0;

  virtual Phenotype getPhenotype() const noexcept;
  virtual double getCalories() const noexcept;
  virtual double getStamina() const noexcept;
  virtual double getSpeed() const noexcept;
  virtual bool isDead() const noexcept;
  virtual bool isEaten() const noexcept;

  virtual void setX(double x);
  virtual void setY(double y);
  virtual void setPos(double x, double y);
  virtual void setAngle(double angle);
  virtual void setCalories(double calories);
  virtual void setStamina(double stamina);
  virtual void setSpeed(double speed);

  virtual double readStatistic(StatisticName name);
  virtual double& getStatistic(StatisticName name);

  void setPreviewMode(Organism::PreviewMode mode);
};

#endif // ANIMAL_H
