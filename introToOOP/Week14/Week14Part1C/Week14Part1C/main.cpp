//
//  main.cpp
//  Week14Part1C
//
//  Created by James Lawson on 11/18/18.
#include <iostream>
using namespace std;

class Enemy { // this is an abstract class; an abstract class is any given class that holds a virtual function
public:
    virtual void attack() = 0; // if this is the case (pure virtual function) than the derived classes MUST overwrite the virtual function.  {
        //cout << "i am the enemy class" << endl;
    //}
    
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
    // becuase we did not give this monster class a specific attack function (overwrite the virtual), the program used the output designated in the base enemy class.
};


int main(){
    Ninja n;
    Monster m;
    Enemy *enemy1 = &n; // if we made an object from the enemy class and tried to use that attack function, the program would call the enemy class and use the first(base) attack, but because it's "virtual", the program would check what we're pointing to pointing to, and if one of the derived classes is using that function.. it will use the attack function in the derived class and not the aforementioned base that is of type "virtual".
    Enemy *enemy2 = &m;
    enemy1->attack();
    enemy2->attack();
    
    return 0;
}
