/*
 *Created by:Toshiki Yonezawa
 *Created on:02/28/2017
 *This program is working as random number generator.
 *I made this one for just practicing to use parametors.
 */

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

// It works as random number generator, but input number must input small one to big one.
void randomGenerator(int x, int y) {
    
    cout << endl;
    cout << "Welcome to Random Number Generator!" << endl;
    cout << endl;
    cout << "I will randomly choose a one number from your two inputs." << endl;
    cout << endl;
    cout << "What's your small number?";
    cin >> x;
    cout << endl;
    cout << "What's your big number?";
    cin >> y;
    cout << endl;
    
    srand(time(0));
    int randomNum = (rand() % y ) + x;
    
    cout << endl;
    cout << "Random number between " << x << " and " << y << " is " << randomNum << ".";
    cout << endl;
    
    return;
    
}

// This part is main body of the program.
int main() {
    
    int x = 0;
    int y = 0;
    
    randomGenerator(0,0);
    
    return 0;
    
}

// Random number between 1 and 10 is 2.

// Random number between 5 and 82 is 66.

// Random number between 22 and 73 is 54.