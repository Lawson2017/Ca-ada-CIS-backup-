//
//  main.cpp
//  Week8inClasss
//
//  Created by James Lawson on 10/3/18.
//  Copyright © 2018 James Lawson. All rights reserved.
//
#include <iostream>
using namespace std;
// step 1 define it

class myClass { // class is a programmar-defined data type, a classification
private:
    int var;
public:
    void setVar(int inVar){
        var = inVar;
    }
    int getVar(){
        return var;
    }
};

int main(){
    
    int x; // declaration statement - Two parts * VariableName which is alias to RAM ADDRESS
    x = 42;
    
    //How can I store a RAM address
    //Pointer Variable... ADDRESS variable
    
    int * ptrInt; // declare pointer variable
                  // JUNK... in that variable
    ptrInt = NULL; // NULL means empty
    ptrInt = &x;
    cout << "x = " << x << endl; // content of x
    cout << "address of x = " << &x << endl; // location of x
    
    // THE REAL USE OF POINTER VARIABLES IS DYNAMIC MEMORY - use while the program is running
    // Lets introduce the 'new' command
    ptrInt = new int; // declares an integer variable... return the RAM address
    cout << "address of new = " << ptrInt << endl;
    
    
    //=======
    
    // step 2 declare
    // "data type - variable name"
    myClass C1; // NORMAL (not a pointer without ptr or astrict notation)
   
    //step 3 use it
    C1.setVar(900);
    cout << "var = " << C1.getVar() << endl;
    
    
    //======
    
    
    
    myClass * ptrMyClass; // make pointer/Address variable for myClass
    ptrMyClass = NULL;
    
    ptrMyClass = new myClass;
    cout << "address of new = " << ptrMyClass << endl;

    //if pointer data type.. then can NOT use dot notation
    //if pointers... then use -> notation
    C1.setVar(900);
    cout << "var = " << C1.getVar() << endl;
    
    
    //====
    //using pointer declaration
    ptrMyClass->setVar(4);
    cout << "var = " << ptrMyClass->getVar() << endl;
    
    
    return 0;
}
