#include <iostream>
#include <string>
using namespace std;



int main() {
    
    string ask;
    
    int vals[10] = {342, 234, 123, 765, 453, 763, 876, 112, 987, 231};
    
    cout << endl;
    cout << "The program stores 10 numbers in this program." << endl;
    cout << "You can use 8 different functions in this program." << endl;
    cout << "Print – print the array values on the screen in order" << endl;
    cout << "Find_min – search the array between two sizes to return the location of the minimum value in that part of the array" << endl;
    cout << "Find_min – search the array between two sizes to return the location of the maximum value in that part of the array" << endl;
    cout << "Num_even/odd – count the number of even and odd numbers in the array" << endl;
    cout << "Search – search the array for a specified value and return the location if the value is found and -1 otherwise" << endl;
    cout << "Is_sorted – check to see of the array is sorted in ascending order" << endl;    
    cout << "Exit - end the proram" << endl;
    cout << "What do you want to do now?: " << endl;
    cout << "Please input 'print', 'min', 'max', 'sum', 'even', 'odd', 'search', 'sort', or 'exit'." << endl; 
    cout << "Please choose a function: ";
    cin >> ask;
    
    while (ask != "exit" || ask != "Exit") {
    
        if (ask == "print" || ask == "Print") {
            cout << "Please input 'print', 'min', 'max', 'sum', 'even', 'odd', 'search', 'sort', or 'exit'." << endl; 
            cout << "Please choose a function: ";
            cin >> ask;
        }
        else if (ask == "min" || ask == "Min") {
            cout << "Please input 'print', 'min', 'max', 'sum', 'even', 'odd', 'search', 'sort', or 'exit'." << endl; 
            cout << "Please choose a function: ";
            cin >> ask;
        }
        else if (ask == "max" || ask == "Max") {
            cout << "Please input 'print', 'min', 'max', 'sum', 'even', 'odd', 'search', 'sort', or 'exit'." << endl; 
            cout << "Please choose a function: ";
            cin >> ask;
        }
        else if (ask == "sum" || ask == "Sum") {
            cout << "Please input 'print', 'min', 'max', 'sum', 'even', 'odd', 'search', 'sort', or 'exit'." << endl; 
            cout << "Please choose a function: ";
            cin >> ask;
        }
        else if (ask == "even" || ask == "Even") {
            cout << "Please input 'print', 'min', 'max', 'sum', 'even', 'odd', 'search', 'sort', or 'exit'." << endl; 
            cout << "Please choose a function: ";
            cin >> ask;
        }
        else if (ask == "odd" || ask == "Odd") {
            cout << "Please input 'print', 'min', 'max', 'sum', 'even', 'odd', 'search', 'sort', or 'exit'." << endl; 
            cout << "Please choose a function: ";
            cin >> ask;
        }
        else if (ask == "search" || ask == "Search") {
            cout << "Please input 'print', 'min', 'max', 'sum', 'even', 'odd', 'search', 'sort', or 'exit'." << endl; 
            cout << "Please choose a function: ";
            cin >> ask;
        }
        else if (ask == "sort" || ask == "Sort") {
            cout << "Please input 'print', 'min', 'max', 'sum', 'even', 'odd', 'search', 'sort', or 'exit'." << endl; 
            cout << "Please choose a function: ";
            cin >> ask;
        }
        else if (ask == "exit" || ask == "Exit") {
            cout << endl;
            cout << "I depply aprocoate you for using the program." << endl;
            return 0;
        }
    }    
    return 0;
}