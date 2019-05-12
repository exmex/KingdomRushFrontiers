#ifndef _SIMPLE_ARTILLERY_TOWER_LVL2_H_
#define _SIMPLE_ARTILLERY_TOWER_LVL2_H_

#include "cocos2d.h"
#include "BaseArtilleryTower.h"

USING_NS_CC;

class SimpleArtilleryTowerlvl2: public BaseArtilleryTower
{
public:

	bool init() override;
    CREATE_FUNC(SimpleArtilleryTowerlvl2);
	void updateTower() override;
	void showUpdateMenu() override;

private:

};


#endif