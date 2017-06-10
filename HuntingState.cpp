#include "HuntingState.h"
#include <QtMath>

HuntingState::HuntingState(AnimalStateSubject *subject) : AnimalState(subject)
{

}

void HuntingState::advance(int phase)
{
  // TODO: zaimplementować
  double speed = subject->getSpeed();
  double x = subject->getX();
  double y = subject->getY();
  double angle = subject->getAngle();

  subject->setX(x+qCos(angle)*speed);
  subject->setY(y+qCos(angle)*speed);
}
