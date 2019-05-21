//
//  main.cpp
//  Week5aThing
//
//  Created by James Lawson on 10/2/18.
//  Copyright © 2018 James Lawson. All rights reserved.
//

#include <iostream>
using namespace std;
#include "thing.h"


int main(){
    aThing ThingOne;
    
    ThingOne.setWeight(110);
    cout << "Weight is: " << ThingOne.getWeight() << endl;
    return 0;
}
