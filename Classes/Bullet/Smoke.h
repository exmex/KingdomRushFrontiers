#ifndef _SMOEKE_H_
#define _SMOEKE_H_

#include "cocos2d.h"
#include "Bullet/Bullet.h"
USING_NS_CC;
class Smoke:public Bullet
{
public:
	bool init() override;
	CREATE_FUNC(Smoke);
	void fadeSmoke(Animation*,float);
	void remove();
};

#endif