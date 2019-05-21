//
//  color.cpp
//  Week5Color
//
//  Created by James Lawson on 10/2/18.
//  Copyright © 2018 James Lawson. All rights reserved.
//
#include <iostream>
#include <ctime>
#include <cstdlib>
#include "color.h"
using namespace std;


void Colors::printColors(){
    for(int i = 0; i <= 6; i++){
        cout << myColors[i] << endl;
    }
}
void Colors::randomColor(){
    srand((unsigned)time(0));
    int randomIndex;
    for(int j = 0; j < 1; j++){
        randomIndex = (rand() % 6) + 1;
        cout << myColors[randomIndex] << endl;
    }
}
    
 
