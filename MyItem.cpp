#include "MyItem.h"

test::test(){
    a=0;
}

MyItem::MyItem(Kind k):kind(k){
    angle = (qrand() % 360);
    setRotation(angle);
    speed = 5;
    int StartX = 0;
    int StartY = 0;
    StartX = 20+(qrand()%360);
    StartY = 20+(qrand()%360);
    setPos(mapToParent(StartX,StartY));
}
MyItem::MyItem()
{
    kind = Kind::Plant;
    angle = (qrand() % 360);
    setRotation(angle);
    speed = 5;
    int StartX = 0;
    int StartY = 0;
    StartX = 20+(qrand()%360);
    StartY = 20+(qrand()%360);
    setPos(mapToParent(StartX,StartY));
}

QRectF MyItem::boundingRect() const{
    return QRectF(0,0,20,20);
}

void MyItem::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget){
   QRectF rec = boundingRect();
   QBrush Brush(Qt::gray);

   switch(kind){
    case Kind::Plant:{
       Brush.setColor(Qt::darkGreen);

       QRectF drawRect = QRectF(rec.x()+10,rec.y()+10,rec.width()-20,rec.height()-20);
       painter->setBrush(Brush);
       painter->drawEllipse(drawRect);
   }

   }
   /*
    if(scene()->collidingItems(this).isEmpty()){
        Brush.setColor(Qt::green);
    }else{
        Brush.setColor(Qt::red);
        DoCollision();
    }
    painter->fillRect(rec,Brush);
    painter->drawRect(rec);
    */
}

void MyItem::advance(int phase){
    if(!phase) return;
    QPointF location = this->pos();
    setPos(mapToParent(0,-(speed)));
}

void MyItem::DoCollision(){


}
