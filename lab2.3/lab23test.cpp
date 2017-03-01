#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

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

int main() {
    
    int x = 0;
    int y = 0;
    
    randomGenerator(0,0);
    
    return 0;
    
}