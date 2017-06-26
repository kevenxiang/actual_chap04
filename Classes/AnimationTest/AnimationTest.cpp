//
//  AnimationTest.cpp
//  actual_chap04
//
//  Created by xiang on 2017/6/24.
//
//

#include "AnimationTest.hpp"

Scene *AnimationTest::createScene() {
    auto scene = Scene::create();
    auto layer = AnimationTest::create();
    scene->addChild(layer);
    return scene;
}

bool AnimationTest::init() {
    if (!Layer::init()) {
        return false;
    }
    
    Size visibleSize = Director::getInstance()->getVisibleSize();
    auto hero = Sprite::create("10001.png");
    hero->setPosition(Vec2(visibleSize.width/2, visibleSize.height/2));
    this->addChild(hero);
    
    // ①创建动画对象，它是将动画帧元素的集合对象，决定了动画帧的播放顺序以及时间间隔
    auto animation = Animation::create();
    // ②循环使用单张图片来创建动画帧
    for (int i=46; i<55; i++) {
        // 将单张图片添加为精灵帧（即动画帧）
        animation->addSpriteFrameWithFile(StringUtils::format("100%d.png",i));
    }
    // 设置动画播放的属性，3秒/15帧
    animation->setDelayPerUnit(3.0f/15.0f);
    // 让精灵对象在动画执行完后恢复到最初状态
    animation->setRestoreOriginalFrame(true);
    // ③创建动画动作
    auto animate = Animate::create(animation);
    // ④精灵对象（英雄）执行动画动作
    hero->runAction(animate);
    
    return true;
}
































