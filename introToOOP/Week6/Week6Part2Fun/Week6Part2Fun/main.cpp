//
//  main.cpp
//  Week6Part2Fun
//
//  Created by James Lawson on 10/16/18.
//  Copyright © 2018 James Lawson. All rights reserved.
//

#include <iostream>
using namespace std;

class fun{
public:
    static int count;
    void beginCount(){
        count++;
    }
    int getCount(){
        return count;
    }
};
int fun::count = 0;
int main(){
    cout << "Name: James Lawson - Program: Week 6 Part 2 Fun - Date: 101618" << endl;
    fun F1;
    F1.beginCount();
    F1.getCount();
    fun F2;
    F2.beginCount();
    F2.getCount();
    fun F3;
    F3.beginCount();
    F3.getCount();
    fun F4;
    F4.beginCount();
    F4.getCount();
    return 0;
}
