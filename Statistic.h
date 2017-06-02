#ifndef STATISTIC_H
#define STATISTIC_H

#include <string>

enum class StatisticName
{
  MAX_ITERATIONS_SURVIVED,
  PLANTS_EATEN,
  ANIMALS_EATEN,
  CORPSES_EATEN,
  SAME_SPECIES_EATEN,
  ANIMALS_CATCHED,
  SUCCESSFUL_ESCAPES,
  FAILED_ESCAPES,
  TIMES_MUTATED,
  TIMES_CROSSED
};

class Statistic final
{
  std::string _displayName;
  double _value;

public:
  Statistic(std::string displayName, double value = 0.0);

  std::string getDisplayName();
  double& value();
};

#endif // STATISTIC_H
