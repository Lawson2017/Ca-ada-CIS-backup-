//
//  main.cpp
//  week17prog5
//
//  Created by James Lawson on 12/10/18.
//  Copyright © 2018 James Lawson. All rights reserved.
//
#include <algorithm> // alphebetized loops
#include <fstream> // read files
#include <iostream>
using namespace std;

int main(){
//    char firstLetter;
    string lastName, firstName, city, state, zip, aLine;
    string records[10];
    ifstream fin("/Users/jamesMacBook/Desktop/introToC++/Week17Assignment/week17Record.txt"); // the decision to read not write
    if (!fin) {
        cout << "file not found" << endl;
    }
    for(int i = 0; i < 10; i++){ // continue to read lines until there are no lines left to be read
        fin >> lastName >> firstName >> city >> state >> zip;
        records[i] = lastName + " " + firstName + " " + city + " " + state +" " + zip + "\n";
        cout << records[9];
        ofstream fout ("/Users/jamesMacBook/Desktop/introToC++/Week17Assignment/sortedRecords.txt");
        fout << records[6];
        fout << records[2];
        fout << records[8];
        fout << records[5];
        fout << records[0];
        fout << records[4];
        fout << records[9];
        fout << records[5];
        fout << records[1];
        fout << records[7];
    }
    
    
    fin.close();
    return 0;
}
