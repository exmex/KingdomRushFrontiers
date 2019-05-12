#ifndef _MECHA_H_
#define _MECHA_H_

#include "BaseSoldier.h"
#include "Bullet/Bomb.h"

class Mecha : public BaseSoldier
{
public:
	bool init() override;
	CREATE_FUNC(Mecha);
	void runToLocation(Point location) override;
private:
	void shootMissiles();
	void bombMonster(float dt);
	void checkNearestMonster() override;
	void checkFarestMonster();
	Bomb* MechaBullet();
	BaseMonster* farestMonster1;
	BaseMonster* farestMonster2;
	int monsterCount;
	Sprite* shit;
	void addShit();
	void shitting();
	void shitCD(float dt);
	bool couldShit;
};

#endif