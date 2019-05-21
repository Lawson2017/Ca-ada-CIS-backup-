//
//  main.cpp
//  week15part1A
//
//  Created by James Lawson on 12/12/18.
//  Copyright © 2018 James Lawson. All rights reserved.
//

#include <iostream>
using namespace std;

void printNumber(int x){
    cout << "I am printing an integer: " << x << endl;
};
void printNumber(float x){ // function overload, allows us to run line 28
    cout << "Now I am printing a float: " << x << endl;
}
int main(){
    int a = 54;
    float b = 32.4896;
    
    printNumber(a);
    printNumber(b);
    
    return 0;
}
