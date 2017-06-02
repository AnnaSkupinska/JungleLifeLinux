#ifndef DEADSTATE_H
#define DEADSTATE_H

#include "AnimalState.h"

class DeadState : public AnimalState
{
public:
  DeadState(AnimalStateSubject* subject);
  DeadState(const DeadState&) = delete;

  DeadState& operator=(const DeadState&) = delete;

  virtual void advance(int phase);
};

#endif // DEADSTATE_H
