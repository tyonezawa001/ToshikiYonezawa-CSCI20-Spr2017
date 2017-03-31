/*
 *Updated by: Toshiki Yonezawa
 *Updated on: 03/31/2017
 *this program works as gessing game. it choose one number randomly, and game player guess the number.
 *The game player can see 5 times of hint. If the player uses 5 times of hint, the player must guess the number without hint.
 *Please enjoy it : )
 */

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    
    int random = 0; // variable for random number.
    int guess = 0; // variable for gussing number.
    int hint = 0; // variable for hint.
    int game = 0; // variable for numbers of game.
    
    cout << endl;
    cout << "Welcome to Toshiki's arcade!" << endl;
    cout << "We will play a guessing game today." <<endl;
    cout << "I randomly choose a number, so please guess what number is this." << endl;
    cout << "You will be able to answer 8 times for the guessing game." << endl;
    cout << "Don't worry! I just pick up one number between 1 to 50!" << endl;
    
    srand(time(0));
    
    random = (rand() % (50 - 1 + 1) + 1);
    
    cout << endl;
    cout << "What's your guessing number: ";
    cin >> guess;
    
    while (guess != random) { // the loop continues while guess number becomes same number with random number.
        
        for (; hint < 5; hint++) { // game player can see five tmes of hint.
            
            if (guess > random) { // if statement for compareing.
                cout << endl;
                cout << "Your input number is higher than the randomly number!" << endl;
            }
            else if (guess < random) { // if statement for compareing.
                cout << endl;
                cout << "Your input number is lower than the randomly number!" << endl;
            }
            else if (guess == random) { // if statement for compareing.
                cout << endl;
                cout << "Yeah! your input number " << guess << " is same with the randomly number!" << endl;
                cout << "You answered " << hint + 1 << " times on the game." << endl; 
                cout << "Thank you for playing the game. have a good day!" << endl;
                
                return 0;
            }
        
            cout << endl;
            cout << "Please input another number: ";
            cin >> guess;
        }
        
        if (guess == random) { // I need the if statement because I must give correct when game player input 6th answer.
            cout << endl;
            cout << "Yeah! your input number " << guess << " is same with the randomly number!" <<endl;
            cout << "You answered 6 times on the game." << endl;
            cout << "Thank you for playing the game. Have a good day!" << endl;
            
            return 0;
        }
        else {
            cout << endl;
            cout << "You already saw 5 times of hint!" << endl;
            cout << "Now you must input answers without hint!" << endl;
            
            for (; game < 2; game++) {
                cout << endl;
                cout << "Please input another number: ";
                cin >> guess;
                
                if (guess == random) { // I need the if statement because I must give correct when game player input 10th answer.
                    cout << endl;
                    cout << "Yeah! your guessing number " << guess << " is same with the randomly number!" << endl;
                    cout << "You answered " << game + 7 << " times on the game." << endl; 
                    cout << "Thank you for playing the game. have a good day!" << endl;
    
                    return 0;
                }
            }
            cout << endl;
            cout << "You already answered 8 times, so game is over." << endl;
            cout << "Thank you for playing the game. Have a good day!" << endl;
            
            return 0;
        }
    }
    
    cout << endl;
    cout << "Yeah! your guessing number " << guess << " is same with the randomly number!" << endl;
    cout << "You answered 1 time on the game." << endl;
    cout << "Thank you for playing the game. have a good day!" << endl;
    
    return 0;
    
}