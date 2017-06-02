#include "Animal.h"


Animal::Animal(const Phenotype& phenotype, const std::weak_ptr<Environment> &environment) : phenotype(phenotype)
{
  // STUB contructor

  speed = 10.0;
}

void Animal::changeState(std::unique_ptr<AnimalState> &&state)
{

}

double Animal::eat()
{
  return calories;
}

void Animal::advance(int phase)
{
  currentState->advance(phase);
    //to się odbywa
}

Phenotype Animal::getPhenotype() const noexcept
{
  return phenotype;
}

double Animal::getCalories() const noexcept
{
  return calories;
}

double Animal::getStamina() const noexcept
{
  return stamina;
}

double Animal::getSpeed() const noexcept
{
  return speed;
}

bool Animal::isDead() const noexcept
{
  // STUB method

  return false;
}

bool Animal::isEaten() const noexcept
{
  // STUB method

  return false;
}

void Animal::setX(double x)
{
  QGraphicsItem::setX(x);
}

void Animal::setY(double y)
{
  QGraphicsItem::setY(y);
}

void Animal::setPos(double x, double y)
{
  QGraphicsItem::setPos(x, y);
}

void Animal::setAngle(double angle)
{
  this->angle = angle;
}

void Animal::setCalories(double calories)
{
  this->calories = calories;
}

void Animal::setStamina(double stamina)
{
  this->stamina = stamina;
}

void Animal::setSpeed(double speed)
{
  this->speed = speed;
}

double Animal::readStatistic(StatisticName name)
{
  return statistics.at(name).value();
}

double& Animal::getStatistic(StatisticName name)
{
  return statistics.at(name).value();
}

void Animal::setPreviewMode(Spatial::PreviewMode mode)
{

}
