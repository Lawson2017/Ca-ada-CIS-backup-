//
//  circle.cpp
//  week5Circle
//
//  Created by James Lawson on 10/1/18.
//  Copyright © 2018 James Lawson. All rights reserved.
//

#include "circle.h"
#include <iostream>
#include <cmath>

void Circle::setRadius(int inRadius){ // funciton to set the radius that will be used to compute values
    radius = inRadius;
    if(radius <= 0){
        cout << "radius must be greater than 0. " << endl;
    }
}
int Circle::getRadius(void){ // return the value of radius per instructions
    return radius;
}
int Circle::calcD(){ // function to calculate Diameter
    Diameter = radius * 2;
    return Diameter;
}
double Circle::calcA(){ // function to calculate Area
    double A = pow(2, radius) * 3.14;
    return A;
}
double Circle::calcC(){ // function to calculate Circumference
    double C = Diameter * 3.14;
    return C;
    }
