#include <algorithm>
#include "Environment.h"

void Environment::revokeSceneItemOwnership()
{
  // UWAGA: obiekty przechowywane w QGraphicsScene zostałyby normalnie zwolnione,
  // należy więc przed unięciem obiektu sceny odebrać jej panowanie nad wszystkimi obiektami
  // (zostaną one usunięte przez sprytne wskaźniki)

  auto itemList = items();
  for(auto item : itemList) {
    // przekazuje panowanie do obiektu wywołującego
    removeItem(item);
  }
}

Environment::Environment() : QGraphicsScene(0, 0, 400, 400)
{
  setBackgroundBrush(QBrush(QColor(10,30,0)));
  addRect(sceneRect(), QPen(Qt::yellow), QBrush(QColor(100,200,100)));
}

Environment::~Environment()
{
  revokeSceneItemOwnership();
}

void Environment::add(std::shared_ptr<Plant>&& plant)
{
  addItem(plant.get());
  plants.emplace_back(plant);
}

void Environment::add(std::shared_ptr<Carnivore>&& carnivore)
{
  addItem(carnivore.get());
  carnivores.emplace_back(carnivore);
}

void Environment::add(std::shared_ptr<Herbivore>&& herbivore)
{
  addItem(herbivore.get());
  herbivores.emplace_back(herbivore);
}

void Environment::clearContents()
{
  revokeSceneItemOwnership();

  plants.clear();
  carnivores.clear();
  herbivores.clear();
}

std::vector<std::weak_ptr<Animal> > Environment::getAnimalsInField(QPolygon field, Environment::AnimalSelectionMode mode)
{
  std::vector<std::weak_ptr<Animal>> animals;

  return animals;
}

std::vector<std::weak_ptr<Animal> > Environment::getAnimals(Environment::AnimalSelectionMode mode)
{
  std::vector<std::weak_ptr<Animal>> animals;

  switch(mode) {
    case AnimalSelectionMode::CARNIVORES_ONLY: {
      std::copy(carnivores.begin(), carnivores.end(), std::back_inserter(animals));
      break;
    }
    case AnimalSelectionMode::HERBIVORES_ONLY: {
      std::copy(herbivores.begin(), herbivores.end(), std::back_inserter(animals));
      break;
    }
    case AnimalSelectionMode::ALL:
    default: {
      std::copy(carnivores.begin(), carnivores.end(), std::back_inserter(animals));
      std::copy(herbivores.begin(), herbivores.end(), std::back_inserter(animals));
      break;
    }
  }

  return animals;
}

qreal Environment::directAtPlantArea()
{
  return 0.0;
}

void Environment::setPreviewMode(Spatial::PreviewMode mode)
{

}

void Environment::mousePressEvent(QGraphicsSceneMouseEvent *mouseEvent)
{
    // tutaj włożyć obsługę myszy klikającej na ekran
}
