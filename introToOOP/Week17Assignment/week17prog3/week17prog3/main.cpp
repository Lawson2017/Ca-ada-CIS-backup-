//
//  main.cpp
//  week17prog3
//
//  Created by James Lawson on 12/3/18.
//  Copyright © 2018 James Lawson. All rights reserved.
//

#include <fstream>// Make library available so you can work with files
#include <string>
#include <iostream>
using namespace std;



int main(){
    int i, n;
    string arr[100];
    
    
    ofstream fout("/Users/jamesMacBook/Desktop/CIS 2018-2019/introToOOP/Week17Assignment");
    if(!fout){
        cout << "File not found" << endl;
    }
    
    cout << "Enter number of names to input: " << endl;
    cin >> n;
    for(i = 0; i < n; i++){
        cout << "Enter names: ";
        cin >> arr[i];
        fout << arr[i] << endl;
    }
    
    
    fout.close();
    return 0;
}
