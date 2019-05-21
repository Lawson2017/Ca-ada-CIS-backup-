//
//  people.hpp
//  Week7Assignment
//
//  Created by James Lawson on 10/14/18.
//  Copyright © 2018 James Lawson. All rights reserved.
//

#ifndef people_h
#define people_h

#include <stdio.h>
#include <iostream>
#include "birthday.h"

using namespace std;
class People {
public:
    People(string x, Birthday bo);
    void printInfo();
private:
    string name;
    Birthday dateOfBirth;
};


#endif /* people_hp */
