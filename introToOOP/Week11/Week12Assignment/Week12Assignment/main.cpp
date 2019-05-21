//
//  main.cpp
//  Week12Assignment
//
//  Created by James Lawson on 11/3/18.
//  Copyright © 2018 James Lawson. All rights reserved.
//

#include <iostream>
using namespace std;
class Square {
public:
    int length, width; // made public so I can access them in Cube
    
    void setWidth(int inWidth){
        width = inWidth;
    }
    int getWidth(){
        return width;
    }
    void setLength(int inLength){
        length = inLength;
    }
    int getLength(){
        return length;
    }
    int getArea(){
        int area = length * width;
        return area;
    }
};
class Cube : public Square {
private:
    int height;
public:
    int getHeight(){
        return height;
    }
    void setHeight(int inHeight){
        height = inHeight;
    }
    int getVolume(){
        int volume;
        volume = length * width * height;
        return volume;
    }
};


int main(){
    cout << "Name: James Lawson - Program: Week 12 Program 5 - Date: 11/04/18" << endl;
    // Declare 3 instances of Cube
    Cube C1;
    Cube C2;
    Cube C3;
    // Use the three instances
    C1.setLength(2);
    C1.setWidth(3);
    C1.setHeight(2);
    cout << " volume of cube 1: " << C1.getVolume() << endl;
    C2.setLength(3);
    C2.setWidth(4);
    C2.setHeight(3);
    cout << " volume of cube 2: " << C2.getVolume() << endl;
    C3.setLength(4);
    C3.setWidth(5);
    C3.setHeight(4);
    cout << " volume of cube 3: " << C3.getVolume() << endl;
     return 0;
}
