//
//  main.cpp
//  Week8Prog2
//
//  Created by James Lawson on 10/22/18.
//  Copyright © 2018 James Lawson. All rights reserved.
//

#include <iostream>
using namespace std;
// Step 1 -Define a class
    class myClass{
private:
    int x;
public:
    myClass() {
        x = 0;
    }
    myClass(int inX) {
        x = inX;
    }
    int getX() {
        return x;
    }
    void setX( int inX){
            x = inX;
    }
};
  int main(){
      myClass C1;     // Step 2 –Regular Declaredinstance of a class
      C1.setX(42);     //Step 3 –Usethe class – call with DotNotationthe public functions
      cout << C1.getX() << endl;
      // Example1below using Pointer to Classes
      // Step 1B -Declare a pointer to myClass, using default constructor
      myClass * ptrMyClass;
      ptrMyClass = NULL;
      // Step 2B -Assign address of C1 to pointer
      ptrMyClass = & C1;
      // Step 3B –Arrow operator
      cout << "Used Arrow -Value of X is: "<< ptrMyClass -> getX() << endl;
      // When using a pointer to classes, you do NOT use the DOT Notation.
      // You use the ARROW operator, in place of the dot notation.
      ptrMyClass -> setX(104);
      cout << "Used Arrow -Value of X is: "<< ptrMyClass -> getX() << endl;
      return 0;
  }
