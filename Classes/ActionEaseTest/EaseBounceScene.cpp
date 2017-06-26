//
//  EaseBounceScene.cpp
//  actual_chap04
//
//  Created by xiang on 2017/6/20.
//
//

#include "EaseBounceScene.hpp"

USING_NS_CC;

Scene *EaseBounceScene::createScene() {
    auto scene = Scene::create();
    auto layer = EaseBounceScene::create();
    scene->addChild(layer);
    return scene;
}

bool EaseBounceScene::init() {
    if (!Layer::init()) {
        return false;
    }
    
    // 获得OpenGL ES视图的大小
    Size winSize = Director::getInstance()->getWinSize();
    
    auto dance = Sprite::create("dance.png");
    dance->setPosition(Vec2(dance->getContentSize().width/2, dance->getContentSize().height/2));
    this->addChild(dance);
    
    auto sister1 = Sprite::create("sister1.png");
    sister1->setPosition(Vec2(dance->getContentSize().width/2, dance->getContentSize().height*1.2));
    this->addChild(sister1);
    
    auto sister2 = Sprite::create("sister2.png");
    sister2->setPosition(Vec2(dance->getContentSize().width/2, dance->getContentSize().height*2));
    this->addChild(sister2);
    
    // 定义一个MoveTo动作，3秒移动到屏幕右边特定的位置
    auto move1 = MoveTo::create(3, Vec2(winSize.width-dance->getContentSize().width/2, dance->getContentSize().height/2));
    // EaseBounceIn动作，运行时由慢到快
    auto easeBounceIn = EaseBounceIn::create(move1);
    dance->runAction(easeBounceIn);
    
    auto move2 = MoveTo::create(3, Vec2(winSize.width-dance->getContentSize().width/2, dance->getContentSize().height*1.2));
    // EaseBounceOut动作，运行时由快到慢
    auto easeBounceOut = EaseBounceOut::create(move2);
    sister1->runAction(easeBounceOut);
    
    auto move3 = MoveTo::create(3, Vec2(winSize.width-dance->getContentSize().width/2, dance->getContentSize().height*2));
    // EaseBounceInOut动作，运行时先由慢到快，再由快到慢
    auto easeBounceInOut = EaseBounceInOut::create(move3);
    sister2->runAction(easeBounceInOut);
    
    return true;
}


























