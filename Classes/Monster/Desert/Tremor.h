#ifndef _TREMOR_H_
#define _TREMOR_H_

#include "Monster/BaseMonster.h"
#include "cocos2d.h"
USING_NS_CC;

class Tremor : public BaseMonster
{
public:
	virtual bool init() override;    
	static Tremor* createMonster(std::vector<Point> points, int hp ,int value);
	static Tremor* createMonster(std::vector<Point> points);
	void update(float dt) override;
	void stopWalking() override;
	void restartWalking() override;
};

#endif