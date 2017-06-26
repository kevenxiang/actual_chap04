//
//  AnimationCacheTest.cpp
//  actual_chap04
//
//  Created by xiang on 2017/6/26.
//
//

#include "AnimationCacheTest.hpp"
USING_NS_CC;

Scene *AnimationCacheTest::createScene() {
    auto scene = Scene::create();
    auto layer = AnimationCacheTest::create();
    scene->addChild(layer);
    return scene;
}

bool AnimationCacheTest::init() {
    if (!Layer::init()) {
        return false;
    }
    
    Size visibleSize = Director::getInstance()->getVisibleSize();
    // ①获取精灵帧缓存的单例对象，并读取grossini.plist文件将精灵帧纹理添加到精灵帧缓存当中
    SpriteFrameCache::getInstance()->addSpriteFramesWithFile("grossini.plist");
    // 创建精灵对象（舞蹈者）
    auto dance = Sprite::create("grossini_dance_01.png");
    // 设置精灵对象（舞蹈者）位置为屏幕正中
    dance->setPosition(Vec2(visibleSize.width/2, visibleSize.height/2));
    this->addChild(dance);
    // ②创建动画帧缓冲并向缓冲区中添加动画文件
    AnimationCache::getInstance()->addAnimationsWithFile("animations.plist");
    // ③从缓冲区中获取文件中设定的名称为“dance_1”的动画对象。
    auto animation = AnimationCache::getInstance()->getAnimation("dance_1");
    // ④根据动画对象创建动画动作
    auto animate = Animate::create(animation);
    // 精灵对象（舞蹈者）执行动画动作
    dance->runAction(animate);
    
    return true;
}


























