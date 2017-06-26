//
//  Sprite3DTest.cpp
//  actual_chap04
//
//  Created by xiang on 2017/6/26.
//
//

#include "Sprite3DTest.hpp"

USING_NS_CC;

Scene *Sprite3DTest::createScene() {
    auto scene = Scene::create();
    auto layer = Sprite3DTest::create();
    scene->addChild(layer);
    return scene;
}

bool Sprite3DTest::init() {
    if (!Layer::init()) {
        return false;
    }
    
    Size visibleSize = Director::getInstance()->getVisibleSize();
    
    
//    // 通过obj格式文件创建3D精灵对象
//    auto boss = Sprite3D::create("boss.obj");
//    // 设置位置
//    boss->setPosition(visibleSize.width/2,visibleSize.height/2);
//    // 设置缩放
//    boss->setScale(20.f);
//    // 设置纹理
//    boss->setTexture("boss.png");
//    // X轴旋转90度，便于观察
//    boss->setRotation3D(Vec3(90,0,0));
//    // 添加为当前层的子节点
//    this->addChild(boss);
    
    
    // 通过c3t格式文件创建3D精灵对象
    auto orc = Sprite3D::create("orc.c3t");
    // 设置缩放
    orc->setScale(15);
    // Y轴旋转180度
    orc->setRotation3D(Vec3(0,180,0));
    // 设置位置
    orc->setPosition(visibleSize.width/2,visibleSize.height*0.3 );
    // 添加为当前层的子节点
    this->addChild(orc);
    
    return true;
}
