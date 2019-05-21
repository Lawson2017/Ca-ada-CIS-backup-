//
//  thing.hpp
//  Week5aThing
//
//  Created by James Lawson on 10/2/18.
//  Copyright © 2018 James Lawson. All rights reserved.
//

#ifndef thing_h
#define thing_h
#include <iostream>
using namespace std;

#include <stdio.h>

class aThing{
public:
    double getWeight(void);
    void setWeight(double inWeight);
private:
    double weight;
};

#endif /* thing_hpp */
