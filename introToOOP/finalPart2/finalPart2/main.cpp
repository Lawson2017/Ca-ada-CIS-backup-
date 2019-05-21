//
//  main.cpp
//  finalPart2
//
//  Created by James Lawson on 12/11/18.
//  Copyright © 2018 James Lawson. All rights reserved.
//

#include <iostream>
#include "stdlib.h"
using namespace std;

class polygon {
protected:
    int width, height;
public:
    void set_values(int inW, int inH){ // must include the keyword 'virtual'
        width = inW;
        height = inH;
    }
   virtual int getArea(){ // missing keyword virtual
        return 0;
    }
};

class rectangle : public polygon {
public:
    int getArea(){
        return width * height;
    }
};

class triangle : public polygon {
public:
    int getArea(){
        return width * height * 1/2; // equation is * 1/2
    }
};

void polyFun(polygon *ptrBase){
    cout << ptrBase->getArea() << endl; // -> is needed for pointer notation
}

int main(){
    //regular static declarations
    rectangle rect;
    triangle trg1;
    //regular use with dot notation
    cout << "-------" << endl;
    rect.set_values(3,4);
    cout << "Area of rectangle is: " << rect.getArea() << endl;
    trg1.set_values(3,5);
    cout << "Area of triangle is: " << trg1.getArea() << endl; // invalid operands ( >> )
    //------------------
    
    //Why use ptr? for POLYMORPHISM
    rectangle * ptrRect = NULL;
    triangle * ptrTrg1 = NULL;
    polygon * ptrPoly = NULL;
    
    ptrRect = &rect;
    ptrTrg1 = &trg1;
    
    //polymorphism - ONE set of code that can work for MANY derived classes
    //key idea is - declare ONE base class pointer.. and assign ANY derived address to it
    
    //Method 2 - Real good method
    cout << "---------" << endl;
    cout << " Area of triangle is: ";
    polyFun(&trg1); // needed to be switched with function below
    cout << " Area of rectangle is: ";
    polyFun(&rect);
    cout << "---------" << endl;
    
    return 0;
}
