//
//  ScaleActionScene.hpp
//  actual_chap04
//
//  Created by xiang on 2017/6/16.
//
//

#ifndef ScaleActionScene_hpp
#define ScaleActionScene_hpp

#include <stdio.h>
#include "cocos2d.h"

class ScaleActionScene : public cocos2d::Layer {
public:
    static cocos2d::Scene *createScene();
    
    virtual bool init();
    
    CREATE_FUNC(ScaleActionScene);
};

#endif /* ScaleActionScene_hpp */
