//
//  birthday.hpp
//  Week7Assignment
//
//  Created by James Lawson on 10/14/18.
//  Copyright © 2018 James Lawson. All rights reserved.
//

#ifndef birthday_h
#define birthday_h

#include <stdio.h>
using namespace std;

class Birthday{
public:
    Birthday(int m, int d, int y);
    void printDate();
private:
    int month;
    int day;
    int year;
};
#endif /* birthday_h */
