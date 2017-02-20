/*
 * Updated by: Toshiki Yonezawa
 * Updated on: 02/14/2017
 * This program can calculate a person's weekly wages based on worked time and hourly wage.
 * Finally, it can show name, worked hours, hourly wage, gross pay and net pay.
 * About Net pay, each people pay $130 for insurance, and then 17% tax subtract after paying the insurance.
 */
 
#include <iostream>
#include <string>
using namespace std;

struct Wage {
    
    string name;
    int workedTime;
    double hourlyWage;
    
};

int main() {
    
    Wage worker;
    worker.name; 
    worker.workedTime = 0;
    worker.hourlyWage = 0;
    
    double weeklyGrossPay = 0;
    double weeklyNetPay = 0;
    double insurance = 130; // each people pay $130 about insurance.
    double tax = 0.17; // each people pay 17% tax after paying insurance.
    
    // User need to input information about worker's name, worked time, hourly wage.
    // The program calculate weekly gross pay and weekly pay.
    cout << endl;
    cout << "Please write a worker's name like Jhon_Doe: ";
    cin >> worker.name;
    cout << endl;
    cout << "Please write working hours in positive numbers for " << worker.name << ": ";
    cin >> worker.workedTime;
    cout << endl;
    cout << "Please write hourly wage in dollars and cents like 8.5 for " << worker.name << ": ";
    cin >> worker.hourlyWage;
    cout << endl;
    
    // Calculation for weekly Gross and Net Pay
    weeklyGrossPay = worker.workedTime * worker.hourlyWage;
    weeklyNetPay = (weeklyGrossPay - insurance) * (1.00 - tax);
    
    // Output information about worker
    cout << worker.name << ": Working Hours: ";
    cout << worker.workedTime << " hours / Hourly Wage: $";
    cout << worker.hourlyWage << " / Weekly Gross Pay: $";
    cout << weeklyGrossPay << " / Weekly Net Pay: $";
    cout << weeklyNetPay << endl;
    
    return 0;
    
}

/*
 * Jhon_Doe: Working Hours: 6 hours / Hourly Wage: $8.5 / Weekly Gross Pay: $51 / Weekly Net Pay: $-65.57
 * Shalese_Ray: Working Hours: 40 hours / Hourly Wage: $15 / Weekly Gross Pay: $600 / Weekly Net Pay: $390.1 
 * Alivia_Hope: Working Hours: 20 hours / Hourly Wage: $25.15 / Weekly Gross Pay: $503 / Weekly Net Pay: $309.59
 * Jazzy_Kerber: Working Hours: 27 hours / Hourly Wage: $10 / Weekly Gross Pay: $270 / Weekly Net Pay: $116.2
 */