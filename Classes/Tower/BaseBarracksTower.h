#ifndef _BASE_BARRACKS_TOWER_H_
#define _BASE_BARRACKS_TOWER_H_

#include "cocos2d.h"
#include "Tower/BaseTower.h"
#include "Soldier/BaseSoldier.h"

USING_NS_CC;

class BaseBarracksTower: public BaseTower
{
public:
	bool init() override;
	void updateTower() override;
	void showUpdateMenu() override;
	CREATE_FUNC(BaseBarracksTower);
	void buildingAnimation();
	void setRallyPoint(Point location) override;
	void update1() override;
	void update2() override;
	void sellTower() override;
private:
	void buildingSmokeAnimation(float dt);
protected:
	void initTower();
	void addTerrain();
	Sprite* towerBase;
	Sprite* door;
	Vector<BaseSoldier*> Soldiers;
	void cureSoldiers(float dt);
	void initSoldierLocation();
};


#endif