//
//  TintActionScene.cpp
//  actual_chap04
//
//  Created by xiang on 2017/6/15.
//
//

#include "TintActionScene.hpp"

USING_NS_CC;

Scene *TintActionScene::createScene() {
    auto scene = Scene::create();
    auto layer = TintActionScene::create();
    scene->addChild(layer);
    return scene;
}

bool TintActionScene::init() {
    if (!Layer::init()) {
        return false;
    }
    
    Size visibleSize = Director::getInstance()->getVisibleSize();
    auto apple1 = Sprite::create("apple.png");
    apple1->setPosition(Vec2(visibleSize.width/2-100, visibleSize.height/2));
    this->addChild(apple1);
    
    auto tintTo = TintTo::create(5, 255, 0, 0);
    apple1->runAction(tintTo);
    
    auto apple2 = Sprite::create("apple.png");
    apple2->setPosition(Vec2(visibleSize.width/2+100, visibleSize.height/2));
    this->addChild(apple2);
    
    auto tintBy = TintBy::create(5, 0, -100, -100);
    apple2->runAction(tintBy);
    
    return true;
}



























