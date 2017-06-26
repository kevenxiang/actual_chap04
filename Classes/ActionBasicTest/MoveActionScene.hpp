//
//  MoveActionScene.hpp
//  actual_chap04
//
//  Created by xiang on 2017/6/15.
//
//

#ifndef MoveActionScene_hpp
#define MoveActionScene_hpp

#include <stdio.h>
#include "cocos2d.h"

class MoveActionScene : public cocos2d::Layer {
public:
    
    static cocos2d::Scene *createScene();
    
    virtual bool init();
    
    CREATE_FUNC(MoveActionScene);
};

#endif /* MoveActionScene_hpp */
