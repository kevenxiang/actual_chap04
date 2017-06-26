//
//  EaseExponentialScene.cpp
//  actual_chap04
//
//  Created by xiang on 2017/6/20.
//
//

#include "EaseExponentialScene.hpp"

USING_NS_CC;

Scene *EaseExponentialScene::createScene() {
    auto scene = Scene::create();
    auto layer = EaseExponentialScene::create();
    scene->addChild(layer);
    return scene;
}

bool EaseExponentialScene::init() {
    if (!Layer::init()) {
        return false;
    }
    
    Size winSize = Director::getInstance()->getWinSize();
    
    auto dance = Sprite::create("dance.png");
    dance->setPosition(Vec2(dance->getContentSize().width/2, dance->getContentSize().height/2));
    this->addChild(dance);
    
    auto sister1 = Sprite::create("sister1.png");
    sister1->setPosition(Vec2(dance->getContentSize().width/2, dance->getContentSize().height * 1.2));
    this->addChild(sister1);
    
    auto sister2 = Sprite::create("sister2.png");
    sister2->setPosition(Vec2(dance->getContentSize().width/2, dance->getContentSize().height * 2));
    this->addChild(sister2);
    
    auto move1 = MoveTo::create(3, Vec2(winSize.width - dance->getContentSize().width/2, dance->getContentSize().height/2));
    // EaseExponentialIn动作，运行时由慢到快
    auto easeExponentialIn = EaseExponentialIn::create(move1);
    dance->runAction(easeExponentialIn);
    
    auto move2 = MoveTo::create(3, Vec2(winSize.height - dance->getContentSize().width/2, dance->getContentSize().height * 1.2));
    // EaseExponentialOut动作，运行时由快到慢
    auto easeExponentialOut = EaseExponentialOut::create(move2);
    sister1->runAction(easeExponentialOut);
    
    auto move3 = MoveTo::create(3, Vec2(winSize.width - dance->getContentSize().width/2, dance->getContentSize().height * 1.2));
    auto easeExponentialInOut = EaseExponentialInOut::create(move3);
    sister2->runAction(easeExponentialInOut);
    
    
    return true;
}























