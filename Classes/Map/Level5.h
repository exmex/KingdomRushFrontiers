#ifndef _LEVEL_5_H_
#define _LEVEL_5_H_

#include "Map/BaseMap.h"
#include "cocos2d.h"

USING_NS_CC;

class Level5 : public BaseMap
{
public:
	Level5();
	~Level5();
	static Level5* createGame(int difficulty);
    virtual bool initWithDifficulty(int difficulty);

private:
	//void addMonsters(float dt);
	void addOrnament() override;
	void onExit() override;
	void addTerrains() override;
	Sprite* door;
	void waveEvent() override;
	void eyeEffect();
	void stonesEffect();
	void beforeBoss();
};

#endif