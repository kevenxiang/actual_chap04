//
//  ZombieAnimateTest.cpp
//  actual_chap04
//
//  Created by xiang on 2017/6/24.
//
//

#include "ZombieAnimateTest.hpp"

Scene *ZombieAnimateTest::createScene() {
    auto scene = Scene::create();
    auto layer = ZombieAnimateTest::create();
    scene->addChild(layer);
    return scene;
}

bool ZombieAnimateTest::init() {
    if (!Layer::init()) {
        return false;
    }
    
    Size visibleSize = Director::getInstance()->getVisibleSize();
    auto bgSprite = Sprite::create("bg.png");
    bgSprite->setPosition(Vec2(visibleSize.width/2, visibleSize.height/2));
    this->addChild(bgSprite);
    
    
    // 创建精灵对象（僵尸）
    auto zSprite = Sprite::create("z_00_01.png");
    zSprite->setPosition(Vec2(visibleSize.width+zSprite->getContentSize().width/2, visibleSize.height/2));
    this->addChild(zSprite);
    
    
    // ①创建动画对象，它是将动画帧元素的集合对象，决定了动画帧的播放顺序以及时间间隔
    auto animation = Animation::create();
    // ②循环使用单张图片来创建动画帧
    for (int i=1; i<8; i++) {
        // 将单张图片添加为精灵帧（即动画帧）
        animation->addSpriteFrameWithFile(StringUtils::format("z_00_0%d.png",i));
    }
    
    // 设置动画播放的属性，3秒/15帧
    animation->setDelayPerUnit(3.0f/15.0f);
    // 让精灵对象在动画执行完后恢复到最初状态
    animation->setRestoreOriginalFrame(true);
    // ③创建动画动作
    auto animate = Animate::create(animation);
    // 创建一个重复动作，重复执行Animate动画动作
    auto repeatanimate = RepeatForever::create(animate);
    // 定义一个移动动作，让精灵对象从屏幕右边移动到屏幕左边
    auto moveTo = MoveTo::create(10.0f, Vec2(-zSprite->getContentSize().width/2, visibleSize.height/2));
    // ④僵尸精灵执行重复动作（包含动画动作）和移动动作，执行效果是僵尸从屏幕的右边走到屏幕的左边
    zSprite->runAction(repeatanimate);
    zSprite->runAction(moveTo);
     
    
    return true;
}




























