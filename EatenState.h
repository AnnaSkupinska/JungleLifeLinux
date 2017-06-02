#ifndef EATENSTATE_H
#define EATENSTATE_H

#include "AnimalState.h"

class EatenState : public AnimalState
{
public:
  EatenState(AnimalStateSubject* subject);
  EatenState(const EatenState&) = delete;

  EatenState& operator=(const EatenState&);

  virtual void advance();
};

#endif // EATENSTATE_H
