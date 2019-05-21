//
//  main.cpp
//  week6assignment
//
//  Created by James Lawson on 2/18/19.
//  Copyright © 2019 James Lawson. All rights reserved.
//

#include <iostream> // input output library
using namespace std; // alternative to writing std:: infront of all i/o statements

int main(){ // all programs begin with this line
    int firstNum = 0, secondNum = 0; // declare and initialize variables
    cout << "Enter first Number (i.e. 43): " << endl;
    cin >> firstNum;
    cout << "Endter second Number(i.e. 32): "<< endl;
    cin >> secondNum;
    // User inputs numbers to compare
    if(firstNum < secondNum){ // check if first number is less than second number
        cout << "First number is less than second number" << endl;
    } else {
        cout << "First number is greater than or equal to second number" << endl;
    } // print results
    return 0;
}
