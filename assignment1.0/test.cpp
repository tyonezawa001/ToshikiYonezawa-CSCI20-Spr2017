/* Created by: Toshiki Yonezawa
 * Created on: 02/14/2017
 * I practice to use "struct" on the program.
 * The program works to show student's ID and exam point.
 */

#include <iostream>
using namespace std;

struct GradeData {
    int studentID;
    int pointExam;
};

int main() {
    GradeData jhonDoe;
    jhonDoe.studentID = 1111111;
    jhonDoe.pointExam = 76;
    
    // Output information about student's ID and exam point
    cout << endl;
    cout << "Grade Data: ";
    cout << " ID: " << jhonDoe.studentID << ", ";
    cout << jhonDoe.pointExam << " points" << endl;
    
    return 0;
    
}