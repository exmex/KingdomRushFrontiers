#ifndef _NECRBOLT_H_
#define _NECRBOLT_H_

#include "cocos2d.h"
#include "Bullet/Bullet.h"

class NecrBolt : public Bullet
{
public :
	bool init() override;
	CREATE_FUNC(NecrBolt);
	void shoot() override;
	void removeBullet() override;
};

#endif