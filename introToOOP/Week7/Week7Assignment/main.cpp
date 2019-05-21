//
//  main.cpp
//  Week7Assignment
//
//  Created by James Lawson on 10/14/18.
//  Copyright © 2018 James Lawson. All rights reserved.
//

#include <iostream>
#include "people.h"
#include "birthday.h"
using namespace std;


int main(){
    Birthday birthObj(12,28,1986);
    
    People buckyRoberts("Bucky the King", birthObj);
    buckyRoberts.printInfo();

    return 0;
}
