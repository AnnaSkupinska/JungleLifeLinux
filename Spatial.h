#ifndef SPATIAL_H
#define SPATIAL_H

#include <QMainWindow>
#include <QDialog>
#include <QtCore>
#include <QtGui>
#include <QGraphicsScene>
#include <QMouseEvent>
#include <QResizeEvent>
#include <QGraphicsRectItem>
#include <QPainter>
#include <QGraphicsItem>


class Spatial : public QObject, public QGraphicsItem{
  Q_OBJECT
  Q_INTERFACES(QGraphicsItem)
  Q_PROPERTY(QPointF pos READ pos WRITE setPos)
public:
  enum PreviewMode { FIELD_OF_VIEW, CALORIES_LEVEL, FULL };

  Spatial();
  virtual ~Spatial() {}

protected:
  qreal angle;
  qreal visibilityAngle;
};

#endif // SPATIAL_H
