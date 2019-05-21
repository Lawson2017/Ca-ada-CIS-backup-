//
//  main.cpp
//  Week12inClassInherit
//
//  Created by James Lawson on 10/31/18.
//  Copyright © 2018 James Lawson. All rights reserved.
//
#include <iostream>
using namespace std;

class baseX
{
private:
    int baseX;
public:
    void setBaseX(int inX){
        baseX = inX;
    }
    int getBAseX(){
        return baseX;
    }
};
class derived1 : public baseX
{
private:
    int derived1Y;
public:
    void setDerived1Y(int inY){
        derived1Y = inY;
    }
    int getDerived1Y(){
        return derived1Y;
    }
};
class derived2 : public baseX
{
private:
    int derived2Z;
public:
    void setDerived2Z(int inZ){
        derived2Z = inZ;
    }
    int getDerived2Z(){
        return derived2Z;
    }
};

int main(){
    derived1 D1;
    
    D1.setDerived1Y(31);
    // basex functions are made available from inheritence in derived classes
    D1.setBaseX(42);
    
    cout << "x = " << D1.getBAseX() << endl;
    cout << "y = " << D1.getDerived1Y() << endl;
    return 0;
}
