//
//  main.cpp
//  Week7AssignmentPt2
//
//  Created by James Lawson on 10/14/18.
//  Copyright © 2018 James Lawson. All rights reserved.
//
#include <iostream>
#include <cmath>
using namespace std;
class Date{
private:
    int month; //private members can be passed into public functions as arguments within the class.
    int day;
    int year;
public:
    void setDate(int m, int d, int y){ //parm constructor to set dates.
        if(m >= 1 && m <= 12)
            month = m;
        else month = 1;
        if(d >= 1 && d <= 31)
            day = d;
        else day = 1;
        if(y >= 0001)
            year = y;
        else year = 1900;
    }
    void printDate() const{ // I found this patch of code below via cplusplus.com on a post from 2015 and had to refamiliarize myself with the 'const' data type.
        if (month <= 9 && day <= 9)
            cout << "date: " << "0" << month << "-" << "0" << day << "-" << year << endl;
        else if(month <= 9 && day >= 9)
            cout << "date: " << "0" << month << "-" << day << "-" << year << endl;
        else if(month >= 10 && day <= 9)
            cout << "date: " << month << "-0" << day << "-" << year << endl;
        else cout << "date: " << month << "-" << day << "-" << year << endl;
    }
};
class Person{
private:
    string firstName;
    string lastName;
    Date dateOfBirth;
public:
    void setFirstName(string inFirst){
        firstName = inFirst;
    }
    void setLastName(string inLast){
        lastName = inLast;
    }
    string getFirstName(){
        return firstName;
    }
    string getLastName(){
        return lastName;
    }
    void printInfo(){
        cout << "your name is: " << firstName << " " << lastName << " born on: ";
        dateOfBirth.setDate(1,1,1900);
        dateOfBirth.printDate();
    }
    string defaultName(){
        firstName = "none";
        lastName = "none";
        return 0;
    }
};
int main(){
    cout << "Name: James Lawson - Program: Week 7 Assignment Part 2 - Date: 101518" << endl;
//    Person p1;
//    p1.defaultName();
    Person p2;
    string f1, l1;
    cout << "enter your first name: ";
    cin >> f1;
    cout << "enter your last name: ";
    cin >> l1;
    p2.setFirstName(f1);
    p2.setLastName(l1);
    p2.printInfo();
    return 0;
}
