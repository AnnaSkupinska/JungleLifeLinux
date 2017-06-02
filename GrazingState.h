#ifndef GRAZINGSTATE_H
#define GRAZINGSTATE_H

#include "AnimalState.h"

class GrazingState : public AnimalState
{
public:
  GrazingState(AnimalStateSubject* subject);
  GrazingState(const GrazingState&);

  GrazingState& operator=(const GrazingState&);

  virtual void advance(int phase);
};

#endif // GRAZINGSTATE_H
