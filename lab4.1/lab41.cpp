#include <iostream>
#include <string>
using namespace std;

int main() {
    
    string ask;
    
    
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
    cout << "Now I store 10 numbers in this program." << endl;
    cout << "You can use 7 different functions in this program." << endl;
    cout << "Print – print the array values on the screen in order" << endl;
    cout << "Find_min – search the array between two sizes to return the location of the minimum value in that part of the array" << endl;
    cout << "Find_min – search the array between two sizes to return the location of the maximum value in that part of the array" << endl;
    cout << "Num_even/odd – count the number of even and odd numbers in the array" << endl;
    cout << "Search – search the array for a specified value and return the location if the value is found and -1 otherwise" << endl;
    cout << "Is_sorted – check to see of the array is sorted in ascending order." << endl;
    cout << endl;
    cout << "What do you want to do?: " << endl;
    cout << "Please input 'print', 'min', 'max', 'sum', 'even', 'odd', 'search', or 'stored'." << endl; 
    cout << "Please choose a function: ";
    cin >> ask;
    
    return 0;
}