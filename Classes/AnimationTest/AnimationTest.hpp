//
//  AnimationTest.hpp
//  actual_chap04
//
//  Created by xiang on 2017/6/24.
//
//

#ifndef AnimationTest_hpp
#define AnimationTest_hpp

#include <stdio.h>
#include "cocos2d.h"

USING_NS_CC;

class AnimationTest : public cocos2d::Layer {
public:
    static Scene *createScene();
    
    virtual bool init();
    
    CREATE_FUNC(AnimationTest);
};

#endif /* AnimationTest_hpp */
