//
//  box.h
//  week5Box
//
//  Created by James Lawson on 10/1/18.
//  Copyright © 2018 James Lawson. All rights reserved.
//

#ifndef box_h
#define box_h

#include <stdio.h>
#include <iostream>
#include <string>
#include<cmath> // pow()
#include "box.h"
using namespace std;

class box {
private:
    int depth;
    int width;
    int height;
    
public:
    int getWidth(void);
    void setWidth(int inWidth);
    void setHeight(int inHeight);
    int getHeight(void);
    int getDepth(void);
    void setDepth(int inDepth);
    int calcArea();
    int calcVolume();
};

#endif /* box_hpp */
