//
//  AnimationCacheTest.hpp
//  actual_chap04
//
//  Created by xiang on 2017/6/26.
//
//

#ifndef AnimationCacheTest_hpp
#define AnimationCacheTest_hpp

#include <stdio.h>
#include "cocos2d.h"

class AnimationCacheTest : public cocos2d::Layer {
public:
    static cocos2d::Scene *createScene();
    
    virtual bool init();
    
    CREATE_FUNC(AnimationCacheTest);
};

#endif /* AnimationCacheTest_hpp */
