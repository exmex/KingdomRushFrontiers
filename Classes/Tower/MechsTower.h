#ifndef _MECHS_TOWER_H_
#define _MECHS_TOWER_H_

#include "cocos2d.h"
#include "BaseBarracksTower.h"
#include "Soldier/Mecha.h"
USING_NS_CC;

class MechsTower: public BaseBarracksTower
{
public:

	bool init() override;
    CREATE_FUNC(MechsTower);
	void setRallyPoint(Point location) override;
private:
	void initMech();
	Mecha* mecha;
	void showUpdateMenu() override;
	void playReadySound();
	void sellTower() override;
};


#endif