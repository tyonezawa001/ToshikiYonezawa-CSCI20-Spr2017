// Created by: Toshiki Yonezawa
// Created on: 02/07/2017
// This programming is working as a change machine. 
// When people enter some coins, the programming converts the coins to bills and coins. 

#include <iostream>
using namespace std;

int main() {
    int valueQuarters = 25; // value of quarters in cents
    int valueDimes = 10; // value of dimes in cents
    int valueNickels = 5; // value of nickels in cents
    int valuePennies = 1; // value of pennies in cents
    double totalCashInCents = 0; // Convert total cash in cents
    int amountQuarters = 0; // count number of coins about quarters
    int amountDimes = 0; // count number of coins about dimes
    int amountNickels = 0; // count number of coins about nickels
    int amountPennies = 0; // count number of coins about pennies
    double totalCashInDollars = 0; // covert total cash in dolors
    double totalCashInDollarsAfterFee = 0; // convert total cash in dolors after subtract commission from total cash
    double commission = 0.108; // commission 
    
    cout << endl;
    cout << "Please enter the amount of chash you have in cents: ";
    cin >> totalCashInCents;
    
    amountQuarters = totalCashInCents / valueQuarters; // the equation gives amount of quarters
    amountDimes = (totalCashInCents - (amountQuarters * valueQuarters)) / valueDimes; // the equation gives amount of dimes
    amountNickels = (totalCashInCents - (amountQuarters * valueQuarters) - (amountDimes * valueDimes)) / valueNickels; // the equation gives amount of nickels
    amountPennies = (totalCashInCents - (amountQuarters * valueQuarters) - (amountDimes * valueDimes) - (amountNickels * valueNickels)); // the equation gives amount of pennies  
    
    totalCashInDollars = totalCashInCents / 100; // the equatin converts cents in dolloars
    totalCashInDollarsAfterFee = totalCashInDollars - (totalCashInDollars * commission); // the equation gives total cash for casutomor after subtract commission 
    
    cout << endl;
    cout << "You have entered " << totalCashInCents << " cents." << endl;
    cout << endl;
    cout << "That was " << amountQuarters << " quarters, " << amountDimes << " dimes, " << amountNickels << " nickels, " << amountPennies << " pennies." << endl;
    cout << endl;
    cout << "The total is $" << totalCashInDollars << ". After the fee you get $" << totalCashInDollarsAfterFee << " in cash." << endl;
    
    return 0;
    
}