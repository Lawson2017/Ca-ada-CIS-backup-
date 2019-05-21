//
//  main.cpp
//  week15part2
//
//  Created by James Lawson on 12/12/18.
//  Copyright © 2018 James Lawson. All rights reserved.
//

#include <iostream>
using namespace std;

class Complex{
private:
    float real;
    float imag;
public:
    Complex():real(0),imag(0){}
    void input(){
        cout << "Enter real and imaginary parts respectively: " << endl;
        cin>>real;
        cin>>imag;
    }
    Complex operator - (Complex c2){
        Complex temp;
        temp.real = real-c2.real;
        temp.imag=imag-c2.imag;
        return temp;
    }
    Complex operator * (Complex c2){
        Complex temp;
        temp.real = real*c2.real;
        temp.imag=imag*c2.imag;
        return temp;
    }
    Complex operator / (Complex c2){
        Complex temp;
        temp.real = real/c2.real;
        temp.imag=imag/c2.imag;
        return temp;
    }

    void output(){
        if(imag<0){
            cout << "output complex number: " << real << imag << "i";
        }else{
                cout << "output complex number: " << real << "+" << imag << "i";
        }
    }
};

int main(){
    Complex c1, c2, result;
    cout << "enter first complex number: " << endl;
    c1.input();
    cout <<"enter second complex number: " << endl;
    c2.input();
    // in case of operator overloading of binary operators in c++, the object on right hand side of operator is always assumed as argument by compiler.
    result = c1/c2; // c++ knows to use operator overload instead of /
    result.output();
    return 0;
}
