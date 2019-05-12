#ifndef _REINFORCE_SOLDIER_2_H_
#define _REINFORCE_SOLDIER_2_H_

#include "BaseSoldier.h"

class ReinforceSoldier2 : public BaseSoldier
{
public:
	bool init() override;
	CREATE_FUNC(ReinforceSoldier2);
	static ReinforceSoldier2* createReinforceSoldier(Point point);
	void update(float dt) override;
	void attackMonster(float dt) override;
	void birth(Point point);
	void checkNearestMonster() override;
	bool checkDirectionForMonster() override;
	void runToMonster() override;
};

#endif