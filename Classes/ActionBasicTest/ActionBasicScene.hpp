//
//  ScaleActionScene.hpp
//  actual_chap04
//
//  Created by xiang on 2017/6/15.
//
//

#ifndef ActionBasicScene_hpp
#define ActionBasicScene_hpp

#include <stdio.h>
#include "cocos2d.h"

class ActionBasicScene : public cocos2d::Layer {
    
public:
    static cocos2d::Scene *createScene();
    
    virtual bool init();
    
    CREATE_FUNC(ActionBasicScene);
};

#endif /* ActionBasicScene_hpp */
