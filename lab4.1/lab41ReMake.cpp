#include <iostream>
using namespace std;

class ArrayTools {
    public:
        void Print(int i, int myArray[], int SIZE); // the class function is for printing 10 numbers which is contained by the array.
        void FindMin(int i, int myArray[], int SIZE); // the class function is for showing minimum value.
        int GetMin() const;
        void FindMax(int i, int myArray[], int SIZE); // the class function is for showing maximum value.
        int GetMax() const;
        void FindSum(int i, int myArray[], int SIZE); // the class function is for showing the total sum of the 10 numbers.
        int GetSum() const;
        void FindEvenOdd(int i, int j, int k, int myArray[], int SIZE); // the class function is for counting even and odd numbers which are contained by the array.
        //int Search(); // the class is for searching a specific value in the array.
        //void Is_sorted(); // the classs is arranging for the 10 numbers in ascending order
    private:
        int min = 0;
        int minimun = 0;
        int max = 0;
        int maximum = 0;
        int sum = 0;
        int summation = 0;
        
};

// printing the array
void ArrayTools::Print(int i, int myArray[], int SIZE) {
    for (i = 0; i < 10; i++) {
        cout << "myArray[" << i << "] = " << myArray[i] << endl; 
    }
}

// showing the minimum value in the array
void ArrayTools::FindMin(int i, int myArray[], int SIZE) {
    min = myArray[0]; // the function sets the minimum value is in myArray[0].
    for (i = 1; i < 10; i++) {
        if (myArray[i] < min) {
            min = myArray[i];
        }
    }
    minimun = min;
}

int ArrayTools::GetMin() const {
    return minimun;
}

void ArrayTools::FindMax(int i, int myArray[], int SIZE) {
    max = myArray[0]; // the function sets the maximum value is in vals[0].
    for (i = 1; i < 10; i++) {
        if (max < myArray[i]) {
            max = myArray[i];
        }
    }
    maximum = max;
}

int ArrayTools::GetMax() const {
    return maximum;
}

// showing the total sum fo the 10 numbers in the array
void ArrayTools::FindSum(int i, int myArray[], int SIZE) {
    sum = myArray[0];
    for (i = 0; i < 10; i++) {
        sum += myArray[i];
    }
    summation = sum;
}

int ArrayTools::GetSum() const {
    return summation;
}

// counting the even and odd numbers in the array
void ArrayTools::FindEvenOdd(int i, int j, int k, int myArray[], int SIZE) {
    for (i = 0; i < 10; i++) {
        if (myArray[i]%2 == 0) {
            even[j] = myArray[i];
            j++;
        }
        else {
            odd[k] = myArray[i];
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


int main()
{
    const int SIZE = 10;
    int myArray[SIZE];
    int i = 0;
    int j = 0;
    int k = 0;
    
    for(int i = 0; i < SIZE; i++){
        cin >> myArray[i];
    }
    ArrayTools a;
    
    a.Print(SIZE, myArray, i);
    a.FindMin(SIZE, myArray, i);
    cout << "Min: " << a.GetMin() << endl;
    a.FindMax(SIZE, myArray, i);
    cout << "Max: " << a.GetMax() << endl;
    a.FindSum(SIZE, myArray, i);
    cout << "Sum = " << a.GetSum() << endl;
    a.
    // cout << "Search 10 "<<a.Search(10)<<endl;
    //cout<<"Sorted? "<<a.Is_sorted()<<endl;
    
    return 0;
}