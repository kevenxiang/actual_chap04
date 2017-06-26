//
//  RotateActionScene.cpp
//  actual_chap04
//
//  Created by xiang on 2017/6/16.
//
//

#include "RotateActionScene.hpp"

USING_NS_CC;

Scene *RotateActionScene::createScene() {
    auto scene = Scene::create();
    auto layer = RotateActionScene::create();
    scene->addChild(layer);
    return scene;
}

bool RotateActionScene::init() {
    if (!Layer::init()) {
        return false;
    }
    
    Size visibleSize = Director::getInstance()->getVisibleSize();
    auto dance = Sprite::create("dance.png");
    dance->setPosition(Vec2(visibleSize.width/2, visibleSize.height/2));
    this->addChild(dance);
    
    auto left = Sprite::create("dance.png");
    left->setPosition(Vec2(visibleSize.width/2 - 150, visibleSize.height/2));
    this->addChild(left);
    
    // 定义第1个RotateTo动作，旋转到45°
    auto rotateTo1 = RotateTo::create(2, 45);
    // 定义第2个RotateTo动作，旋转到90°
    auto rotateTo2 = RotateTo::create(2, 90);
    // 顺序执行2个RotateTo动作，rotateTo1在原始位置基础上旋转45°
    // rotateTo2在原始位置基础上旋转90°，执行完后精灵在原始位置基础上旋转90°。
    left->runAction(Sequence::create(rotateTo1,rotateTo2, NULL));
    
    auto right = Sprite::create("dance.png");
    right->setPosition(Vec2(visibleSize.width/2 + 150, visibleSize.height/2));
    this->addChild(right);
    // 定义第1个RotateBy动作，旋转到45°
    auto rotateBy1 = RotateBy::create(2, 45);
    // 定义第2个RotateBy动作，旋转到90°
    auto rotateBy2 = RotateBy::create(2, 90);
    // 顺序执行2个RotateBy动作，rotateBy1在原始位置基础上旋转45°，
    // rotateBy2在第一次旋转45°的基础上再旋转90°，执行完后精灵的最终旋转角度是45°+90°=135°。
    right->runAction(Sequence::create(rotateBy1,rotateBy2, NULL));
    
    return true;
}
























