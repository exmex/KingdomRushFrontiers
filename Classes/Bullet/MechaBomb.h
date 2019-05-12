#ifndef _MECHA_BOMB_H_
#define _MECHA_BOMB_H_

#include "cocos2d.h"
#include "Bullet/Bullet.h"

USING_NS_CC;

class MechaBomb : public Bullet
{
public:
	bool init() override;
    CREATE_FUNC(MechaBomb);
	void shoot() override;
	void removeBullet() override;
};

#endif