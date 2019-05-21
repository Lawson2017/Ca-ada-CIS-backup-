//
//  box.cpp
//  week5Box
//
//  Created by James Lawson on 10/1/18.
//  Copyright © 2018 James Lawson. All rights reserved.
//
#include <iostream>
#include <string>
#include<cmath> // pow()
#include "box.h"
using namespace std;



int box::getWidth(void){
    return width;
}
void box::setWidth(int inWidth){
    width = inWidth;
}
void box::setHeight(int inHeight){
    height = inHeight;
}
int box::getHeight(void){
    return height;
}
int box::getDepth(void){
    if(depth <= 0){
        cout << "must be greater than 0" << endl;
    }
    return depth;
}
void box::setDepth(int inDepth){
    depth = inDepth;
}
int box::calcArea(){
    int area = pow(2, height) * 6;
    return area;
}
int box::calcVolume(){
    int volume = pow(3, height);
    return volume;
    }
