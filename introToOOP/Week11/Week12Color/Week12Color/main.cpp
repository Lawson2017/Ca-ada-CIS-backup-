//
//  main.cpp
//  Week12Color
//
//  Created by James Lawson on 11/3/18.
//  Copyright © 2018 James Lawson. All rights reserved.
//

#include <iostream>
#include "color.h"
using namespace std;

int main(){
    cout << "Name: James Lawson - Program: Week 12 Prog 4 - Date: 11/03/18" << endl;
    colorPicker P;
    P.printAllColors();
    cout << "Random Color: " << endl;
    P.randomColor(); // "cout << " is included in function
    return 0;
}
