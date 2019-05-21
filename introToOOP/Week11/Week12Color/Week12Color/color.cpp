//
//  color.cpp
//  Week12Color
//
//  Created by James Lawson on 11/3/18.
//  Copyright © 2018 James Lawson. All rights reserved.
//

#include <iostream>
#include <ctime>
#include <cstdlib> // srand, rand
#include "color.h"
using namespace std;


void colorPicker::printAllColors(){
    for(int i = 0; i <= 6; i++){
        cout << myColors[i] << endl;
    }
}
void colorPicker::randomColor(){
    srand((unsigned)time(0));
    int randomIndex;
    for(int j = 0; j < 1; j++){
        randomIndex = (rand() % 6) + 1; // I noticed the instructions in week12 showed % 6, but because the actually array length is 0 - 6 I noticed an error in printAllColors output after running the function
        cout << myColors[randomIndex] << endl;
    }
}
