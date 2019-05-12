#ifndef _TOTEM_TOWER_H_
#define _TOTEM_TOWER_H_

#include "cocos2d.h"
#include "BaseArrowTower.h"

USING_NS_CC;

class TotemTower: public BaseArrowTower
{
public:
	bool init() override;
    CREATE_FUNC(TotemTower);
	void showUpdateMenu() override;
	Bullet* ArrowTowerBullet() override;

private:
	void shoot(float dt) override;
	int monstersCount;
	Sprite* eyesDown;
	void checkNearestMonster() override;
	void TotemCD(float dt);
	bool totemCD;
};


#endif