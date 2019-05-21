//
//  main.cpp
//  week5Box
//
//  Created by James Lawson on 10/1/18.
//  Copyright © 2018 James Lawson. All rights reserved.
//
#include <iostream>
#include <string>
#include<cmath> // pow()
#include "box.h"
using namespace std;

int main(){
    
    cout << "Name: James Lawosn - Program Name: Box - Date:100118" << endl;
    box B1;
    B1.setWidth(2);
    B1.setHeight(3);
    B1.setDepth(4);
    cout << "Height: " << B1.getHeight() << endl;
    cout << "Area: " << B1.calcArea() << endl;
    cout << "Volume: " << B1.calcVolume() << endl;
    
    box B2; // Declaring a new variable to use the circle class with.
    B2.setWidth(3);
    B2.setHeight(4);
    B2.setDepth(0);
    cout << "Depth: " << B2.getDepth() << endl;
    cout << "Area: " << B2.calcArea() << endl;
    cout << "Volume: " << B2.calcVolume() << endl;
    return 0;
}
