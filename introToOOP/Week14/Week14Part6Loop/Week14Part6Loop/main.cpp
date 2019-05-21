//
//  main.cpp
//  Week14Part6Loop
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

void polymorphis_animalSound(Animal *PtrBase){
    return PtrBase->animalSound();
}

int main(){
    Animal**ptrBaseAnimal = new Animal*[4];
    Cat C1;
    Dog D1;
    Elephant E1;
    Mouse M1;
    ptrBaseAnimal[0] = &C1;
    ptrBaseAnimal[1] = &D1;
    ptrBaseAnimal[2] = &E1;
    ptrBaseAnimal[3] = &M1;
    
    for(int i = 0; i < 4; i++){
        ptrBaseAnimal[i]->animalSound();
    }

    return 0;
}
