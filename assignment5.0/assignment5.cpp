/*
 *Created by: Toshiki Yonezawa
 *Created on: 05/20/2017
 *For my final project, I created a game which calls "Tic-tac-toe".
 *The main program input gameboard from text file for playing game, and it outputs the game result and ttal numbers of game to other file.
 *This gmae is for 1 player. It means user plays the game with computer player.
 *The game player can choose a first moving or a seconed moving for the beginning.
 *After the game ends, the game player can cntinue to next game if the player wants to play more.
 *The computer player choose places using random alphabet generator, so user player can't choose the difficulty of the game.
 */

#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <ctime>
using namespace std;

// class statement for searching winner for the game, resetting gameboard and result, and giving result to main statement 
class GameFunction {
    public:
        void checkCells(string gameBoard[7][7], string user, string CPU); // class function for searching winner 
        void resetGame(string gameBoard[7][7]); // class function for resetting the game
        string getResult() const; // class function for giving result to main statement
    private:
        string result; // variable for storing result
};

// class function for searching winner, and output result the game to class get function
void GameFunction::checkCells(string gameBoard[7][7], string user, string CPU) {
    if ((gameBoard[1][1] == gameBoard[1][3]) && (gameBoard[1][1] == gameBoard[1][5]) && (gameBoard[1][3] == gameBoard[1][5])) {
        if (gameBoard[1][1] == user) {
            result = "winner";
        }
        else if (gameBoard[1][1] == CPU) {
            result = "loser";
        }
    }
    else if ((gameBoard[3][1] == gameBoard[3][3]) && (gameBoard[3][1] == gameBoard[3][5]) && (gameBoard[3][3] == gameBoard[3][5])) {
        if (gameBoard[3][1] == user) {
            result = "winner";
        }
        else if (gameBoard[3][1] == CPU) {
            result = "loser";
        }
    }
    else if ((gameBoard[5][1] == gameBoard[5][3]) && (gameBoard[5][1] == gameBoard[5][5]) && (gameBoard[5][3] == gameBoard[5][5])) {
        if (gameBoard[5][1] == user) {
            result = "winner";
        }
        else if (gameBoard[5][1] == CPU) {
            result = "loser";
        }
    }
    else if ((gameBoard[1][1] == gameBoard[3][1]) && (gameBoard[1][1] == gameBoard[5][1]) && (gameBoard[3][1] == gameBoard[5][1])) {
        if (gameBoard[1][1] == user) {
            result = "winner";
        }
        else if (gameBoard[1][1] == CPU) {
            result = "loser";
        }
    }
    else if ((gameBoard[1][3] == gameBoard[3][3]) && (gameBoard[1][3] == gameBoard[5][3]) && (gameBoard[3][3] == gameBoard[5][3])) {
        if (gameBoard[1][3] == user) {
            result = "winner";
        }
        else if (gameBoard[1][3] == CPU) {
            result = "loser";
        }
    }
    else if ((gameBoard[1][5] == gameBoard[3][5]) && (gameBoard[1][5] == gameBoard[5][5]) && (gameBoard[3][5] == gameBoard[5][5])) {
        if (gameBoard[1][5] == user) {
            result = "winner";
        }
        else if (gameBoard[1][5] == CPU) {
            result = "loser";
        }
    }
    else if ((gameBoard[1][1] == gameBoard[3][3]) && (gameBoard[1][1] == gameBoard[5][5]) && (gameBoard[3][3] == gameBoard[5][5])) {
        if (gameBoard[1][1] == user) {
            result = "winner";
        }
        else if (gameBoard[1][1] == CPU) {
            result = "loser";
        }
    }
    else if ((gameBoard[5][1] == gameBoard[3][3]) && (gameBoard[5][1] == gameBoard[1][5]) && (gameBoard[3][3] == gameBoard[1][5])) {
        if (gameBoard[5][1] == user) {
            result = "winner";
        }
        else if (gameBoard[5][1] == CPU) {
            result = "loser";
        }
    }
    else if ((gameBoard[1][1] != "a") && (gameBoard[1][3] != "b") && (gameBoard[1][5] != "c") && (gameBoard[3][1] != "d") && (gameBoard[3][3] != "e") && (gameBoard[3][5] != "f") && (gameBoard[5][1] != "g") && (gameBoard[5][3] != "h") && (gameBoard[5][5] != "i")) {
        result = "draw";
    }
}

