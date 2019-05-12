#ifndef _BOSS_EFREETI_H_
#define _BOSS_EFREETI_H_

#include "Monster/BaseMonster.h"

class Boss_Efreeti : public BaseMonster
{
public:
	virtual bool init() override;    
	static Boss_Efreeti* createMonster(std::vector<Point> points,std::vector<std::vector<std::vector<Point>>> sonPath);
	void getHurt() override;
	void death() override;
	void explosion() override;
	void skill(float dt);
	std::vector<std::vector<std::vector<Point>>> sonPath;
	void addSons();
	Sprite* cloud;
	void laugh();
	void frozen() override;
};

#endif