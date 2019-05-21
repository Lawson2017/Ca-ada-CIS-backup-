//
//  main.cpp
//  week5prog5Rectangle
//
//  Created by James Lawson on 10/2/18.
//  Copyright © 2018 James Lawson. All rights reserved.
//

#include <iostream>
#include "rectangle.h"
using namespace std;

int main () {  // Use this driver program
    
    cout << "Name: James Lawson - Program Name: Program 5 Rectangle - Date: 100118" << endl;
    // Use set_values function to set values
    Rectangle rect1;
    rect1.set_values (5,6);
    cout << "area: " << rect1.area() << endl;
    // Use set_values function to set values
    Rectangle rect2;
    rect2.set_values (3,4);
    cout << "area: " << rect2.area() << endl; return 0; }
