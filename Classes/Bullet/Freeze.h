#ifndef _FREEZE_H_
#define _FREEZE_H_

#include "cocos2d.h"
#include "Bullet/Bullet.h"
USING_NS_CC;

class Freeze : public Bullet
{
public:
	bool init() override;
    CREATE_FUNC(Freeze);
	void shoot(Point point);
	void removeBullet() override;
private:
	
};

#endif