#ifndef _SHIT_H_
#define _SHIT_H_

#include "Bullet/Bullet.h"
#include "cocos2d.h"
USING_NS_CC;

class Shit : public Bullet
{
public:
	bool init() override;
    CREATE_FUNC(Shit);
	void shoot() override;
	void removeBullet() override;
};

#endif