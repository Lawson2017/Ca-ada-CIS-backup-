//
//  main.cpp
//  week10Assignment
//
//  Created by James Lawson on 3/25/19.
//  Copyright © 2019 James Lawson. All rights reserved.
//

#include <iostream>
using namespace std;


//int main(){
//    char aChar = ' '; // declare user input variable
//
//    cout << "Enter a, b or c" << endl;
//    cin >> aChar;
//
//    switch(aChar){ // value to toggle is used as parameter
//        case 'a':
//            cout << "you chose " << aChar << endl;
//            break;
//        case 'b':
//            cout << "you chose " << aChar << endl;
//            break;
//        case 'c':
//            cout << "you chose " << aChar << endl;
//            break;
//    }
//    return 0;
//}
//int main(){
//    int inNum;
//    cout << "enter a number between 0 and 10" << endl;
//    cin >> inNum;
//
//    if(inNum == 0){
//        cout << "ZERO" << endl;
//    }
//    if(inNum == 1){
//        cout << "ONE" << endl;
//    }
//    if(inNum == 2){
//        cout << "TWO" << endl;
//    }
//    if(inNum == 3){
//        cout << "THREE" << endl;
//    }
//    if(inNum == 4){
//        cout << "FOUR" << endl;
//    }
//    if(inNum == 5){
//        cout << "FIVE" << endl;
//    }
//    if(inNum == 6){
//        cout << "SIX" << endl;
//    }
//    if(inNum == 7){
//        cout << "SEVEN" << endl;
//    }
//    if(inNum == 8){
//        cout << "EIGHT" << endl;
//    }
//    if(inNum == 9){
//        cout << "NINE" << endl;
//    }
//    if(inNum == 10){
//        cout << "TEN" << endl;
//    }
//
//    return 0;
//}
//int main(){
//    int inNum;
//        cout << "enter a number between 0 and 10" << endl;
//        cin >> inNum;
//    switch(inNum){
//        case 0:
//            cout << "you entered " << inNum << endl;
//            break;
//        case 1:
//            cout << "you entered " << inNum << endl;
//            break;
//        case 2:
//            cout << "you entered " << inNum << endl;
//            break;
//        case 3:
//            cout << "you entered " << inNum << endl;
//            break;
//        case 4:
//            cout << "you entered " << inNum << endl;
//            break;
//        case 5:
//            cout << "you entered " << inNum << endl;
//            break;
//        case 6:
//            cout << "you entered " << inNum << endl;
//            break;
//        case 7:
//            cout << "you entered " << inNum << endl;
//            break;
//        case 8:
//            cout << "you entered " << inNum << endl;
//            break;
//        case 9:
//            cout << "you entered " << inNum << endl;
//            break;
//        case 10:
//            cout << "you entered " << inNum << endl;
//            break;
//    }
//    return 0;
//}
//int main(){
//    int option; // declare variable for game mode
//    cout << " Enter 1 for Single Player \n \n Enter 2 for Two Player - You verse computer generated player \n \n Enter 3 for Two Player - You verse another person player \n \n Enter 4 for Multiplayer - Internet connection - Real persons \n \n Enter 5 to exit \n";
//    cin >> option;
//    switch(option){
//        case 1:
//            cout << "You choose Single Player" << endl;
//            break;
//        case 2:
//            cout << "You choose Multiplayer -  Computer" << endl;
//            break;
//        case 3:
//            cout << "You choose Multiplayer - Player" << endl;
//            break;
//        case 4:
//            cout << "You choose Multiplayer - Internet" << endl;
//            break;
//        case 5:
//            cout << "You choose too exit" << endl;
//            break;
//        default:
//            cout << option << " is not an option. Choose from options 1-5. " << endl;
//    }
//    return 0;
//}
//int main(){
//    string firstName = "none";
//    cout << "enter your first name" << endl;
//    cin >> firstName;
//
//    switch(firstName){
//        case "Tuyet":
//            cout << "Hi Tuyet" << endl;
//            break;
//        case "Carlos":
//            cout << "Hi Carlos" << endl;
//            break;
//        case "Joe":
//            cout << "Hi Joe" << endl;
//            break;
//        default:
//            cout << "How U doing " << firstName << endl;
//    }
//    return 0;
//}
//int main () {
//    int age = 0;
//    cout  << "Enter your age" << endl;
//    cin >> age;
//
//    switch(age){
//
//        case 5:
//        case 4:
//        case 3:
//        case 2:
//        case 1:
//        case 0:
//            cout << "0.00" << endl;
//            break;
//        case 6:
//        case 7:
//        case 8:
//        case 9:
//        case 10:
//        case 11:
//        case 12:
//            cout << "$10.00" << endl;
//            break;
//        case 13:
//        case 14:
//        case 15:
//        case 16:
//        case 17:
//        case 18:
//        case 19:
//        case 20:
//        case 21:
//        case 22:
//        case 24:
//        case 25:
//        case 26:
//            cout << "$18.00" << endl;
//            break;
//        default:
//            cout << "$15.00" << endl;
//    }
//    return 0;
//}

//
//  main.cpp
//  Memory Matching Game
//
//  Created by James Lawson on 5/7/19.
//  Copyright © 2019 James Lawson. All rights reserved.
//

#include <iostream>
using namespace std;

