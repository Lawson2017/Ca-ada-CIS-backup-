//
//  main.cpp
//  Week10Assignment
//
//  Created by James Lawson on 10/24/18.
//  Copyright © 2018 James Lawson. All rights reserved.
//

#include <iostream>
using namespace std;

class myArrayClass{
private:
    int arraySize;
    int * ptrArray;
public:
    //default constructor to initialize an array size and set the pointer to NULL
    myArrayClass(){
        arraySize = 0;
        ptrArray = NULL;
    }
    //parameterized constructor to set array size and assign to ptrArray
    myArrayClass(int inArraySize){
        arraySize = inArraySize;
        ptrArray = new int[arraySize];
        if(arraySize < 0){
            cout << "array size must be greater than 0" << endl;
        }
    }
    //Set size function intended for user to set array size
    void setSize(int inSize){
        arraySize = inSize;
        ptrArray = new int[arraySize];
        if(arraySize < 0){
            cout << "array size must be grater than 0" << endl; // validate the array size
        }
    }
    //Set all values function intended for user to set X amount of array elements
    void setAllValues(){
        if(arraySize > 0){
            for(int i = 0; i < arraySize; i++){ // stops the loop once the user has input the amount of elements that match the array size set in the function above
                cout << "Enter a value to the array" << endl;
                cin >> ptrArray[i];
            }
        }else{
            cout << "array size must be greater than 0" << endl; // validate the array size to continue
        }
    }
    // function intended to print all elements of the array using pointer arithmatic
    void printAll(){
        for(int i = 0; i < arraySize; i++){
            cout << ptrArray[i] << endl;
        }
    }
};

int main(){
    cout << "Name: James Lawosn - Program: Week 10 Prog 1 - Date: 102418" << endl;
   // Test Default constructor
//    myArrayClass Array1;
//    Array1.setSize(6);
//    Array1.setAllValues();
//    Array1.printAll();
    
    //Test Paramterized constructor
//    myArrayClass Array2(7);
//    Array2.setAllValues();
//    Array2.printAll();
    
    myArrayClass * ptrArray1 = new myArrayClass;
    ptrArray1 -> setSize(6);
    ptrArray1 -> setAllValues();
    ptrArray1 -> printAll();
    
    delete ptrArray1;
    return 0;
}
