//
//  main.cpp
//  week15part1B
//
//  Created by James Lawson on 12/12/18.
//  Copyright © 2018 James Lawson. All rights reserved.
//

#include <iostream>
#include "sally.h"
using namespace std;



int main(){
    Sally a(34);
    Sally b(21);
    Sally c;
    c = a + b; // C++ knows to run our operater+ function
    cout << "using overloaded function operator+() in place of + sign...." << endl;
    cout << "a + b = " << c.num << endl;
    return 0;
}
