//
//  main.cpp
//  Week6aThing
//
//  Created by James Lawson on 10/16/18.
//  Copyright © 2018 James Lawson. All rights reserved.
//
#include <iostream>
#include <string>
using namespace std;

// STEP 1 - DEFINE THE new datatype/Class  'aThing'
template <class AT>
class aThing {
public:  // Public means that is can be access in step 3 with the dot notation
    AT getWeight(void) { return weight; } // public functions  accessible by dot notation
    void setWeight( AT inWeight ) { weight = inWeight; }
private: // Private means that it can NOT be accessed with the dot notation, but indirectly with a public function
    AT weight; // private variables only accessible by a function
};



int main()
{ // STEP 2 - DECLARATION - USE the new datatype/class 'aThing' in a Declaration statement to create 'ThingOne'.
    aThing<double> ThingOne;
    // STEP 3 - Use the OBJECT defined in step 2 - With dot notation
    ThingOne.setWeight(140);
    cout << "Use Function/Method get Weight - "<< "Weight is: " << ThingOne.getWeight() << endl;
    cout << "Name:  James Lawson -  Program Name:  Athing -  Date: 09/08/18" << endl;
    return 0;
}
