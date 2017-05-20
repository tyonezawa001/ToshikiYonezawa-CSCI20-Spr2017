#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    ifstream inFS;
    string gameBoard[7][7];
    char ascii;
    std::string str;
    int i;
    int j;
    string loop;
    
    cout << endl;
    cout << "Opening file boardForGame.txt..." << endl;
    
    // open 2 text files for input data to two single array
    inFS.open("boardForGame.txt");
    if (!inFS.is_open()) { // if the program cannot open this file, the program will stop to work.
        cout << endl;
        cout << "Could not open file boardForGame.txt..." << endl;
        return 1;
    }
    
    srand(time(0));
    ascii = ((rand() % (105 - 97 + 1)) + 97);
    str = ascii;
    cout << str << endl;
    for (i = 0; i < 7; i++) {
        for (j = 0; j < 7; j++) {
            if (gameBoard[i][j] == str) {
                gameBoard[i][j] = "X";
            }
        }   
    }
    
    
    cout << gameBoard[i][j] << endl;
    
    cout << endl;
    cout << "Closing file boardForGame.txt..." << endl;
    inFS.close();
    
    return 0;
}