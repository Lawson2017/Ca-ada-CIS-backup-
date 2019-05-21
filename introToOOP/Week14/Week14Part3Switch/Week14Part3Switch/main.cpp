//
//  main.cpp
//  Week14Part3Switch
//
//  Created by James Lawson on 11/18/18.
//  Copyright © 2018 James Lawson. All rights reserved.
//

#include <iostream>
using namespace std;

class Animal {
public:
    string animalName;
    string sound;
    virtual void animalSound(){
        cout << animalName << " says " << sound << endl;
    }
};

class Cat: public Animal {
    string animalName = "Cat";
    string sound = "Meow!";
public:
    void animalSound(){
        cout << animalName << " says " << sound << endl;
    }
};
class Dog: public Animal {
    string animalName = "Dog";
    string sound = "Woof!";
public:
    void animalSound(){
        cout << animalName << " says " << sound << endl;
    }
};
class Elephant: public Animal {
    string animalName = "Elephant";
    string sound = "EEEOOAHHHHHHH";
public:
    void animalSound(){
        cout << animalName << " says " << sound << endl;
    }
};
class Mouse: public Animal {
    string animalName = "Mouse";
    string sound = "Squeak!";
public:
    void animalSound(){
        cout << animalName << " says " << sound << endl;
    }
};


int main(){
    Cat C1;
    Dog D1;
    Elephant E1;
    Mouse M1;
    
    char animal = ' ';
    cout << "enter c for cat, d for dog, e for elephant or m for mouse : " << endl;
    cin >> animal;
    
    switch( animal ){
        case 'c':
            C1.animalSound();
            break;
        case 'd':
            D1.animalSound();
            break;
        case 'e':
            E1.animalSound();
            break;
        case 'm':
            M1.animalSound();
            break;
        default:
            cout << "enter a correct letter" << endl;
}
    return 0;
}
