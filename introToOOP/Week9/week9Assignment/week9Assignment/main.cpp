//
//  main.cpp
//  week9Assignment
//
//  Created by James Lawson on 12/12/18.
//  Copyright © 2018 James Lawson. All rights reserved.
//

#include <iostream>
using namespace std;

class Player{
private:
    string name = "unkown";
public:
    string getName(){
        return name;
    };
    void setName(string inName){
        name = inName;
    };
};
class Team {
public:
    

};
int main(){
    Player p1;
    Team t1;
    string player1 = "george";
    string player2 = "Ivan";
    string player3 = "Hang";
    string player4 = "Tuyet";
    player1 = &ptrPlayer1;
    
    return 0;
}
