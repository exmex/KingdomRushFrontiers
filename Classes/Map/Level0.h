#ifndef _LEVEL_0_H_
#define _LEVEL_0_H_

#include "Map/BaseMap.h"
#include "cocos2d.h"

USING_NS_CC;

class Level0 : public BaseMap
{
public:
	Level0();
	~Level0();
	static Level0* createGame(int difficulty);
    virtual bool initWithDifficulty(int difficulty);
	void startAfterStory();
private:
	void onEnterTransitionDidFinish() override;
	void addOrnament() override;
	void onExit() override;
	void addTerrains() override;
	LayerColor* color;
};

#endif