//
//  RotateActionScene.hpp
//  actual_chap04
//
//  Created by xiang on 2017/6/16.
//
//

#ifndef RotateActionScene_hpp
#define RotateActionScene_hpp

#include <stdio.h>
#include "cocos2d.h"

class RotateActionScene : public cocos2d::Layer {
public:
    static cocos2d::Scene *createScene();
    
    virtual bool init();
    
    CREATE_FUNC(RotateActionScene);
};

#endif /* RotateActionScene_hpp */
