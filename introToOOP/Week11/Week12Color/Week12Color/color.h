//
//  color.hpp
//  Week12Color
//
//  Created by James Lawson on 11/3/18.
//  Copyright © 2018 James Lawson. All rights reserved.
//

#ifndef color_h
#define color_h
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;



class colorPicker {
public:
    string myColors[7] ={ "red", "green", "purple", "yellow", "orange", "indigo", "pink"};
    void printAllColors();
    void randomColor();
};

#include <stdio.h>

#endif /* color_hpp */
