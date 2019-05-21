//
//  main.cpp
//  Week10Prog3
//
//  Created by James Lawson on 10/24/18.
//  Copyright © 2018 James Lawson. All rights reserved.
//

#include <iostream>
#include "MyArrayPtrArithTemp.cpp"
using namespace std;

int main(){
    // initializing a new instance of the class using the parameterized constructor, setting the variable 'arraySize' to 6.
    myArrayClass<double> * ptrArray1 = new myArrayClass<double>(6);
    // function that will prompt the user to set values to each item in the array (a for loop is nested within the function).
    ptrArray1 -> setAllValues();
    cout << "Full array printed below: " << endl;
    // function that will print all items in the array using pointer arithmatic.
    ptrArray1 -> printAll();
    // 'new' variables and instances will not be automatically released from RAM.
    delete ptrArray1;
    return 0;
}
