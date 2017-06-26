//
//  Sprite3DTest.hpp
//  actual_chap04
//
//  Created by xiang on 2017/6/26.
//
//

#ifndef Sprite3DTest_hpp
#define Sprite3DTest_hpp

#include <stdio.h>
#include "cocos2d.h"

class Sprite3DTest : public cocos2d::Layer {
public:
    static cocos2d::Scene *createScene();
    
    virtual bool init();
    
    CREATE_FUNC(Sprite3DTest);
};

#endif /* Sprite3DTest_hpp */
