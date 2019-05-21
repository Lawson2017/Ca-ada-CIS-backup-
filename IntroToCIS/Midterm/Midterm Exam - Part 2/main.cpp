//
//  main.cpp
//  Midterm Exam - Part 2
//
//  Created by James Lawson on 3/17/19.
//  Copyright © 2019 James Lawson. All rights reserved.
//

#include <iostream> // iostream incorrectly spelled
using namespace std; // extra ;
#include <string>
int main() {
    string favoriteFirstName; // declare variables for user to assign
    int age = 0; //
    char gender = 'x';
    cout << "Enter your favorite first name: ";  // cout allows you to write a message (mispelled name)
    cin >> favoriteFirstName;                           // cin allows you to input a value
    cout << endl; // reverse >>
    cout << "Enter you age: ";
    cin >> age;
    cout << endl;
    cout << "Enter you Gender F/M: ";
    cin >> gender; // uppercase G
    // Logical AND table --  ((exp1) && (exp2) && (exp3) )...
    if ( ( age > 20 ) && ( gender == 'F') && ( favoriteFirstName == "YourFavoriteNameHere"  )) // missing ), mispelled variable and missing &
        {  // And coniditions: Takes ALL to be TRUE, so result is TRUE
            cout << endl << " ALL conditions ARE TRUE " << endl;     }
        else     {
            // And onditions: Only takes one FALSE condition, so result is FALSE
            cout << " One or more conditions is FALSE " << endl;     }
//        system("pause"); // pause statement Only for PC, not MAC  - Macs Comment // out this line
        return 0;
        }
