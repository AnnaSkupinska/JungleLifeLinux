#include "AnimalFactory.h"
#include "Carnivore.h"
#include "Herbivore.h"

#include <memory>

std::shared_ptr<Animal> AnimalFactory::makeCarnivore(const Phenotype& phenotype,
                                                     const std::weak_ptr<Environment> &environment)
{
  return std::shared_ptr<Animal>(new Carnivore(phenotype, environment));
}

std::shared_ptr<Animal> AnimalFactory::makeHerbivore(const Phenotype& phenotype,
                                                     const std::weak_ptr<Environment> &environment)
{
  return std::shared_ptr<Animal>(new Herbivore(phenotype, environment));
}

AnimalFactory::AnimalFactory()
{
  tagHandlers.insert(std::make_pair(AnimalTag::CARNIVORE, &AnimalFactory::makeCarnivore));
  tagHandlers.insert(std::make_pair(AnimalTag::HERBIVORE, &AnimalFactory::makeHerbivore));
}

std::shared_ptr<Animal> AnimalFactory::makeAnimal(AnimalTag tag, const Phenotype& phenotype,
                                                  const std::weak_ptr<Environment> &environment)
{
  return (this->*tagHandlers.at(tag))(phenotype, environment);
}

std::shared_ptr<Animal> AnimalFactory::crossoverCarnivores(const Carnivore &first, const Carnivore &second,
                                                           const std::weak_ptr<Environment> &environment)
{
  auto phenotype = first.getPhenotype().crossover(second.getPhenotype());

  return std::shared_ptr<Animal>(new Carnivore(phenotype, environment));
}

std::shared_ptr<Animal> AnimalFactory::crossoverHerbivores(const Herbivore &first, const Herbivore &second,
                                                           const std::weak_ptr<Environment> &environment)
{
  auto phenotype = first.getPhenotype().crossover(second.getPhenotype());

  return std::shared_ptr<Animal>(new Herbivore(phenotype, environment));
}
