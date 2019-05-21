//
//  main.cpp
//  Week9Assignment
//
//  Created by James Lawson on 3/13/19.
//  Copyright © 2019 James Lawson. All rights reserved.
//

#include <iostream>
using namespace std;

//int main(){
//    int A = 1;
//    int B = 1;
//    int C = 0;
//    int choice;
//    cout << "Enter a 1 or 0" << endl;
//    cin >> choice;
//    if(choice == C && (choice == A || choice == B)){
//        cout << "(A or B) and C" << endl;
//    } else {
//        if(choice == B || choice == C){
//            cout << "(A or B)" << endl;
//        }
//    }
//    return 0;
//}
//int main(){
//    string isHungry, hasMoney, beforeEvening, lowOnFunds, notCooking, notVegetarian; // declare strings that will act as the boolean in condition below
//    cout << "Are you hungry? yes or no" << endl; // get yes or no from user
//    cin >> isHungry;
//    cout << "Do you have money? yes or no" << endl;
//    cin >> hasMoney;
//    cout << "Is it not too close to dinner to be eating junk food? yes or no" << endl;
//    cin >> beforeEvening;
//    cout << "Do you want to get something cheap for lunch? yes or no" << endl;
//    cin >> lowOnFunds;
//    cout << "Do you not feel like cooking something? yes or no" << endl;
//    cin >> notCooking;
//    cout << "Do you eat meat, or okay with eating an establishment that serves meat? yes or no" << endl;
//    cin >> notVegetarian;
//    //check conditions to see if they will eat at mcdonalds
//    if(isHungry == "yes" && hasMoney == "yes" && beforeEvening == "yes" && lowOnFunds == "yes" && notCooking == "yes" && notVegetarian == "yes"){
//        cout << "You will be eating lunch at McDonalds" << endl;
//    } else{
//        cout << "You should not eat lunch at McDonalds" << endl;
//    }
//
//    return 0;
//}
//int main(){
//    if((1)&&(1)&&(1)&&(1)&&(0)){
//        cout << "true" << endl;
//    }else {
//        cout << "false" << endl;
//    }
//    return 0;
//}
//
//int main(){
//    string dayOfWeek, roomIsClean, homeworkComplete;
//    cout << "What Day of the week is it?" << endl;
//    cin >> dayOfWeek;
//    cout << "Is your room clean?" << endl;
//    cin >> roomIsClean;
//    cout << "Is your homework complete?" << endl;
//    cin >> homeworkComplete;
//
//    if((dayOfWeek == "monday" || dayOfWeek == "tuesday" || dayOfWeek == "wednesday") && (roomIsClean == "yes" && homeworkComplete == "yes")){
//        cout << "You may go out and play." << endl;
//    } else{
//        if((dayOfWeek == "thursday" || dayOfWeek == "friday" || dayOfWeek == "saturday" || dayOfWeek == "sunday" ) && (roomIsClean == "yes" || homeworkComplete == "yes")){
//            cout << "You may go out and play." << endl;
//        } else {
//            cout << "You may not go out and play." << endl;
//        }
//    }
//
//    return 0;
//}
#include<string>
int main() {// Demonstrates Logical OperatorAND &&
    string favoriteFirstName;
    int age = 0;
    char gender = 'x';
    cout << "Enter your favorite first name: ";
    // cout allows you to write a message
    cin >> favoriteFirstName;  // cin allowsyou to input a value
    cout << endl;
    cout << "Enter you age: ";
    cin >> age;
    cout << endl;
    cout << "Enter you Gender F/M: ";
    cin >> gender;
    // Logical AND table --exp1 && exp2 && exp3
    if( ( age > 20 ) &&( gender == 'F') &&(favoriteFirstName == "Ann") ){
        // And coniditions: Takes ALL to be TRUE, so result is TRUE
        cout << endl << " ALL ARE TRUE "<< endl;
    }else{
        // And conditions: Only takes oneFALSE condition, so result is FALSE
        cout << " One or more conditions is FALSE "<< endl;
    }
    return 0;
}
    // pasuse statement Only for PC, not MACreturn0;}
