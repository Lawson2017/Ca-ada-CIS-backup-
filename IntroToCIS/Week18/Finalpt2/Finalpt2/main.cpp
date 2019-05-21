//
//  main.cpp
//  Finalpt2
//
//  Created by James Lawson on 5/20/19.
//  Copyright © 2019 James Lawson. All rights reserved.

#include <iostream>
using namespace std;
#include "string"

int myFactorial( int integer) //1. 'int' mispelled
{
    if( integer == 1)
        return 1;
    else
    {
        return (integer * (myFactorial(integer-1)));
    }
}

int main() {
    
    int j = 10; //2. incorrect assignment operator
    string myName = "NoName";
    string lastName = "NoName";
    cout << "Output sentence" << endl;
    cout << 120 << endl;
    cout << j << endl;           // prints out the value of x
    
    if (( j == 0 ) || ( myName == "NoName" )) //3. 'if' mispelled
    {
        cout << "J equals 0 OR myName equals NoName" << endl;
    }
    else
    {
        cout << "None are true" << endl;
    }
    
    for ( int i = 0; i < 5; i++)
    {
        cout << "Please enter an integer value: ";
        cin >> j;
        cout << "The value you entered is " << j;
        cout << " and its double is " << j*2 << ".\n";   // print out double value //  4. 'i' swapped with 'j' to return doubled value
    }
    
    cout << "Enter your first name: ";
    cin >> myName;
    cout << "Enter your last name: ";
    cin >> lastName; // 5. 2nd string to include last name in final cout statement
    cout << "My first and last name is " << myName << " " << lastName << endl;
    
    cout << "The factorial of 15 is " << myFactorial(15)<< endl;
    
    return 0;
}
