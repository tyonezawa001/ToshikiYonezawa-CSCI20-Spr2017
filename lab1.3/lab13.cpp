// Created by: Toshiki Yonezawa
 // Created on: 02/02/2017

#include <iostream>
using namespace std;

int main() {
    int totalPopJan2017 = 324309805; // Total poplation at 2017 in the United States
    int rateBirthYear = 31536000 / 8; // Rate birht per year
    int rateDeathYear = 31536000 / 11; // Rate death per year  
    int rateImmigrationYear = 3153600 / 29; // Rate immigration per year
    int rateNetGainYear = 3153600 / 15; // Rate Net gain per year
    int yearYouWantKnow = 0;
    int totalPopUS = 0;
    
    cout << endl;
    cout << "Please enter year which you want to know: "; // Asking to user
    cin >> yearYouWantKnow;
    totalPopUS = totalPopJan2017 + ((yearYouWantKnow - 2017) * (rateBirthYear - rateDeathYear + rateImmigrationYear + rateNetGainYear));
    cout << endl;
    cout << "In the year " << yearYouWantKnow << "," << " the total population will be " << totalPopUS << " persons in the United States.";
    
    return 0;
    
}