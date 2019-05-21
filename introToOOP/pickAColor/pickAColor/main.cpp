//
//  main.cpp
//  pickAColor
//
//  Created by James Lawson on 9/25/18.
//  Copyright © 2018 James Lawson. All rights reserved.


#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

class Colors {
public:
    string myColors[7] ={ "red", "orange", "yellow", "green", "blue", "indigo", "violet"};
    void printColors(){
        for(int i = 0; i <= 6; i++){
            cout << myColors[i] << endl;
        }
    }
    void randomColor(){
        srand((unsigned)time(0));
         int randomIndex;
        for(int j = 0; j < 1; j++){
            randomIndex = (rand() % 6) + 1;
            cout << myColors[randomIndex] << endl;
        }
    }
};

int main(){
    Colors pickColor;
    pickColor.printColors();
    pickColor.randomColor();
    return 0;
}

