#ifndef _SIMPLE_ARROW_TOWER_LVL1_H_
#define _SIMPLE_ARROW_TOWER_LVL1_H_

#include "cocos2d.h"
#include "BaseArrowTower.h"

USING_NS_CC;

class SimpleArrowTowerlvl1: public BaseArrowTower
{
public:

	bool init() override;
    CREATE_FUNC(SimpleArrowTowerlvl1);
	void updateTower() override;
	void showUpdateMenu() override;
	Bullet* ArrowTowerBullet() override;
private:
	void buildingAnimation();
	void buildingSmokeAnimation(float dt);
};


#endif