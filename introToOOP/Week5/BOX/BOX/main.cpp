//
//  main.cpp
//  BOX
//
//  Created by James Lawson on 10/1/18.
//  Copyright © 2018 James Lawson. All rights reserved.
//

#include <iostream>
#include <string>
#include<cmath>
using namespace std;

class box {
private:
    int depth;
    int width;
    int height;

public:
    int getWidth(void){
        return width;
    }
    void setWidth(int inWidth){
        width = inWidth;
    }
    void setHeight(int inHeight){
        height = inHeight;
    }
    int getHeight(void){
        return height;
    }
    int getDepth(void){
        return depth;
    }
    void setDepth(int inDepth){
        height = inDepth;
    }
    int calcArea(){
        int area = pow(2, height) * 6;
        return area;
    }
    int calcVolume(){
        int volume = pow(3, height);
        return volume;
    }
};

int main(){
    box B1;
    B1.setWidth(2);
    B1.setDepth(3);
    B1.setHeight(4);

    cout << "Height: " << B1.getHeight() << endl;
    cout << "Area: " << B1.calcArea() << endl;
    cout << "Volume: " << B1.calcVolume() << endl;

    box B2;

    B2.setWidth(3);
    B2.setHeight(4);

    cout << "Depth: " << B2.getDepth() << endl;
    cout << "Area: " << B2.calcArea() << endl;
    cout << "Volume: " << B2.calcVolume() << endl;
    
    return 0;
}
