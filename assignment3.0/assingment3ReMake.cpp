/*
 *Created by: Toshiki Yonezawa
 *Created on: 04/09/2017
 *This proram works as a 'Rock Paper Scissors Lizard Spock' game. Input and output are controcontrolled on the int main section.
 *In addition, class statement works as scoring the game.
 */

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

// class statement for scoring the game
class Scoring {
    public:
        void SetWinning (int winning); // set variable 'winning' to the variable 'win'
        int GetResult () const; // return to win 
    private:
        int win = 0;
};

// set a variable winning to win
void Scoring::SetWinning (int winning) {
    win = winning;
}

// return to winn for output
int Scoring::GetResult () const {
    return win;
}

int main() {
    
    int fight = 0; // the variabe for the numbers of round
    int game = 0; // the variable for couning for the game
    int variable; // the variable for rondom numbers
    int winning = 0; // the variable for number of winning 
    string convertedVariable; // he variable for converting random number to strung variable
    string userVariable; // the variabele for user input
    
    Scoring battle;
    
    // Introduction and explain the game
    cout << endl;
    cout << "Welcome to Toshiki's arcade!" << endl;
    cout << "We will play a 'Rock Paper Scissors Lizard Spock' game today." << endl;
    cout << "The rule of the game is exactly same with the game of 'Rock Paper Scissors'." << endl;
    cout << "However, we have two more variables for the game." << endl;
    cout << "Now let's see the diafram for the game." << endl;
    cout << endl;
    cout << "--------------------" << endl;
    cout << "Scissors cuts Paper" << endl;
    cout << "Paper covers Rock" << endl;
    cout << "Rock crushes Lizard" << endl;
    cout << "Lizard poisons Spock" << endl;
    cout << "Spock smashes Scissors" << endl;
    cout << "Scissors decapitates Lizard" << endl;
    cout << "Lizard eats Paper" << endl;
    cout << "Paper disproves Spock" << endl;
    cout << "Spock vaporizes Rock" << endl;
    cout << "Rock crushes Scissors" << endl;
    cout << "--------------------" << endl;
    cout << "Could you understand the rule? Let's start playing the game." << endl;
    
    while (fight != 3 && fight != 5 && fight != 7) { // loop statement for choosing the rounds of game
        
        cout << "How many times you want to fight with computer? Please choose 3, 5, or 7.: "; // choose the number of rounds 3, 5 , or 7
        cin >> fight;
        
        if (fight != 3 && fight != 5 && fight != 7) { // if statement for mistaking input
        
        cout << endl;
            cout << "Please choose 3, 5, or 7!" << endl; // warning to user
            cout << endl;
        }
    }
    
    cout << "You will play " << fight << " rounds with computer." << endl; // explain how many rounds user batle with computer
    
    // Gmae starts
    for (; game < fight; game++) { // the loop statement for counting the game of rounds
        
        srand(time(0));
    
        variable = (rand() % (5 - 1 + 1) + 1); // randomly choose the variable by computer
        
        // swich statemnt for cpnverting int variable to string variable
        switch (variable) {
            case 1:
                convertedVariable = "Rock";
                break;
            case 2:
                convertedVariable = "Paper";
                break;
            case 3:
                convertedVariable = "Scissors";
                break;
            case 4:
                convertedVariable = "Lizard";
                break;
            case 5:
                convertedVariable = "Spock";
                break;
            default:
                break;
        }
        
        // asking the user's variable in here
        cout << endl;
        cout << "What's your variable?(Please choose one variable from Rock, Paper, Scissors, Lizard, or Spock): ";
        cin >> userVariable;
        cout << endl;
        cout << "Computer outputted " << convertedVariable << "." << endl;
        
        // comparing the user input and the roundomly comouter's variable
        if (convertedVariable == "Rock") {
            if (userVariable == "Rock") {
                cout << endl;
                cout << "You draw the game." << endl;
            }
            else if (userVariable == "Paper") {
                cout << endl;
                cout << "You won the game." << endl;
                winning = winning + 1; // if user won the game, the program add one to variable winning
                battle.SetWinning(winning); // converting variable to win from winning.
            }
            else if (userVariable == "Scissors") {
                cout << endl;
                cout << "You lose the game." << endl;
            }
            else if (userVariable == "Lizard") {
                cout << endl;
                cout << "You lose the game." << endl;
            }
            else if (userVariable == "Spock") {
                cout << endl;
                cout << "You won the game." << endl;
                winning = winning + 1; // if user won the game, the program add one to variable winning
                battle.SetWinning(winning); // converting variable to win from winning.
            }
        }
        else if (convertedVariable == "Paper") {
            if (userVariable == "Rock") {
                cout << endl;
                cout << "You lose the game." << endl;
            }
            else if (userVariable == "Paper") {
                cout << endl;
                cout << "You draw the game." << endl;
            }
            else if (userVariable == "Scissors") {
                cout << endl;
                cout << "You won the game." << endl;
                winning = winning + 1; // if user won the game, the program add one to variable winning
                battle.SetWinning(winning); // converting variable to win from winning.
            }
            else if (userVariable == "Lizard") {
                cout << endl;
                cout << "You won the game." << endl;
                winning = winning + 1; // if user won the game, the program add one to variable winning
                battle.SetWinning(winning); // converting variable to win from winning.
            }
            else if (userVariable == "Spock") {
                cout << endl;
                cout << "You lose the game." << endl;
            }
        }
        else if (convertedVariable == "Scissors") {
            if (userVariable == "Rock") {
                cout << endl;
                cout << "You won the game." << endl;
                winning = winning + 1; // if user won the game, the program add one to variable winning
                battle.SetWinning(winning); // converting variable to win from winning.
            }
            else if (userVariable == "Paper") {
                cout << endl;
                cout << "You lose the game." << endl;
            }
            else if (userVariable == "Scissors") {
                cout << endl;
                cout << "You draw the game." << endl;
            }
            else if (userVariable == "Lizard") {
                cout << endl;
                cout << "You lose the game." << endl;
            }
            else if (userVariable == "Spock") {
                cout << endl;
                cout << "You won the game." << endl;
                winning = winning + 1; // if user won the game, the program add one to variable winning
                battle.SetWinning(winning); // converting variable to win from winning.
            }
        }
        else if (convertedVariable == "Lizard") {
            if (userVariable == "Rock") {
                cout << endl;
                cout << "You won the game." << endl;
                winning = winning + 1; // if user won the game, the program add one to variable winning
                battle.SetWinning(winning); // converting variable to win from winning.
            }
            else if (userVariable == "Paper") {
                cout << endl;
                cout << "You lose the game." << endl;
            }
            else if (userVariable == "Scissors") {
                cout << endl;
                cout << "You won the game." << endl;
                winning = winning + 1; // if user won the game, the program add one to variable winning
                battle.SetWinning(winning); // converting variable to win from winning.
            }
            else if (userVariable == "Lizard") {
                cout << endl;
                cout << "You draw the game." << endl;
            }
            else if (userVariable == "Spock") {
                cout << endl;
                cout << "You lose the game." << endl;
            }
        }
        else if (convertedVariable == "Spock") {
            if (userVariable == "Rock") {
                cout << endl;
                cout << "You lose the game." << endl;
            }
            else if (userVariable == "Paper") {
                cout << endl;
                cout << "You won the game." << endl;
                winning = winning + 1; // if user won the game, the program add one to variable winning
                battle.SetWinning(winning); // converting variable to win from winning.
            }
            else if (userVariable == "Scissors") {
                cout << endl;
                cout << "You lose the game." << endl;
            }
            else if (userVariable == "Lizard") {
                cout << endl;
                cout << "You won the game." << endl;
                winning = winning + 1; // if user won the game, the program add one to variable winning
                battle.SetWinning(winning); // converting variable to win from winning.
            }
            else if (userVariable == "Spock") {
                cout << endl;
                cout << "You draw the game." << endl;
            }
        }
    }
    
    // In here, the program outouts the result of the game
    cout << endl;
    cout << "You won " << battle.GetResult() << " times during " << fight << " rounds." << endl;
    cout << "Thank you for playing the game." << endl;
    
    return 0;
}