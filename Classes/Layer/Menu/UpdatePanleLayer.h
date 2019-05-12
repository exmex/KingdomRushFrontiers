#ifndef _UPDATE_PANLE_LAYER_H_
#define _UPDATE_PANLE_LAYER_H_

#include "cocos2d.h"
#include "Sprite/Circle/Circle.h"
#include "Tower/BaseTower.h"
#include "Sprite/TowerIcon/BaseBuildIcon.h"
#include "Sprite/TowerIcon/SellIcon.h"

USING_NS_CC; 

class UpdatePanleLayer: public Sprite
{
public:
    virtual bool init() override;
    CREATE_FUNC(UpdatePanleLayer);
	void inAnimation();
	BaseBuildIcon* updateIcon;
	SellIcon* sellIcon;
	bool couldUpdate;
	Sprite* lock;
	CC_SYNTHESIZE(BaseTower*, tower, Tower); 
private:  
	void addIcons();
	Sprite* planesprite; 
	Circle* thisLvlCircle;
	Circle* nextLvlCircle;
	bool onTouchBegan(Touch *touch, Event *event);
    void onTouchEnded(Touch* touch, Event* event);
	bool isBuilt;
	void showTowerInfo();
};

#endif