#ifndef _ARROW_H_
#define _ARROW_H_

#include "cocos2d.h"
#include "Bullet/Bullet.h"

USING_NS_CC;

class Arrow : public Bullet
{
public:
	bool init() override;
    CREATE_FUNC(Arrow);
	void shoot() override;
	void removeBullet() override;
};

#endif