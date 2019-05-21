//
//  circle.hpp
//  week5Circle
//
//  Created by James Lawson on 10/1/18.
//  Copyright © 2018 James Lawson. All rights reserved.
//

#ifndef circle_h
#define circle_h

#include <stdio.h>
#include <iostream>
#include <string>
#include<cmath>
#pragma once
using namespace std;

class Circle {
private:
    int radius, Diameter;
public:
    void setRadius(int inRadius);
    int getRadius(void);
    int calcD();
    double calcA();
    double calcC();
};
#endif /* circle_h */
