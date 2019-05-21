//
//  main.cpp
//  Circle
//
//  Created by James Lawson on 10/1/18.
//  Copyright © 2018 James Lawson. All rights reserved.
//

#include <iostream>
#include <cmath> // includes pow() for using exponents in functions.
using namespace std;

class Circle {
private:
   int radius, Diameter;
public:
    void setRadius(int inRadius){ // funciton to set the radius that will be used to compute values
        radius = inRadius;
        if(radius <= 0){
            cout << "radius must be greater than 0. " << endl;
        }
    }
    int getRadius(void){ // return the value of radius per instructions
        return radius;
    }
    int calcD(){ // function to calculate Diameter
        Diameter = radius * 2;
        return Diameter;
    }
    double calcA(){ // function to calculate Area
        double A = pow(2, radius) * 3.14;
        return A;
    }
    double calcC(){ // function to calculate Circumference
        double C = Diameter * 3.14;
        return C;
    }
    
};


int main(){
    
    Circle C1;
    
    C1.setRadius(4);
    cout << "Radius: " << C1.getRadius() << endl;
    cout << "Diameter: " << C1.calcD() << endl;
    cout << "Area: " << C1.calcA() << endl;
    cout << "Circumference: " << C1.calcC() << endl;
    
    
    return 0;
}
