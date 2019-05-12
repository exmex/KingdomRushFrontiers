#ifndef _SIMPLE_ARTILLERY_TOWER_LVL3_H_
#define _SIMPLE_ARTILLERY_TOWER_LVL3_H_

#include "cocos2d.h"
#include "BaseArtilleryTower.h"

USING_NS_CC;

class SimpleArtilleryTowerlvl3: public BaseArtilleryTower
{
public:

	bool init() override;
    CREATE_FUNC(SimpleArtilleryTowerlvl3);
	void showUpdateMenu() override;
	void update1() override;
	void update2() override;
private:

};


#endif