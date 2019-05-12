#ifndef _UPDATE_PANLE_LAYER_WITH_FLAG_H_
#define _UPDATE_PANLE_LAYER_WITH_FLAG_H_

#include "cocos2d.h"
#include "Sprite/Circle/Circle.h"
#include "Tower/BaseBarracksTower.h"
#include "Sprite/TowerIcon/BaseBuildIcon.h"
#include "Sprite/TowerIcon/SellIcon.h"

USING_NS_CC; 

class UpdatePanleLayerWithFlag: public Layer
{
public:
    virtual bool init() override;
    CREATE_FUNC(UpdatePanleLayerWithFlag);
	void inAnimation();
	BaseBuildIcon* updateIcon;
	SellIcon* sellIcon;
	bool couldUpdate;
	Sprite* lock;
	Sprite* flag;
	CC_SYNTHESIZE(BaseBarracksTower*, tower, Tower); 
private:  
	void addIcons();
	void showTowerInfo();
	Sprite* planesprite; 
	bool onTouchBegan(Touch *touch, Event *event) override;
    void onTouchEnded(Touch* touch, Event* event) override;
	bool isBuilt;
};

#endif