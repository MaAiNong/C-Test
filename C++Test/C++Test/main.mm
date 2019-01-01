//
//  main.m
//  C++Test
//
//  Created by kevin on 2018/12/30.
//  Copyright © 2018 徐诺. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Shape.hpp"
int main(int argc, const char * argv[]) {
    @autoreleasepool {
        // insert code here...
        NSLog(@"Hello, World!");
    
        Rectangle* shape = new Square();
        shape->whoAreYou();
    }
    return 0;
}
