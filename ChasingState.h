#ifndef CHASINGSTATE_H
#define CHASINGSTATE_H

#include "AnimalState.h"

class ChasingState : public AnimalState
{
public:
  ChasingState(AnimalStateSubject* subject);
  ChasingState(const ChasingState&) = delete;

  ChasingState& operator=(const ChasingState&) = delete;

  virtual void advance(int phase);
};

#endif // CHASINGSTATE_H
