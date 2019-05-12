#ifndef _REINFORCE_SOLDIER_1_H_
#define _REINFORCE_SOLDIER_1_H_

#include "BaseSoldier.h"

class ReinforceSoldier1 : public BaseSoldier
{
public:
	bool init() override;
	CREATE_FUNC(ReinforceSoldier1);
	static ReinforceSoldier1* createReinforceSoldier(Point point);
	void update(float dt) override;
	void attackMonster(float dt) override;
	void birth(Point point);
	void checkNearestMonster() override;
	bool checkDirectionForMonster() override;
	void runToMonster() override;
};

#endif