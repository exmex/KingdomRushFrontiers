#include "cocos2d.h"

USING_NS_CC;

class Information : public cocos2d::CCLayer
{

public:

	static Scene* createScene();

	bool init() override;
	void initMap();
	void callBackMenu(Ref *pSpender);


	CREATE_FUNC(Information);
};