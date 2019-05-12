#ifndef _TOTEM_AXE_H_
#define _TOTEM_AXE_H_

#include "cocos2d.h"
#include "Bullet/Bullet.h"

USING_NS_CC;

class TotemAxe : public Bullet
{
public:
	bool init() override;
    CREATE_FUNC(TotemAxe);
	void shoot() override;
	void removeBullet() override;
};

#endif