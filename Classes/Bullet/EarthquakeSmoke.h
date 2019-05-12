#ifndef _EARTHQUAKE_SMOKE_H_
#define _EARTHQUAKE_SMOKE_H_

#include "cocos2d.h"
#include "Bullet/Bullet.h"

class EarthquakeSmoke:public Bullet

{
public :
	bool init() override;
	CREATE_FUNC(EarthquakeSmoke);
	void shoot() override;
	Vector<Sprite*> smokes;
};
#endif