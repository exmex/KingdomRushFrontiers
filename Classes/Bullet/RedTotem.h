#ifndef _RED_TOTEM_H_
#define _RED_TOTEM_H_

#include "cocos2d.h"
#include "Bullet/Bullet.h"

USING_NS_CC;

class RedTotem : public Bullet
{
public:
	static RedTotem* createRedTotem(Point point);
	bool init() override;
    CREATE_FUNC(RedTotem);
	void shoot(Point location);
	void removeBullet() override;
	void boom();
};

#endif