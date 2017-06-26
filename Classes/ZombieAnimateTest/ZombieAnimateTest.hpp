//
//  ZombieAnimateTest.hpp
//  actual_chap04
//
//  Created by xiang on 2017/6/24.
//
//

#ifndef ZombieAnimateTest_hpp
#define ZombieAnimateTest_hpp

#include <stdio.h>
#include "cocos2d.h"
USING_NS_CC;

class ZombieAnimateTest : public cocos2d::Layer {
public:
    static Scene *createScene();
    
    virtual bool init();
    
    CREATE_FUNC(ZombieAnimateTest);
};

#endif /* ZombieAnimateTest_hpp */
