//
//  main.cpp
//  Week6Prog7
//
//  Created by James Lawson on 10/16/18.
//  Copyright © 2018 James Lawson. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;
template <class CIR>
class Circle {
private:
    CIR radius, Diameter;
public:
    void setRadius(CIR inRadius){ // funciton to set the radius that will be used to compute values
        radius = inRadius;
        if(radius <= 0){
            cout << "radius must be greater than 0. " << endl;
        }
    }
    CIR getRadius(void){ // return the value of radius per instructions
        return radius;
    }
    CIR calcD(){ // function to calculate Diameter
        Diameter = radius * 2;
        return Diameter;
    }
    CIR calcA(){ // function to calculate Area
        CIR A = pow(2, radius) * 3.14;
        return A;
    }
    CIR calcC(){ // function to calculate Circumference
        CIR C = Diameter * 3.14;
        return C;
    }
};
int main(){
    
    cout << "Name: James Lawson - Program Name: Circle - Date: 100118" << endl;
    Circle<double> C1;
    
    C1.setRadius(4);
    cout << "Radius: " << C1.getRadius() << endl;
    cout << "Diameter: " << C1.calcD() << endl;
    cout << "Area: " << C1.calcA() << endl;
    cout << "Circumference: " << C1.calcC() << endl;
    
    
    return 0;
}
