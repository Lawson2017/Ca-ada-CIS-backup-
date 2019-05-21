//
//  main.cpp
//  Week8Prog3
//
//  Created by James Lawson on 10/22/18.
//  Copyright © 2018 James Lawson. All rights reserved.
//

#include <iostream>
using namespace std;

class Person {
private:
    string firstName, lastName;
    int yearOfBirth;
public:
    void setFirstName(string inFirstName){
        firstName = inFirstName;
    }
    string getFirstName(){
        return firstName;
    }
    void setLastName(string inLastName){
        lastName = inLastName;
    }
    string getLastName(){
        return lastName;
    }
    void setBirthYear(int inYear){
        yearOfBirth = inYear;
    }
    int getYear(){
        return yearOfBirth;
    }
};
int main(){
    Person P1;
    Person P2;
    Person * ptrPerson1;
    Person * ptrPerson2;
    // assigning pointer variables to the address of the class Person instance above
    ptrPerson1 = &P1;
    ptrPerson2 = &P2;
    // calling getters and setters using arrow operator
    ptrPerson1 -> setFirstName("James");
    ptrPerson1 -> setLastName("Lawson junior");
    ptrPerson1 -> setBirthYear(1992);
    ptrPerson2 -> setFirstName("James");
    ptrPerson2 -> setLastName("Lawson senior");
    ptrPerson2 -> setBirthYear(1953);
    cout << "Name: James Lawson - Program: Week 8 Program 3 - Date: 102218" << endl;
    cout << "Title of ptrPerson1: " << ptrPerson1 -> getFirstName() << " " << ptrPerson1 -> getLastName() << " born in: " << ptrPerson1 -> getYear() << endl;
    cout << "Title of ptrPerson2: " << ptrPerson2 -> getFirstName() << " " << ptrPerson2 -> getLastName() << " born in: " << ptrPerson2 -> getYear() << endl;
    return 0;
}
