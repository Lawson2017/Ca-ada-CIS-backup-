//
//  main.cpp
//  Week14Part1B
//
//  Created by James Lawson on 11/18/18.
//  Copyright © 2018 James Lawson. All rights reserved.
//

#include <iostream>
using namespace std;

class Enemy {
public:
    virtual void attack(){} // When we make a function "virtual" it means we will be using it polymorphically. The program below knows to look for the specific attack funciton when called, and not the virtual function listed here.
    
};

class Ninja: public Enemy {
public:
    void attack(){
        cout << "ninja attack!" << endl;
    }
};

class Monster: public Enemy {
public:
    void attack(){
        cout << "monster attack!" << endl;
    }
};


int main(){
    Ninja n;
    Monster m;
    Enemy *enemy1 = &n;
    Enemy *enemy2 = &m; // Similar to the last video that utilized inheritence, we can assign these enemy objects to the adress of the ninja or moster thereof as they are both inheriting the base class enemy that holds the virtual attack function.
    enemy1->attack();
    enemy2->attack();

    return 0;
}
