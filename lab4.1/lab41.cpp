/*
 *Updated by: Toshiki Yonezawa
 *Updated on: 04/16/17
 *First, this program ask user to set single array which contain 10 numbers.
 *Second, the program contains 7 function which works to the single array.
 *The 7 functions are...
 *----------
 *1 - printing the array
 *2 - showing minimum value in the array
 *3 - showing maximum value in the array
 *4 - showing the totall sum of the 10 numbers in the array
 *5 - counting the even and odd nubers in the array
 *6 - searching specific value in the array
 *7 - arranging the 10 numbers in ascending order
 *----------
 *In the program, the class construct contains the 8 functions.
 *First class function exits for setting the single array.
 *User must set 10 numbers for the array.
 */



#include <iostream>
#include <string>
using namespace std;

class ArrayTools {
    public:
        int SetArray(); // the class function exist for setting the aingle array by user input.
        int GetPrint(); // the class function is for printing 10 numbers which is contained by the array.
        int GetMin(int min, int place); // the class function is for showing minimum value.
        int GetMax(int min, int place); // the class function is for showing maximum value.
        int GetSum(int sum); // the class function is for showing the total sum of the 10 numbers.
        int GetEvenOdd(int j, int k); // the class function is for counting even and odd numbers which are contained by the array.
        int GetSearch(); // the class is for searching a specific value in the array.
        int GetSort(int j, int sort); // the classs is arranging for the 10 numbers in ascending order
        ArrayTools(); // default constructor
    private:
        int i; // the variable is for every loops
        int vals[10] = {0}; // initialization for the array
        int even[10] = {0}; // initialization for even array
        int odd[10] = {0}; // initialization for odd array
};

// default constructor for the program
ArrayTools::ArrayTools() {
    i = 0;
    even[10] = {0};
    odd[10] = {0};
    return;
}

// setting a single array by the array
int ArrayTools::SetArray() {
    for (i = 0; i < 10; i++) {
        cout << "vals[" << i << "] = ";
        cin >> vals[i];
    }
}

// printing the array
int ArrayTools::GetPrint() {
    for (i = 0; i < 10; i++) {
        cout << "vals[" << i << "] = " << vals[i] << endl; 
    }
}

