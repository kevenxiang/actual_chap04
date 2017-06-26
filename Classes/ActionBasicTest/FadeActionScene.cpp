//
//  FadeActionScene.cpp
//  actual_chap04
//
//  Created by xiang on 2017/6/15.
//
//

#include "FadeActionScene.hpp"
USING_NS_CC;

Scene *FadeActionScene::createScene() {
    
    auto scene = Scene::create();
    
    auto layer = FadeActionScene::create();
    
    scene->addChild(layer);
    return scene;
}

bool FadeActionScene::init() {
    if (!Layer::init()) {
        return false;
    }
    
    Size visibleSize = Director::getInstance()->getVisibleSize();
    
    auto apple1 = Sprite::create("apple.png");
    apple1->setPosition(Vec2(visibleSize.width/2-100, visibleSize.height/2));
    // 将精灵的透明度设置为0，可以更好的观察淡入效果
    apple1->setOpacity(0);
    this->addChild(apple1);
    // 创建一个FadeIn动作，执行该动作的节点会在5秒内淡入
    auto fadeIn = FadeIn::create(5);
    // 反转FadeIn动作，即节点会在5秒内淡出
    auto fadeInReverse = fadeIn->reverse();
    // 精灵按顺序执行fadeIn和fadeInReverse动作
    apple1->runAction(Sequence::create(fadeIn,fadeInReverse, NULL));
    
    // 创建第二个精灵
    auto apple2 = Sprite::create("apple.png");
    apple2->setPosition(Vec2(visibleSize.width/2+100, visibleSize.height/2));
    this->addChild(apple2);
    // 创建一个FadeOut动作，执行该动作的节点会在5秒内淡出
    auto fadeOut = FadeOut::create(5);
    // 反转FadeOut动作，即节点会在5秒内淡入
    auto fadeOutReverse = fadeOut->reverse();
    apple2->runAction(Sequence::create(fadeOut,fadeOutReverse, NULL));
    
    return true;
}






















