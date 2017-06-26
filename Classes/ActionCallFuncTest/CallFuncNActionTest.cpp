//
//  CallFuncNActionTest.cpp
//  actual_chap04
//
//  Created by xiang on 2017/6/24.
//
//

#include "CallFuncNActionTest.hpp"

Scene *CallFuncNActionTest::createScene() {
    auto scene = Scene::create();
    auto layer = CallFuncNActionTest::create();
    scene->addChild(layer);
    return scene;
}

bool CallFuncNActionTest::init() {
    if (!Layer::init()) {
        return false;
    }
    
    Size visibleSize = Director::getInstance()->getVisibleSize();
    _screenWidth = visibleSize.width;
    _screenHeight = visibleSize.height;
    _plane = Sprite::create("plane.png");
    _plane->setPosition(Vec2(_plane->getContentSize().width/2, _screenHeight/2));
    this->addChild(_plane, 1);
    
    // 定义了一个CallFuncN动作，调用move函数，第三个参数是传递给move函数的参数（飞机精灵）
    auto callFuncN = CallFuncN::create(CC_CALLBACK_0(CallFuncNActionTest::move, this, _plane));
    _plane->runAction(callFuncN);
    
    return true;
}

void CallFuncNActionTest::move(Node *sender) {
    auto moveTo = MoveTo::create(3, Vec2(_screenWidth - sender->getContentSize().width/2, _screenHeight/2));
    sender->runAction(moveTo);
}



































