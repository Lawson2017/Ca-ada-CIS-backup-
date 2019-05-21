//
//  main.cpp
//  week8Assignment
//
//  Created by James Lawson on 3/6/19.
//  Copyright © 2019 James Lawson. All rights reserved.
//

#include <iostream>
using namespace std;

//int main(){
//    string firstName; // declare variables
//    int age;
//
//    cout << "Enter your first name: ";
//    cin >> firstName; // store user name
//    cout << endl << firstName << ", Enter your age: ";
//    cin >> age; // store user age
//
//    if(age >= 18){ // compare age to 18
//        cout << firstName << ", you are an adult" << endl; // print result
//    } else cout << firstName << ", you are not an adult" << endl;
//
//    return 0;
//}
//int main(){
//    //create container to hold testscore
//    int testscore;
//
//    //get numeric test score
//    cout << "Enter your numeric test score and I will give you a letter grade" << endl;
//    cin >> testscore;
//
//    //determine letter score
//    if(testscore < 60){
//        cout << "Your grade is an F";
//    } else {
//        if(testscore < 70){
//            cout << "Your grade is a D";
//        } else {
//            if(testscore < 80){
//                cout << "Your grade is a C";
//            } else{
//                if(testscore < 90){
//                    cout << "Your grade is a B";
//                } else{
//                    if(testscore < 100){
//                        cout << "your grade is an A";
//
//                    }
//                }
//            }
//        }
//
//    }
//
//    return 0;
//}
//int main(){
//    double tempIn, tempOut; // declare variables
//    string choice;
//    cout << "Enter Farenheight to convert to Celcius or Celcius to convert to Farenheight";
//    cin >> choice;
//    cout << "Enter degrees: ";
//    cin >> tempIn;
//
//    if(choice == "Celcius"){
//        tempOut = (tempIn * 9/5) + 32;
//        cout << "It is " << tempOut << "º Farenheight";
//    }else{
//        if(choice =="Farenheight"){
//            tempOut = (tempIn - 32) * 5/9;
//            cout << "It is " << tempOut << "º Celcius";
//        }
//    }
//
//
//
//    return 0;
//}
//int main(){
//    //declare strings for criteria
//    string haveMoney, haveTime, amHungry, resturauntOpen, haveTransportation;
//
//    //assign user answers to criteria
//    cout << "Do you have Money? Yes or No." << endl;
//    cin >> haveMoney;
//    if(haveMoney == "yes"){
//        cout << "Do you have time to stop? Yes or No." << endl;
//        cin >> haveTime;
//        if(haveTime == "yes"){
//            cout << "Are ya hungry? Yes or No." << endl;
//            cin >> amHungry;
//            if(amHungry == "yes"){
//                cout << "Is the resturaunt open? Yes or No." << endl;
//                cin >> resturauntOpen;
//                if(resturauntOpen == "yes"){
//                    cout << "Do you have transportation? Yes or No." << endl;
//                    cin >> haveTransportation;
//                    if(haveTransportation == "yes"){
//                        cout << "Your going to McDonalds!" << endl;
//                    } else{
//                        cout << "No McDonalds for you today" << endl;
//                    }
//                }
//
//            }
//
//        }
//
//    }
//
//
//    //Use nested if's to determine if user will eat lunch @ mcdonalds
//
//
//
//    return 0;
//}
#include <iostream>
using namespace std;
int main (){ // Converts grade Points into a Letter grade. // integer needs to be int and have opening bracket
int gradePoints = 00;  // Declare variable and assign initial value // use single = for integers
cout << "Enter Grade Points: "; // incorrect output operator <>
cin >> gradePoints;
if( gradePoints >= 90) { cout << "Grade = A"; }    // if true, then ends here, if false drop to next line // incorrect criteria in experession
    else if( gradePoints <= 80 ) { cout << "Grade = B"; }  //if true, then ends here, if false drop to next line // =< swapped
    else if( gradePoints >= 70 ) { cout << "Grade = C";}  //if true, then ends here, if false drop to next line // missing ;
    else if( gradePoints >= 60 ) { cout << "Grade = D"; } // if true, then ends here, if false drop to next line
    else{ cout << "Grade = A"; } // done.
    cout << endl;
//    system ("pause’);
    return 0;
    
}














