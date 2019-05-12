#ifndef _UPDATE_ICON_H
#define _UPDATE_ICON_H

#include "cocos2d.h"
#include "TowerIcon/BaseBuildIcon.h"

USING_NS_CC;

class UpdateIcon : public BaseBuildIcon
{
public:
	bool init() override;
    CREATE_FUNC(UpdateIcon);
};

#endif