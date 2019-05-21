//
//  main.cpp
//  Week8Prog1Test
//
//  Created by James Lawson on 10/3/18.
//  Copyright © 2018 James Lawson. All rights reserved.
//

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class Test{
public:
//    void testNullPtr(){
//        int * ptrInt = NULL;
//        *ptrInt = 42;
//        cout << ptrInt << endl;
//    }
//    void memoryLeak(){
//        double * ptrDouble;
//        ptrDouble = new double;
//        *ptrDouble = 3.123456789;
//    }
//    string * deletePointer(){
//        string* ptrString;
//        ptrString = new string;
//        *ptrString = "carlos";
//        return ptrString;
//    }
    void testTwoAlias(){
        int * ptrAlias1;
        ptrAlias1 = new int;
        *ptrAlias1 = 42;
        int * ptrAlias2;
        *&ptrAlias2 = ptrAlias1;
        cout << "address of ptrAlias1: " << &ptrAlias1 << endl;
        cout << "address of ptrAlias2: " << &ptrAlias2 << endl;
    }
};

int main(){
    cout << "Name: James Lawson - Program: Prog 1 test - Date: 100918" << endl;
//    Test * T3;
//    string* ptrS;
//    ptrS = T3 -> deletePointer();
//    cout << *ptrS << endl;
    Test * T4;
    T4 -> testTwoAlias();
    
    return 0;
}
// After running this function 'testTwoAlias()' that returns the address of ptrAlias1 and 2, I notice the addresses returned below only differ in the final two characters of the adress, as we copied the adress of the first variable into the second we created.
