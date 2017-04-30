#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main() {
    ifstream inFS("studentInfo.txt");
    int student = 3;
    std::string name;
    string semester;
    int unit = 0;
    string grade;
    int i = 0;
    
    cout << endl;
    cout << "Opening file studentInfo.txt..." << endl;
    
    inFS.open("studentInfo.txt");
    if (!inFS.is_open()) {
        cout << endl;
        cout << "Could not open file studentInfo.txt..." << endl;\
        return 1;
    }
    
    cout << endl;
    cout << "Reading data..." << endl;
    
    for (i = 0; i < student; i++) {
    
        std::getline (inFS,name);
        std::getline (inFS,semester);
        
        sscanf (inFS.studentInfo(), "%d,%s", &unit, grade);
        
        cout << name << endl;
        cout << semester << endl;
        cout << unit << endl;
        cout << grade << endl;
        
    }
    
    cout << endl;
    cout << "Closing file studentInfo.txt..." << endl;
    inFS.close();
    
        
    
    return 0;
}