#include <algorithm>
#include "Simulation.h"
#include "Phenotype.h"
#include "Plant.h"

void Simulation::populateEnvironment()
{
  Phenotype initPhenotype(0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);

  for(int i = 0; i < plantsCount; ++i) {
    environment->add(std::make_shared<Plant>());
  }
  for(int i = 0; i < carnivoresCount; ++i) {
    environment->add(std::make_shared<Carnivore>(initPhenotype, environment));
  }
  for(int i = 0; i < herbivoresCount; ++i) {
    environment->add(std::make_shared<Herbivore>(initPhenotype, environment));
  }
}

void Simulation::simulationStep()
{
  environment->advance();
}

Simulation::Simulation(int iterationsCount, int plantsCount, int carnivoresCount, int herbivoresCount, int stepPeriodMs)
  : environment(new Environment()), iterationsCount(iterationsCount), plantsCount(plantsCount), carnivoresCount(carnivoresCount), herbivoresCount(herbivoresCount),
    stepPeriodMs(stepPeriodMs), timer(new QTimer())
{
  QObject::connect(timer.get(), &QTimer::timeout, this, &Simulation::simulationStep);
}

void Simulation::start()
{
  iterationNumber = 0;
  environment->clearContents();
  populateEnvironment();

  timer->start(stepPeriodMs);
}

void Simulation::stop()
{
  environment->clearContents();

  timer->stop();
}

void Simulation::suspend()
{
  timer->stop();
}

void Simulation::resume()
{
  timer->start();
}

std::weak_ptr<Environment> Simulation::getEnvironment()
{
  return environment;
}

int Simulation::getIterationNumber()
{
  return iterationNumber;
}

int Simulation::getIterationsCount()
{
  return iterationsCount;
}
