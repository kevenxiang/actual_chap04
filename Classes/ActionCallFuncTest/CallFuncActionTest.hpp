//
//  CallFuncActionTest.hpp
//  actual_chap04
//
//  Created by xiang on 2017/6/24.
//
//

#ifndef CallFuncActionTest_hpp
#define CallFuncActionTest_hpp

#include <stdio.h>
#include "cocos2d.h"

USING_NS_CC;

class CallFuncActionTest : public cocos2d::Layer {
private:
    
    //精灵
    Sprite *_plane;
    
    //屏幕宽度，高度的变量
    int _screenWidth,_screenHeight;
    
public:
    static cocos2d::Scene *createScene();
    
    virtual bool init();
    
    // 自定义的move函数
    void move();
    
    CREATE_FUNC(CallFuncActionTest);

};

#endif /* CallFuncActionTest_hpp */
























