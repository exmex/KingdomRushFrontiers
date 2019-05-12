#ifndef _FIREBALL_H_
#define _FIREBALL_H_

#include "cocos2d.h"
#include "Bullet/Bullet.h"

class FireBall : public Bullet
{
public :
	bool init() override;
	CREATE_FUNC(FireBall);
	void shoot(Point location);
	void removeBullet() override;
	void smoke(float dt);
	void round();
	void explosion();
};

#endif