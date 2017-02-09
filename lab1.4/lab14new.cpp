// Created by:Toshiki Yonezawa
// Created on: 02/08/2017
// This programming is working as a change machine. 
// When people enter some coins, the programming converts the coins to bills and coins. 

#include <iostream>
using namespace std;

int main() {
    
    int valueQuarters = 25; // value of quarters in cents
    int valueDimes = 10; // value of dimes in cents
    int valueNickels = 5; // value of nickels in cents
    int valuePennies = 1; // value of pennies in cents
    int amountQuarters = 0;
    int amountDimes = 0;
    int amountNickels = 0;
    int amountPennies = 0;
    
    int totalCashInCents = 0;
    double totalCashInDollars = 0;
    double totalCashInDollarsAfterFee = 0;
    double commission = 0.108;
    
    cout << endl;
    cout << "Please enter the amount of cash in cents: ";
    cin >> totalCashInCents; // ask total numbers of cash in cents
    
    amountQuarters = totalCashInCents / valueQuarters; // it gives numbers of coin about Quarters
    amountDimes = (totalCashInCents % valueQuarters) / valueDimes; // it gives numbers of coin about Dimes
    amountNickels = ((totalCashInCents % valueQuarters) % valueDimes) / valueNickels; // it gives numbers of coin about Dimes
    amountPennies = (((totalCashInCents % valueQuarters) % valueDimes) % valueNickels) / valuePennies; // it gives numbers of coin about Pennies
    
    totalCashInDollars = totalCashInCents / 100.0; // it gives total cash values in Dollars, and also it can show deciaml numbers
    totalCashInDollarsAfterFee = totalCashInDollars * (1 - 0.108); // the equation gives total cash for casutomor after subtract commission
    
    cout << endl;
    cout << "You have entered " << totalCashInCents << " cents." << endl;
    cout << endl;
    cout << "That was " << amountQuarters << " quarters, " << amountDimes << " dimes, " << amountNickels << " nickels, " << amountPennies << " pennies." << endl;
    cout << endl;
    cout << "The total is $" << totalCashInDollars << ". After the fee you get $" << totalCashInDollarsAfterFee << " in cash." << endl;
    
    return 0;
    
}