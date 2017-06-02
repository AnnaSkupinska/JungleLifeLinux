#include "HuntingState.h"

HuntingState::HuntingState(AnimalStateSubject *subject) : AnimalState(subject)
{

}

void HuntingState::advance(int phase)
{
  // TODO: zaimplementować
  subject->getSpeed();
}
