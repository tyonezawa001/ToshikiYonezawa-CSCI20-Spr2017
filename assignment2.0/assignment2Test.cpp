#include <iostream>
using namespace std;

class MoneyConverter {
    private:
       double dollars_;
    public:
       void SetMoneyFromDollars(double dollars);
       void SetMoneyFromEuros(double euros);
       void SetMoneyFromBitcoins(double bitcoins);
       void SetMoneyFromYuans(double yuans);
       double GetMoneyFromDollars() const;
       double GetMoneyAsEuros() const;
       double GetMoneyAsBitcoins() const;
       double GetMoneyAsYuans() const;
       double PrintMoney() const;
       MoneyConverter(); 
};

MoneyConverter::MoneyConverter() { // default constructor
    dollars_ = 0;
    return;
}

void MoneyConverter::SetMoneyFromDollars(double dollars) { // the class member accepts a dollars velue an store it. 
    dollars_ = dollars;
    return;
}

void MoneyConverter::SetMoneyFromEuros(double euros) { // the fuction converts euros to dollars.
    dollars_ = 1.07 * euros;
    return;
}

void MoneyConverter::SetMoneyFromBitcoins(double bitcoins) { // the function converts bitcoins to dollars.
    dollars_ = 1150 * bitcoins;
    return;
}

void MoneyConverter::SetMoneyFromYuans(double yuans) { // the function converts yuans to dollars.
    dollars_ = 0.145 * yuans;
    return;
}

double MoneyConverter::GetMoneyFromDollars() const { // the class member returns the dollars value.
    return dollars_;
}

double MoneyConverter::GetMoneyAsEuros() const { // the functions gives euros from dollars.
    return dollars_ * 0.937;
}

double MoneyConverter::GetMoneyAsBitcoins() const { // the function gives bitcoins from dollars.
    return dollars_ * 0.000871;
}

double MoneyConverter::GetMoneyAsYuans() const { // the function gives yuans from dollars.
    return dollars_ * 6.92;
}

double MoneyConverter::PrintMoney() const {
    cout << GetMoneyFromDollars() << endl;
    cout << GetMoneyAsEuros() << endl;
    cout << GetMoneyAsBitcoins() << endl;
    cout << GetMoneyAsYuans() << endl;
}

int main() {
    int ask;
    double dollars;
    
    cout << endl;
    cout << "Toshiki: This program is working as money converter." << endl;
    cout << endl;
    cout << "Toshiki: Please input your data as Dollars: ";
    cin >> dollars;
        
    MoneyConverter type1;
        
    type1.SetMoneyFromDollars(dollars);
    
    type1.PrintMoney();
}
