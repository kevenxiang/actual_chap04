//
//  EaseExponentialScene.hpp
//  actual_chap04
//
//  Created by xiang on 2017/6/20.
//
//

#ifndef EaseExponentialScene_hpp
#define EaseExponentialScene_hpp

#include <stdio.h>
#include "cocos2d.h"

class EaseExponentialScene : public cocos2d::Layer {
public:
    static cocos2d::Scene *createScene();
    
    virtual bool init();
    
    CREATE_FUNC(EaseExponentialScene);
};

#endif /* EaseExponentialScene_hpp */
