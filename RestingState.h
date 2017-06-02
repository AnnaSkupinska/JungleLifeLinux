#ifndef RESTINGSTATE_H
#define RESTINGSTATE_H

#include "AnimalState.h"

class RestingState : public AnimalState
{
public:
  RestingState(AnimalStateSubject* subject);
  RestingState(const RestingState&) = delete;

  RestingState& operator=(const RestingState&) = delete;

  virtual void advance();
};

#endif // RESTINGSTATE_H
