#ifndef _VIOLET_TOTEM_H_
#define _VIOLET_TOTEM_H_

#include "cocos2d.h"
#include "Bullet/Bullet.h"

USING_NS_CC;

class VioletTotem : public Bullet
{
public:
	static VioletTotem* createVioletTotem(Point point);
	bool init() override;
    CREATE_FUNC(VioletTotem);
	void shoot(Point location);
	void removeBullet() override;
	void boom();
};

#endif