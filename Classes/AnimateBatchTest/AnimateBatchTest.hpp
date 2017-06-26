//
//  AnimateBatchTest.hpp
//  actual_chap04
//
//  Created by xiang on 2017/6/26.
//
//

#ifndef AnimateBatchTest_hpp
#define AnimateBatchTest_hpp

#include <stdio.h>
#include "cocos2d.h"

class AnimateBatchTest : public cocos2d::Layer {
public:
    static cocos2d::Scene *createScene();
    
    virtual bool init();
    
    CREATE_FUNC(AnimateBatchTest);
};

#endif /* AnimateBatchTest_hpp */
