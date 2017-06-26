//
//  EaseSineScene.hpp
//  actual_chap04
//
//  Created by xiang on 2017/6/20.
//
//

#ifndef EaseSineScene_hpp
#define EaseSineScene_hpp

#include <stdio.h>
#include "cocos2d.h"

class EaseSineScene : public cocos2d::Layer {
public:
    
    static cocos2d::Scene *createScene();
    
    virtual bool init();
    
    CREATE_FUNC(EaseSineScene);
};

#endif /* EaseSineScene_hpp */
