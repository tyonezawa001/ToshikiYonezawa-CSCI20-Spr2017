#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class gradeCalculator {
    public:
        void OpenTextFile();
        void ArrayAnswerkey(int i);
        void ArrayStudentAnswer(int i);
        void compareTwoArray(int i, int k, double score);
        void CloseTextFile();
    private:
        ifstream inFS1;
        ifstream inFS2;
        string answerkey[18];
        string studentAnswer[20];
};

void gradeCalculator::OpenTextFile() {
    cout << endl;
    cout << "Opening file answerkey.txt..." << endl;
    
    inFS1.open("answerkey.txt");
    if (!inFS1.is_open()) { // if the program cannot open this file, the program will stop to work.
        cout << endl;
        cout << "Could not open file answerkey.txt..." << endl;
        return;
    }
    
    cout << endl;
    cout << "Opening file studentAnswer.txt..." << endl;
    
    inFS2.open("studentAnswer.txt");
    if (!inFS2.is_open()) { // if the program cannot open this file, the program will stop to work.
        cout << endl;
        cout << "Could not open file studentAnswer.txt..." << endl;
        return;
    }
}

void gradeCalculator::ArrayAnswerkey(int i) {
    for (i = 0; i < 18; i++) {
        inFS1 >> answerkey[i];
        cout << answerkey[i] << endl;
    }
} 

void gradeCalculator::ArrayStudentAnswer(int i) {
    for (i = 0; i < 20; i++) {
        inFS2 >> studentAnswer[i];
        cout << studentAnswer[i] << endl;
    }
}

void gradeCalculator::compareTwoArray(int i, int k, double score) {
    for (i = 0; i < 18; i++) {
        k = i + 2;
        if (answerkey[i] == studentAnswer[k]) {
            cout << "Right!" << endl;
            score = score + 1.0;
        }
        else if (answerkey[i] != studentAnswer[k]) {
            cout << "Wrong!";
            if (studentAnswer[k] == "?") {
                cout << " Omitted Answer!" << endl;
                score = score + 0;
            }
            else {
                cout << endl;
                score = score - 0.25;
            }
        }
    }
}

void gradeCalculator::CloseTextFile() {
    cout << endl;
    cout << "Closing file answerkey.txt..." << endl;
    inFS1.close();
    cout << endl;
    cout << "Closing file studentAnswer.txt..." << endl;
    inFS2.close();
}

int main() {
    ofstream outFS;
    int i = 0;
    int k = 0;
    double score = 0.0;
    
    gradeCalculator data;
    
    data.OpenTextFile();
    
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
    
    data.ArrayAnswerkey(i);
    data.ArrayStudentAnswer(i);
    data.compareTwoArray(i, k, score);
    
    data.CloseTextFile();
    cout << endl;
    cout << "Closing file studentResult.txt..." << endl;
    outFS.close();
    
    return 0;
}