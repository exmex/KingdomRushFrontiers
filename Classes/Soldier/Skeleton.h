#ifndef _SKELETON_H_
#define _SKELETON_H_

#include "BaseSoldier.h"

class Skeleton : public BaseSoldier
{
public:
	bool init() override;
	CREATE_FUNC(Skeleton);
	static Skeleton* createSkeleton(Point point);
	void update(float dt) override;
	void attackMonster(float dt) override;
	void birth(Point point);
	void runToMonster() override;
	bool checkDirectionForMonster() override;
	void checkNearestMonster() override;
	void createAndSetHpBar() override;
};

#endif