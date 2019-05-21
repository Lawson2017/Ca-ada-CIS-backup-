//
//  main.cpp
//  week16Assingment
//
//  Created by James Lawson on 12/3/18.
//  Copyright © 2018 James Lawson. All rights reserved.
//
#include <fstream>// Make library available so you can work with files
#include <string>//
#include <iostream>
using namespace std;

int main(){
    string firstName, lastName, aLine;
    int age;
    
    ifstream fin("/Users/jamesMacBook/Desktop/introToC++/Week16Assignment/firstLastAge.txt"); // the decision to read not write
    if (!fin) {
        cout << "file not found" << endl;
    }
    if (fin.is_open()){
        while(!fin.eof()){ // continue to read lines until there are no lines left to be read
            getline(fin,aLine); // the arguments in the preexisting 'getline' are the text file, and the variable we will assign its content to.
            fin >> firstName;
            fin >> lastName;
            fin >> age;
            if(age >= 23 || age <= 17){
                cout << "First Name: " << firstName << " - ";
                cout << " Last Name: " << lastName << " - ";
                cout << " Age: " << age << endl;
            }
        }
    }
    fin.close();
    return 0;
}
