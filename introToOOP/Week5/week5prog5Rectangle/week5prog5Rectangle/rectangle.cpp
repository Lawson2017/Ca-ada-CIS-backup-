//
//  rectangle.cpp
//  week5prog5Rectangle
//
//  Created by James Lawson on 10/2/18.
//  Copyright © 2018 James Lawson. All rights reserved.
//

#include "rectangle.h"
using namespace std;

int Rectangle::area() {
        int answer;
        answer = height * width;// complete this function so the code works
        return answer;
    }
void Rectangle::set_values (int x, int y) {
        width = x;
        height = y;// complete this function so the code works
    }
