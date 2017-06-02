#ifndef ANIMALFACTORY_H
#define ANIMALFACTORY_H

#include <memory>
#include <map>
#include "Phenotype.h"

class Environment;
class Animal;
class Carnivore;
class Herbivore;

class AnimalFactory final
{
public:
  enum class AnimalTag { HERBIVORE, CARNIVORE };

private:
  std::map<AnimalTag, std::shared_ptr<Animal> (AnimalFactory::*)(const Phenotype&, const std::weak_ptr<Environment>&)> tagHandlers;

  std::shared_ptr<Animal> makeCarnivore(const Phenotype& phenotype, const std::weak_ptr<Environment>& environment);
  std::shared_ptr<Animal> makeHerbivore(const Phenotype& phenotype, const std::weak_ptr<Environment>& environment);

public:
  AnimalFactory();
  AnimalFactory(const AnimalFactory&) = delete;
  AnimalFactory(AnimalFactory&&) = delete;

  std::shared_ptr<Animal> makeAnimal(AnimalTag tag, const Phenotype& phenotype, const std::weak_ptr<Environment>& environment);
  std::shared_ptr<Animal> crossoverCarnivores(const Carnivore& first, const Carnivore& second, const std::weak_ptr<Environment>& environment);
  std::shared_ptr<Animal> crossoverHerbivores(const Herbivore& first, const Herbivore& second, const std::weak_ptr<Environment>& environment);
};

#endif // ANIMALFACTORY_H
