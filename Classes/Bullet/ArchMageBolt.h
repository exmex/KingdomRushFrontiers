#ifndef _ARCHMAGEBOLT_H_
#define _ARCHMAGEBOLT_H_

#include "cocos2d.h"
#include "Bullet/Bullet.h"
class ArchMageBolt:public Bullet

{
public :
	bool init() override;
	CREATE_FUNC(ArchMageBolt);
	void shoot() override;
	void removeBullet() override;
	void round();
};
#endif