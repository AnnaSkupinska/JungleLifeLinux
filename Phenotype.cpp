#include "Phenotype.h"

Phenotype::Phenotype(double acceleration, double maxSpeed, double maxStamina, double regenEfficiency,
                     double responseLatency, double visionAngle, double visionRange)
  : acceleration(acceleration), maxSpeed(maxSpeed), maxStamina(maxStamina),
    regenEfficiency(regenEfficiency),responseLatency(responseLatency),
    visionAngle(visionAngle), visionRange(visionRange)
{

}

Phenotype Phenotype::crossover(const Phenotype &phenotype) const
{
  // STUB method

  return phenotype;
}

void Phenotype::mutate()
{
  // STUB method
}

double Phenotype::getAcceleration()
{
  return acceleration;
}

double Phenotype::getMaxSpeed()
{
  return maxSpeed;
}

double Phenotype::getMaxStamina()
{
  return maxStamina;
}

double Phenotype::getRegenEfficiency()
{
  return regenEfficiency;
}

double Phenotype::getResponeLatency()
{
  return responseLatency;
}

double Phenotype::getVisionAngle()
{
  return visionAngle;
}

double Phenotype::getVisionRange()
{
  return visionRange;
}
