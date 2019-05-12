#ifndef _MISSILE_H_
#define _MISSILE_H_

#include "cocos2d.h"
#include "Bullet/Bullet.h"
#include "Monster/BaseMonster.h"

USING_NS_CC;

class Missile : public Bullet
{
public:
	bool init() override;
    CREATE_FUNC(Missile);
	void shoot(BaseMonster* monster,Point mechaPosition);
	void removeBullet(BaseMonster* monster);
	BaseMonster* monsterToBeDrilled;
	
};

#endif