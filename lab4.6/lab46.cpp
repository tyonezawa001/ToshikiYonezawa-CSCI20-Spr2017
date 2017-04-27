#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main() {
    ifstream inFS;
    string name;
    int semester;
    int unit;
    string grade;
    int totalUnits;
    double overallGPA;
    int i;
    string loop;
    double gradePoint;
    
    
    cout << "Opening file student.txt." << endl;
    inFS.open("studentInfo.txt");
    if (!inFS.is_open()) {
        cout << "Couldn not open file studentInfo.txt." << endl;\
        return 1;
    }
    
    for (i = 0; i < 3; i++) {
        cout << "Reading data." << endl;
        inFS >> name;
        inFS >> semester;
        inFS >> totalUnits;
        inFS >> overallGPA;
        while (loop == ' ') {
        inFS >> loop;
        inFS >> unit;
        totalUnits = totalUnits + unit;
        inFS >> grade;
        if (grade == 'A') {
            gradePoint = unit * 4.0;
        }
        else if (grade == 'B') {
            gradePoint = unit * 3.0;
        }
        else if (grade == 'C') {
            gradePoint = unit * 2.0;
        }
        else if (grade == 'D') {
            gradePoint = unit * 1.0;
        }
        else if (grade == 'F') {
            gradePoint = unit * 0;
        }
        
        }
    }