//
//  EaseBounceScene.hpp
//  actual_chap04
//
//  Created by xiang on 2017/6/20.
//
//

#ifndef EaseBounceScene_hpp
#define EaseBounceScene_hpp

#include <stdio.h>
#include "cocos2d.h"

class EaseBounceScene : public cocos2d::Layer {
public:
    static cocos2d::Scene *createScene();
    
    virtual bool init();
    
    CREATE_FUNC(EaseBounceScene);
};

#endif /* EaseBounceScene_hpp */
