//
//  main.cpp
//  Lecture9Example
//
//  Created by James Lawson on 10/24/18.
//  Copyright © 2018 James Lawson. All rights reserved.
//

#include <iostream>
using namespace std;

class Player{
private:
    string name;
public:
    Player(string inName)
    : name(inName) // Assigns inStrName to name
    {
    }
    Player(){
        name = "unknown";
    }
    string getName(){
        return name;
    }
};

class Team{
private:
    Player * m_ptrPlayer1;
    Player * m_ptrPlayer2;
    Player * m_ptrPlayer3;
    Player * m_ptrPlayer4;
    Player * m_ptrPlayer5;
    Player * m_ptrPlayer6;
    Player * m_ptrPlayer7;
public:
    Team(Player * ptrPlayer1 = NULL)
    : m_ptrPlayer1(ptrPlayer1)
    {
    }
    string getPlayerName(){
        return m_ptrPlayer1 -> getName();
    }
};


int main(){
    // Create a players outside the scope of team
    Player *pPlayer1 = new Player("George");
    Player *pPlayer2 = new Player("Ivan");
    Player *pPlayer3 = new Player("Hang");
    Player *pPlayer4 = new Player("Tuyet");
    Player *pPlayer5 = new Player("Sue");
    Player *pPlayer6 = new Player("Victoria");
    Player *pPlayer7 = new Player("Tumbo");
    
    //Create a Team and use the constructor parameter to pass the players to it
    {
        Team Basketball(pPlayer1);
        Team BasketBall(pPlayer2);
        Team BasketBall(pPlayer3);
    cout << "Whole created" << endl;
    cout << "Test - whole exists " << Basketball.getPlayerName() << endl;
    cout << "Whole deleted" << endl;
    //cDept goes out of scope here and is destroyed
    } // this block of code goes out of scope/ends/is deleted here
    cout << "Test - part still exists " << pPlayer1 -> getName() << endl;
    
    delete pPlayer1;
    return 0;
}
