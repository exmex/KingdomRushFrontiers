#ifndef _NECROMANCER_TOWER_H_
#define _NECROMANCER_TOWER_H_

#include "cocos2d.h"
#include "BaseMageTower.h"
#include "Soldier/DeathKnight.h"

USING_NS_CC;

class NecromancerTower: public BaseMageTower
{
public:
	bool init() override;
	CREATE_FUNC(NecromancerTower);
	Bullet* MageTowerBullet() override;
	void Attack(float dt);
	void setRallyPoint(Point location) override;
private:
	DeathKnight* deathKnight;
	void showUpdateMenu() override;
	void cureSoldiers(float dt);
	Sprite* glow;
};

#endif