#ifndef _GAMEVIEW_MENU_H_
#define _GAMEVIEW_MENU_H_

#include "cocos2d.h"
USING_NS_CC;

class GameViewMenu : public Layer
{
public:
	bool init() override;
    CREATE_FUNC(GameViewMenu);
	void onEnterTransitionDidFinish() override;
	MenuItemSprite *book,*shop,*update;
	Sprite* mapStarsContainer;
	bool isFirst;
	Label* starLabel;
	Label* diamondsLabel;
};

#endif