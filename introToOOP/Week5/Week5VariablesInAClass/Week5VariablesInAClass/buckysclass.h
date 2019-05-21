//
//  buckysclass.hpp
//  Week5VariablesInAClass
//
//  Created by James Lawson on 10/2/18.
//  Copyright © 2018 James Lawson. All rights reserved.
//

#ifndef buckysclass_h
#define buckysclass_h

#include <stdio.h>
#include <string>
using namespace std;

class BuckysClass {
public:
    void setName(string x);
    string getName();
private:
    string name;
};


#endif /* buckysclass_hpp */
