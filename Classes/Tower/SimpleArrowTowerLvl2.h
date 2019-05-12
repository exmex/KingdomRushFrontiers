#ifndef _SIMPLE_ARROW_TOWER_LVL2_H_
#define _SIMPLE_ARROW_TOWER_LVL2_H_

#include "cocos2d.h"
#include "BaseArrowTower.h"

USING_NS_CC;

class SimpleArrowTowerlvl2: public BaseArrowTower
{
public:
	bool init() override;
	CREATE_FUNC(SimpleArrowTowerlvl2);
	void updateTower() override;
	void showUpdateMenu() override;
	Bullet* ArrowTowerBullet() override;
private:

};


#endif