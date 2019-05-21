//
//  main.cpp
//  Midterm101118
//
//  Created by James Lawson on 10/10/18.
//  Copyright © 2018 James Lawson. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

class Part {
public:
    string default1(void){
        return "In default part constructor";
    }
    ~Part(){
        cout << "destructor for part class. Do something before the object is deleted from RAM" << endl;
    }
    
};

class Whole {
private:
    string wholeName = "None";
public:
    string default2(void){
        wholeName = "None";
        return "in whole default Constructor";
    }
    void wholeConstruct(){
        cout << "called default constructor - " << endl;
        cout << "Whole Name: " << wholeName << endl;
    }
    string parm1(string name){
        name = wholeName;
        return wholeName + "In whole parm constructor";
    }
    string getName(){
        return wholeName;
    }
    ~Whole(){
        cout << "called destructor" << endl;
        cout << "Whole name: " << wholeName << endl;
    }
};


int main(){
    cout << "Name: James Lawson - Program: Midterm Part 2 - Date: 101118" << endl;
    Whole W1;
    Whole W2("w2");
    
    W1.getName();	
    W2.parm1("w2");

    return 0;
}
