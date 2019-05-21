////
////  main.cpp
////  Week 15
////
////  Created by James Lawson on 4/29/19.
////  Copyright © 2019 James Lawson. All rights reserved.
////
//
//#include <iostream>
//using namespace std;
//
//string firstName; // firstName and age must be of global scope to assign in functions and then be used as arguments in a greater function.
//int age;
//
//string getName(){
//    cout << "Enter your first name: ";
//    cin >> firstName;
//    return firstName;
//}
//int getAge(){
//    cout << "Enter your age: ";
//    cin >> age;
//    return age;
//}
//void ageAndName(string firstName, int age){
//    cout << "Name: " << firstName << "\n" << "Age: " << age << endl;
//}
//
//int main(){
//    getName();
//    getAge();
//    ageAndName(firstName,age); // these variables are being passed by reference, as they are indeed the same variables as defined in above functions.
//
//    return 0;
//}
#include <iostream>
using namespace std;
void searchArray(string name, string arrayA[],int size){ // 1st program to check for a name in array
    for(int i = 0; i <= size; i++){
        if(name == arrayA[i]){
            cout << "Index of name: " << i << endl;
            cout << "Name: " << arrayA[i] << endl;
        } else if(i > size && name != arrayA[i]){
            cout << 7 << endl;
            cout << "Name not found" << endl;// only print this if the loop is complete and no names have matched with the array
        }
    }
}
void printAllNames(string arrayB[], int size){
    int i;
    for(i = 0; i <= size; i++){
        if(arrayB[i] == " "){
            i = i + 2; // skip element if it is blank
        }
        cout << arrayB[i] << endl;
    }
    cout << " ---------- " << endl;
}
void deleteName(string name, string arrayC[],int size){
    for(int i = 0; i <= size; i++){
        if(name == arrayC[i]){
            arrayC[i] = " "; // if there is a match, assign element to blank string
        }
    }
}
int main(){
    string nameArray[7] = {"Jim", "Tuyet", "Ann", "Roberto", "Crystal", "Valla", "Mathilda"};
    searchArray("Tuyet", nameArray, 6);
    printAllNames(nameArray, 6);
    deleteName("Tuyet", nameArray, 6);
    printAllNames(nameArray, 6);
    return 0;
}














