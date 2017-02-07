// Created by: Toshiki Yonezawa
 // Created on: 02/07/2017
 
#include <iostream>
using namespace std;

int main() {
    int valueQuarters = 25;
    int valueDimes = 10;
    int valueNickels = 5;
    int valuePennies = 1;
    int amountQuarters = 0;
    int amountDimes = 0;
    int amountNickels = 0;
    int amountPennies = 0;
    int totalMoneyiInCents = 0;
    
    cout << endl;
    cout << "Please enter the amounts of Quarters: ";
    cin >> amountQuarters;
    cout << "Please enter the amounts of Dimes: ";
    cin >> amountDimes;
    cout << "Please enter the amounts of Nickels ";
    cin >> amountNickels;
    cout << "Please enter the amount of Pennies ";
    cin >> amountPennies;
    
    totalMoneyiInCents = (amountQuarters * valueQuarters) + (amountDimes * valueDimes) + (amountNickels * valueNickels) + (amountPennies * valuePennies);
    cout << endl;
    cout << "Now you entered " << totalMoneyiInCents << " cents.";
    
    return 0;
    
}