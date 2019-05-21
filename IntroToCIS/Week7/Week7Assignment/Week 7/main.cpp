//
//  main.cpp
//  Week 7
//
//  Created by James Lawson on 2/26/19.
//  Copyright © 2019 James Lawson. All rights reserved.
//

#include <iostream>
using namespace std;


int main(){
 
    double a = 18, b = 6, c = 3; // declare and initialize variables
    
    cout << a + b / c << endl; // run equations from lecture notes
    cout << (a + b) / c << endl;
    cout << a + (b / c) << endl;
    
}

// Synopsis:
// The first thing I noticed is that lines 17 and 19 equate to the same product of 20. I believe this is because the computer knows to add 18 before dividing 6 by 3 to get 2, reulting in 20. I think that line 18 has a unique result because the computer is adding 18 and 2 seperately, before dividing the product by 3.
