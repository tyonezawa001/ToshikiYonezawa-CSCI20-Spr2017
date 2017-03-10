#include <iostream>
using namespace std;

class TemperatureConverter {
    private:
       double kelvin_;
    public:
       void SetTempFromKelvin(double kelvin);
       void SetTempFromCelsius(double celsius);
       void SetTempFromFahrenheit(double fahrenheit);
       double GetTempFromKelvin() const;
       double GetTempAsCelsius() const;
       double GetTempAsFahrenheit() const;
       void PrintTemperatures(double a, double b, double c);
       TemperatureConverter();
};

TemperatureConverter::TemperatureConverter() {
    kelvin_ = 0;
    return;
}

void TemperatureConverter::SetTempFromKelvin(double kelvin) {
    kelvin_ = kelvin;
    return;
}

void TemperatureConverter::SetTempFromCelsius(double celsius) {
    kelvin_ = celsius + 273.15;
    return;
}

void TemperatureConverter::SetTempFromFahrenheit(double fahrenheit) {
    kelvin_ = (5 * (fahrenheit - 32) / 9) + 273.15;
    return;
}

double TemperatureConverter::GetTempFromKelvin() const {
    return kelvin_;
}

double TemperatureConverter::GetTempAsCelsius() const {
    return kelvin_ - 273.15;
}

double TemperatureConverter::GetTempAsFahrenheit() const {
    return ((9 * (kelvin_ - 273.15)) / 5) + 32;
}

void TemperatureConverter::PrintTemperatures(double a, double b, double c) {
    cout << endl;
    cout << "Kelvin: " << a << endl;
    cout << "Celcius: " << b << endl;
    cout << "Fahrenheit: " << c << endl;
    cout << endl;
    return;
}

int main() {
    
    int ask = 0;
    double kelvin = 0;
    double celsius = 0;
    double fahrenheit = 0;
    double a = 0;
    double b = 0;
    double c = 0;
    
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
        
        a = kelvin;
        
        b = type1.GetTempAsCelsius();
        
        c = type1.GetTempAsFahrenheit();
        
        type1.PrintTemperatures(a, b, c);
    }
    
    if (ask == 2) {
        cout << endl;
        cout << "Toshiki Please input your data as celsius: ";
        cin >> celsius;
        
        TemperatureConverter type2;
        
        type2.SetTempFromCelsius(celsius);
        
        a = type2.GetTempFromKelvin();
        
        b = celsius;
        
        c = type2.GetTempAsFahrenheit();
        
        type2.PrintTemperatures(a, b, c);
    }

    if (ask == 3) {
        cout << endl;
        cout << "Toshiki: Please input your data as fahrenheit: ";
        cin >> fahrenheit;
        
        TemperatureConverter type3;
        
        type3.SetTempFromFahrenheit(fahrenheit);
        
        a = type3.GetTempFromKelvin();
        
        b = type3.GetTempAsCelsius();
        
        c = fahrenheit;
        
        type3.PrintTemperatures(a, b, c);
    }
    
    return 0;
    
}


