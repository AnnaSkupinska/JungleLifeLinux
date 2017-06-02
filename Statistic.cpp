#include "Statistic.h"

Statistic::Statistic(std::string displayName, double value) : _displayName(displayName), _value(value)
{

}

std::string Statistic::getDisplayName()
{
  return _displayName;
}

double& Statistic::value()
{
  return _value;
}


