#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class gradeCalculator {
    public:
        void compareTwoArray(int i, int k);
    private:
    string answerkey[18];
    string studentAnswer[20];
};

void gradeCalculator::compareTwoArray(int i, int k) {
    for (i = 0; i < 18; i++) {
        k = i + 2;
        if (answerkey[i] == studentAnswer[k]) {
            cout << "Right!" << endl;
        }
        else if (answerkey[i] != studentAnswer[k]) {
            cout << "Wrong!";
            if (studentAnswer[k] == "?") {
                cout << " Omitted Answer!" << endl;
            }
            else {
                cout << "  lol" << endl;
            }
        }
    }
}

int main() {
    ifstream inFS1;
    ifstream inFS2;
    ofstream outFS;
    string answerkey[18];
    string studentAnswer[20];
    int i = 0;
    int k = 0;
    
    gradeCalculator data;
    
    cout << endl;
    cout << "Opening file answerkey.txt..." << endl;
    
    inFS1.open("answerkey.txt");
    if (!inFS1.is_open()) { // if the program cannot open this file, the program will stop to work.
        cout << endl;
        cout << "Could not open file answerkey.txt..." << endl;
        return 1;
    }
    
    cout << endl;
    cout << "Opening file studentAnswer.txt..." << endl;
    
    inFS2.open("studentAnswer.txt");
    if (!inFS2.is_open()) { // if the program cannot open this file, the program will stop to work.
        cout << endl;
        cout << "Could not open file studentAnswer.txt..." << endl;
        return 1;
    }
    
    cout << endl;
    cout << "Opening file studentResult.txt..." << endl;
    
    //open file for output
    outFS.open("studentResult.txt");
    if (!outFS.is_open()) {
      cout << endl;
      cout << "Could not open file studentResult.txt..." << endl;
      return 1;
    }
    
    cout << endl;
    cout << "Reading data..." << endl;
    
    for (i = 0; i < 18; i++) {
        inFS1 >> answerkey[i];
        cout << answerkey[i] << endl;
    }
    
    for (i = 0; i < 20; i++) {
        inFS2 >> studentAnswer[i];
        cout << studentAnswer[i] << endl;
    }

    /*
    for (i = 0; i < 18; i++) {
        if (answerkey[i] == studentAnswer[i + 2]) {
            cout << "Right!" << endl;
        }
        else if (answerkey[i] != studentAnswer[i + 2]) {
            cout << "Wrong!";
            if (studentAnswer[i + 2] != "?") {
                cout << " Omitted Answer!" << endl;
            }
            else {
                cout << "  lol" << endl;
            }
        }
    }
    */
    
    data.compareTwoArray(i, k);
    
    outFS << studentAnswer[0] << " " << studentAnswer[1] << endl;
    
    cout << endl;
    cout << "Closing file answerkey.txt..." << endl;
    inFS1.close();
    cout << endl;
    cout << "Closing file studentAnswer.txt..." << endl;
    inFS2.close();
    cout << endl;
    cout << "Closing file studentResult.txt..." << endl;
    outFS.close();
    
    return 0;
}