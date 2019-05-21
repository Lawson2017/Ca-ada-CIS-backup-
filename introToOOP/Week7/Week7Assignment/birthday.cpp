//
//  birthday.cpp
//  Week7Assignment
//
//  Created by James Lawson on 10/14/18.
//  Copyright © 2018 James Lawson. All rights reserved.
//

#include "birthday.h"
#include <iostream>
using namespace std;

Birthday::Birthday(int m, int d, int y){
    month = m;
    day = d;
    year = y;
}

void Birthday::printDate(){
    cout << month << "/" << day << "/" << year << endl;
}


