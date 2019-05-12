#ifndef _SIMPLE_ARROW_TOWER_LVL3_H_
#define _SIMPLE_ARROW_TOWER_LVL3_H_

#include "cocos2d.h"
#include "BaseArrowTower.h"

USING_NS_CC;

class SimpleArrowTowerlvl3: public BaseArrowTower
{
public:
	bool init() override;
    CREATE_FUNC(SimpleArrowTowerlvl3);
	void updateTower() override;
	void showUpdateMenu() override;
	Bullet* ArrowTowerBullet() override;
	void update1() override;
	void update2() override;
private:

};


#endif