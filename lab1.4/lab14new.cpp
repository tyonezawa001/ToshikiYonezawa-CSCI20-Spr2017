#include <iostream>
using namespace std;

int main() {
    
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
    cin >> totalCashInCents;
    
    amountQuarters = totalCashInCents / 25;
    amountDimes = (totalCashInCents % 25) / 10;
    amountNickels = ((totalCashInCents % 25) % 10) / 5;
    amountPennies = ((totalCashInCents % 25) % 10) % 5;
    
    totalCashInDollars = totalCashInCents / 100.0;
    totalCashInDollarsAfterFee = totalCashInDollars * (1 - 0.108);
    
    cout << endl;
    cout << "You have entered " << totalCashInCents << " cents." << endl;
    cout << endl;
    cout << "That was " << amountQuarters << " quarters, " << amountDimes << " dimes, " << amountNickels << " nickels, " << amountPennies << " pennies." << endl;
    cout << endl;
    cout << "The total is $" << totalCashInDollars << ". After the fee you get $" << totalCashInDollarsAfterFee << " in cash." << endl;
    
    return 0;
    
}