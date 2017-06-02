#ifndef ANIMALSTATE_H
#define ANIMALSTATE_H

#include <memory>
#include "AnimalStateSubject.h"

class AnimalState
{
protected:
  AnimalStateSubject* subject;
public:
  AnimalState(AnimalStateSubject* subject);
  virtual ~AnimalState() {}

  virtual void advance(int phase) = 0;
};

#endif // ANIMALSTATE_H
