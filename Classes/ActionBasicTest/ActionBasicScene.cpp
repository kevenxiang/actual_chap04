//
//  ScaleActionScene.cpp
//  actual_chap04
//
//  Created by xiang on 2017/6/15.
//
//

#include "ActionBasicScene.hpp"

USING_NS_CC;

Scene *ActionBasicScene::createScene() {
    
    auto scene = Scene::create();
    
    auto layer = ActionBasicScene::create();
    
    scene->addChild(layer);
    
    return scene;

}

bool ActionBasicScene::init() {
    if (!Layer::init()) {
        return false;
    }
    
    // 获得OpenGL ES视图的大小
    Size visibleSize = Director::getInstance()->getVisibleSize();
    auto apple = Sprite::create("apple.png");
    // 设置精灵的位置在屏幕正中
    apple->setPosition(Vec2(visibleSize.width/2, visibleSize.height/2));
    apple->setVisible(false);
    this->addChild(apple);
    
    // 创建一个Show动作
    auto show = Show::create();
    apple->runAction(show);
    
    auto hide = Hide::create();
    apple->runAction(hide);
    
    // 创建一个ToggleVisibility动作
    auto visibility = ToggleVisibility::create();
    // ToggleVisibility动作切换节点的可见属性，则（苹果）精灵又变成可见。
    apple->runAction(visibility);
    
    // 创建一个Blink动作，执行该动作的节点会在2秒闪动3次
    auto blink = Blink::create(2, 3);
    apple->runAction(blink);
    
    return true;
}


























