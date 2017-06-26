//
//  FadeActionScene.hpp
//  actual_chap04
//
//  Created by xiang on 2017/6/15.
//
//

#ifndef FadeActionScene_hpp
#define FadeActionScene_hpp

#include <stdio.h>
#include "cocos2d.h"

class FadeActionScene : public cocos2d::Layer {
public:
    static cocos2d::Scene *createScene();
    
    virtual bool init();
    
    CREATE_FUNC(FadeActionScene);
};

#endif /* FadeActionScene_hpp */
