//
//  people.cpp
//  Week7Assignment
//
//  Created by James Lawson on 10/14/18.
//  Copyright © 2018 James Lawson. All rights reserved.
//
#include <iostream>
#include "people.h"
#include "birthday.h"
using namespace std;

People::People(string x, Birthday bo)
: name (x), dateOfBirth(bo)
{
}

void People::printInfo(){
    cout << name << " was born on ";
    dateOfBirth.printDate();
}



