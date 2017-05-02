#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class gradeCalculator {
    public:
        string SetAnswerkey(ifstream inFS1, int i);
    private:
        int answerkey[17];
        int studentAnswer[17];
};

char gradeCalculator::SetAnswerkey(ifstream inFS1, int i) {
    for (i = 0; i < 17; i++) {
        getline (inFS1, answerkey[i]);
        cout << answerkey[i] << endl;
    }
}

int main() {
    ifstream inFS1;
    int i = 0;
    
    gradeCalculator student;
    
    cout << endl;
    cout << "Opening file answerkey.txt..." << endl;
    
    // open file for input
    inFS1.open("answerkey.txt");
    if (!inFS1.is_open()) { // if the program cannot open this file, the program will stop to work.
        cout << endl;
        cout << "Could not open file answerkey.txt..." << endl;\
        return 1;
    }
    
    cout << endl;
    cout << "Reading data..." << endl;
    
    student.SetAnswerkey(inFS1, i);
    
    cout << endl;
    cout << "Closing file answerkey.txt..." << endl;
    inFS1.close();
    
    return 0;
    
}