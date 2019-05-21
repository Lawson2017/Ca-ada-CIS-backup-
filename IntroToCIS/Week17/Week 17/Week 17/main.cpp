//
//  main.cpp
//  Week 17
//
//  Created by James Lawson on 5/8/19.
//  Copyright © 2019 James Lawson. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <string>
using namespace std;
//int main(){
//    string aWord, aLine;
//    int age;
//
//    ifstream fin("/Users/jamesMacBook/Desktop/CIS 2018-2019/IntroToCIS/Week17/firstLastAge.txt"); // the decision to read not write
//    if (!fin) {
//        cout << "file not found" << endl;
//    }
//    if (fin.is_open()){
//        while(!fin.eof()){ // continue to read lines until there are no lines left to be read
//            getline(fin,aLine); // the arguments in the preexisting 'getline' are the text file, and the variable we will assign its content to.
//            fin >> aWord;
//            cout << "First Name: " << aWord << ", ";
//            fin >> aWord;
//            cout << "Last Name: " << aWord << ", " ;
//            fin >> age;
//            cout << " Age: " << age << ", " << endl;
//        }
//    }
//
//    fin.close();
//    return 0;
//}
//    int main(){
//        string firstName, lastName, aLine;
//        int age;
//
//        ifstream fin("/Users/jamesMacBook/Desktop/CIS 2018-2019/IntroToCIS/Week17/firstLastAge.txt"); // the decision to read not write
//        if (!fin) {
//            cout << "file not found" << endl;
//        }
//        if (fin.is_open()){
//            while(!fin.eof()){ // continue to read lines until there are no lines left to be read
//                getline(fin,aLine); // the arguments in the preexisting 'getline' are the text file, and the variable we will assign its content to.
//                fin >> firstName;
//                fin >> lastName;
//                fin >> age;
//                if(age >= 23 || age <= 17){
//                    cout << "First Name: " << firstName << " , ";
//                    cout << " Last Name: " << lastName << " , ";
//                    cout << " Age: " << age << endl;
//                }
//            }
//        }
//        fin.close();
//        return 0;
//    }
//int main(){
//    int n, i;
//    string arr[100];
//    ofstream savedNames("/Users/jamesMacBook/Desktop/CIS 2018-2019/IntroToCIS/Week17/savedNames.txt");
//    if(!savedNames){
//        cout << "File not found" << endl;
//    }
//
//    cout << "Enter number of names to input: " << endl;
//    cin >> n;
//    for(i = 0; i < n; i++){
//        cout << "Enter names: ";
//        cin >> arr[i];
//        savedNames << arr[i] << endl;
//    }
//
//
//    savedNames.close();
//    return 0;
//    return 0;
//}
int main(){
    int i, highScore, lowScore, averageScore;
    int sumOfScores = 0;
    int scores[10];

    ofstream foutNames("/Users/jamesMacBook/Desktop/CIS 2018-2019/IntroToCIS/Week17/savedNames.txt");
    if (!foutNames){
        cout << "file not found." << endl;
    }

    for(i = 0; i < 10; ++i){
        cout << "Enter Score " << i + 1 << ": " << endl;
        cin >> scores[i];
        sumOfScores += scores[i];
        foutNames << scores[i] << endl;
    }
    averageScore = sumOfScores / 10;
    cout << "Average Score: " << averageScore << endl;

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
    sumOfScores = 0;
    for(i = 0; i <= 10; i++){
        sumOfScores += scores[i];
    }

    foutNames.close();
    return 0;
}

