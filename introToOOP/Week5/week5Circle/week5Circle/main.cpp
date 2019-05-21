//
//  main.cpp
//  week5Circle
//
//  Created by James Lawson on 10/1/18.
//  Copyright © 2018 James Lawson. All rights reserved.
//
#include "circle.h"
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    
    cout << "Name: James Lawson - Program Name: Circle - Date: 100118" << endl;
    Circle C1;
    
    C1.setRadius(4);
    cout << "Radius: " << C1.getRadius() << endl;
    cout << "Diameter: " << C1.calcD() << endl;
    cout << "Area: " << C1.calcA() << endl;
    cout << "Circumference: " << C1.calcC() << endl;
    
    
    return 0;
}
