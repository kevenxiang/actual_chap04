//
//  Animation3DTest.hpp
//  actual_chap04
//
//  Created by xiang on 2017/6/26.
//
//

#ifndef Animation3DTest_hpp
#define Animation3DTest_hpp

#include <stdio.h>
#include "cocos2d.h"

class Animation3DTest : public cocos2d::Layer {
protected:
    cocos2d::Sprite3D *_sprite;  //3D精灵
    cocos2d::MoveTo *_moveAction;  //移动动作
    cocos2d::Animate3D *_swim;  //3D游泳动画
    
public:
    static cocos2d::Scene *createScene();
    
    virtual bool init();
    
    // 3D精灵回调函数
    void reachEndCallBack();
    
    // 选择器回调函数
    void menuCloseCallback(cocos2d::Ref* pSender);
    
    CREATE_FUNC(Animation3DTest);
};

#endif /* Animation3DTest_hpp */
