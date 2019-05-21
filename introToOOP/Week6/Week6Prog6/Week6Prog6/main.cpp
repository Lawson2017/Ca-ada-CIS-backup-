//
//  main.cpp
//  Week6Prog6
//
//  Created by James Lawson on 10/16/18.
//  Copyright © 2018 James Lawson. All rights reserved.
//

#include <iostream>
#include <string>
#include<cmath>
using namespace std;
template <class B>
class box {
private:
    B depth;
    B width;
    B height;
    
public:
    B getWidth(void){
        return width;
    }
    void setWidth(B inWidth){
        width = inWidth;
    }
    void setHeight(B inHeight){
        height = inHeight;
    }
    B getHeight(void){
        return height;
    }
    B getDepth(void){
        return depth;
    }
    void setDepth(B inDepth){
        height = inDepth;
    }
    B calcArea(){
        B area = pow(2, height) * 6;
        return area;
    }
    B calcVolume(){
        B volume = pow(3, height);
        return volume;
    }
};

int main(){
    box<int> B1;
    B1.setWidth(2);
    B1.setDepth(3);
    B1.setHeight(4);
    
    cout << "Height: " << B1.getHeight() << endl;
    cout << "Area: " << B1.calcArea() << endl;
    cout << "Volume: " << B1.calcVolume() << endl;
    
    box<int> B2;
    
    B2.setWidth(3);
    B2.setHeight(4);
    
    cout << "Depth: " << B2.getDepth() << endl;
    cout << "Area: " << B2.calcArea() << endl;
    cout << "Volume: " << B2.calcVolume() << endl;
    
    return 0;
}
