//
//  buckysclass.cpp
//  Week5VariablesInAClass
//
//  Created by James Lawson on 10/2/18.
//  Copyright © 2018 James Lawson. All rights reserved.
//

#include "buckysclass.h"
#include <iostream>
using namespace std;

void BuckysClass::setName(string x){
    name = x;
}
string BuckysClass::getName(){
    return name;
}
