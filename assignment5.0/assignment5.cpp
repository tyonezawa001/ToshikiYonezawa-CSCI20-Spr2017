#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main() {
    string continuation;
    ifstream inFS;
    ofstream outFS;
    string gameBoard[7][7];
    int i = 0;
    
    cout << endl;
    cout << "Opening file boardForGame.txt..." << endl;
    
    // open 2 text files for input data to two single array
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
    
    while ((continuation != "no") == (continuation != "No") == (continuation != "NO")) {
        
        for (i = 0; i < 7; i++) {
            inFS >> gameBoard[i][i];
            cout << gameBoard[i][i] << endl;
        }
        
        cout << gameBoard[1][1] << endl;
        
        cout << endl;
        cout << "Do you want to play the game again?" << endl;
        cout << "Your choice (yes/no): ";
        cin >> continuation;
    }
    
    // close each file
    cout << endl;
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