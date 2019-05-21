//
//  sally.cpp
//  week15part1B
//
//  Created by James Lawson on 12/12/18.
//  Copyright © 2018 James Lawson. All rights reserved.
//

#include "sally.h"
Sally::Sally(){
    
}

Sally::Sally(int a){
    num = a;
}

Sally Sally::operator+(Sally aso){ // Syntax for argumant: parameter type - new object to create
    Sally brandNew; // creates new sally object
    brandNew.num = num + aso.num; // assigns value (another sally object)
    return(brandNew); // returns new object
}
