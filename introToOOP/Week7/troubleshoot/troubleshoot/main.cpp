//
//  main.cpp
//  troubleshoot
//
//  Created by James Lawson on 12/4/18.
//  Copyright © 2018 James Lawson. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
using namespace std;


int main () {
    string userChoice="e";
    //    int start=7;
    
    // getline(fin,aLine); read a line
    // fin >> aWord;       read a word
    // fin.get(aChar);     read a character
    
    ifstream inFile("/Users/jamesMacBook/Desktop/introToC++/Week7Assignment/puzzles.txt");
    if (!inFile) {                 // did I find it?
        cout << "Infile not found. Exiting. \n\n";
        return 1; }
    
    char aChar;
    
    // read puzzle file into a 2-D array
    char gameArray[60][81];
    for (int i=0;i<60;i++) { // C numbers lines and columns from 0 not 1
        //       cout << "\n\ni counter is....: " << i << "\n\n";
        for (int j=0;j<82;j++) {
            inFile.get(aChar);
            gameArray[i][j]=aChar;} }
    inFile.close();
    
    cout << "\nWelcome to the Sudoku game. Please ";
    cout << "enter Easy, Medium, or Hard......: ";
    cin >> userChoice;
    
    cout << "\n\nThank you. You requested a ";
    int i = 0; // start in easy, medium, or hard section of puzzle list
    if (tolower(userChoice.substr(0,1)=="e")) { // Easy
        cout << "Easy ";
        i=0;}
    if (tolower(userChoice.substr(0,1)=="m")) { // Medium
        cout << "Medium ";
        i=20;}
    if (tolower(userChoice.substr(0,1)=="h")) {  // Hard
        cout << "Hard ";
        i=40;}
    cout << "puzzle. Presenting puzzle number ";
    
    srand(time_t(NULL));
    i=i+2*(rand()%5+1); // Even number is a puzzle line
    int puzzleNumber=i; // Keep this so we can find the solution
    cout << i/2 << endl << endl;
    
    while (true) {
        /*  print the puzzle              */
        /*  I know there is a better way  */
        for (int  j=0; j<3;  j++) {cout<<gameArray[i][j];} cout<<"|";
        for (int  j=3; j<6;  j++) {cout<<gameArray[i][j];} cout<<"|" ;
        for (int  j=6; j<9;  j++) {cout<<gameArray[i][j];} cout<<"\n";
        
        for (int  j=9; j<12; j++) {cout<<gameArray[i][j];} cout<<"|";
        for (int j=12; j<15; j++) {cout<<gameArray[i][j];} cout<<"|";
        for (int j=15; j<18; j++) {cout<<gameArray[i][j];} cout<<"\n";
        
        for (int j=18; j<21; j++) {cout<<gameArray[i][j];} cout<<"|";
        for (int j=21; j<24; j++) {cout<<gameArray[i][j];} cout<<"|";
        for (int j=24; j<27; j++) {cout<<gameArray[i][j];} cout<<"\n";
        
        cout << "-----------\n";
        
        for (int j=27; j<30; j++) {cout<<gameArray[i][j];} cout<<"|";
        for (int j=30; j<33; j++) {cout<<gameArray[i][j];} cout<<"|";
        for (int j=33; j<36; j++) {cout<<gameArray[i][j];} cout<<"\n";
        
        for (int j=36; j<39; j++) {cout<<gameArray[i][j];} cout<<"|";
        for (int j=39; j<42; j++) {cout<<gameArray[i][j];} cout<<"|";
        for (int j=42; j<45; j++) {cout<<gameArray[i][j];} cout<<"\n";
        
        for (int j=45; j<48; j++) {cout<<gameArray[i][j];} cout<<"|";
        for (int j=48; j<51; j++) {cout<<gameArray[i][j];} cout<<"|";
        for (int j=51; j<54; j++) {cout<<gameArray[i][j];} cout<<"\n";
        
        cout << "-----------\n";
        
        for (int j=54; j<57; j++) {cout<<gameArray[i][j];} cout<<"|";
        for (int j=57; j<60; j++) {cout<<gameArray[i][j];} cout<<"|";
        for (int j=60; j<63; j++) {cout<<gameArray[i][j];} cout<<"\n";
        
        for (int j=63; j<66; j++) {cout<<gameArray[i][j];} cout<<"|";
        for (int j=66; j<69; j++) {cout<<gameArray[i][j];} cout<<"|";
        for (int j=69; j<72; j++) {cout<<gameArray[i][j];} cout<<"\n";
        
        for (int j=72; j<75; j++) {cout<<gameArray[i][j];} cout<<"|";
        for (int j=75; j<78; j++) {cout<<gameArray[i][j];} cout<<"|";
        for (int j=78; j<81; j++) {cout<<gameArray[i][j];} cout<<"\n";
        
        
        
        
        int dRow =0; int dColumn=0; char dValue='0'; int j=0;
        
        cout << "\n\nPlease specify row, column, and value, each \n";
        cout <<     "separated by a space, or enter 0 0 0 to quit..: ";
        
        cin >>  dRow >> dColumn >> dValue;
        /*    cout << dRow    << "\n\n";
         cout << dColumn << "\n\n";
         cout << dValue  << "\n\n";  */
        
        
        if (dRow==0) {
            cout << "Exit requested. Thank you\n\n";
            return 0;}
        
        
        j=0; // displacement into puzzle row
        j=9*(dRow-1)+dColumn-1;
        
        
        cout << "\n\npuzzleIndex is......: " << j << endl << endl;
        if (gameArray[i][j]=='0') {gameArray[i][j]=dValue;}
        else {
            cout << "Sorry you can not change that cell. It already has a value ("
            << gameArray[i][j] << ")" << endl;
            dRow=0; dColumn=0; dValue='0';} // reset these values to prevent infinite loop
    }
    return 0;
}
