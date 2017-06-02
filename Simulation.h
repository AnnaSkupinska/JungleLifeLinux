#ifndef SIMULATION_H
#define SIMULATION_H

#include <memory>
#include <QTimer>
#include "Environment.h"
#include "AnimalFactory.h"

class Simulation : public QObject
{
  Q_OBJECT

  AnimalFactory animalFactory;
  std::shared_ptr<Environment> environment;

  int iterationsCount;
  int plantsCount;
  int carnivoresCount;
  int herbivoresCount;
  int stepPeriodMs;

  int iterationNumber;

  std::unique_ptr<QTimer> timer;

  void populateEnvironment();

private slots:
  void simulationStep();

public:
  Simulation(int iterationsCount, int plantsCount, int carnivoresCount, int herbivoresCount, int stepPeriodMs);
  Simulation(const Simulation&) = delete;

  Simulation& operator=(const Simulation&) = delete;

  void start();
  void stop();
  void suspend();
  void resume();

  std::weak_ptr<Environment> getEnvironment();
  int getIterationNumber();
  int getIterationsCount();
};

#endif // SIMULATION_H
