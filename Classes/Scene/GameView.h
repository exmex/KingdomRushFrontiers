#ifndef __GAME_VIEW_H__
#define __GAME_VIEW_H__

#include "cocos2d.h"
#include "Road/Road.h"
#include "Sprite/MapFlag.h"
#include "Data/GameManager.h"

USING_NS_CC; 
class GameView : public Layer
{
public:
    static Scene* createScene();
	bool init() override;
	void onTouchesBegan(const std::vector<cocos2d::Touch*>& touches, cocos2d::Event *event) override;
	void onTouchesMoved(const std::vector<cocos2d::Touch*>& touches, cocos2d::Event *event) override;
	void onKeyReleased(EventKeyboard::KeyCode keycode, Event* event) override; 
    CREATE_FUNC(GameView);
	Sprite* bgSprite;
	void addMapFlag();
	void addRoad();
	void addNewMapFlag(int num);
	Size winSize;
	Road* road;
	Vector<MapFlag*> mapFlagVector;
	std::vector<Point> mapFlagPointVector;
	GameManager *instance;
	void onEnterTransitionDidFinish() override;
};

#endif