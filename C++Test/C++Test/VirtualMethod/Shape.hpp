//
//  Shape.hpp
//  C++Test
//
//  Created by kevin on 2018/12/30.
//  Copyright © 2018 徐诺. All rights reserved.
//

#ifndef Shape_hpp
#define Shape_hpp

#include <stdio.h>
class Shape{
public:
    virtual void whoAreYou(){ printf("shape\n");}
};

class Rectangle:public Shape{
public:
    void whoAreYou(){ printf("Rectangle\n");}
};

class Square:public Rectangle{
public:
    void whoAreYou(){ printf("Square\n");}
};

#endif /* Shape_hpp */
