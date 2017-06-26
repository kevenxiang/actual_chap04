//
//  ScaleActionScene.cpp
//  actual_chap04
//
//  Created by xiang on 2017/6/16.
//
//

#include "ScaleActionScene.hpp"

USING_NS_CC;

Scene *ScaleActionScene::createScene() {
    
    auto scene = Scene::create();
    auto layer = ScaleActionScene::create();
    scene->addChild(layer);
    return scene;
}

bool ScaleActionScene::init() {
    if (!Layer::init()) {
        return false;
    }
    
    Size visibleSize = Director::getInstance()->getVisibleSize();
    auto apple = Sprite::create("apple.png");
    apple->setPosition(Vec2(visibleSize.width/2, visibleSize.height/2));
    this->addChild(apple);
    
    auto left = Sprite::create("apple.png");
    left->setPosition(Vec2(visibleSize.width/2 - 150, visibleSize.height/2));
    this->addChild(left);
    auto scaleTo1 = ScaleTo::create(2, 2);
    auto scaleTo2 = ScaleTo::create(2, 2);
    // 顺序执行2个ScaleTo动作，scaleTo1放大到原始大小的2倍
    // scaleTo2还是放大到原始大小的2倍，执行完后最终精灵放大到原始大小的2倍
    left->runAction(Sequence::create(scaleTo1,scaleTo2, NULL));
    
    auto right = Sprite::create("apple.png");
    right->setPosition(Vec2(visibleSize.width/2 + 150, visibleSize.height/2));
    this->addChild(right);
    auto scaleBy1 = ScaleBy::create(2, 2);
    auto scaleBy2 = ScaleBy::create(2, 2);
    // 顺序执行2个ScaleTo动作，scaleBy1放大到当前大小（第一次是原始大小）的2倍
    // scaleBy2放大到当前大小（已经放大过后）的2倍，执行完后最终精灵放大到原始大小的4倍
    right->runAction(Sequence::create(scaleBy1,scaleBy2, NULL));
    
    
    return true;
}






























