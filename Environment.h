#ifndef ENVIRONMENT_H
#define ENVIRONMENT_H

#include <QGraphicsScene>
#include <QGraphicsSceneMouseEvent>
#include "Plant.h"
#include "Carnivore.h"
#include "Herbivore.h"
#include "EatenState.h"

class Environment final : public QGraphicsScene
{
  std::vector<std::shared_ptr<Plant>> plants;
  std::vector<std::shared_ptr<Carnivore>> carnivores;
  std::vector<std::shared_ptr<Herbivore>> herbivores;

  void revokeSceneItemOwnership();
public:
  enum class AnimalSelectionMode { CARNIVORES_ONLY, HERBIVORES_ONLY, ALL };

  Environment();
  Environment(const Environment&) = delete;
  virtual ~Environment();

  Environment& operator=(const Environment&) = delete;

  void add(std::shared_ptr<Plant>&& plant);
  void add(std::shared_ptr<Carnivore>&& carnivore);
  void add(std::shared_ptr<Herbivore>&& herbivore);
  void clearContents();

  std::vector<std::weak_ptr<Animal>> getAnimalsInField(QPolygon field, AnimalSelectionMode mode = AnimalSelectionMode::ALL);
  std::vector<std::weak_ptr<Animal> > getAnimals(AnimalSelectionMode mode = AnimalSelectionMode::ALL);
  qreal directAtPlantArea();

public slots:
  void setPreviewMode(Spatial::PreviewMode mode);
protected:
  void mousePressEvent(QGraphicsSceneMouseEvent *mouseEvent);
};

#endif // ENVIRONMENT_H
