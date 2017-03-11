/*
 *Created by: Toshiki Yonezawa
 *Created on:03/10/2017
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
       void SetMoneyFromDollars(double dollars);
       void SetMoneyFromEuros(double euros);
       void SetMoneyFromBitcoins(double bitcoins);
       void SetMoneyFromYuans(double yuans);
       double GetMoneyFromDollars() const;
       double GetMoneyAsEuros() const;
       double GetMoneyAsBitcoins() const;
       double GetMoneyAsYuans() const;
       void PrintMoneys(double dataDollars, double dataEuros, double dataBitcoins, double dataYuans);
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

void MoneyConverter::PrintMoneys(double dataDollars, double dataEuros, double dataBitcoins, double dataYuans) { // the class member prints the value as dollars, euros, bitcoins, and yuans by using other functions available.
   cout << endl;
   cout << "Dollars: " << dataDollars << " dollars" << endl;
   cout << "Euros: " << dataEuros << " euros" << endl;
   cout << "Bitcoins: " << dataBitcoins << " bitcoins" << endl;
   cout << "Yuans: " << dataYuans << " yuans" << endl;
   cout << endl;
   return;
} 

int main() {
    int ask;
    double dollars;
    double euros;
    double bitcoins;
    double yuans;
    double dataDollars;
    double dataEuros;
    double dataBitcoins;
    double dataYuans;
    
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
        
        type1.SetMoneyFromDollars(dollars);
        
        dataDollars = dollars;
        
        dataEuros = type1.GetMoneyAsEuros();
        
        dataBitcoins = type1.GetMoneyAsBitcoins();
        
        dataYuans = type1.GetMoneyAsYuans();
        
        type1.PrintMoneys(dataDollars, dataEuros, dataBitcoins, dataYuans);
    }
    
    if (ask == 2) {
        cout << endl;
        cout << "Toshiki: Please input your data as Euros: ";
        cin >> euros;
        
        MoneyConverter type2;
        
        type2.SetMoneyFromEuros(euros);
        
        dataDollars = type2.GetMoneyFromDollars();
        
        dataEuros = euros;
        
        dataBitcoins = type2.GetMoneyAsBitcoins();
        
        dataYuans = type2.GetMoneyAsYuans();
        
        type2.PrintMoneys(dataDollars, dataEuros, dataBitcoins, dataYuans);
    }

    if (ask == 3) {
        cout << endl;
        cout << "Toshiki: Please input your data as Bitcoins: ";
        cin >> bitcoins;
        
        MoneyConverter type3;
        
        type3.SetMoneyFromBitcoins(bitcoins);
        
        dataDollars = type3.GetMoneyFromDollars();
        
        dataEuros = type3.GetMoneyAsEuros();
        
        dataBitcoins = bitcoins;
        
        dataYuans = type3.GetMoneyAsYuans();
        
        type3.PrintMoneys(dataDollars, dataEuros, dataBitcoins, dataYuans);
    }
    
    if (ask == 4) {
        cout << endl;
        cout << "Toshiki: Please input your data as Yuans: ";
        cin >> yuans;
        
        MoneyConverter type4;
        
        type4.SetMoneyFromYuans(yuans);
        
        dataDollars = type4.GetMoneyFromDollars();
        
        dataEuros = type4.GetMoneyAsEuros();
        
        dataBitcoins = type4.GetMoneyAsBitcoins();
        
        dataYuans = yuans;
        
        type4.PrintMoneys(dataDollars, dataEuros, dataBitcoins, dataYuans);
    }
}