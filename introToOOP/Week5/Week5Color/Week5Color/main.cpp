//
//  main.cpp
//  Week5Color
//
//  Created by James Lawson on 10/2/18.
//  Copyright © 2018 James Lawson. All rights reserved.
//
#include "color.h"
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main(){
    Colors pickColor;
    pickColor.printColors();
    pickColor.randomColor();
    return 0;
}
