#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

class Scoring {
    public:
        int CountWinning ();
        int GetResult () const;
    private:
        int winning;
};

int Scoring::CountWinning(int winning) {
    winning = winning + 1;
    return;
}

int Scoring::GetResult () const {
    return winning;
}

int main() {
    
    int game = 0;
    int variable;
    int winning = 0;
    string convertedVariable;
    string userVariable;
    
    Scoring battle;
    
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
    cout << endl;
    cout << "Could you understand the rule? Let's start playing the game." << endl;
    cout << "We will play 3 rounds." << endl;
    
    for (; game < 3; game++) {
        
        srand(time(0));
    
        variable = (rand() % (3 - 1 + 1) + 1);
        
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
            default:
                break;
        }
        
        cout << endl;
        cout << convertedVariable << endl;
        cout << "What's your variable?(Please choose one variable from Rock, Paper, Scissors, Lizard, or Spock): ";
        cin >> userVariable;
        
        if (convertedVariable == "Rock") {
            if (userVariable == "Rock") {
                cout << endl;
                cout << "You draw the game." << endl;
            }
            else if (userVariable == "Paper") {
                cout << endl;
                cout << "You won the game." << endl;
                battle.CountWinning(int );
            }
            else if (userVariable == "Scissors") {
                cout << endl;
                cout << "You lose the game." << endl;
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
                battle.CountWinning();
            }
        }
        else if (convertedVariable == "Scissors") {
            if (userVariable == "Rock") {
                cout << endl;
                cout << "You won the game." << endl;
                battle.CountWinning();
            }
            else if (userVariable == "Paper") {
                cout << endl;
                cout << "You lose the game." << endl;
            }
            else if (userVariable == "Scissors") {
                cout << endl;
                cout << "You draw the game." << endl;
            }
        }
    }
    
    cout << endl;
    cout << battle.GetResult() << endl;
    
    return 0;
}