// class function for resetting gameboard and game result 
void GameFunction::resetGame(string gameBoard[7][7]) {
    gameBoard[1][1] = "a";
    gameBoard[1][3] = "b";
    gameBoard[1][5] = "c";
    gameBoard[3][1] = "d";
    gameBoard[3][3] = "e";
    gameBoard[3][5] = "f";
    gameBoard[5][1] = "g";
    gameBoard[5][3] = "h";
    gameBoard[5][5] = "i";
    result = "reset";
}

// class get function to give game result to main statement
string GameFunction::getResult() const {
    return result;
}

// main statement for the game
int main() {
    string continuation;
    ifstream inFS; // input file stream
    ofstream outFS; // output file stream
    string gameBoard[7][7]; // multiple array for gameboard
    string firstOrSecond; 
    string user;
    string CPU;
    string choose;
    int i = 0;
    int j = 0;
    int k = 0;
    int l = 0;
    char ascii;
    string str;
    string loop;
    
    GameFunction game; // user-created object of class type GameFunction
    
    cout << endl;
    cout << "Opening file boardForGame.txt..." << endl;
    
    // open text files for input data to multiple array
    inFS.open("boardForGame.txt");
    if (!inFS.is_open()) { // if the program cannot open this file, the program will stop to work.
        cout << endl;
        cout << "Could not open file boardForGame.txt..." << endl;
        return 1;
    }
    
    cout << endl;
    cout << "Opening file resultForGame.txt..." << endl;
    
    //open file for output
    outFS.open("resultForGame.txt");
    if (!outFS.is_open()) {
      cout << endl;
      cout << "Could not open file resultForGame.txt..." << endl;
      return 1;
    }
    
    cout << endl;
    cout << "Reading data..." << endl;
    cout << endl;
    
    // the game continues if player want to play again
    while ((continuation != "n") && (continuation != "no") && (continuation != "No") && (continuation != "NO")) {
        
        // input gameboard from text file
        for (i = 0; i < 7; i++) {
            for (j = 0; j < 7; j++) {
                inFS >> gameBoard[i][j];
            }
        }
        
        // the class function statements need for reset the gameboard and the output of gam.getResult().
        game.resetGame(gameBoard);
        
        
        cout << "Do you want to take the first move 'O' or the second move 'X'?" << endl;
        cout << "Your choice (O/X): ";
        cin >> firstOrSecond;
        cout << endl;
        
        // If user make a mistake for choosing movement, the loop shows to screem.
        while (firstOrSecond != "o" && firstOrSecond != "O" && firstOrSecond != "x" && firstOrSecond != "X") {
            cout << "Please choose 'o' or 'x' for the movement." << endl;
            cout << "Your choice (O/X): ";
            cin >> firstOrSecond;
            cout << endl;
        }
        
        // user player choose first movement or seconed movement
        if ((firstOrSecond == "O") || (firstOrSecond == "o")) {
            user = "O";
            CPU = "X";
        }
        else if ((firstOrSecond == "X") || (firstOrSecond == "x")) {
            user = "X";
            CPU = "O";
        }
        
        srand(time(0)); // this statement for tandom alphabet generator
        
        // this loop continues until game.getResult() outputs "winner", "loser", and "draw".
        while ((game.getResult() != "winner") && (game.getResult() != "loser") && (game.getResult() != "draw")) {
            
            if (user == "O") { // the loop wprks when user chooses "O"
                cout << endl;
                cout << "User: the first move 'O'" << endl;
                cout << "CPU: the second move 'X'" << endl;
                for (i = 0; i < 7; i++) {
                    for (j = 0; j < 7; j++) {
                        cout << gameBoard[i][j];
                    }
                    cout << endl;
                }
                
                cout << endl;
                cout << "Please choose place (a to i) which you want to put 'O' in the board." << endl;
                cout << "Your choice (a to i): ";
                cin >> choose;
                for (i = 0; i < 7; i++) {
                    for (j = 0; j < 7; j++) {
                        if (gameBoard[i][j] == choose){
                            gameBoard[i][j] = "O";
                        }
                    }
                }
                
                // searcing winner
                game.checkCells(gameBoard, user, CPU);
                game.getResult();
                
                if (game.getResult() == "winner" && game.getResult() == "loser" && game.getResult() == "draw") {
                    for (i = 0; i < 7; i++) {
                        for (j = 0; j < 7; j++) {
                            cout << gameBoard[i][j];
                        }
                        cout << endl;
                    }
                    
                    // searching winner
                    game.checkCells(gameBoard, user, CPU);
                    game.getResult();
                }
                else if (game.getResult() != "winner" && game.getResult() != "loser" && game.getResult() != "draw") {
                    while (loop != "Go") {
                        // random alphabet generator
                        ascii = ((rand() % (105 - 97 + 1)) + 97);
                        str = ascii; // char coverts to string variable
                        for (i = 0; i < 7; i++) {
                            for (j = 0; j < 7; j++) {
                                if (gameBoard[i][j] == str) {
                                    gameBoard[i][j] = "X";
                                    loop = "Go";
                                }
                            }   
                        }
                    }
                    loop = "Again"; // initialize variable for loop 
                }
                
                // searching winner
                game.checkCells(gameBoard, user, CPU);
                game.getResult();
            }
            
            else if (user == "X") { // the loop wprks when user chooses "X"
                while (loop != "Go") {
                    // random alphabet generator
                    ascii = ((rand() % (105 - 97 + 1)) + 97);
                    str = ascii; // char converts to string variable
                    for (i = 0; i < 7; i++) {
                        for (j = 0; j < 7; j++) {
                            if (gameBoard[i][j] == str) {
                                gameBoard[i][j] = "O";
                                loop = "Go";
                            }
                        }   
                    }
                }
                loop = "Again";
                 // intitialize variable for loop
                
                // searching winner
                game.checkCells(gameBoard, user, CPU);
                game.getResult();
                
                cout << endl;
                cout << "CPU: the first move 'O'" << endl;
                cout << "User: the second move 'X'" << endl;
                for (i = 0; i < 7; i++) {
                    for (j = 0; j < 7; j++) {
                        cout << gameBoard[i][j];
                    }
                    cout << endl;
                }
                
                if (game.getResult() == "winner" && game.getResult() == "loser" && game.getResult() == "draw") {
                    
                    // searching winner
                    game.checkCells(gameBoard, user, CPU);
                    game.getResult();
                }
                else if (game.getResult() != "winner" && game.getResult() != "loser" && game.getResult() != "draw") {
                    cout << endl;
                    cout << "Please choose place (a to i) which you want to put 'X' in the board." << endl;
                    cout << "Your choice (a to i): ";
                    cin >> choose;
                    for (i = 0; i < 7; i++) {
                        for (j = 0; j < 7; j++) {
                            if (gameBoard[i][j] == choose){
                                gameBoard[i][j] = "X";
                            }
                        }
                    }
                }
                
                // searching winner
                game.checkCells(gameBoard, user, CPU);
                game.getResult();
            }
        }
        
        // show the result of game
        if (game.getResult() == "winner") {
            cout << endl;
            cout << "User is Winner!" << endl;
            cout << endl;
        }
        else if (game.getResult() == "loser") {
            cout << endl;
            cout << "User is Loser!" << endl;
            cout << endl;
        } 
        else if (game.getResult() == "draw") {
            cout << endl;
            cout << "The game ended in draw." << endl;
            cout << endl;
        }
        
        // output results to other text file
        outFS << endl;
        outFS << "Game #" << k + 1 << endl;
        
        for (i = 0; i < 7; i++) {
            for (j = 0; j < 7; j++) {
                if (j == 6)
                    outFS << gameBoard[i][j] << endl;
                else {
                    outFS << gameBoard[i][j];
                }
            }
        }
        
        if (game.getResult() == "winner") {
            outFS << "User (" << user << "): Winner!" <<endl;
            outFS << "CPU (" << CPU << "): Loser!" << endl;
        }
        else if (game.getResult() == "loser") {
            outFS << "User (" << user << "): Loser!" <<endl;
            outFS << "CPU (" << CPU << "): Winner!" << endl;
        } 
        else if (game.getResult() == "draw") {
            outFS << "User (" << user << ")" <<endl;
            outFS << "CPU (" << CPU << ")" << endl;
            outFS << "The game ended in draw." << endl;
        }
        k++;
        
        cout << "Do want to play again?" << endl;
        cout << "Your choice (y/n): ";
        cin >> continuation;
        cout << endl;
        
        while (continuation != "y" && continuation != "Y" && continuation != "n" && continuation != "N") {
            cout << "Please type 'y' or 'n' for checking continuation." << endl;
            cout << "Your choice (y/n): ";
            cin >> continuation;
            cout << endl;
        }
    }
    
    // close each file
    cout << "Closing file boardForGame.txt..." << endl;
    inFS.close();
    cout << endl;
    cout << "Closing file resultForGame.txt..." << endl;
    outFS.close();
    
    cout << endl;
    cout << "Thank you for plaing the game." << endl;
    cout << "See you next time (＾▽＾)/" << endl;
    
    return 0;
}