//
//  main.cpp
//  udemy0922
//
//  Created by James Lawson on 9/22/18.
//  Copyright © 2018 James Lawson. All rights reserved.
//
//lecture 4: Hello World
//#include <iostream>
//using namespace std;
//
//int main()
//{
//    cout << "hello world" << endl;
//    return 0;
//}

//lecture 5: Outputting Text
//#include <iostream>
//using namespace std;
//
//int main() {
//    cout << "starting program..." << flush;
//    cout << "here's some text" << endl;
//    cout << "bananna." << "apple." << "orange" << endl;
//    cout << "this is some more text" << endl;
//    return 0;
//}

//lecture 6: variables
//#include <iostream>
//using namespace std;
//
//int main(){
//    int screechOwls = 4;
//    int sawWhetOwls = 5;
//    int totalOwls = screechOwls + sawWhetOwls;
//
//    cout << "current screech count: " << screechOwls << endl;
//    cout << "current saw whet count: " << sawWhetOwls << endl;
//    cout << "total owl count: " << totalOwls << endl;
//
//    cout << "new screech pair found..." << flush;
//    screechOwls += 1;
//    cout << "updated screech count: " << screechOwls << endl;

//    return 0;
//}

//lecture 7: strings
//#include <iostream>
//using namespace std;
//
//int main (){
//    string text1 = "Hello, ";
//    string text2 = "Jim.";
//
//    string text3 = text1 + text2; // contatonated string
//
//
//    cout << text1 << text2 << endl;
//    cout << text3 << endl;
//
//    return 0;
//}
//lecture 8: user input
//#include <iostream>
//using namespace std;
//
//int main(){
//
//    cout << "Enter your name: " << flush; //insertion operator << is used
//    string input; //declaring a string (fill the bucket)
//    cin >> input;// extraction operator >> is used
//    cout << "You entered: " << input << endl;
//
//    cout << "Enter your age : " << flush; //repeated with and integer data type
//    int value;
//    cin >> value;
//    cout << "You entered: " << value << endl;
//
//
//    return 0;
//}
//lecture 9: overview
//Binary Numbers
//example:
//372
//lecture 10: integer types
//#include <iostream>
//#include <limits>
//using namespace std;
//
//int main(){
//    int value = 1;
//    cout << value << endl;
//
//
//    cout << "Max int value: " << INT_MAX << endl; // view maximum value you can fit in an int
//    cout << "Min int value: " << INT_MIN << endl;
//
//    long int lValue = 428374892024; // "long int" enables.. a long int
//    cout << lValue << endl;
//
//
//    return 0;
//}
//lecture 31: classes
#include <iostream>
#include "Cat.h"
using namespace std;


int main(){

    Cat cat1; // creating a variable to use the class with
    
    cat1.jump();
    cat1.speak();

    return 0;
}































