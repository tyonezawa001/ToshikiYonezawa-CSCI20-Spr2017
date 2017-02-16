/* Created by: Toshiki Yonezawa
 * Created on: 02/14/2017
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
    double weeklyGrossPay;
    double weeklyNetPay;
    
};

int main() {
    
    double insurance = 130; // each people pay $130 about insurance.
    double tax = 0.17; // each people pay 17% tax after paying insurance.
    
    // I input information about name, worked time, hourly wage.
    // The program calculate weekly gross pay and weekly pay
    Wage johnDoe;
    johnDoe.name = "John Doe";
    johnDoe.workedTime = 6;
    johnDoe.hourlyWage = 8.50;
    johnDoe.weeklyGrossPay = johnDoe.workedTime * johnDoe.hourlyWage;
    johnDoe.weeklyNetPay = (johnDoe.weeklyGrossPay - insurance) * (1.00 - tax);
    
    Wage shaleseRay;
    shaleseRay.name = "Shalese Ray";
    shaleseRay.workedTime = 40;
    shaleseRay.hourlyWage = 15.00;
    shaleseRay.weeklyGrossPay = shaleseRay.workedTime * shaleseRay.hourlyWage;
    shaleseRay.weeklyNetPay = (shaleseRay.weeklyGrossPay - insurance) * (1.00 - tax);
    
    Wage aliviaHope;
    aliviaHope.name = "Alivia Hope";
    aliviaHope.workedTime = 20;
    aliviaHope.hourlyWage = 25.15;
    aliviaHope.weeklyGrossPay = aliviaHope.workedTime * aliviaHope.hourlyWage;
    aliviaHope.weeklyNetPay = (aliviaHope.weeklyGrossPay - insurance) * (1.00 - tax);
    
    Wage jazzyKerber;
    jazzyKerber.name = "Jazzy Kerber";
    jazzyKerber.workedTime = 27;
    jazzyKerber.hourlyWage = 10.00;
    jazzyKerber.weeklyGrossPay = jazzyKerber.workedTime * jazzyKerber.hourlyWage;
    jazzyKerber.weeklyNetPay = (jazzyKerber.weeklyGrossPay - insurance) * (1.00 - tax);
    
    // Output information about each people
    cout << endl;
    cout << johnDoe.name << ": Working Hours: ";
    cout << johnDoe.workedTime << " hours / Hourly Wage: $";
    cout << johnDoe.hourlyWage << " / Weekly Gross Pay: $";
    cout << johnDoe.weeklyGrossPay << " / Weekly Net Pay: $";
    cout << johnDoe.weeklyNetPay << endl;
    
    cout << endl;
    cout << shaleseRay.name << ": Working Hours: ";
    cout << shaleseRay.workedTime << " hours / Hourly Wage: $";
    cout << shaleseRay.hourlyWage << " / Weekly Gross Pay: $";
    cout << shaleseRay.weeklyGrossPay << " / Weekly Net Pay: $";
    cout << shaleseRay.weeklyNetPay << endl;
    
    cout << endl;
    cout << aliviaHope.name << ": Working Hours: ";
    cout << aliviaHope.workedTime << " hours / Hourly Wage: $";
    cout << aliviaHope.hourlyWage << " / Weekly Gross Pay: $";
    cout << aliviaHope.weeklyGrossPay << " / Weekly Net Pay: $";
    cout << aliviaHope.weeklyNetPay << endl;
    
    cout << endl;
    cout << jazzyKerber.name << ": Working Hours: ";
    cout << jazzyKerber.workedTime << " hours / Hourly Wage: $";
    cout << jazzyKerber.hourlyWage << " / Weekly Gross Pay: $";
    cout << jazzyKerber.weeklyGrossPay << " / Weekly Net Pay: $";
    cout << jazzyKerber.weeklyNetPay << endl;
    
    return 0;
    
}

/* John Doe: Working Hours: 6 hours / Hourly Wage: $8.5 / Weekly Gross Pay: $51 / Weekly Net Pay: $-65.57

 * Shalese Ray: Working Hours: 40 hours / Hourly Wage: $15 / Weekly Gross Pay: $600 / Weekly Net Pay: $390.1

 * Alivia Hope: Working Hours: 20 hours / Hourly Wage: $25.15 / Weekly Gross Pay: $503 / Weekly Net Pay: $309.59

 * Jazzy Kerber: Working Hours: 27 hours / Hourly Wage: $10 / Weekly Gross Pay: $270 / Weekly Net Pay: $116.2
 */