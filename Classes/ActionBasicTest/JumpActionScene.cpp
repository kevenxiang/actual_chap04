//
//  JumpActionScene.cpp
//  actual_chap04
//
//  Created by xiang on 2017/6/15.
//
//

#include "JumpActionScene.hpp"

USING_NS_CC;


Scene *JumpActionScene::createScene() {
    auto scene = Scene::create();
    auto layer = JumpActionScene::create();
    scene->addChild(layer);
    return scene;
}

bool JumpActionScene::init() {
    if (!Layer::init()) {
        return false;
    }
    
    Size visibleSize = Director::getInstance()->getVisibleSize();
    auto ball = Sprite::create("ball.png");
    ball->setPosition(Vec2(ball->getContentSize().width/2, visibleSize.height/2));
    this->addChild(ball);
    
    //精灵（球）运行JumpTo动作，将在5秒之内从原位置以2次跳跃动作移动到(860,320)位置
    auto jumpTo = JumpTo::create(5.0, Vec2(860, 320), 50, 2);
    ball->runAction(jumpTo);
    
    // 定义一个JumpBy动作
    //    auto jumpBy = JumpBy::create(5.0, Vec2(860,320), 50, 2);
    //精灵（球）运行JumpBy动作，将在5秒之内从原位置以2次跳跃动作相对移动到(860,320)位置
    //    ball->runAction(jumpBy);
    
    return true;
}
































