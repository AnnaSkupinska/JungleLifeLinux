#ifndef ORGANISM_H
#define ORGANISM_H

#include <QGraphicsItem>
#include "Spatial.h"

class Organism : public Spatial
{
public:
  Organism();
  virtual ~Organism() {}
  virtual void advance(int phase) = 0;
};

#endif // ORGANISM_H
