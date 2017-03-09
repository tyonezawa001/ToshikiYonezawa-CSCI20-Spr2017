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

int main() {
    
    int ask = 0;
    double kelvin = 0;
    double celsius = 0;
    double fahrenheit = 0;
    
    
    cout << endl;
    cout << "Toshiki: This program is working as temperature converter." << endl;
    cout << endl;
    cout << "Toshiki: I will convert your input data to use different units." << endl;
    cout << endl;
    cout << "What kinds of temperature data you have?" << endl;
    cout << "If you have kelvin data, please type 1." << endl;
    cout << "If you have celsius data, please type 2." << endl;
    cout << "If you have fahrenheit data, please type 3." << endl;
    cout << "Data: ";
    cin >> ask;
    
    if (ask == 1) {
        cout << endl;
        cout << "Toshiki: Please input your data as kelvin: ";
        cin >> kelvin;
        
        TemperatureConverter type1;
        
        type1.SetTempFromKelvin(kelvin);
        
        cout << endl;
        cout << "Kelvin: " << kelvin << endl;
        cout << "Celcius: " << type1.GetTempAsCelsius() << endl;
        cout << "Fahrenheit: " << type1.GetTempAsFahrenheit() << endl;
        cout << endl;
        return 0;
    }
    
    if (ask == 2) {
        cout << endl;
        cout << "Toshiki Please input your data as celsius: ";
        cin >> celsius;
        
        TemperatureConverter type2;
        
        type2.SetTempFromCelsius(celsius);
        
        cout << endl;
        cout << "Kelvin: " << type2.GetTempFromKelvin() << endl;
        cout << "Celcius: " << celsius << endl;
        cout << "Fahrenheit: " << type2.GetTempAsFahrenheit() << endl;
        cout << endl;
        return 0;
    }

    if (ask == 3) {
        cout << endl;
        cout << "Toshiki Please input your data as fahrenheit: ";
        cin >> fahrenheit;
        
        TemperatureConverter type3;
        
        type3.SetTempFromFahrenheit(fahrenheit);
        
        cout << endl;
        cout << "Kelvin: " << type3.GetTempFromKelvin() << endl;
        cout << "Celcius: " << type3.GetTempAsCelsius() << endl;
        cout << "Fahrenheit: " << fahrenheit << endl;
        cout << endl;
        return 0;
    }
    
    return 0;
    
}


