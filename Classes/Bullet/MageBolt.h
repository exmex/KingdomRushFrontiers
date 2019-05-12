#ifndef _MAGEBOLT_H_
#define _MAGEBOLT_H_

#include "cocos2d.h"
#include "Bullet/Bullet.h"

USING_NS_CC;

class MageBolt : public Bullet
{
public:
	bool init() override;
    CREATE_FUNC(MageBolt);
	void shoot() override;
	void removeBullet() override;
};

	
#endif