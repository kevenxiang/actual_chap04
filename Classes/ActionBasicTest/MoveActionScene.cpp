//
//  MoveActionScene.cpp
//  actual_chap04
//
//  Created by xiang on 2017/6/15.
//
//

#include "MoveActionScene.hpp"

USING_NS_CC;

Scene *MoveActionScene::createScene() {
    auto scene = Scene::create();
    auto layer = MoveActionScene::create();
    scene->addChild(layer);
    return scene;
}

bool MoveActionScene::init() {
    if (!Layer::init()) {
        return false;
    }
    
    Size visibleSize = Director::getInstance()->getVisibleSize();
    auto plane = Sprite::create("plane.png");
    /**
     设置精灵位置，精灵在屏幕的最左边，精灵的高度为屏幕的一半。
     注意：getContentSize是父类Node的属性，返回节点大小。
     无论节点如何缩放或旋转，contentSize属性值始终不变，此处设置精灵坐标(精灵宽度/2，屏幕高度/2)，
     因为Node的position属性是相对于描点的，而描点位于纹理图像的几何中心，
     这里如果X轴设置成0，则（飞机）精灵只会显示一半。
     */
    plane->setPosition(Vec2(plane->getContentSize().width/2, visibleSize.height/2));
    this->addChild(plane);
    
    // 精灵执行MoveTo，将5秒内从当前位置移动到像素（860，320）的位置
    auto moveTo = MoveTo::create(5, Vec2(860, 320));
    plane->runAction(moveTo);
    
    // 定义一个MoveBy动作，
    //	 auto moveBy = MoveBy::create(5,Vec2(860,320));
    // 精灵执行MoveBy，将在5秒内从原位置向右移动860像素，向上移动320像素
    //     plane->runAction(moveBy);
    
    return true;
}























