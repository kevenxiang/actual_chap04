//
//  RepeatActionScene.hpp
//  actual_chap04
//
//  Created by xiang on 2017/6/16.
//
//

#ifndef RepeatActionScene_hpp
#define RepeatActionScene_hpp

#include <stdio.h>
#include "cocos2d.h"

class RepeatActionScene : public cocos2d::Layer {
public:
    static cocos2d::Scene *createScene();
    
    virtual bool init();
    
    CREATE_FUNC(RepeatActionScene);
};

#endif /* RepeatActionScene_hpp */
