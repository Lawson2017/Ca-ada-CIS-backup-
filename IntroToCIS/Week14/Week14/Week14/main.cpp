//
//  main.cpp
//  Week14
//
//  Created by James Lawson on 4/21/19.
//  Copyright © 2019 James Lawson. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;


//Exercise 1
//int getArea(double value);
//
//int main(){
//    double value;
//    cout << "Enter length of one side of square: " << endl;
//    cin >> value;
//    cout << getArea(value);
//
//
//    return 0;
//}
//int getArea(double value){
//    int area = value * 4;
//    return area;
//}


//Exercise 2
//double radius; // function header
//double calcArea(double radius);
//double calcDiameter(double radius);
//double calcCircumference(double radius);
//int main(){
//    cout << "Enter a value for the radius: " << endl;
//    cin >> radius;
//    cout << "Area: " << calcArea(radius) << endl;
//    cout << "Diameter: " << calcDiameter(radius) << endl;
//    cout << "Circumference: " << calcCircumference(radius) << endl;
//
//    return 0;
//}
//double calcArea(double radius){ // function definition
//    const double pi = 3.14159265358979323846; // Quantstart.com article
//    double area = pi * pow(radius, 2); // <cmath>
//    return area;
//}
//double calcDiameter(double radius){
//    double diameter = radius * 2;
//    return diameter;
//}
//double calcCircumference(double radius){
//    const double pi = 3.14159265358979323846; // Quantstart.com article
//    double circumference = 2 * radius * pi;
//    return circumference;
//}


//Exercise 3
//char CodeLetter(char c);     // prototypefor function –code below
//char DecodeLetter(char c);   // prototypefor function –code below
//int main (){
//    char codedLetter;
//    char decodedLetter;
//    char letter = 'y'; // change me to a different character.
//cout << "Letter = "<< letter << endl;
//    codedLetter =  CodeLetter(letter);
//    cout << "Coded Letter = " << codedLetter << endl;
//    decodedLetter = DecodeLetter(codedLetter);
//    cout << "Decoded Letter = "<< decodedLetter << endl;
////    system ("pause");
//    return 0;
//
//}
//char CodeLetter(char c)  {
//    return c + 1;
//}// clue .. “you can add 1 to a char”
//char DecodeLetter(char c){
//    return c - 1;
//}// clue .. “you can subtract 1 from a char”
//
// The char variable is incremented by 1 just as it would with any number, and alphabetically when we use letters. Interestingly, the symbols even seemed to change in numerical order. It seems as we are just adding or subtracting 1 to the index of whichever type of data the char variable is holding.

//Exercise 5
//int x;
//double d;
//float f;
//int squareIntegers(int x);
//double squareDouble(double d);
//float squareFloat(float f);
//
//int main(){
//    cout << "enter an integer: " << endl;
//    cin >> x;
//    cout << "enter a double: " << endl;
//    cin >> d;
//    cout << "enter a float: " << endl;
//    cin >> f;
//    cout << "integer squared: " << squareIntegers(x) << endl;
//    cout << "double squared: " << squareDouble(d) << endl;
//    cout << "float squared: " << squareFloat(f) << endl;
//    return 0;
//}
//
//int squareInteger(int x){
//    int result = x * x;
//    return result;
//}
//double squareDouble(double d){
//    d = d * d;
//    return d;
//}
//float squareFloat(float f){
//    f = f * f;
//    return f;
//}

//Compiler error trying to run my int squareInteger() function, "linker command failed" - which according to most is due to multiple int main(). I don't understand why I've gotten this error as I've never had problems calling integer type functions in the main.cpp file, I've included the error in the screenshots submitted and continue to research the issue.
//Exercise 4
//int year;
//string convertNumber(int year);
//int main(){
//    cout << "enter a year: " << endl;
//    cin >> year;
//
//    cout << " year in roman numeral: " << convertNumber(year) << endl;
//    return 0;
//}
////
//string convertNumber(int year){
//    string convertedYear;
//
//    return convertedYear;
//}

//

//void checkNameAdress(string &name){
//    cout << name << endl;
//    cout << &name << endl;
//    name = "jim"; //
//}
//int main(){
//    string newName = "bob";
//    cout << newName << endl;
//    cout << &newName << endl;
//    checkNameAdress(newName);
//    cout << newName << endl;
//    cout << &newName << endl; // after running this function the name has changed but the address has not due to the reference in the function.
//return 0;
//}
void passByRef(int &y){
    cout << y << endl;
    cout << &y << endl;
    y = 42;
}
int main(){
    int a = 42;
    cout << a << endl;
    cout << &a << endl;
    passByRef(a);
    cout << a << endl;
    cout << &a << endl;
}
