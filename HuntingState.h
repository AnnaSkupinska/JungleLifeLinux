#ifndef HUNTINGSTATE_H
#define HUNTINGSTATE_H

#include "AnimalState.h"

class HuntingState : public AnimalState
{
public:
  HuntingState(AnimalStateSubject* subject);
  HuntingState(const HuntingState&) = delete;

  HuntingState& operator=(const HuntingState&) = delete;

  virtual void advance(int phase);
};

#endif // HUNTINGSTATE_H
