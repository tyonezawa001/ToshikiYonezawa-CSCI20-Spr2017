#include <iostream>
#include <string>
using namespace std;

class ArrayTools {
    public:
        int SetArray();
        int GetPrint();
        int GetMin();
        int GetMax();
        int GetSum();
        int GetEvenOdd();
        int GetSearch();
    private:
        int i;
        int j = 0;
        int k = 0;
        int vals[10] = {0};
        int min;
        int max;
        int place;
        int sum;
        int even[10] = {0};
        int odd[10] = {0};
};

int ArrayTools::SetArray() {
    for (i = 0; i < 10; i++) {
        cout << "vals[" << i << "] = ";
        cin >> vals[i];
    }
}

int ArrayTools::GetPrint() {
    for (i = 0; i < 10; i++) {
        cout << "vals[" << i << "] = " << vals[i] << endl; 
    }
}

int ArrayTools::GetMin() {
    min = vals[0];
    for (i = 1; i < 10; i++) {
        if (vals[i] < min) {
            min = vals[i];
            place = i;
        }
    }
    cout << endl;
    cout << "min value is in vals[" << place << "] which is " << min << "." << endl;
}

int ArrayTools::GetMax() {
    max = vals[0];
    for (i = 1; i < 10; i++) {
        if (max < vals[i]) {
            max = vals[i];
            place = i;
        }
    }
    cout << endl;
    cout << "max value is in vals[" << place << "] which is " << max << "." << endl;
}

int ArrayTools::GetSum() {
    sum = vals[0];
    for (i = 0; i < 10; i++) {
        sum += vals[i];
    }
    cout << endl;
    cout << "sum = " << sum << endl;
}

int ArrayTools::GetEvenOdd() {
    for (i = 0; i < 10; i++) {
        if (vals[i]%2 == 0) {
            even[j] = vals[i];
            j++;
        }
        else {
            odd[k] = vals[i];
            k++;
        }
    }
    cout << endl;
    cout << "Even numbers: ";
    for (i = 0; i < j; i++) {
        cout << even[i] << " ";
    }
    cout << endl;
    cout << "Odd numbers: ";
    for (i = 0; i < k; i++) {
        cout << odd[i] << " ";
    }
    cout << endl;
}

int ArrayTools::GetSearch() {
    
}

int main() {
    
    string ask;
    
    ArrayTools function;
    
    cout << endl;
    cout << "The program can store 10 numbers in this program." << endl;
    cout << "You can use 8 different functions in this program." << endl;
    cout << endl;
    cout << "Print – print the array values on the screen in order" << endl;
    cout << "Find_min – search the array between two sizes to return the location of the minimum value in that part of the array" << endl;
    cout << "Find_min – search the array between two sizes to return the location of the maximum value in that part of the array" << endl;
    cout << "Num_even/odd – count the number of even and odd numbers in the array" << endl;
    cout << "Search – search the array for a specified value and return the location if the value is found and -1 otherwise" << endl;
    cout << "Is_sorted – check to see of the array is sorted in ascending order" << endl;    
    cout << "Exit - end the proram" << endl;
    cout << endl;
    cout << "Now you must store 10 numbers by yourself." << endl;
    
    function.SetArray();
    
    cout << endl;
    cout << "What do you want to do now?: " << endl;
    cout << "Please input 'print', 'min', 'max', 'sum', 'even/odd', 'search', 'sort', or 'exit'." << endl; 
    cout << "Please choose a function: ";
    cin >> ask;
    
    while (ask != "exit" || ask != "Exit") {
    
        if (ask == "print" || ask == "Print") {
            
            function.GetPrint();
            
            cout << endl;
            cout << "Please input 'print', 'min', 'max', 'sum', 'even/odd', 'search', 'sort', or 'exit'." << endl; 
            cout << "Please choose a function: ";
            cin >> ask;
        }
        else if (ask == "min" || ask == "Min") {
            
            function.GetMin();
            
            cout << endl;
            cout << "Please input 'print', 'min', 'max', 'sum', 'even/odd', 'search', 'sort', or 'exit'." << endl; 
            cout << "Please choose a function: ";
            cin >> ask;
        }
        else if (ask == "max" || ask == "Max") {
            
            function.GetMax();
            
            cout << endl;
            cout << "Please input 'print', 'min', 'max', 'sum', 'even/odd', 'search', 'sort', or 'exit'." << endl; 
            cout << "Please choose a function: ";
            cin >> ask;
        }
        else if (ask == "sum" || ask == "Sum") {
            
            function.GetSum();
            
            cout << endl;
            cout << "Please input 'print', 'min', 'max', 'sum', 'even/odd', 'search', 'sort', or 'exit'." << endl; 
            cout << "Please choose a function: ";
            cin >> ask;
        }
        else if (ask == "even/odd" || ask == "Even/Odd") {
            
            function.GetEvenOdd();
            
            cout << endl;
            cout << "Please input 'print', 'min', 'max', 'sum', 'even/odd', 'search', 'sort', or 'exit'." << endl; 
            cout << "Please choose a function: ";
            cin >> ask;
        }
        else if (ask == "search" || ask == "Search") {
            
            function.GetSearch();
            
            cout << endl;
            cout << "Please input 'print', 'min', 'max', 'sum', 'even/odd', 'search', 'sort', or 'exit'." << endl; 
            cout << "Please choose a function: ";
            cin >> ask;
        }
        else if (ask == "sort" || ask == "Sort") {
            cout << "Please input 'print', 'min', 'max', 'sum', 'even/odd', 'search', 'sort', or 'exit'." << endl; 
            cout << "Please choose a function: ";
            cin >> ask;
        }
        else if (ask == "exit" || ask == "Exit") {
            cout << endl;
            cout << "I depply appriciate you for using the program." << endl;
            return 0;
        }
    }
    
    return 0;
}