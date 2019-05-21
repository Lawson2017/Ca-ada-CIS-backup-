//
//  main.cpp
//  Week5VariablesInAClass
//
//  Created by James Lawson on 10/2/18.
//  Copyright © 2018 James Lawson. All rights reserved.
//

#include <iostream>
#include "buckysclass.h"
using namespace std;


int main(){
    BuckysClass bo;
    bo.setName("Sir Buky Wallace");
    cout << bo.getName() << endl;
    return 0;
}
