#ifndef _IMMORTAL_H_
#define _IMMORTAL_H_

#include "Monster/BaseMonster.h"
#include "cocos2d.h"

USING_NS_CC;

class Immortal : public BaseMonster
{
public:
   virtual bool init() override;
    
   static Immortal* createMonster(std::vector<Point> points);
   void death() override;
   void explosion() override;
   Point nextPoint();
};

#endif