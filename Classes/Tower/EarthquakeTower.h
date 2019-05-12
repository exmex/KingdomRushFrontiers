#ifndef _EARTHQUAKE_TOWER_H_
#define _EARTHQUAKE_TOWER_H_

#include "cocos2d.h"
#include "Tower/BaseTower.h"
#include "Bullet/EarthquakeSmoke.h"
#include "Bullet/Lava.h"

USING_NS_CC;

class EarthquakeTower: public BaseTower
{
public:

	bool init() override;
    CREATE_FUNC(EarthquakeTower);
	
private:
	void showUpdateMenu() override;
	Sprite* towerBase;
	Sprite* operation;
	Sprite* glow;
	void shoot(float dt);
	EarthquakeSmoke* hitSmoke;
	void attackMonsters(int force);
	int attackCount;
	Sprite* HitDecal;
	Sprite* light;
	Point drill();
	Lava* lava;
	void addTerrain();
	void checkNearestMonster() override;
};


#endif