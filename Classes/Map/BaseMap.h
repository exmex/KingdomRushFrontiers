#ifndef _BASE_MAP_H_
#define _BASE_MAP_H_ 

#include "cocos2d.h"
#include "Layer/TouchLayer.h"
#include "Layer/PlayerStateMenu.h"
#include "Sprite/WaveFlag.h"
#include "Monster/GroupMonster.h"
USING_NS_CC;

class BaseMap : public Layer
{
public:
    CREATE_FUNC(BaseMap);
	//当前关卡
	CC_SYNTHESIZE(int, level, Level);
	//玩家状态栏
	PlayerStateMenu* playerState;
	void bindPlayerStateMenu(PlayerStateMenu* playerState);
	//地图精灵
	Sprite* mapSprite;
	TouchLayer* mTouchLayer;
protected:
	void initTouchLayer();
	//本关难度
	int difficulty;
	int wave;
	int maxWave;
	int gold;
	int life;
	int startGold;
	int maxLife;
	unsigned int time;
	//wave怪物容器容器
	std::vector<std::vector<Vector<GroupMonster*>>> waveVector;
	//加载路径和关卡数据
	void loadPathFromPlist();
	void loadAndSetLevelData();
	//存储路径的容器 从内到外为点，线路，路线
	std::vector<std::vector<std::vector<Point>>> path;
	//屏幕尺寸
	Size winSize;
	
	//下一波提示精灵 0为路线1,1为路线2
	Vector<WaveFlag*> waveFlags;
	void addWaveProgressBars(std::vector<Point> waveFlagLocations);
	void showWaveProgressBars(float dt);

	void onEnterTransitionDidFinish() override;
	//不同关卡不同的事件处理
	virtual void waveEvent();
	//设置初始地图位置
	void setMapPosition();
	//更新金钱和生命
	void updateGoldAndLife();
	void update(float dt) override;
	//胜利函数
	void victory();
	//结束标记
	bool isEnd;
	//开始标记
	bool isStart;
	//开始新的一波敌人
	virtual void addWaves(float dt);
	//添加怪物
	virtual void addMonsters(float dt);
	//初始化地图
	void initMap();
	//添加不同地图装饰物
	virtual void addOrnament(){};
	//添加建塔点
	virtual void addTerrains(){};
	//退出
	void onExitTransitionDidStart() override;
	void onExit() override {};
};

#endif