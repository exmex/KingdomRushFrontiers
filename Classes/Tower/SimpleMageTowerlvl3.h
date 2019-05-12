#ifndef _SIMPLE_MAGE_TOWER_LVL3_H_
#define _SIMPLE_MAGE_TOWER_LVL3_H_

#include "cocos2d.h"
#include "BaseMageTower.h"

USING_NS_CC;

class SimpleMageTowerlvl3: public BaseMageTower
{
public:
	bool init() override;
	CREATE_FUNC(SimpleMageTowerlvl3);
	void updateTower() override;
	void showUpdateMenu() override;
	Bullet* MageTowerBullet() override;
	void update1() override;
	void update2() override;
private:

};


#endif