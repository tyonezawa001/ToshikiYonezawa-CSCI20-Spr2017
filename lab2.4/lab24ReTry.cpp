/*
 *Updated by: Toshiki Yonezawa
 *Updated on: 03/07/2017
 *This program is working as random number generator, and then It coverts lb to kg and lb to kg.
 *The 2nd pound number may be almost same as random number.
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

const double lbInKilo = 0.454; // It scopes the porgram.

double calcKilo(int randomNum) { // I calculated kilograms from pounds, and I used parameters and returns.
    return lbInKilo * randomNum;  
}

const double kiloInLb = 2.2; // It scopes the program.

double calcPound(double kilo) {// I calculated pounds from kilograms, and I used parameters and returns.
    return kiloInLb * kilo;
}

int main() {
    
    int firstNum;
    int secondNum;
    int randomNum;
    double kilo = 0;
    double pound = 0;
    
    cout << endl;
    cout << "Toshiki; Please input two numbers which will be a range for the random number generator." << endl;
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
    
    kilo = calcKilo(randomNum); // I used parameters in here.
    
    pound = calcPound(kilo); // I used parameters in here.
    
    cout << "Toshiki: Random number between " << firstNum << " and " << secondNum << " is " << randomNum << "." << endl;
    cout << endl;
    cout << "Toshiki: I converted the random number as " << randomNum << " pounds." << endl;
    cout << endl;
    cout << "Tsohiki: I converted the pound to " << kilo << " kilograms." << endl;
    cout << endl;
    cout << "Toshiki: Finally, I convert the kilogram to " << pound << " pounds." << endl;
    cout << endl;
    cout << "Toshiki: Thank you for using the program! See you next time!" << endl;
    cout << endl;
    
    return 0;
}