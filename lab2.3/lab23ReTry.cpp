/*
 *Updated by: Toshiki Yonezawa
 *Updated on: 02/28/2017
 *This program is working as random number generator between two input values.
 *The program asked two values for input, and than it chooses random number from any kinds of ranges.
 *It also contains swap and if function to compare two numbars about huge and small.
 */

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;


// swap function for replacement of variables about two input numbers
void swapFunction(int &firstNum, int &secondNum) {
    
    int swap;
    swap = firstNum; // save the value at address firstNum 
    firstNum = secondNum; // put secondNum into firstNum
    secondNum = swap; // put firstNum int secondNum
    
    return;
}

// this is a function of random number generator.
void randomNumGenerator(int firstNum, int secondNum, int &randomNum) {
    
    srand(time(0));
    randomNum = (rand() % secondNum ) + firstNum;
    
    return;
}

int main() {
    
    int firstNum;
    int secondNum;
    int randomNum;
    
    cout << endl;
    cout << "Welcome to Random Number Generator Ver1.2" << endl;
    cout << endl;
    cout << "I will randomly choose only one number for you." << endl;
    cout << endl;
    cout << "Please input two numbers which will be a range for the generator." << endl;
    cout << endl;
    cout << "1st Number: ";
    cin >> firstNum;
    cout << endl;
    cout << "2nd Number: ";
    cin >> secondNum;
    cout << endl;
    
    if (firstNum > secondNum) // it is for compareing the two input numbers about huge and small. 
    swapFunction(firstNum, secondNum);
    
    randomNumGenerator(firstNum, secondNum, randomNum);
    
    cout << "Random number between " << firstNum << " and " << secondNum << " is " << randomNum << "." << endl;
    cout << endl;
    cout << "Thank you for using the program." << endl;
    cout << endl;
    
    return 0;
}

// Random number between 1 and 10 is 6.

// Random number between 5 and 82 is 50.

// Random number between 22 and 73 is 29.