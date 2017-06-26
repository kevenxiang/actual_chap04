//
//  CallFuncNActionTest.hpp
//  actual_chap04
//
//  Created by xiang on 2017/6/24.
//
//

#ifndef CallFuncNActionTest_hpp
#define CallFuncNActionTest_hpp

#include <stdio.h>
#include "cocos2d.h"
USING_NS_CC;

class CallFuncNActionTest : public cocos2d::Layer {
private:
    Sprite *_plane;
    int _screenWidth,_screenHeight;
    
public:
    static cocos2d::Scene *createScene();
    
    virtual bool init();
    
    void move(Node *sender);
    
    CREATE_FUNC(CallFuncNActionTest);
};

#endif /* CallFuncNActionTest_hpp */































