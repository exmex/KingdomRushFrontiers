#ifndef _DRILL_H_
#define _DRILL_H_

#include "cocos2d.h"
#include "Bullet/Bullet.h"
#include "Monster/BaseMonster.h"

USING_NS_CC;

class Drill : public Bullet
{
public:
	bool init() override;
    CREATE_FUNC(Drill);
	void shoot() override;
	void removeBullet() override;
	Sprite* drill;
	void DrillMonster(float dt);
	BaseMonster* monsterToBeDrilled;
};

#endif