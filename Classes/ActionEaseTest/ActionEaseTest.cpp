//
//  ActionEaseTest.cpp
//  actual_chap04
//
//  Created by xiang on 2017/6/16.
//
//

#include "ActionEaseTest.hpp"

USING_NS_CC;

Scene *ActionEaseTest::createScene() {
    auto scene = Scene::create();
    auto layer = ActionEaseTest::create();
    scene->addChild(layer);
    return scene;
}

bool ActionEaseTest::init() {
    if (!Layer::init()) {
        return false;
    }
    
    
    Size visibleSize = Director::getInstance()->getVisibleSize();
    Vec2 origin = Director::getInstance()->getVisibleOrigin();
    
    auto dance = Sprite::create("dance.png");
    dance->setPosition(Vec2(dance->getContentSize().width/2, dance->getContentSize().height/2));
    this->addChild(dance);
    
    auto sister1 = Sprite::create("sister1.png");
    sister1->setPosition(Vec2(dance->getContentSize().width/2, dance->getContentSize().height));
    this->addChild(sister1);
    
    auto sister2 = Sprite::create("sister2.png");
    sister2->setPosition(Vec2(dance->getContentSize().width/2, dance->getContentSize().height*1.5));
    this->addChild(sister2);
    
    auto move1 = MoveTo::create(3, Vec2(visibleSize.width - dance->getContentSize().width/2, dance->getContentSize().height/2));
    // EaseIn动作，运行时由慢到快
    auto easeIn = EaseIn::create(move1, 2);
    dance->runAction(easeIn);
    
    auto move2 = MoveTo::create(3, Vec2(visibleSize.width - dance->getContentSize().width/2, dance->getContentSize().height * 1.1));
    // EaseOut动作，运行时由快到慢
    auto easeOut = EaseOut::create(move2, 2);
    sister1->runAction(easeOut);
    
    // 定义一个MoveTo动作，3秒移动到屏幕右边特定的位置
    auto move3 = MoveTo::create(3, Vec2(visibleSize.width-dance->getContentSize().width/2, dance->getContentSize().height*1.5));
    // EaseInOut动作，运行时先由慢到快，再由快到慢
    auto easeInOut = EaseInOut::create(move3, 2);
    // sister2精灵执行EaseInOut动作
    sister2->runAction(easeInOut);
    
    return true;
    
}























