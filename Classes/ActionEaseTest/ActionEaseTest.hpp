//
//  ActionEaseTest.hpp
//  actual_chap04
//
//  Created by xiang on 2017/6/16.
//
//

#ifndef ActionEaseTest_hpp
#define ActionEaseTest_hpp

#include <stdio.h>
#include "cocos2d.h"

class ActionEaseTest : public cocos2d::Layer {
public:
    
    static cocos2d::Scene *createScene();
    
    virtual bool init();
    
    CREATE_FUNC(ActionEaseTest);

};

#endif /* ActionEaseTest_hpp */
