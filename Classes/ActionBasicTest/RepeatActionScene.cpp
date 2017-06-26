//
//  RepeatActionScene.cpp
//  actual_chap04
//
//  Created by xiang on 2017/6/16.
//
//

#include "RepeatActionScene.hpp"

USING_NS_CC;

Scene *RepeatActionScene::createScene() {
    auto scene = Scene::create();
    auto layer = RepeatActionScene::create();
    scene->addChild(layer);
    return scene;
}

bool RepeatActionScene::init() {
    if (!Layer::init()) {
        return false;
    }
    
    Size visibleSize = Director::getInstance()->getVisibleSize();
    auto left = Sprite::create("apple.png");
    left->setPosition(Vec2(visibleSize.width/2 - 150, visibleSize.height/2));
    this->addChild(left);
    
    auto blink1 = Blink::create(2, 2);
    auto fadeIn1 = FadeIn::create(2);
    auto sequence1 = Sequence::create(blink1,fadeIn1, NULL);
    auto repeat = Repeat::create(sequence1, 3);
    left->runAction(repeat);
    
    auto right = Sprite::create("apple.png");
    right->setPosition(Vec2(visibleSize.width/2 + 150, visibleSize.height/2));
    this->addChild(right);
    auto blink2 = Blink::create(2, 2);
    auto fadeIn2 = FadeIn::create(2);
    auto sequence2 = Sequence::create(blink2,fadeIn2, NULL);
    auto repeatForever = RepeatForever::create(sequence2);
    right->runAction(repeatForever);
    
    return true;
}


























