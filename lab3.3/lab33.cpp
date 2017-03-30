/*
 *Created by: Toshiki Yonezawa
 *Created on: 03/30/2017
 *this program works as gessing game. it choose one number randomly, and game player guess the number.
 *The game player can see 5 times of hint. If the player uses 5 times of hint, the player must guess the number without hint.
 *
 */

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    
    int random = 0;
    int guess = 0;
    int hint = 0;
    
    cout << endl;
    cout << "Welcome to Toshiki's arcade!" << endl;
    cout << "We will play a guessing game today." <<endl;
    cout << "I randomly choose a number, so please guess what number is this." << endl;
    cout << "Don't worry! I just pick up one number between 1 to 50!" << endl;
    
    srand(time(0));
    
    random = (rand() % (50 - 1 + 1) + 1);
    
    cout << endl;
    cout << "What's your guessing number: ";
    cout << random;
    cin >> guess;
    
    while (guess != random) {
        
        for (; hint < 5; hint++) {
            
            if (guess > random) {
                cout << endl;
                cout << "Your guessing number is higher than the randomly number!" << endl;
            }
            else if (guess < random) {
                cout << endl;
                cout << "Your guessing number is lower than the randomly number!" << endl;
            }
            else if (guess == random) {
                cout << endl;
                cout << "Yeah! your guessing number " << guess << " is same with the randomly number!" << endl;
                cout << "Thank you for playing the game. have a good day!" << endl;
                
                return 0;
            }
        
            cout << endl;
            cout << "Please input another number: ";
            cin >> guess;
        }
        
        if (guess == random) {
            cout << endl;
                cout << "Yeah! your guessing number " << guess << " is same with the randomly number!" << endl;
                cout << "Thank you for playing the game. have a good day!" << endl;
                
            return 0;
        }
        else {
        cout << endl;
        cout << "You already saw 5 times of hint!" << endl;
        cout << "Now you must guess answers without hint!" << endl;
        cin >> guess;
        }
    }
    
    cout << endl;
    cout << "Yeah! your guessing number " << guess << " is same with the randomly number!" << endl;
    cout << "Thank you for playing the game. have a good day!" << endl;
    
    return 0;
    
}