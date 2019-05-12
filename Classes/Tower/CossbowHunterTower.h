#ifndef _CORSSBOW_HUNTER_TOWER_H_
#define _CORSSBOW_HUNTER_TOWER_H_

#include "cocos2d.h"
#include "BaseArrowTower.h"

USING_NS_CC;

class CossbowHunterTower: public BaseArrowTower
{
public:
	bool init() override;
    CREATE_FUNC(CossbowHunterTower);
	void showUpdateMenu() override;
	Bullet* ArrowTowerBullet() override;

private:
	void shoot(float dt) override;
	int attackCount;
	Sprite* hawk;
};


#endif