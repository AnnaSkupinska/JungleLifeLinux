#ifndef ESCAPINGSTATE_H
#define ESCAPINGSTATE_H

#include "AnimalState.h"

class EscapingState : public AnimalState
{
public:
  EscapingState(AnimalStateSubject* subject);
  EscapingState(const EscapingState&) = delete;

  EscapingState& operator=(const EscapingState&) = delete;

  virtual void advance();
};

#endif // ESCAPINGSTATE_H
