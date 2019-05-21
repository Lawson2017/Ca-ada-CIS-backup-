//
//  main.cpp
//  week14Part1A
//
//  Created by James Lawson on 11/18/18.
//  Copyright © 2018 James Lawson. All rights reserved.
//

#include <iostream>
using namespace std;

class Enemy{
protected:
    int attackPower;
public:
    void setAttackPower(int a){
        attackPower=a;
    }
};

class Ninja : public Enemy{
public:
    void attack()
    {cout << "i am a ninja, ninja chop! -" << attackPower << endl;}
};

class Monster : public Enemy{
public:
    void attack()
    {cout << "Monster must eat you!! -" << attackPower << endl;}
};

int main(){
    Ninja n;
    Monster m;
    Enemy *enemy1 = &n; // because the ninja object is of type enemy(base class), all ninjas are enemies and all monsers are enemies, therefore anything an enemy can do, a ninja can do, anything a ninja can do, a monster can do
    Enemy *enemy2 = &m;
    enemy1 -> setAttackPower(29);
    enemy2 -> setAttackPower(99);
    n.attack();
    m.attack();
    return 0;
}
