/*
 *Created by: Toshiki Yonezawa
 *Created on: 03/02/2017
 *This program is working as random number generator, covert lb to kg and lb to kg.
 * we must get a same value about final pound velue and randamly generated value. 
 */

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <math.h>
using namespace std;

double lbInKilo = 0.454; // it scopes the program.
double killoInLb = 2.2; // it  scopes the program.

// swap function for replacement of variables about two input numbers
void swapFunction(int &firstNum, int &secondNum) {
    
    int swap;
    swap = firstNum; // save the value at address firstNum 
    firstNum = secondNum; // put secondNum into firstNum
    secondNum = swap; // put firstNum int secondNum
    
    return;
}

// it can generate randomly number.
void randomNumGenerator(int firstNum, int secondNum, int &randomNum) {
    
    srand(time(0));
    randomNum = (rand() % secondNum ) + firstNum;
    
    return;
}

// it can generate lb to kg.
void convertLbToKilo(int randomNum, double &kilo) {
    
    kilo = randomNum * lbInKilo;
    
    return;
}

// it can generate kg to lb.
void convertKiloToLb(double &pound, double &newPound, double kilo) {
    
    pound = kilo * 2.2;
    newPound = ceil(pound);
    
    return;
}

int main() {
    
    int firstNum; // it scopes the randomly number generator.
    int secondNum; // it scopes the randomly number generator.
    int randomNum; // it scopes the randomly generator.
    double pound; // it scopes covertor of kg to pound.
    double kilo; // it scopes covertor of random number to kg.
    double newPound; // it scopes convertor of kg to pound.
    
    cout << endl;
    cout << "Toshiki: I will randomly choose only one number for you." << endl;
    cout << endl;
    cout << "Toshiki: After that, I will convert to the value of kilogram using the randomly number as the value of pounds." << endl;
    cout << endl;
    cout << "Toshiki: After that, I wil convert to the value of pounds using the value of kilogram." << endl;
    cout << endl;
    cout << "Toshiki; Please input two numbers which will be a range for the generator." << endl;
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
    
    convertLbToKilo(randomNum, kilo);
    
    convertKiloToLb(pound, newPound, kilo);
    
    cout << "Toshiki: Random number between " << firstNum << " and " << secondNum << " is " << randomNum << "." << endl;
    cout << endl;
    cout << "Toshiki: " << randomNum << " is shown as " << randomNum << " lb in here." << endl;
    cout << endl;
    cout << "Toshiki: I covert " << randomNum << " lb is same as " << kilo << " kg." << endl;
    cout << endl;
    cout << "Toshiki: I convert " << kilo << " kg is same as " << newPound << " lb." << endl;
    cout << endl;
    cout << "Toshiki: Thank you for using the program! See you next time!" << endl;
    cout << endl;
    
    return 0;
}