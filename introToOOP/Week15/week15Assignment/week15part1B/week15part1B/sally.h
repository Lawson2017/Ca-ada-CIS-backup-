//
//  sally.hpp
//  week15part1B
//
//  Created by James Lawson on 12/12/18.
//  Copyright © 2018 James Lawson. All rights reserved.
//

#ifndef sally_h
#define sally_h

#include <stdio.h>
using namespace std;

class Sally{
public:
    int num;
    Sally();
    Sally(int);
    Sally operator+(Sally); // will be overloading + operator
};

#endif /* sally_hpp */
