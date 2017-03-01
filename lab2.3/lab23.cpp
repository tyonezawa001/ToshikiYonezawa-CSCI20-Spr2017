/*
 *Created by: Toshiki Yonezawa
 *Created on: 02/28/2017
 *This program is working as random number generator from two user choosed values.
 *The program asked two values for input, and than it chooses random number from any kinds of ranges.
 *It also contains swap function to compare two numbars.
 */


#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cmath>
using namespace std;

// The void sentence contains swap function and random number generator. 
void randomGenerator(int x, int y, int z, int a, int b, int c) {
    
    z = abs(x - y);
    a = ((x + y) - z) / 2;
    b = (x + y) - a;
    
    srand(time(0));
    c = (rand() % b ) + a;
    
    cout << "Random number between " << x << " and " << y << " is " << c << ".";
    cout << endl;
    
    return;
    
}

// The int main sentence is working as body of the program.
int main() {
    
    int x = 0;
    int y = 0;
    int z = 0;
    int a = 0;
    int b = 0;
    int c = 0;
    
    cout << endl;
    cout << "Welcome to Random Number Generator!" << endl;
    cout << endl;
    cout << "I will randomly choose a one number from your two inputs." << endl;
    cout << endl;
    cout << "What's your two numbers?" << endl;
    cout << endl;
    cin >> x;
    cout << endl;
    cin >> y;
    cout << endl;
    
    randomGenerator(x, y, z, a, b, c);
    
    return 0;
}
