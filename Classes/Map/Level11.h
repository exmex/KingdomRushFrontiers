#ifndef _LEVEL_11_H_
#define _LEVEL_11_H_

#include "Map/BaseMap.h"
#include "cocos2d.h"

USING_NS_CC;

class Level11 : public BaseMap
{
public:
	Level11();
	~Level11();
	static Level11* createGame(int difficulty);
    virtual bool initWithDifficulty(int difficulty);

private:
	void addOrnament() override;
	void onExit() override;
	void addTerrains() override;
};

#endif