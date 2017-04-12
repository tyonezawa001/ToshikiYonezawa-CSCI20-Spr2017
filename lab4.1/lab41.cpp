#include <iostream>
#include <string>
using namespace std;

class ArrayTools {
    public:
        void Print (int vals[10]);
        void Find_min (int vals[10]);
        void Find_max (int vals[10]);
        void Find_sum (int vals[10]);
        void Find_even (int vals[10]);
        void Find_odd (int vals[10]);
        void Search (int vals[10]);
        void Is_sorted (int vals[10]);
    private:
        
};

void ArrayTools::Print (int vals[10]) {
    
}

void ArrayTools::Find_min (int vals[10]) {
    
}

void ArrayTools::Find_max (int vals[10]) {
    
}

void ArrayTools::Find_sum (int vals[10]) {
    
}

void ArrayTools::Find_even (int vals[10]) {
    
}

void ArrayTools::Find_odd (int vals[10]) {
    
}

void ArrayTools::Search (int vals[10]) {
    
}

void ArrayTools::Is_sorted (int vals[10]) {
    
}

int main() {
    
    string ask;
    
    ArrayTools function;
    
    int vals[10];
    
    vals[0] = 342;
    vals[1] = 232;
    vals[2] = 532;
    vals[3] = 343;
    vals[4] = 521;
    vals[5] = 262;
    vals[6] = 322;
    vals[7] = 865;
    vals[8] = 123; 
    vals[9] = 534;
    
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