// showing the minimum value in the array
int ArrayTools::GetMin(int min, int place) {
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

// showing the maximum value in the array
int ArrayTools::GetMax(int max, int place) {
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

// showing the total sum fo the 10 numbers in the array
int ArrayTools::GetSum(int sum) {
    sum = vals[0];
    for (i = 0; i < 10; i++) {
        sum += vals[i];
    }
    cout << endl;
    cout << "sum = " << sum << endl;
}

// counting the even and odd numbers in the array
int ArrayTools::GetEvenOdd(int j, int k) {
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
    cout << "The array contains " << j << " even numbers." << endl;
    cout << "Even numbers: ";
    for (i = 0; i < j; i++) {
        cout << even[i] << " ";
    }
    cout << endl;
    cout << "The array contains " << k << " odd numbers." << endl;
    cout << "Odd numbers: ";
    for (i = 0; i < k; i++) {
        cout << odd[i] << " ";
    }
    cout << endl;
}

// searcing the specific value which is in the array
int ArrayTools::GetSearch() {
    
}

// arrnaging the 10 numbers in ascending order
int ArrayTools::GetSort(int j, int sort) {
    for (i = 0; i < 10; i++) {
        for ( j = i + 1; j < 10; j++) {
            if (vals[i] > vals[j]) {
                sort = vals[i];
                vals[i] = vals[j];
                vals[j] = sort;
            }
        }
    }
    cout << endl;
    cout << "Program arranged the original array in ascending order." << endl;
    for (i = 0; i < 10; i++) {
        cout << "vals[" << i << "] = " << vals[i] << endl; 
    }
}

int main() {
    
    string ask; // variable for input function
    int min; // variable for minimum value
    int max; // variable for maximum value
    int place; // variable for numbers of specific value
    int sum; // variable for total value of specific one. 
    int j = 0; // initialized value of j variable
    int k = 0; // initialized value of k variable
    int sort;
    
    ArrayTools function; // object of class type
    
    // Introduction
    cout << endl;
    cout << "The program can store 10 numbers in this program." << endl;
    cout << "You can use 8 different functions in this program." << endl;
    cout << endl;
    cout << "print – print the array values on the screen in original order" << endl;
    cout << "min – search the array between two sizes to return the location of the minimum value in that part of the array" << endl;
    cout << "max – search the array between two sizes to return the location of the maximum value in that part of the array" << endl;
    cout << "even/odd – count the number of even and odd numbers in the array" << endl;
    cout << "search – search the array for a specified value and return the location if the value is found and -1 otherwise" << endl;
    cout << "sort – check to see of the array is sorted in ascending order" << endl;    
    cout << "exit - end the program" << endl;
    cout << endl;
    cout << "Now you must store 10 numbers by yourself." << endl;
    
    function.SetArray(); // setting a single array by user
    
    cout << endl;
    cout << "What do you want to do now?: " << endl;
    cout << "Please input 'print', 'min', 'max', 'sum', 'even/odd', 'search', 'sort', or 'exit'." << endl; 
    cout << "Please choose a function: ";
    cin >> ask;
    
    // while loop for asking 7 functions
    while (ask != "exit" || ask != "Exit") {
    
        // if statement for printing function
        if (ask == "print" || ask == "Print") {
            
            function.GetPrint();
            
            cout << endl;
            cout << "Please input 'print', 'min', 'max', 'sum', 'even/odd', 'search', 'sort', or 'exit'." << endl; 
            cout << "Please choose a function: ";
            cin >> ask;
        }
        
        // else if statement for finding a minimum value
        else if (ask == "min" || ask == "Min") {
            
            function.GetMin(min, place);
            
            cout << endl;
            cout << "Please input 'print', 'min', 'max', 'sum', 'even/odd', 'search', 'sort', or 'exit'." << endl; 
            cout << "Please choose a function: ";
            cin >> ask;
        }
        
        // else if statement for finding a maximum value
        else if (ask == "max" || ask == "Max") {
            
            function.GetMax(max, place);
            
            cout << endl;
            cout << "Please input 'print', 'min', 'max', 'sum', 'even/odd', 'search', 'sort', or 'exit'." << endl; 
            cout << "Please choose a function: ";
            cin >> ask;
        }
        
        // else if for showing a total sum value
        else if (ask == "sum" || ask == "Sum") {
            
            function.GetSum(sum);
            
            cout << endl;
            cout << "Please input 'print', 'min', 'max', 'sum', 'even/odd', 'search', 'sort', or 'exit'." << endl; 
            cout << "Please choose a function: ";
            cin >> ask;
        }
        
        // else if statment for counting even and odd numbers in the array
        else if (ask == "even/odd" || ask == "Even/Odd") {
            
            function.GetEvenOdd(j, k);
            
            cout << endl;
            cout << "Please input 'print', 'min', 'max', 'sum', 'even/odd', 'search', 'sort', or 'exit'." << endl; 
            cout << "Please choose a function: ";
            cin >> ask;
        }
        
        // else if statement for searcing a specific number in the array
        else if (ask == "search" || ask == "Search") {
            
            function.GetSearch();
            
            cout << endl;
            cout << "Please input 'print', 'min', 'max', 'sum', 'even/odd', 'search', 'sort', or 'exit'." << endl; 
            cout << "Please choose a function: ";
            cin >> ask;
        }
        
        // else if statement for arrnaging the 10 numbers in ascending order
        else if (ask == "sort" || ask == "Sort") {
            
            function.GetSort(j, sort);
            
            cout << endl;
            cout << "Please input 'print', 'min', 'max', 'sum', 'even/odd', 'search', 'sort', or 'exit'." << endl; 
            cout << "Please choose a function: ";
            cin >> ask;
        }
        
        // else if statement for exit
        else if (ask == "exit" || ask == "Exit") {
            cout << endl;
            cout << "I depply appriciate you for using the program." << endl;
            return 0;
        }
        
        // else statment for unrespected input
        else {
            cout << endl;
            cout << "Please do it all over again, try it again." << endl;
            return 0;
        }
    }
    
    return 0;
}