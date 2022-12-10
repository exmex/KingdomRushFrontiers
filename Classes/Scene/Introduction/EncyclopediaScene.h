#ifndef __Encyclopedia_SCENE_H__
#define __Encyclopedia_SCENE_H__
#include "cocos2d.h"

class EncyclopediaScene : public cocos2d::Layer
{
public:
    static cocos2d::Scene* createScene();
	bool init() override;

	void menuNextCallback1(Ref *pSender );
	void menuNextCallback2(Ref *pSender );
	void menuNextCallback3(Ref *pSender );
	void menuNextCallback4(Ref *pSender );

    CREATE_FUNC(EncyclopediaScene);
 
};
#endif // __EncyclopediaScene_SCENE_H__