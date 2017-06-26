//
//  CallFuncActionTest.cpp
//  actual_chap04
//
//  Created by xiang on 2017/6/24.
//
//

#include "CallFuncActionTest.hpp"

//静态变量，表示plane的tag
static int kTagPlane = 1;

Scene *CallFuncActionTest::createScene() {
    auto scene = Scene::create();
    auto layer = CallFuncActionTest::create();
    scene->addChild(layer);
    return scene;
}


bool CallFuncActionTest::init() {
    if (!Layer::init()) {
        return false;
    }
    
    Size visibleSize = Director::getInstance()->getVisibleSize();
    _screenWidth = visibleSize.width;
    _screenHeight = visibleSize.height;
    _plane = Sprite::create("plane.png");
    _plane->setPosition(Vec2(_plane->getContentSize().width/2, _screenHeight/2));
    this->addChild(_plane, 1, kTagPlane);
    
    /**
     定义了一个CallFunc动作，调用move函数
     3.0 后新的回调接口，由四个CC_CALLBACK取代。
     其实CC_CALLBACK的差别就在于后面的数字
     0就代表回调的是没有参数的函数，1就是有一个参数，2就是有两个参数，3就是有三个参数
     */
//    auto callFunc = CallFunc::create(CC_CALLBACK_0(CallFuncActionTest::move, this));
    
    // C++11的lambda表达式实现函数回调动作
    auto callFunc = CallFunc::create([&]{
        auto moveTo = MoveTo::create(3, Vec2(_screenWidth - _plane->getContentSize().width/2, _screenHeight/2));
        _plane->runAction(moveTo);
    });
    
    
    // 精灵（飞机）执行CallFunc回调动作
    _plane->runAction(callFunc);
    
    return true;
}

// 实现自定义的move函数
void CallFuncActionTest::move() {
    // 通过tag值获得精灵对象
    auto plane = this->getChildByTag(kTagPlane);
    auto moveTo = MoveTo::create(3, Vec2(_screenWidth - plane->getContentSize().width/2, _screenHeight/2));
    plane->runAction(moveTo);
}

































