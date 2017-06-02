#ifndef CONFIGURATION_H
#define CONFIGURATION_H

#include <string>
#include <map>

class Configuration final
{
  std::map<std::string, double> parameters;

  Configuration();
  Configuration(const Configuration&);
  Configuration(Configuration&&);

  Configuration& operator=(const Configuration&);

  void readConfigFile();
public:
  const Configuration& getInstance() const;
  double operator[](std::string name) const;
};

#endif // CONFIGURATION_H
