/*
 *Created by: Toshiki Yonezawa
 *Created on: 03/09/2017
 *This program works as temperature converter, and it contains three different types of converter.
 *1st one converts kelvin data to celsius and fahrenheit data.
 *2nd one converts celsius data to kelvin and fahrenheit data.
 *3rd one converts fahrenheit data to kelvin and celsius data. 
 */

#include <iostream>
using namespace std;

// TemperatureConverter class definition
class TemperatureConverter { // class name
    private:
       double kelvin_; // class variable
    public:
       void SetTempFromKelvin(double kelvin);
       void SetTempFromCelsius(double celsius);
       void SetTempFromFahrenheit(double fahrenheit);
       double GetTempFromKelvin() const;
       double GetTempAsCelsius() const;
       double GetTempAsFahrenheit() const;
       void PrintTemperatures(double dataKelvin, double dataCelsius, double dataFahrenheit);
       TemperatureConverter(); // default constructor
};

TemperatureConverter::TemperatureConverter() { // default constructor
    kelvin_ = 0; // default kelvin_
    return;
}

void TemperatureConverter::SetTempFromKelvin(double kelvin) { // SetTempFromKelvin is a TemperatureConverter member function.
    kelvin_ = kelvin;
    return;
}

void TemperatureConverter::SetTempFromCelsius(double celsius) { // SetTempFromCelsius is a TemperatureConverter member function.
    kelvin_ = celsius + 273.15;
    return;
}

void TemperatureConverter::SetTempFromFahrenheit(double fahrenheit) { // SetTempFromFahrenheit is a TemperatureConverter member function.
    kelvin_ = (5 * (fahrenheit - 32) / 9) + 273.15;
    return;
}

double TemperatureConverter::GetTempFromKelvin() const { // GetTempFromKelvin is a TemperatureConverter member function.
    return kelvin_;
}

double TemperatureConverter::GetTempAsCelsius() const { // GetTempAsCelsius is a TemperatureConverter member function.
    return kelvin_ - 273.15;
}

double TemperatureConverter::GetTempAsFahrenheit() const { // GetTempAsFahrenheit is a TemperatureConverter function.
    return ((9 * (kelvin_ - 273.15)) / 5) + 32;
}

void TemperatureConverter::PrintTemperatures(double dataKelvin, double dataCelsius, double dataFahrenheit) { // prints the value as kelvin, celsius and fahrenheit.
    cout << endl;
    cout << "Kelvin: " << dataKelvin << endl;
    cout << "celsius: " << dataCelsius << endl;
    cout << "Fahrenheit: " << dataFahrenheit << endl;
    cout << endl;
    return;
}

int main() {
    
    int ask = 0;
    double kelvin = 0;
    double celsius = 0;
    double fahrenheit = 0;
    double dataKelvin = 0;
    double dataCelsius = 0;
    double dataFahrenheit = 0;
    
    cout << endl;
    cout << "Toshiki: This program is working as temperature converter." << endl;
    cout << endl;
    cout << "Toshiki: I will convert your input data to use different units." << endl;
    cout << endl;
    cout << "What kinds of temperature data you have?" << endl;
    cout << "If you have kelvin data, please type 1." << endl;
    cout << "If you have celsius data, please type 2." << endl;
    cout << "If you have fahrenheit data, please type 3." << endl;
    cout << "Data Type: ";
    cin >> ask;
    
    if (ask == 1) {
        cout << endl;
        cout << "Toshiki: Please input your data as kelvin: ";
        cin >> kelvin;
        
        TemperatureConverter type1;
        
        type1.SetTempFromKelvin(kelvin);
        
        dataKelvin = kelvin;
        
        dataCelsius = type1.GetTempAsCelsius();
        
        dataFahrenheit = type1.GetTempAsFahrenheit();
        
        type1.PrintTemperatures(dataKelvin, dataCelsius, dataFahrenheit);
    }
    
    if (ask == 2) {
        cout << endl;
        cout << "Toshiki Please input your data as celsius: ";
        cin >> celsius;
        
        TemperatureConverter type2;
        
        type2.SetTempFromCelsius(celsius);
        
        dataKelvin = type2.GetTempFromKelvin();
        
        dataCelsius = celsius;
        
        dataFahrenheit = type2.GetTempAsFahrenheit();
        
        type2.PrintTemperatures(dataKelvin, dataCelsius, dataFahrenheit);
    }

    if (ask == 3) {
        cout << endl;
        cout << "Toshiki: Please input your data as fahrenheit: ";
        cin >> fahrenheit;
        
        TemperatureConverter type3;
        
        type3.SetTempFromFahrenheit(fahrenheit);
        
        dataKelvin = type3.GetTempFromKelvin();
        
        dataCelsius = type3.GetTempAsCelsius();
        
        dataFahrenheit = fahrenheit;
        
        type3.PrintTemperatures(dataKelvin, dataCelsius, dataFahrenheit);
    }
    
}


