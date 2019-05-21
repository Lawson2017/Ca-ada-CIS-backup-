//
//  main.cpp
//  Week13 assignment
//
//  Created by James Lawson on 4/10/19.
//  Copyright © 2019 James Lawson. All rights reserved.
//



#include <iostream>
using namespace std;
//Part 1
//int main(){
//    int num1 = 0;
//    int num2 = 0;
//    int num3 = 0;
//    int num4 = 0;
//    int num5 = 0;
//    int num6 = 0;
//    int num7 = 0;
//    int num8 = 0;
//    int num9 = 0;
//    int num10 = 0;
//    int num11 = 0;
//    int num12 = 0;
//    int num13 = 0;
//    int num14 = 0;
//    int num15 = 0;
//    int num16 = 0;
//    int num17 = 0;
//    cout << "Enter an integer value : ";
//    cin >> num1;
//    cout << "Enter an integer value : ";
//    cin >> num2;
//    cout << "Enter an integer value : ";
//    cin >> num3;
//    cout << "Enter an integer value : ";
//    cin >> num4;
//    cout << "Enter an integer value : ";
//    cin >> num5;
//    cout << "Enter an integer value : ";
//    cin >> num6;
//    cout << "Enter an integer value : ";
//    cin >> num7;
//    cout << "Enter an integer value : ";
//    cin >> num8;
//    cout << "Enter an integer value : ";
//    cin >> num9;
//    cout << "Enter an integer value : ";
//    cin >> num10;
//    cout << "Enter an integer value : ";
//    cin >> num11;
//    cout << "Enter an integer value : ";
//    cin >> num12;
//    cout << "Enter an integer value : ";
//    cin >> num13;
//    cout << "Enter an integer value : ";
//    cin >> num14;
//    cout << "Enter an integer value : ";
//    cin >> num15;
//    cout << "Enter an integer value : ";
//    cin >> num16;
//    cout << "Enter an integer value : ";
//    cin >> num17;
//
//    cout << "You entered " << num1 << endl;
//    cout << "You entered " << num2 << endl;
//    cout << "You entered " << num3 << endl;
//    cout << "You entered " << num4 << endl;
//    cout << "You entered " << num5 << endl;
//    cout << "You entered " << num6 << endl;
//    cout << "You entered " << num7 << endl;
//    cout << "You entered " << num8 << endl;
//    cout << "You entered " << num9 << endl;
//    cout << "You entered " << num10 << endl;
//    cout << "You entered " << num11 << endl;
//    cout << "You entered " << num12 << endl;
//    cout << "You entered " << num13 << endl;
//    cout << "You entered " << num14 << endl;
//    cout << "You entered " << num15 << endl;
//    cout << "You entered " << num16 << endl;
//    cout << "You entered " << num17 << endl;
//
//    return 0;
//}
//Part 2
//int main(){
//    int numArray[17] = {0};
//    for(int i = 0; i <= 16; i++){
//        cout << "Enter a number: ";
//        cin >> numArray[i]; }
//    for(int i = 0; i <= 16; i++){
//        cout << "You entered: " << numArray[i] << endl; }
//    return 0; }
//int main(){
//    string nameArray[6] = {" "};
//    for(int i=0;i<=5;i++){
//        cout << "Enter a name: ";
//        cin >> nameArray[i];
//    }
//    for(int i=0;i<=5;i++){
//        cout << nameArray[i] << endl;
//    }
//    return 0;
//}
//int main(){
//    int ages[5] = {0};
//    for (int i = 0; i <= 10; i++){
//        cout << "ages[" << i << "]: " << ages[i] << endl;
//    }
//
//
//    return 0;
//}
//int main(){
//    double array1[10] = {0};
//    double array2[100] = {0};
//    double array3[1000] = {0};
//    double array4[10000] = {0};
//    double array5[100000] = {0};
//    double array6[999999] = {0};
////    double array7[10000000] = {0};
//
//    return 0;
//}
//#include <cmath>
//#include <iomanip> // setW, fixed, setprecision and right functions
//
//int main () {
//    int arrayIntegers[50] = {0}; // short list initialization of an array with 50 elements assigned to 0.
//    int i = 0; // declaration of iterator for the loop below.
//
//    cout << fixed; // this will represent an integer with as many digits in the decimal point as specified by the precision field (set to 0) below.
//    cout << setprecision(0); // sets the amount of decimal points for an integer to display on monitor
//    cout << setw(50); // sets field width to be used on output operations
//    cout << right; // output padding set to right side on monitor
//
//    for (i = 0; i < 50; i++){ // loop from 0 to 50 one at a time
//        cout << " --------------------------- " << endl; // manually inserting padding to seperate output statements
//        cout << " 2 ^ " << i << " = " << pow(2.0,i) << endl;// pow is used to set exponents, iterator is used and second part of parameter
//        arrayIntegers[i] = pow(2.0,i); // multiply number in current loop status to the 2nd power
//        cout << " 2 ^ " << i << " = " << arrayIntegers[i] << endl; // display number in loop being set to 2nd power in c++ syntax
//    }
//    return 0; // end program
//}
//int main(){
//    int multiplicationTable[11][11];
//    int tableNum;
//    for(int i = 1;i < 11; i++){
//        for(int j = 1; j < 11; j++){
//            tableNum = i * j;
//            multiplicationTable[i][j] = tableNum;
//        }
//    }
//    for(int i = 1; i < 11; i++){
//        for(int j = 1; j < 11; j++){
//            cout << multiplicationTable[i][j] << " ";
//        }
//        cout  <<endl;
//    }
//    return 0;
//}
int main (){
    string ForwardNames[10] = {"Fred","Tuyet","Annie","Moe","Ria","Luke","Jim","Mary","Rex","Omar"};
    string BackwardNames[10];
    cout << "Forward list: " << endl;
    for(int i = 0; i <= 9; i++){
        BackwardNames[i] = ForwardNames[i];
        cout << ForwardNames[i] << ", ";
    }
    cout << endl;
        cout << "Backward list: " << endl;
    for (int i = 9; i >= 0; i--){
        cout << BackwardNames[i] << ", ";
    }
    cout << endl;
    return 0;
}
