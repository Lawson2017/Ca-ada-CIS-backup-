//
//  rectangle.hpp
//  week5prog5Rectangle
//
//  Created by James Lawson on 10/2/18.
//  Copyright © 2018 James Lawson. All rights reserved.
//

#ifndef rectangle_h
#define rectangle_h

#include <stdio.h>
#include <iostream>
using namespace std;

class Rectangle {
    int width, height;
public:
    int area();
    void set_values (int x, int y);
};
#endif /* rectangle_hpp */
