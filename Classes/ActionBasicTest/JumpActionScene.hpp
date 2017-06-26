//
//  JumpActionScene.hpp
//  actual_chap04
//
//  Created by xiang on 2017/6/15.
//
//

#ifndef JumpActionScene_hpp
#define JumpActionScene_hpp

#include <stdio.h>
#include "cocos2d.h"

class JumpActionScene : public cocos2d::Layer {
public:
    
    static cocos2d::Scene *createScene();
    virtual bool init();
    CREATE_FUNC(JumpActionScene);
};

#endif /* JumpActionScene_hpp */
