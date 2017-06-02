#ifndef PHENOTYPE_H
#define PHENOTYPE_H


class Phenotype
{
  double acceleration;
  double maxSpeed;
  double maxStamina;
  double regenEfficiency;
  double responseLatency;
  double visionAngle;
  double visionRange;

public:
  Phenotype(double acceleration, double maxSpeed, double maxStamina, double regenEfficiency,
            double responseLatency, double visionAngle, double visionRange);

  Phenotype crossover(const Phenotype& phenotype) const;
  void mutate();

  double getAcceleration();
  double getMaxSpeed();
  double getMaxStamina();
  double getRegenEfficiency();
  double getResponeLatency();
  double getVisionAngle();
  double getVisionRange();
};

#endif // PHENOTYPE_H
