#ifndef _LAVA_H_
#define _LAVA_H_

#include "cocos2d.h"
#include "Bullet/Bullet.h"

USING_NS_CC;

class Lava : public Bullet
{
public :
	bool init() override;
	CREATE_FUNC(Lava);
	void shoot() override;
	Vector<Sprite*> Lavas;
};

#endif