#ifndef ANIMALOBSERVER_H
#define ANIMALOBSERVER_H

#include <memory>
#include <QObject>
#include "AnimalObserverSubject.h"

class AnimalObserver : QObject
{
  Q_OBJECT

protected:
  // NOTE take care, share_ptr may sustain existence of an unneeded object
  const std::shared_ptr<AnimalObserverSubject> subject;

public:
  AnimalObserver(const std::shared_ptr<AnimalObserverSubject>& subject);
  AnimalObserver(const AnimalObserver&) = delete;
  virtual ~AnimalObserver() {}

  AnimalObserver& operator=(const AnimalObserver&) = delete;

private slots:
  virtual void update() = 0;
};

#endif // ANIMALOBSERVER_H
