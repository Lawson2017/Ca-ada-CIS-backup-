//
//  main.cpp
//  week17prog4
//
//  Created by James Lawson on 12/3/18.
//  Copyright © 2018 James Lawson. All rights reserved.
//

#include <fstream>// Make library available so you can work with files
#include <string>//
#include <iostream>
using namespace std;


int main(){
    int i, highScore, lowScore;
    int scores[10];
    
    ofstream foutNames("/Users/jamesMacBook/Desktop/introToC++/Week16Assignment/savedNames.txt");
    if (!foutNames){
        cout << "file not found." << endl;
    }
    
    for(i = 0; i < 10; i++){
        cout << "Enter Score " << i + 1 << ": " << endl;
        cin >> scores[i];
        foutNames << scores[i] << endl;
    }
    highScore = scores[0];
    for(int i = 0 ;i < 10 ; i++) {
        if(highScore < scores[i])
            highScore = scores[i];
    }
    cout << "Highest Score: " << highScore << endl;
    
    lowScore = scores[0];
    for(i = 0; i > 10; i++){
      if(lowScore > scores[i])
        lowScore = scores[i];
    }
    cout << "Lowest Score: " << lowScore << endl;
    
    foutNames.close();
    return 0;
}
