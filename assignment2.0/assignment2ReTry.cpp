/*
 *Updated by: Toshiki Yonezawa
 *Updated on:03/20/2017
 *This program works as money converter, and it contains four different types of converter.
 *1st one converts dollars data to euros, bitcoins, and yuans data.
 *2nd one converts euros data to dollars, bitcoins, and yuans data.
 *3rd one converts bitcoins data to dollars, euros, and yuans data.
 *4th one converts yuans data to dollars, euros, and bitcoins data.
 *Each exchange rates are based on 03/10/2017's data.
 */

#include <iostream>
using namespace std;

// MoneyConverter class definition
class MoneyConverter { // class name
    private:
       double dollars_; // class variable
    public:
       void SetMoneyFromDollars(double dollars); // If input data is dollar data, the class variable replace dollars variable to dollars_.
       void SetMoneyFromEuros(double euros); // If input data is euro data, the class variable calculates euros variable to dollars_.
       void SetMoneyFromBitcoins(double bitcoins); // If input data is bitcoin data, the class variable calculates the bitcoint variable to dollars_
       void SetMoneyFromYuans(double yuans); // If inout datais yuan data, the class variable calculates the yuans variable to dollars_.
       double GetMoneyFromDollars() const; // The class variable replaces dollars_ to dollars data.
       double GetMoneyAsEuros() const; // The class variable calculates dollars_ to euros data.
       double GetMoneyAsBitcoins() const; // The class variable calculates dollars_ to bitcoins data.
       double GetMoneyAsYuans() const; // The class variable calculates dollars_ to yuans data.
       double PrintMoneys() const; // The class variable exists for output when input data is dollar data.
       MoneyConverter(); // default constructor
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

double MoneyConverter::PrintMoneys() const { // the class member prints the value as dollars, euros, bitcoins, and yuans by using other functions available.
   cout << endl;
   cout << "Dollars: " << GetMoneyFromDollars() << " dollars" << endl;
   cout << "Euros: " << GetMoneyAsEuros() << " euros" << endl;
   cout << "Bitcoins: " << GetMoneyAsBitcoins() << " bitcoins" << endl;
   cout << "Yuans: " << GetMoneyAsYuans() << " yuans" << endl;
   cout << endl;
}

int main() {
    int ask;
    double dollars;
    double euros;
    double bitcoins;
    double yuans;
    
    cout << endl;
    cout << "Toshiki: This program is working as money converter." << endl;
    cout << endl;
    cout << "Toshiki: I will convert your input data to use different units." << endl;
    cout << endl;
    cout << "What kinds of money data you have?" << endl;
    cout << "If you have dollars data, please type 1." << endl;
    cout << "If you have euros data, please type 2." << endl;
    cout << "If you have bitcoins data, please type 3." << endl;
    cout << "If you have yuans data, please type 4." << endl;
    cout << "Data Type: ";
    cin >> ask; // the variable is for asking users about what kinds of money data they have?
    
    // four different types of if function in there. each functions are worked by answer of input on ask variable.
    if (ask == 1) {
        cout << endl;
        cout << "Toshiki: Please input your data as Dollars: ";
        cin >> dollars;
        
        MoneyConverter type1;
        
        type1.SetMoneyFromDollars(dollars); // the class variable replace dollars variable to dollars_.
        
        dollars = type1.GetMoneyFromDollars();
        
        type1.PrintMoneys();
    }
    
    if (ask == 2) {
        cout << endl;
        cout << "Toshiki: Please input your data as Euros: ";
        cin >> euros;
        
        MoneyConverter type2;
        
        type2.SetMoneyFromEuros(euros); // the class variable replace euros variable to dollars_.
        
        euros = type2.GetMoneyAsEuros();
        
        type2.PrintMoneys();
    }

    if (ask == 3) {
        cout << endl;
        cout << "Toshiki: Please input your data as Bitcoins: ";
        cin >> bitcoins;
        
        MoneyConverter type3;
        
        type3.SetMoneyFromBitcoins(bitcoins); // the class variable replace bitcoins variable to dollars_.
        
        bitcoins = type3.GetMoneyAsBitcoins();
        
        type3.PrintMoneys();
    }
    
    if (ask == 4) {
        cout << endl;
        cout << "Toshiki: Please input your data as Yuans: ";
        cin >> yuans;
        
        MoneyConverter type4;
        
        type4.SetMoneyFromYuans(yuans); // the class variable replace yuans variable to dollars_.
        
        yuans = type4.GetMoneyAsYuans();
        
        type4.PrintMoneys();
    }
}

/*
 *Toshiki: Please input your data as Dollars: 1
 *Dollars: 1 dollars
 *Toshiki: Please input your data as Dollars: 1
 *Yuans: 6.92 yuans
 *Toshiki: Please input your data as Dollars: 1
 *Bitcoins: 0.000871 bitcoins
 *Toshiki: Please input your data as Dollars: 1
 *Euros: 0.937 euros
 *Toshiki: Please input your data as Dollars: 100
 *Euros: 93.7 euros
 *Toshiki: Please input your data as Dollars: 10000000
 *Bitcoins: 8710 bitcoins
 *Toshiki: Please input your data as Bitcoins: 1
 *Dollars: 1150 dollars
 *Toshiki: Please input your data as Euros: 6748.72
 *Dollars: 7221.13 dollars
 */