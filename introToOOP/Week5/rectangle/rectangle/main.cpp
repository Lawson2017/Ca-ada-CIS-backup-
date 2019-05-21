//
//  main.cpp
//  rectangle
//
//  Created by James Lawson on 9/25/18.
//  Copyright © 2018 James Lawson. All rights reserved.
//

#include <iostream>
using namespace std;

class Rectangle {
    int width, height;
public:
    int area() {
        int answer;
        answer = height * width;// complete this function so the code works
        return answer;
    }
    void set_values (int x, int y) {
        width = x;
        height = y;// complete this function so the code works
    }
};


int main () {  // Use this driver program
    
    // Use set_values function to set values
    Rectangle rect1;
    rect1.set_values (5,6);
    cout << "area: " << rect1.area() << endl;
    // Use set_values function to set values
    Rectangle rect2;
    rect2.set_values (3,4);
    cout << "area: " << rect2.area() << endl; return 0; }
