#ifndef _SIMPLE_MAGE_TOWER_LVL2_H_
#define _SIMPLE_MAGE_TOWER_LVL2_H_

#include "cocos2d.h"
#include "BaseMageTower.h"

USING_NS_CC;

class SimpleMageTowerlvl2: public BaseMageTower
{
public:
	bool init() override;
    CREATE_FUNC(SimpleMageTowerlvl2);
	void updateTower() override;
	void showUpdateMenu() override;
	Bullet* MageTowerBullet() override;
private:

};


#endif