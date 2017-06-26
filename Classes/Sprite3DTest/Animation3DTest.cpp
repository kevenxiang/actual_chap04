//
//  Animation3DTest.cpp
//  actual_chap04
//
//  Created by xiang on 2017/6/26.
//
//

#include "Animation3DTest.hpp"

USING_NS_CC;

Scene *Animation3DTest::createScene() {
    auto scene = Scene::create();
    auto layer = Animation3DTest::create();
    scene->addChild(layer);
    return scene;
}

bool Animation3DTest::init() {
    if (!Layer::init()) {
        return false;
    }
    
    Size visibleSize = Director::getInstance()->getVisibleSize();
    Vec2 origin = Director::getInstance()->getVisibleOrigin();
    
    
    auto closeItem = MenuItemImage::create("CloseNormal.png", "CloseSelected.png", CC_CALLBACK_1(Animation3DTest::menuCloseCallback, this));
    closeItem->setPosition(Vec2(origin.x + visibleSize.width - closeItem->getContentSize().width/2, origin.y + closeItem->getContentSize().height/2));
    auto menu = Menu::create(closeItem, NULL);
    menu->setPosition(Vec2::ZERO);
    this->addChild(menu, 2);
    
    //海洋背景
//    auto sea = Sprite::create("sea.png");
//    sea->setPosition(Vec2(visibleSize.width/2, visibleSize.height/2));
//    this->addChild(sea, 1);
    
    std::string fileName = "tortoise.c3b";
    // ①创建3D精灵对象，设置缩放和位置
    _sprite = Sprite3D::create(fileName);
    _sprite->setScale(0.3f);
    _sprite->setPosition(Vec2(visibleSize.width * 4.0f/5.0f, visibleSize.height / 2.0f));
    this->addChild(_sprite,2);
    
    // ②创建3D动画
    auto animation = Animation3D::create(fileName);
    if (animation) {
        // ③创建游泳的3D动画动作
        _swim = Animate3D::create(animation, 0.f, 1.9f);
        // ④3D精灵不断重复执行游泳的动作
        _sprite->runAction(RepeatForever::create(_swim));
    }
    
    // ⑤创建MoveTo动作
    _moveAction = MoveTo::create(4.0f, Vec2(visibleSize.width / 5.0f, visibleSize.height / 2.0f));
    // ⑥创建Sequence组合动作，当MoveTo动作执行完后调用reachEndCallBack函数
    auto seq = Sequence::create(_moveAction, CallFunc::create(CC_CALLBACK_0(Animation3DTest::reachEndCallBack, this)), NULL);
    // 设置Sequence组合动作的tag，用于之后通过tag停止动作
    seq->setTag(100);
    // ⑦3D精灵运行Sequnce组合动作
    _sprite->runAction(seq);
    
    return true;
}

// 3D精灵回调函数
void Animation3DTest::reachEndCallBack() {
    
    Size visibleSize = Director::getInstance()->getVisibleSize();
    
    // 根据tag停止3D精灵正在运行的动作
    _sprite->stopActionByTag(100);
    // 反转_moveAction动作
    _moveAction = MoveTo::create(4.0f, Vec2(visibleSize.width/2, visibleSize.height / 2.0f));

    // RotateBy动作，使3D精灵调转180度方向
    auto rot = RotateBy::create(1.0f, Vec3(0.f, 180.f, 0.f));
    // Sequence组合动作，顺序执行rot和_moveAction动作，动作执行完之后再次调用reachEndCallBack函数
    auto seq = Sequence::create(rot, _moveAction, CallFunc::create(CC_CALLBACK_0(Animation3DTest::reachEndCallBack, this)), NULL);
    // 设置Sequence组合动作的tag，用于之后通过tag停止动作
    seq->setTag(100);
    // 3D精灵运行Sequnce组合动作
    _sprite->runAction(seq);
}

void Animation3DTest::menuCloseCallback(Ref* pSender)
{
#if (CC_TARGET_PLATFORM == CC_PLATFORM_WP8) || (CC_TARGET_PLATFORM == CC_PLATFORM_WINRT)
    MessageBox("You pressed the close button. Windows Store Apps do not implement a close button.","Alert");
    return;
#endif
    
    Director::getInstance()->end();
    
#if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
    exit(0);
#endif
}






































