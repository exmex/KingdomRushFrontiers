#ifndef _TERRAIN_H_
#define _TERRAIN_H_

#include "cocos2d.h"

USING_NS_CC;

class CustomTerrain : public Sprite{

public:
	virtual bool init(int type);
    static CustomTerrain* createTerrain(int type);
	void showUpdateMenu();
    void hideUpdateMenu();
	Sprite* terrain;
	bool onTouchBegan(Touch *touch, Event *event);
	void onTouchEnded(Touch* touch, Event* event);
	bool isUpdateMenuShown;
	void smokeEffect();
};

#endif