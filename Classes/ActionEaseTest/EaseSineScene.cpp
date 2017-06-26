//
//  EaseSineScene.cpp
//  actual_chap04
//
//  Created by xiang on 2017/6/20.
//
//

#include "EaseSineScene.hpp"

USING_NS_CC;

Scene *EaseSineScene::createScene() {
    auto scene = Scene::create();
    auto layer = EaseSineScene::create();
    scene->addChild(layer);
    return scene;
}

bool EaseSineScene::init() {
    if (!Layer::init()) {
        return false;
    }
    
    // 获得OpenGL ES视图的大小
    Size winSize = Director::getInstance()->getWinSize();
    auto dance = Sprite::create("dance.png");
    // 设置精灵位置，精灵在屏幕的最底部
    dance->setPosition(Vec2(dance->getContentSize().width/2, dance->getContentSize().height/2));
    this->addChild(dance);
    
    
    auto sister1 = Sprite::create("sister1.png");
    // 设置精灵位置，精灵在屏幕的最中间
    sister1->setPosition(Vec2(dance->getContentSize().width/2, dance->getContentSize().height*1.2));
    this->addChild(sister1);
    
    auto sister2 = Sprite::create("sister2.png");
    // 设置精灵位置，精灵在屏幕的最底部
    sister2->setPosition(Vec2(dance->getContentSize().width/2, dance->getContentSize().height*2));
    this->addChild(sister2);
    
    // 定义一个MoveTo动作，3秒移动到屏幕右边特定的位置
    auto move1 = MoveTo::create(3, Vec2(winSize.width - dance->getContentSize().width/2, dance->getContentSize().height/2));
    // EaseSineIn动作，运行时由慢到快
    auto easeSineIn = EaseSineIn::create(move1);
    dance->runAction(easeSineIn);
    
    auto move2 = MoveTo::create(3, Vec2(winSize.width - dance->getContentSize().width/2, dance->getContentSize().height * 1.2));
    // EaseSineOut动作，运行时由快到慢
    auto easeSineOut = EaseSineOut::create(move2);
    sister1->runAction(easeSineOut);
    
    auto move3 = MoveTo::create(3, Vec2(winSize.width - dance->getContentSize().width/2, dance->getContentSize().height * 2));
    // EaseSineInOut动作，运行时先由慢到快，再由快到慢
    auto easeSineInOut = EaseSineInOut::create(move3);
    sister2->runAction(easeSineInOut);
    
    return true;
}


























