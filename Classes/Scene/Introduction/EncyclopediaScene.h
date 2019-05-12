#ifndef __Encyclopedia_SCENE_H__
#define __Encyclopedia_SCENE_H__
#include "cocos2d.h"

class EncyclopediaScene : public cocos2d::Layer
{
public:
    static cocos2d::Scene* createScene();
	bool init() override;

	void menuNextCallback1(Ref *pSender );//����ٿ���ʾ��ť�������л�
	void menuNextCallback2(Ref *pSender );//����ٿƷ�������ť�������л�
	void menuNextCallback3(Ref *pSender );//����ٿƵ��˰�ť�������л�
	void menuNextCallback4(Ref *pSender );//����ٿƹرհ�ť�������л�

    CREATE_FUNC(EncyclopediaScene);
 
};
#endif // __EncyclopediaScene_SCENE_H__