int main(){
    string difficulty;
    string answerGrid[50][50]; // final 'hard' grid is of 8X6, 48 terms kept me inside of the 50 birds array, I couldn't manage to keep it within 50 using my loops and assignment statements at the end.
    string puzzleGrid[50][50] = {"Birds"};
    string birds[50] =  {"Goose","Teal","Shoveler","Mallard","Pintail","Quail","Pheasant","Turkey","Grebe","Pigeon","Dove","Nuthatch","Poorwill","Swift","Swallow","Rail","Sora","Coot","Stilt","Killdeer","Bushtit","Snipe","Wren","Murre","Murrelet","Gull","Loon","Kinglet","Pelican","Heron","Vulture","Osprey","Kite","Eagle","Harrier","Hawk","Owl","Thrush","Starling","Waxwing","Flicker","Kestrel","Merlin","Falcon","Pewee","Grosbeak","Phoebe","Shrike","Vireo","Jay"}; // global declaration of single dim array of bird names to be placed in games
    cout << "Enter a difficulty of easy, medium or hard: " << endl;
    cin >> difficulty;
    if(difficulty == "easy"){ // generate 2 dim game grid based on user difficulty selection
        cout << "easy game: " << endl;
        for(int i = 0; i <= 1; i++){
            for(int j = 0; j <= 1; j++){
                answerGrid[i][j] = birds[i];
                cout << answerGrid[i][j] << " ";
            }
        }cout << endl;
        for(int i = 2; i <= 3; i++){
            for(int j = 2; j <= 3; j++){
                answerGrid[i][j] = birds[i];
                cout << answerGrid[i][j] << " ";
            }
        }cout << endl;
        for(int i = 4; i <= 5; i++){
            for(int j = 4; j <= 5; j++){
                answerGrid[i][j] = birds[i];
                cout << answerGrid[i][j] << " ";
            }
        }cout << endl;
        answerGrid[2][2] = birds[6];
        answerGrid[3][3] = birds[7];
        cout << answerGrid[2][2] << " " << answerGrid[2][2] << " "; // compiler error if loops are used for assigning final rows of game grids
        cout << answerGrid[3][3] << " " << answerGrid[3][3];
        cout << endl;
    }
    if(difficulty == "medium"){
        cout << "medium game: " << endl;
        for(int i = 0; i <= 2; i++){
            for(int j = 0; j <= 1; j++){
                answerGrid[i][j] = birds[i];
                cout << answerGrid[i][j] << " ";
            }
        }cout << endl;
        for(int i = 3; i <= 5; i++){
            for(int j = 2; j <= 3; j++){
                answerGrid[i][j] = birds[i];
                cout << answerGrid[i][j] << " ";
            }
        }cout << endl;
        for(int i = 6; i <= 8; i++){
            for(int j = 4; j <= 5; j++){
                answerGrid[i][j] = birds[i];
                cout << answerGrid[i][j] << " ";
            }
        }cout << endl;
        for(int i = 9; i <= 11; i++){
            for(int j = 6; j <= 7; j++){
                answerGrid[i][j] = birds[i];
                cout << answerGrid[i][j] << " ";
            }
        }cout << endl;
        for(int i =12; i <= 14; i++){
            for(int j = 0; j <= 1; j++){
                answerGrid[i][j] = birds[i];
                cout << answerGrid[i][j] << " ";
            }
        }cout << endl;
        answerGrid[5][5] = birds[15];
        answerGrid[6][6] = birds [16];
        answerGrid[7][7] = birds [17];
        cout << answerGrid[5][5] << " " << answerGrid[5][5] << " "; // compiler error if loops are used for assigning final rows of game grids
        cout << answerGrid[6][6] << " " << answerGrid[6][6] << " ";
        cout << answerGrid[7][7] << " " << answerGrid[7][7];
    }
    if(difficulty == "hard"){
        cout << "hard game: " << endl;
        for(int i = 0; i <= 5; i++){
            for(int j = 0; j <= 1; j++){
                answerGrid[i][j] = birds[i];
                cout << answerGrid[i][j] << " ";
            }
        }cout << endl;
        for(int i = 6; i <= 11; i++){
            for(int j = 2; j <= 3; j++){
                answerGrid[i][j] = birds[i];
                cout << answerGrid[i][j] << " ";
            }
        }cout << endl;
        for(int i = 12; i <= 17; i++){
            for(int j = 4; j <= 5; j++){
                answerGrid[i][j] = birds[i];
                cout << answerGrid[i][j] << " ";
            }
        }cout << endl;
        for(int i = 18; i <= 23; i++){
            for(int j = 6; j <= 7; j++){
                answerGrid[i][j] = birds[i];
                cout << answerGrid[i][j] << " ";
            }
        }cout << endl;
        for(int i =24; i <= 29; i++){
            for(int j = 0; j <= 1; j++){
                answerGrid[i][j] = birds[i];
                cout << answerGrid[i][j] << " ";
            }
        }cout << endl;
        for(int i =30; i <= 35; i++){
            for(int j = 0; j <= 1; j++){
                answerGrid[i][j] = birds[i];
                cout << answerGrid[i][j] << " ";
            }
        }cout << endl;
        for(int i =36; i <= 41; i++){
            for(int j = 0; j <= 1; j++){
                answerGrid[i][j] = birds[i];
                cout << answerGrid[i][j] << " ";
            }
        }cout << endl;
        answerGrid[8][8] = birds[42];
        answerGrid[9][9] = birds[43];
        answerGrid[10][10] = birds[44];
        answerGrid[11][11] = birds[45];
        answerGrid[12][12] = birds[46];
        answerGrid[13][13] = birds[47];
        cout << answerGrid[8][8] << " " << answerGrid[8][8] << " ";
        cout << answerGrid[9][9] << " " << answerGrid[9][9] << " ";
        cout << answerGrid[10][10] << " " << answerGrid[10][10] << " ";
        cout << answerGrid[11][11] << " " << answerGrid[11][11] << " ";
        cout << answerGrid[12][12] << " " << answerGrid[12][12] << " ";
        cout << answerGrid[13][13] << " " << answerGrid[13][13] << endl;
        
        
        cout << answerGrid[1][1];
        
    }
    return 0;
}

