#include "Spatial.h"

Spatial::Spatial(){
  angle = (qrand() % 360);
  setRotation(angle);

  int startX = 0;
  int startY = 0;
  startX = 20+(qrand()%360);
  startY = 20+(qrand()%360);
  setPos(startX,startY);

  visibilityAngle = 100;
  //setPos(mapToParent(StartX,StartY));
}
