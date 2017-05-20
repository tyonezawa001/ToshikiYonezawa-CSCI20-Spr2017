#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <ctime>
using namespace std;

class SearchWinner {
    public:
        void checkCells(string gameBoard[7][7], string user, string CPU);
        void resetGame(string gameBoard[7][7]);
        string getResult() const;
    private:
        string result;
};

void SearchWinner::checkCells(string gameBoard[7][7], string user, string CPU) {
    if ((gameBoard[1][1] == gameBoard[1][3]) && (gameBoard[1][1] == gameBoard[1][5])) {
        if (gameBoard[1][1] == user) {
            result = "winner";
        }
        else if (gameBoard[1][1] == CPU) {
            result = "loser";
        }
    }
    else if ((gameBoard[3][1] == gameBoard[3][3]) && (gameBoard[3][1] == gameBoard[3][5])) {
        if (gameBoard[3][1] == user) {
            result = "winner";
        }
        else if (gameBoard[3][1] == CPU) {
            result = "loser";
        }
    }
    else if ((gameBoard[5][1] == gameBoard[5][3]) && (gameBoard[5][1] == gameBoard[5][5])) {
        if (gameBoard[5][1] == user) {
            result = "winner";
        }
        else if (gameBoard[5][1] == CPU) {
            result = "loser";
        }
    }
    else if ((gameBoard[1][1] == gameBoard[3][1]) && (gameBoard[1][1] == gameBoard[5][1])) {
        if (gameBoard[1][1] == user) {
            result = "winner";
        }
        else if (gameBoard[1][1] == CPU) {
            result = "loser";
        }
    }
    else if ((gameBoard[1][3] == gameBoard[3][3]) && (gameBoard[1][3] == gameBoard[5][3])) {
        if (gameBoard[1][3] == user) {
            result = "winner";
        }
        else if (gameBoard[1][3] == CPU) {
            result = "loser";
        }
    }
    else if ((gameBoard[1][5] == gameBoard[3][5]) && (gameBoard[1][5] == gameBoard[5][5])) {
        if (gameBoard[1][5] == user) {
            result = "winner";
        }
        else if (gameBoard[1][5] == CPU) {
            result = "loser";
        }
    }
    else if ((gameBoard[1][1] == gameBoard[3][3]) && (gameBoard[1][1] == gameBoard[5][5])) {
        if (gameBoard[1][1] == user) {
            result = "winner";
        }
        else if (gameBoard[1][1] == CPU) {
            result = "loser";
        }
    }
    else if ((gameBoard[5][1] == gameBoard[3][3]) && (gameBoard[5][1] == gameBoard[1][5])) {
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

void SearchWinner::resetGame(string gameBoard[7][7]) {
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

string SearchWinner::getResult() const {
    return result;
}

int main() {
    string continuation;
    ifstream inFS;
    ofstream outFS;
    string gameBoard[7][7];
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
    string cell;
    
    SearchWinner game;
    
    cout << endl;
    cout << "Opening file boardForGame.txt..." << endl;
    
    // open text files for input data to two single array
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
    
    while ((continuation != "n") && (continuation != "no") && (continuation != "No") && (continuation != "NO")) {
        
        for (i = 0; i < 7; i++) {
            for (j = 0; j < 7; j++) {
                inFS >> gameBoard[i][j];
            }
        }
        
        game.resetGame(gameBoard);
        game.getResult();
        
        cout << "Do you want to take the first move 'O' or the second move 'X'?" << endl;
        cout << "Your choice (O/X): ";
        cin >> firstOrSecond;
        cout << endl;
        
        if ((firstOrSecond == "O") || (firstOrSecond == "o")) {
            user = "O";
            CPU = "X";
        }
        else if ((firstOrSecond == "X") || (firstOrSecond == "x")) {
            user = "X";
            CPU = "O";
        }
        
        srand(time(0));
        
        while ((game.getResult() != "winner") && (game.getResult() != "loser") && (game.getResult() != "draw")) {
            if (user == "O") {
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
                
                game.checkCells(gameBoard, user, CPU);
                game.getResult();
                
                if ((gameBoard[1][1] != "a") && (gameBoard[1][3] != "b") && (gameBoard[1][5] != "c") && (gameBoard[3][1] != "d") && (gameBoard[3][3] != "e") && (gameBoard[3][5] != "f") && (gameBoard[5][1] != "g") && (gameBoard[5][3] != "h") && (gameBoard[5][5] != "i")) {
                    for (i = 0; i < 7; i++) {
                        for (j = 0; j < 7; j++) {
                            cout << gameBoard[i][j];
                        }
                        cout << endl;
                    }
                }
                else {
                    while (loop != "Go") {
                        ascii = ((rand() % (105 - 97 + 1)) + 97);
                        str = ascii;
                        for (i = 0; i < 7; i++) {
                            for (j = 0; j < 7; j++) {
                                if (gameBoard[i][j] == str) {
                                    gameBoard[i][j] = "X";
                                    loop = "Go";
                                }
                            }   
                        }
                    }
                    loop = "Again";
                }
                game.checkCells(gameBoard, user, CPU);
                game.getResult();
            }
            else if (user == "X") {
                while (loop != "Go") {
                    ascii = ((rand() % (105 - 97 + 1)) + 97);
                    str = ascii;
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
                game.checkCells(gameBoard, user, CPU);
                game.getResult();
            }
        }
        
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
            outFS << "The game ended in draw." << endl;
        }
        k++;
        
        cout << "Do want to play again?" << endl;
        cout << "Your choice (y/n): ";
        cin >> continuation;
        cout << endl;
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