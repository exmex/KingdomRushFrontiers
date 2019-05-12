#ifndef _RALLY_CIRCLE_H_
#define _RALLY_CIRCLE_H_

#include "cocos2d.h"
USING_NS_CC;

class RallyCircle : public Sprite
{
public:
	bool init() override;
    CREATE_FUNC(RallyCircle);
};

#endif