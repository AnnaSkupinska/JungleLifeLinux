#ifndef MYITEM_H
#define MYITEM_H

#include <QPainter>
#include <QGraphicsItem>
#include <QGraphicsScene>

enum class Kind{Plant,Herbivore,Carnivore};

class MyItem : public QGraphicsItem
{
public:
    MyItem();
    MyItem(Kind k);
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
protected:
   void advance(int phase);
private:
   Kind kind;
   qreal angle;
   qreal speed;
   void DoCollision();
};

class test
{
public:
    test();
    //QRectF boundingRect() const;
    //void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
private:
    qreal angle;
    qreal speed;
    int a;

};
#endif // MYITEM_H
