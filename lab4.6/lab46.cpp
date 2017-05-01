#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
using namespace std;

int main() {
    std::ifstream inFS;
    int student = 3;
    std::string name;
    string semester;
    string data;
    string stringUnit;
    int unit;
    string grade;
    string data2;
    string stringTotalUnit;
    int totalUnit;
    string stringGpa;
    double gpa;
    
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
    
    std::getline (inFS,name);
    std::getline (inFS,semester);
        
    cout << name << endl;
    cout << semester << endl;
        
    while (data != "0") {
        std::getline (inFS, data);
        stringUnit = data.substr(0, data.find(' '));
        stringstream convert(stringUnit); //object from the class stringstream
        convert >> unit;  //the object has the value 12345 and stream it to the integer unit
        
        grade = data.substr(data.find(' ') + 1, data.length());
        
        cout << unit << endl;
        cout << grade << endl;
    }
    
    std::getline (inFS, data2);
    stringTotalUnit = data2.substr(0, data2.find(' '));
    stringstream convert(stringTotalUnit);//object from the class stringstream
    convert >> totalUnit;  //the object has the value 12345 and stream it to the integer totalUnit

    stringGpa = data2.substr(data2.find(' ') + 1, data2.length());
    gpa = atof(stringGpa.c_str());
    
    cout << totalUnit << endl;
    cout << gpa << endl;

    cout << endl;
    cout << "Closing file studentInfo.txt..." << endl;
    inFS.close();
    
    return 0;
}