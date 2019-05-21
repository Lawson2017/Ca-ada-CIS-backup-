//
//  main.cpp
//  Week18ExtraCredit
//
//  Created by James Lawson on 5/19/19.
//  Copyright © 2019 James Lawson. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

//class Car {
//private:
//    string color, ownerName, modelName, currentGear, currentState;
//    double currentCharge;
//public:
//    void setColor(string newColor){
//        color = newColor;
//    }
//    string getColor(){
//        return color;
//    }
//    void setName(string newName){
//        ownerName = newName;
//    }
//    string getName(){
//        return ownerName;
//    }
//    void setModel(string newModel){
//        modelName = newModel;
//    }
//    string getModel(){
//        return modelName;
//    }
//    void setGear(string newGear){
//        currentGear = newGear;
//    }
//    string getGear(){
//        return currentGear;
//    }
//    void setState(string newState){
//        currentState = newState;
//    }
//    string getState(){
//        return currentState;
//    }
//    void setCharge(int newCharge){
//        currentCharge = newCharge;
//    }
//    int getCharge(){
//        return currentCharge;
//    }
//};
//
//
//int main(){
//    // step 2
//    Car C;
//    C.setColor("red");
//    C.setName("Tuyet Nguyen");
//    C.setModel("Tesla");
//    C.setCharge(100);
//    C.setGear("park");
//    C.setState("off");
//    // step 3
//    C.setState("on");
//    C.setGear("drive");
//    C.setGear("park");
//    C.setState("off");
//    cout << "Owner's name: " << C.getName() << endl;
//    cout << "Model: " << C.getModel() << endl;
//    cout << "Color: " << C.getColor() << endl;
//    cout << "Current Charge: " << C.getCharge() << endl;
//    cout << "Current Gear: " << C.getGear() << endl;
//    cout << "Current State: " << C.getState() << endl;
//    return 0;
//}
class Owl {
private:
    string species;
    string isHungry;
public:
    void setSpecies(string species1){
        species = species1;
    }
    void setHunger(string hunger){
        isHungry = hunger;
    }
    string getSpecies(){
        return species;
    }
    string getHunger(){
        return isHungry;
    }
};
int main(){
    Owl O;
    O.setSpecies("Great Horned");
    O.setHunger("Hungry");
    cout << "The " << O.getSpecies() << " Owl is " << O.getHunger() << endl;
    return 0;
}
