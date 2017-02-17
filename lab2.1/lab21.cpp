
/*
 * Created by: Toshiki Yonezawa
 * Created on: 02/16/2017
 * This program works for calculation of a wind chill.
 * It requires to input temperature(F) and wind speed(mph) for the calculation.
 * Output provides wind speed, old wind chill indox, new wind chill indox and difference between the two data.
 */

#include <iostream>
#include <math.h>
using namespace std;

int main() {
    
    double temperature = 0;
    int windSpeed = 0;
    double oldStyleWindChill = 0;
    double newStyleWindChill = 0;
    double difference = 0;
    
    cout << endl;
    cout << "-------------------------------" << endl;
    cout << "| Let's Calculate Wind Chill! |" << endl;
    cout << "-------------------------------" << endl;
    cout << endl;
    cout << "Please enter a value of temperature(F) and wind speed(mph)" << endl;
    cout << endl;
    cout << "Temperature(F): ";
    cin >> temperature;
    cout << endl;
    cout << "Wind Speed(mph): ";
    cin >> windSpeed;
    cout << endl;
    
    oldStyleWindChill = 0.081 * (3.71 * sqrt(windSpeed) + 5.81 - 0.25 * windSpeed) * (temperature - 91.4) + 91.4;
    
    newStyleWindChill = 35.74 + 0.6215 * temperature - 35.75 * pow(windSpeed, 0.16) + 0.4275 * temperature * pow(windSpeed, 0.16);
    
    difference = oldStyleWindChill - newStyleWindChill;
    
    cout << "--------------------" << endl;
    cout << endl;
    cout << "Wind Speed: " << windSpeed << " mph" << endl;
    cout << endl;
    cout << "Old Wind Chill Index: " << oldStyleWindChill << " F" << endl;
    cout << endl;
    cout << "New Wind Chill Index: " << newStyleWindChill << " F" << endl;
    cout << endl;
    cout << "Difference between Two Data: " << difference << " F" << endl;
    cout << endl; 
    cout << "--------------------" << endl;
    
    return 0;
    
}

/*
 * --------------------
 
 * Wind Speed: 4 mph

 * Old Wind Chill Index: 30.5753 F

 * New Wind Chill Index: 25.767 F

 * Difference between Two Data: 4.8083 F

 * --------------------

 * Wind Speed: 10 mph

 * Old Wind Chill Index: 27.8601 F

 * New Wind Chill Index: 32.713 F

 * Difference between Two Data: -4.85286 F

 * --------------------

 * Wind Speed: 2 mph

 * Old Wind Chill Index: 98.7538 F

 * New Wind Chill Index: 105.711 F

 * Difference between Two Data: -6.95719 F

 * --------------------
 */