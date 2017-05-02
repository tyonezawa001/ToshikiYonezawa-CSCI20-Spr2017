#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <iomanip>
using namespace std;

int main() {
    std::ifstream inFS; // input file stream
    std::ofstream outFS; // Output file stream
    std::string name; // variable for name 
    string stringSemester; // variable for semester value which is inputed by string variable
    int semester = 0; // variable for semester value which is initialized integer variable
    string data; // variable for string data which contains class units and grade for each class
    string stringUnit; // variable for class unit value which is inputed by string variable
    int unit = 0; // variable for class unit value which is initialized intger variable
    int unitSum = 0; // variable for totall semester unit of classes
    double gradeSemester = 0.0; // double variable for grade value
    double totalgradeSemester = 0.0; // double variable for total grade value
    string grade; // variable for grade name which initialized string variable
    string data2; // variable for strig data which conbine total units (before this semester) and current overall GPA (before this semester)
    string stringTotalUnit; // variable for total units (before this semester) which initialied string variable
    int totalUnit = 0; // variable for total units (before this semster) which converted from string variable to integer variable
    string stringGpa; // variable for gpa data which is initialized by string variable
    double gpa = 0.0; // variabe for gpa data which is converted from string variable to integer
    double gpaSemester = 0.0; // variable for totall gpa in this semester
    double gpaOverall = 0.0; // variable for overall gpa for all semester
    
    cout << endl;
    cout << "Opening file studentInfo.txt..." << endl;
    
    // open file for input
    inFS.open("studentInfo.txt");
    if (!inFS.is_open()) { // if the program cannot open this file, the program will stop to work.
        cout << endl;
        cout << "Could not open file studentInfo.txt..." << endl;\
        return 1;
    }
    
    cout << endl;
    cout << "Opening file studentResult.txt..." << endl;
    
    //open file for output
    outFS.open("studentResult.txt");
    if (!outFS.is_open()) {
      cout << endl;
      cout << "Could not open file studentResult.txt." << endl;
      return 1;
    }
    
    cout << endl;
    cout << "Reading data..." << endl;
    
    std::getline (inFS,name); //  get a name which contains first name and last name. Also the name data has white space.
    std::getline (inFS,stringSemester); // get semester value as string variable.
    semester = std::stoi (stringSemester); // convert the string value to integer value for semester number.
        
    while (data != "0") { // I put on "0" between class's grade and total unit section, so the loop will stops when data becomes "0".
        std::getline (inFS, data); // get unit data and grade data for this semester
        stringUnit = data.substr(0, data.find(' ')); // separate string data to unit data by white space 
        stringstream convert(stringUnit); //object from the class stringstream
        convert >> unit;  //the object has the value and stream it to the integer unit
        
        unitSum = unitSum + unit; // caluculate total units for this semester. add all unit value in each loops
        
        grade = data.substr(data.find(' ') + 1, data.length()); // get a grade simbol to separate bywhite space from data
        
        if (grade == "A") {
            gradeSemester = unit * 4.0; // if student get A garde for class, the line calculate total grade point which is given by unit for class times 4.0. 
        }
        else if (grade == "B") {
            gradeSemester = unit * 3.0; // if student get B garde for class, the line calculate total grade point which is given by unit for class times 3.0. 
        }
        else if (grade == "C") {
            gradeSemester = unit * 2.0; // if student get C garde for class, the line calculate total grade point which is given by unit for class times 2.0. 
        }
        else if (grade == "D") {
            gradeSemester = unit * 1.0; // if student get D garde for class, the line calculate total grade point which is given by unit for class times 1.0. 
        }
        else if (grade == "F") {
            gradeSemester = unit * 0; // if student get F garde for class, the line calculate total grade point which is given by unit for class times 0. 
        }
        totalgradeSemester = totalgradeSemester + gradeSemester; // total grade points for semester is given by add grade point for each class on every loops
    }
    
    gpaSemester = totalgradeSemester / unitSum; // total gpa for this semester is given by total grade point devides by total units.
    
    std::getline (inFS, data2); // got a data which contains total unit (before this semester) and total gpa (bofre this semester)
    stringTotalUnit = data2.substr(0, data2.find(' ')); // got a total unit (before this semester) to separate by white space
    stringstream convert(stringTotalUnit);//object from the class stringstream
    convert >> totalUnit;  //the object has the value and stream it to the integer totalUnit

    stringGpa = data2.substr(data2.find(' ') + 1, data2.length()); // got gpa (before this semester) to separete by white space
    gpa = atof(stringGpa.c_str()); // string variable converts to double variable in here
    
    
    gpaOverall = ((gpa * totalUnit) + totalgradeSemester) / (unitSum + totalUnit); // overall gpa is given by here.
    
    // write down to another file
    outFS << "Student Name: ";
    outFS << name << endl;
    outFS << "Semester GPA: ";
    outFS << setprecision (3) << gpaSemester << endl;
    outFS << "Overrall GPA: ";
    outFS << setprecision (3) << gpaOverall <<endl;
    
    
    cout << endl;
    cout << "Closing file studentInfo.txt..." << endl;
    inFS.close();
    
    cout << endl;
    cout << "Closing file studentResult.txt..." << endl;
    outFS.close();
    
    return 0;
}

/*
 * Student Name: Suzy Cue
 * Semester GPA: 4.5
 * Overrall GPA: 3.83
 *
 * Student Name: Joe Joseph
 * Semester GPA: 2.38
 * Overrall GPA: 2.38
 *
 * Student Name: Jillian Smith
 * Semester GPA: 2.53
 * Overrall GPA: 2.51
 *
 * Tosiki Yonezawa
 * Semester GPA: 3.87
 * Overrall GPA: 3.05
 */